/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055d7704; end: 1055d78c3; -[SCLensInfoCardMockedDataProvider _getLensInfoCardDataWithLensIds:] */

void FUN_1055d7704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1055d78c4;
  puStack_68 = &UNK_1108599d8;
  uStack_60 = param_1;
  _objc_retain();
  ppuVar2 = &puStack_80;
  puStack_58 = puVar1;
  _objc_retainBlock();
  uVar3 = param_3;
  func_0x00010bf04920();
  puVar4 = puVar1;
  if ((int)uVar3 == 0) {
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    uStack_98 = 0x1055d7a0c;
    uStack_90 = 0x1055d7a1c;
    uStack_88 = 0;
    uVar3 = param_3;
    func_0x00010bf43280(param_3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar2[2])(ppuVar2,uVar3,0);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2,0,0);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055d78c4; end: 1055d79fb;  */

void FUN_1055d78c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
  }
  if (param_3 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010bf43ca0();
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c078c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_isNilOrEmpty__1125fbd10,lVar3);
  return;
}



/* Entry: 1055d79fc; end: 1055d7a23;  */

void FUN_1055d79fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_isNilOrEmpty__1125fbd10,param_2);
  return;
}



/* Entry: 1055d7a24; end: 1055d7b0b;  */

void FUN_1055d7a24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0cf700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0cf700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cf840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1055d7b0c; end: 1055d7b13; -[SCLensInfoCardMockedDataProvider infoCardsDataObservable] */

undefined8 FUN_1055d7b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055d7b14; end: 1055d7b1f; -[SCLensInfoCardMockedDataProvider mockedInfoCardData] */

void FUN_1055d7b14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 1055d7b20; end: 1055d7b27; -[SCLensInfoCardMockedDataProvider setMockedInfoCardData:] */

void FUN_1055d7b20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1055d7b28; end: 1055d7b33; -[SCLensInfoCardMockedDataProvider mockedErrors] */

void FUN_1055d7b28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 1055d7b34; end: 1055d7b3b; -[SCLensInfoCardMockedDataProvider setMockedErrors:] */

void FUN_1055d7b34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1055d7b3c; end: 1055d7b77; -[SCLensInfoCardMockedDataProvider .cxx_destruct] */

void FUN_1055d7b3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055d7b78; end: 1055d7beb; -[SCLensInfoCardMockedDataProviderServices initWithInfoCardMockedProvider:] */

undefined1 * FUN_1055d7b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e93d0;
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



/* Entry: 1055d7bec; end: 1055d7bf3; -[SCLensInfoCardMockedDataProviderServices infoCardMockedProvider] */

undefined8 FUN_1055d7bec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055d7bf4; end: 1055d7bff; -[SCLensInfoCardMockedDataProviderServices .cxx_destruct] */

void FUN_1055d7bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055d7c00; end: 1055d7d13;  */

void FUN_1055d7c00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb22a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c196320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126bbd30;
  _objc_alloc(PTR_PTR_1126bbd30);
  func_0x00010c058f80();
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055d7d14; end: 1055d7d47;  */

void FUN_1055d7d14(void)

{
  _objc_alloc(PTR_PTR_1126bbd38);
  func_0x00010c016c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055d7d48; end: 1055d7d67; -[SCLensPromptDataServiceProvider promptLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055d7d48(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127266e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055d7d68; end: 1055d7d7b; -[SCLensPromptDataServiceProvider setPromptLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055d7d68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127266e4,param_3);
  return;
}



/* Entry: 1055d7d7c; end: 1055d7dcb; -[SCLensPromptDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055d7d7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127266e4);
  _objc_destroyWeak(param_1 + _DAT_1127266dc);
  _objc_destroyWeak(param_1 + _DAT_1127266e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127266e8);
  return;
}



/* Entry: 1055d7dcc; end: 1055d7ef3; -[SCLensPromptDataServiceProviderImpl initWithGRPCService:promptLoggingServices:userSession:] */

undefined1 *
FUN_1055d7dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e93d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055d7ef4; end: 1055d7f2b;  */

void FUN_1055d7ef4(void)

{
  _objc_alloc_init(PTR_PTR_1126ae568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055d7f2c; end: 1055d825b; -[SCLensPromptDataServiceProviderImpl getPromptWithId:encryptionKey:promptReceiverUserId:completion:] */

void FUN_1055d7f2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar7;
    _objc_release(uVar6);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar7;
    _objc_release(uVar6);
  }
  puVar7 = *(undefined **)(param_1 + 0x10);
  _objc_retain(puVar7);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = puVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x10))(param_6,puVar5,0);
      }
      goto LAB_1055d81e8;
    }
  }
  puVar5 = PTR_PTR_1126bbd48;
  func_0x00010c0cb140(PTR_PTR_1126bbd48);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c08fa60();
  lVar2 = param_3;
  FUN_1055d825c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010c11d420(puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c1e4da0();
  }
  else {
    puVar4 = puVar3;
    func_0x00010c27d300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4da0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    lVar2 = param_5;
    FUN_1055d825c(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c11d420(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c27d300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4e80();
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(puVar7);
  func_0x00010bfc92e0(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
LAB_1055d81e8:
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055d825c; end: 1055d82c7;  */

void FUN_1055d825c(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100576d08();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126afad0;
  _objc_alloc_init(PTR_PTR_1126afad0);
  func_0x00010c1a85a0();
  func_0x00010c1c0fe0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055d82c8; end: 1055d8aa3;  */

void FUN_1055d82c8(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_70;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar12 = *(long *)(param_1 + 0x40);
    pcVar11 = *(code **)(lVar12 + 0x10);
    lVar10 = 0;
  }
  else {
    if ((param_2 != (undefined *)0x0) && (param_3 == 0)) {
      puVar2 = param_2;
      func_0x00010c118ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (puVar3 == (undefined *)0x0) {
        lVar10 = *(long *)(param_1 + 0x40);
        if (lVar10 != 0) {
          (**(code **)(lVar10 + 0x10))(lVar10,0,0);
        }
      }
      else {
        puVar2 = puVar3;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        FUN_1055d8aa4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar5 = puVar3;
        func_0x00010c118480();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c094540();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar5;
        func_0x00010c118500();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar15;
        func_0x00010c1184a0();
        _objc_release(puVar15);
        puVar15 = puVar5;
        func_0x00010c118500();
        _objc_retainAutoreleasedReturnValue();
        if ((int)puVar6 == 1) {
          puVar13 = puVar15;
          func_0x00010c26c5a0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar13;
          func_0x00010bf93c00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          _objc_release(puVar15);
          puVar7 = *(undefined **)(param_1 + 0x28);
          FUN_1055d8b20(puVar7,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_70 = PTR_PTR_1126bbd50;
          func_0x00010c26cdc0();
          _objc_retainAutoreleasedReturnValue();
LAB_1055d8730:
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        else {
          puVar13 = puVar15;
          func_0x00010c1184a0();
          _objc_release(puVar15);
          puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
          if ((int)puVar13 == 2) {
            puVar15 = puVar5;
            func_0x00010c118500(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar15;
            func_0x00010bfe8820();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar13;
            func_0x00010c118600();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar16;
            func_0x00010bf1f160();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc3460();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(puVar16);
            _objc_release(puVar13);
            _objc_release(puVar15);
            puVar15 = puVar5;
            func_0x00010c118500(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar15;
            func_0x00010bfe8820();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar13;
            func_0x00010c118600();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar16;
            func_0x00010bf93ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
            _objc_release(puVar13);
            _objc_release(puVar15);
            uVar8 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010bcb4460(uVar8,puVar7,0,0);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar5;
            func_0x00010c118500();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar15;
            func_0x00010bfe8820();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar13;
            func_0x00010bfda8e0();
            _objc_release(puVar13);
            _objc_release(puVar15);
            uVar14 = 0;
            puVar15 = (undefined *)0x0;
            if ((int)puVar16 != 0) {
              puVar15 = puVar5;
              func_0x00010c118500();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar15;
              func_0x00010bfe8820();
              _objc_retainAutoreleasedReturnValue();
              puVar16 = puVar13;
              func_0x00010c1112a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar13);
              _objc_release(puVar15);
              puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
              puVar13 = puVar16;
              func_0x00010bf1f160(puVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc3460(puVar15);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar13);
              uVar14 = *(undefined8 *)(param_1 + 0x28);
              puVar13 = puVar16;
              func_0x00010bf93ac0(puVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bcb4460(uVar14,puVar13,0,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar13);
              _objc_release(puVar16);
            }
            puStack_70 = PTR_PTR_1126bbd50;
            func_0x00010bfe9860();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar14);
            _objc_release(puVar15);
            _objc_release(uVar8);
            goto LAB_1055d8730;
          }
          puStack_70 = (undefined *)0x0;
        }
        lVar12 = *(long *)(param_1 + 0x28);
        puVar15 = puVar5;
        func_0x00010bf93b80(puVar5);
        _objc_retainAutoreleasedReturnValue();
        FUN_1055d8b20(lVar12,puVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        lVar9 = *(long *)(lVar1 + 0x28);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c08fa60();
        if (lVar10 == 0) {
          lVar10 = *(long *)(param_1 + 0x40);
          if (lVar10 != 0) {
            (**(code **)(lVar10 + 0x10))(lVar10,0,0);
          }
        }
        else {
          puVar15 = puVar3;
          func_0x00010bfddae0();
          if ((int)puVar15 == 0) {
            puVar15 = puVar3;
            func_0x00010c0685a0();
            if ((int)puVar15 == 2) {
              lVar10 = lVar12;
              func_0x00010c08fa60();
              if (lVar10 != 0) {
                func_0x00010c0720c0(lVar9);
              }
              puVar15 = PTR_PTR_1126bbd58;
              _objc_alloc(PTR_PTR_1126bbd58);
              func_0x00010c01eda0();
            }
            else {
              puVar15 = (undefined *)0x0;
            }
          }
          else {
            func_0x00010befa120(*(undefined8 *)(lVar1 + 0x18));
            puVar6 = puVar3;
            func_0x00010c27d340();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar6;
            func_0x00010bfdab40();
            if ((int)puVar15 == 0) {
              puVar13 = (undefined *)0x0;
            }
            else {
              puVar15 = puVar6;
              func_0x00010c118860();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar15;
              FUN_1055d8aa4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
            }
            puVar15 = puVar6;
            func_0x00010bfd8340();
            if ((int)puVar15 == 0) {
              puVar16 = (undefined *)0x0;
            }
            else {
              puVar15 = puVar6;
              func_0x00010c08a600(puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar16 = puVar15;
              FUN_1055d8aa4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
            }
            puVar15 = puVar6;
            func_0x00010c06eda0();
            if (((((ulong)puVar15 & 1) == 0) &&
                (lVar10 = lVar12, func_0x00010c08fa60(), lVar10 != 0)) &&
               (puVar15 = puVar4, func_0x00010c0720c0(), ((ulong)puVar15 & 1) == 0)) {
              func_0x00010c0720c0(puVar16);
            }
            puVar15 = PTR_PTR_1126bbd58;
            _objc_alloc(PTR_PTR_1126bbd58);
            func_0x00010c06eda0(puVar6);
            func_0x00010c27d4a0(puVar6);
            func_0x00010c01eda0(puVar15);
            _objc_release(puVar16);
            _objc_release(puVar13);
            _objc_release(puVar6);
          }
          puVar6 = PTR_PTR_1126bbd60;
          _objc_alloc(PTR_PTR_1126bbd60);
          puVar13 = puVar3;
          func_0x00010c1185e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar13;
          FUN_1055d8aa4();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010bf5ab40(puVar3);
          func_0x00010c03b640((double)puVar7,puVar6);
          _objc_release(puVar16);
          _objc_release(puVar13);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
          lVar10 = *(long *)(param_1 + 0x40);
          if (lVar10 != 0) {
            (**(code **)(lVar10 + 0x10))(lVar10,puVar6,0);
          }
          _objc_release(puVar6);
          _objc_release(puVar15);
        }
        _objc_release(lVar9);
        _objc_release(lVar12);
        _objc_release(puVar2);
        _objc_release(puVar5);
        _objc_release(puStack_70);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      goto LAB_1055d8a58;
    }
    lVar12 = *(long *)(param_1 + 0x40);
    if (lVar12 == 0) goto LAB_1055d8a58;
    pcVar11 = *(code **)(lVar12 + 0x10);
    lVar10 = param_3;
  }
  (*pcVar11)(lVar12,0,lVar10);
LAB_1055d8a58:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055d8aa4; end: 1055d8b1f;  */

void FUN_1055d8aa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  _objc_release(param_1);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055d8b20; end: 1055d8b77;  */

void FUN_1055d8b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bcb4460(param_1,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055d8b78; end: 1055d8b7f; -[SCLensPromptDataServiceProviderImpl getCachedPromptWithId:] */

void FUN_1055d8b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1055d8b80; end: 1055d8d1f; -[SCLensPromptDataServiceProviderImpl createPromptWithId:lensId:lensSessionId:promptContent:lensSpecificData:turnByTurn:completion:] */

void FUN_1055d8b80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c1187a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1055d8d20;
  puStack_a8 = &UNK_11089d478;
  uStack_80 = param_10;
  uStack_a0 = uVar1;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_78 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_10);
  func_0x00010bdf2020(param_2,param_3,param_4,param_5,param_7,param_8,param_9,0,0,&puStack_c0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_10);
  return;
}



/* Entry: 1055d8d20; end: 1055d8e07;  */

void FUN_1055d8d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_2);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c0a7fe0(uVar1);
    _objc_release(uVar1);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_2,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1055d8e08; end: 1055d8f53; -[SCLensPromptDataServiceProviderImpl takeTurnForPromptWithId:lensId:lensSessionId:lensSpecificData:promptReceiverUserId:encryptionKey:isComplete:completion:] */

void FUN_1055d8e08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bbd68;
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03b660();
  _objc_release(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4b900(uVar3,param_2,param_3);
  uVar2 = param_8;
  if ((int)uVar3 == 0) {
    uVar2 = 0;
  }
  func_0x00010bdf2020(param_1,param_2,param_3,param_4,0,param_6,1,puVar1,uVar2,param_11);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055d8f54; end: 1055d8f5b; -[SCLensPromptDataServiceProviderImpl currentUserTookTurnObservable] */

void FUN_1055d8f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_target_112678178);
  return;
}



/* Entry: 1055d8f5c; end: 1055d8f63; -[SCLensPromptDataServiceProviderImpl currentUserTurnSavedObservable] */

void FUN_1055d8f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_target_112678178);
  return;
}



/* Entry: 1055d8f64; end: 1055d93c7; -[SCLensPromptDataServiceProviderImpl _createPromptWithId:lensId:promptContent:lensSpecificData:turnBased:turnResult:encryptionKey:completion:] */

void FUN_1055d8f64(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined *param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126bbd70;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  if (param_9 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  }
  else {
    _objc_retain(param_9);
    puVar2 = param_9;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  }
  PTR___NSConcreteStackBlock_11034bd00 = puVar3;
  if ((param_3 != 0) && (puVar2 != (undefined *)0x0)) {
    if (param_5 != 0) {
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1055d93c8;
      puStack_90 = &UNK_11089d4a8;
      puStack_a8 = puVar3;
      _objc_retain(puVar2);
      puStack_88 = puVar2;
      _objc_retain(puVar1);
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x1055d95b0;
      puStack_c0 = &UNK_110847310;
      puStack_d8 = puVar3;
      puStack_80 = puVar1;
      _objc_retain(puVar1);
      puStack_b8 = puVar1;
      _objc_retain(puVar2);
      puStack_b0 = puVar2;
      func_0x00010c0be4c0(param_5);
      _objc_release(puStack_b0);
      _objc_release(puStack_b8);
      _objc_release(puStack_80);
      _objc_release(puStack_88);
    }
    puVar3 = puVar2;
    func_0x0001055d9628(puVar2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195b00(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bbd80;
    func_0x00010c0cb140(PTR_PTR_1126bbd80);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    FUN_1055d825c(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4da0(puVar3);
    _objc_release(lVar4);
    func_0x00010c0b4ca0(param_4);
    func_0x00010c1bbd60(puVar3);
    func_0x00010c1e4ca0(puVar3);
    func_0x00010c1ae100(puVar3);
    if (param_8 != 0) {
      puVar5 = PTR_PTR_1126bbd88;
      func_0x00010c0cb140(PTR_PTR_1126bbd88);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_8;
      func_0x00010c122360(param_8);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      FUN_1055d825c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4e80(puVar5);
      _objc_release(lVar6);
      _objc_release(lVar4);
      func_0x00010c06eda0(param_8);
      func_0x00010c1b00e0(puVar5);
      func_0x00010c21aa40(puVar3);
      _objc_release(puVar5);
    }
    _objc_initWeak(auStack_e0,param_1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_e0);
    _objc_retain(param_3);
    _objc_retain(param_8);
    _objc_retain(param_10);
    _objc_retain(puVar2);
    func_0x00010c14abe0(uVar7);
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_release(param_10);
    _objc_release(param_8);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055d93c8; end: 1055d95af;  */

void FUN_1055d93c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bbd78;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bcb41bc(uVar2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c118600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195a20();
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar1;
  func_0x00010c118600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172f40();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bcb41bc(uVar2,param_5,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c1112a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195a20();
    _objc_release(puVar3);
    _objc_release(uVar2);
    lVar4 = param_4;
    func_0x00010beec820(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c1112a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172f40();
    _objc_release(puVar3);
    _objc_release(lVar4);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c118500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa7c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055d95b0; end: 1055d9733;  */

void FUN_1055d95b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001055d9628(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c118500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26c5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195b40();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055d9734; end: 1055d979f; -[SCLensPromptDataServiceProviderImpl .cxx_destruct] */

void FUN_1055d9734(long param_1)

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



/* Entry: 1055d97a0; end: 1055d9813; -[UNISCLensPromptLensPromptService initWithUnifiedGrpcService:] */

undefined1 * FUN_1055d97a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e93e0;
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



/* Entry: 1055d9814; end: 1055d98f7; -[UNISCLensPromptLensPromptService savePromptWithRequest:callOptionsBuilder:handler:] */

void FUN_1055d9814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbd90;
  _objc_opt_class(PTR_PTR_1126bbd90);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dee7d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055d98f8; end: 1055d99db; -[UNISCLensPromptLensPromptService saveResponseWithRequest:callOptionsBuilder:handler:] */

void FUN_1055d98f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbd98;
  _objc_opt_class(PTR_PTR_1126bbd98);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dee7f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055d99dc; end: 1055d9abf; -[UNISCLensPromptLensPromptService getPromptsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055d99dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbda0;
  _objc_opt_class(PTR_PTR_1126bbda0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dee818,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055d9ac0; end: 1055d9ba3; -[UNISCLensPromptLensPromptService getResponsesWithRequest:callOptionsBuilder:handler:] */

void FUN_1055d9ac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbda8;
  _objc_opt_class(PTR_PTR_1126bbda8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dee838,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055d9ba4; end: 1055d9c87; -[UNISCLensPromptLensPromptService deletePromptsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055d9ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbdb0;
  _objc_opt_class(PTR_PTR_1126bbdb0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dee858,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055d9c88; end: 1055d9d6b; -[UNISCLensPromptLensPromptService deleteResponsesWithRequest:callOptionsBuilder:handler:] */

void FUN_1055d9c88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbdb8;
  _objc_opt_class(PTR_PTR_1126bbdb8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dee878,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055d9d6c; end: 1055d9d77; -[UNISCLensPromptLensPromptService .cxx_destruct] */

void FUN_1055d9d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055d9d78; end: 1055d9df3;  */

undefined * FUN_1055d9d78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcdb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dee898,
                        &UNK_10ddb3ca0,&UNK_10ddb3cc8,3,FUN_1055d9df4,0);
    do {
      if (puRam00000001136bcdb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcdb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcdb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcdb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcdb8;
}



/* Entry: 1055d9df4; end: 1055d9dff;  */

bool FUN_1055d9df4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1055d9e00; end: 1055d9e67; +[SCLensPromptTextPrompt descriptor] */

void FUN_1055d9e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcdc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4cf30,
                        &PTR____CFConstantStringClassReference_110dee8b8,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e8590,1,0x10,0x1c);
    puRam00000001136bcdc0 = puVar1;
  }
  return;
}



/* Entry: 1055d9e68; end: 1055d9ecf; +[SCLensPromptTextResponse descriptor] */

void FUN_1055d9e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcdc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4cf80,
                        &PTR____CFConstantStringClassReference_110dee8d8,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e85b0,1,0x10,0x1c);
    puRam00000001136bcdc8 = puVar1;
  }
  return;
}



/* Entry: 1055d9ed0; end: 1055d9f37; +[SCLensPromptTurnBasedMetadata descriptor] */

void FUN_1055d9ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcdd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4cfd0,
                        &PTR____CFConstantStringClassReference_110dee8f8,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e8a10,4,0x20,0x1c);
    puRam00000001136bcdd0 = puVar1;
  }
  return;
}



/* Entry: 1055d9f38; end: 1055d9fb3; +[SCLensPromptLinkedResource descriptor] */

undefined * FUN_1055d9f38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcdd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d020,
                        &PTR____CFConstantStringClassReference_110dee918,&PTR_DAT_1130e8578,
                        &PTR_s_boltURL_1130e8630,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bcdd8 = puVar1;
  }
  return puRam00000001136bcdd8;
}



/* Entry: 1055d9fb4; end: 1055da01b; +[SCLensPromptImagePrompt descriptor] */

void FUN_1055d9fb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcde0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d070,
                        &PTR____CFConstantStringClassReference_110dee938,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e8670,2,0x18,0x1c);
    puRam00000001136bcde0 = puVar1;
  }
  return;
}



/* Entry: 1055da01c; end: 1055da083; +[SCLensPromptImageResponse descriptor] */

void FUN_1055da01c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcde8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d0c0,
                        &PTR____CFConstantStringClassReference_110dee958,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e86b0,2,0x18,0x1c);
    puRam00000001136bcde8 = puVar1;
  }
  return;
}



/* Entry: 1055da084; end: 1055da0eb; +[SCLensPromptPromptBody descriptor] */

void FUN_1055da084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcdf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d110,
                        &PTR____CFConstantStringClassReference_110dee978,&PTR_DAT_1130e8578,
                        &PTR_s_promptContent_1130e86f0,2,0x18,0x1c);
    puRam00000001136bcdf0 = puVar1;
  }
  return;
}



/* Entry: 1055da0ec; end: 1055da187; +[SCLensPromptPromptBody_PromptContent descriptor] */

undefined * FUN_1055da0ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcdf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d160,
                        &PTR____CFConstantStringClassReference_110dee998,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e8730,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a4d110);
    puRam00000001136bcdf8 = puVar1;
  }
  return puRam00000001136bcdf8;
}



/* Entry: 1055da188; end: 1055da1ef; +[SCLensPromptResponseBody descriptor] */

void FUN_1055da188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d778,
                        &PTR____CFConstantStringClassReference_110dee9b8,&PTR_DAT_1130e8578,
                        &PTR_s_responseContent_1130e8770,2,0x18,0x1c);
    puRam00000001136bce00 = puVar1;
  }
  return;
}



/* Entry: 1055da1f0; end: 1055da28b; +[SCLensPromptResponseBody_ResponseContent descriptor] */

undefined * FUN_1055da1f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d7a0,
                        &PTR____CFConstantStringClassReference_110dee9d8,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e87b0,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a4d778);
    puRam00000001136bce08 = puVar1;
  }
  return puRam00000001136bce08;
}



/* Entry: 1055da28c; end: 1055da2f3; +[SCLensPromptPrompt descriptor] */

void FUN_1055da28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d200,
                        &PTR____CFConstantStringClassReference_110dee9f8,&PTR_DAT_1130e8578,
                        &PTR_s_promptId_1130e8c50,7,0x38,0x1c);
    puRam00000001136bce10 = puVar1;
  }
  return;
}



/* Entry: 1055da2f4; end: 1055da35b; +[SCLensPromptResponse descriptor] */

void FUN_1055da2f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d250,
                        &PTR____CFConstantStringClassReference_110deea18,&PTR_DAT_1130e8578,
                        &PTR_s_responseId_1130e8b10,5,0x30,0x1c);
    puRam00000001136bce18 = puVar1;
  }
  return;
}



/* Entry: 1055da35c; end: 1055da3c3; +[SCLensPromptSavePromptRequest descriptor] */

void FUN_1055da35c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d2a0,
                        &PTR____CFConstantStringClassReference_110deea38,&PTR_DAT_1130e8578,
                        &PTR_s_promptId_1130e8bb0,5,0x28,0x1c);
    puRam00000001136bce20 = puVar1;
  }
  return;
}



/* Entry: 1055da3c4; end: 1055da42b; +[SCLensPromptSavePromptResponse descriptor] */

void FUN_1055da3c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d2f0,
                        &PTR____CFConstantStringClassReference_110deea58,&PTR_DAT_1130e8578,0,0,4,
                        0x1c);
    puRam00000001136bce28 = puVar1;
  }
  return;
}



/* Entry: 1055da42c; end: 1055da493; +[SCLensPromptSaveResponseRequest descriptor] */

void FUN_1055da42c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d340,
                        &PTR____CFConstantStringClassReference_110deea78,&PTR_DAT_1130e8578,
                        &PTR_s_responseId_1130e88f0,3,0x20,0x1c);
    puRam00000001136bce30 = puVar1;
  }
  return;
}



/* Entry: 1055da494; end: 1055da4fb; +[SCLensPromptSaveResponseResponse descriptor] */

void FUN_1055da494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d390,
                        &PTR____CFConstantStringClassReference_110deea98,&PTR_DAT_1130e8578,0,0,4,
                        0x1c);
    puRam00000001136bce38 = puVar1;
  }
  return;
}



/* Entry: 1055da4fc; end: 1055da563; +[SCLensPromptTurnBasedFilter descriptor] */

void FUN_1055da4fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d3e0,
                        &PTR____CFConstantStringClassReference_110deeab8,&PTR_DAT_1130e8578,
                        &PTR_s_promptId_1130e87f0,2,0x18,0x1c);
    puRam00000001136bce40 = puVar1;
  }
  return;
}



/* Entry: 1055da564; end: 1055da5ef; +[SCLensPromptFilter descriptor] */

undefined * FUN_1055da564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d430,
                        &PTR____CFConstantStringClassReference_110dcb678,&PTR_DAT_1130e8578,
                        &PTR_s_promptId_1130e8a90,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136bce48 = puVar1;
  }
  return puRam00000001136bce48;
}



/* Entry: 1055da5f0; end: 1055da657; +[SCLensPromptGetPromptsRequest descriptor] */

void FUN_1055da5f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d480,
                        &PTR____CFConstantStringClassReference_110deead8,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e8950,3,0x18,0x1c);
    puRam00000001136bce50 = puVar1;
  }
  return;
}



/* Entry: 1055da658; end: 1055da6bf; +[SCLensPromptGetPromptsResponse descriptor] */

void FUN_1055da658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d4d0,
                        &PTR____CFConstantStringClassReference_110deeaf8,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e8830,2,0x18,0x1c);
    puRam00000001136bce58 = puVar1;
  }
  return;
}



/* Entry: 1055da6c0; end: 1055da727; +[SCLensPromptGetResponsesRequest descriptor] */

void FUN_1055da6c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d520,
                        &PTR____CFConstantStringClassReference_110deeb18,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e89b0,3,0x18,0x1c);
    puRam00000001136bce60 = puVar1;
  }
  return;
}



/* Entry: 1055da728; end: 1055da78f; +[SCLensPromptGetResponsesResponse descriptor] */

void FUN_1055da728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d570,
                        &PTR____CFConstantStringClassReference_110deeb38,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e8870,2,0x18,0x1c);
    puRam00000001136bce68 = puVar1;
  }
  return;
}



/* Entry: 1055da790; end: 1055da7f7; +[SCLensPromptDeletePromptsRequest descriptor] */

void FUN_1055da790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d5c0,
                        &PTR____CFConstantStringClassReference_110deeb58,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e85d0,1,0x10,0x1c);
    puRam00000001136bce70 = puVar1;
  }
  return;
}



/* Entry: 1055da7f8; end: 1055da85f; +[SCLensPromptDeletePromptsResponse descriptor] */

void FUN_1055da7f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d610,
                        &PTR____CFConstantStringClassReference_110deeb78,&PTR_DAT_1130e8578,0,0,4,
                        0x1c);
    puRam00000001136bce78 = puVar1;
  }
  return;
}



/* Entry: 1055da860; end: 1055da8c7; +[SCLensPromptDeleteResponsesRequest descriptor] */

void FUN_1055da860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d660,
                        &PTR____CFConstantStringClassReference_110deeb98,&PTR_DAT_1130e8578,
                        &PTR_DAT_1130e85f0,1,0x10,0x1c);
    puRam00000001136bce80 = puVar1;
  }
  return;
}



/* Entry: 1055da8c8; end: 1055da92f; +[SCLensPromptDeleteResponsesResponse descriptor] */

void FUN_1055da8c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d6b0,
                        &PTR____CFConstantStringClassReference_110deebb8,&PTR_DAT_1130e8578,0,0,4,
                        0x1c);
    puRam00000001136bce88 = puVar1;
  }
  return;
}



/* Entry: 1055da930; end: 1055da997; +[SCLensPromptGetContextCardDataRequest descriptor] */

void FUN_1055da930(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d700,
                        &PTR____CFConstantStringClassReference_110deebd8,&PTR_DAT_1130e8578,
                        &PTR_s_promptId_1130e8610,1,0x10,0x1c);
    puRam00000001136bce90 = puVar1;
  }
  return;
}



/* Entry: 1055da998; end: 1055daa13; +[SCLensPromptGetContextCardDataResponse descriptor] */

undefined * FUN_1055da998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bce98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d750,
                        &PTR____CFConstantStringClassReference_110deebf8,&PTR_DAT_1130e8578,
                        &PTR_s_iconURL_1130e88b0,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bce98 = puVar1;
  }
  return puRam00000001136bce98;
}



/* Entry: 1055daa14; end: 1055dac0b; -[SCLensRemoteApiRPCHandlerImpl initWithUnifiedGRPCServices:dataProvider:] */

undefined1 *
FUN_1055daa14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126e93e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
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
    func_0x00010bfcfa00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126bbdc0;
    _objc_alloc();
    func_0x00010c058f80();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar6);
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055dac0c; end: 1055db29f; -[SCLensRemoteApiRPCHandlerImpl handleApiRequestWithApiSpecId:endpointId:lensId:isStudioDev:parameters:body:linkedResources:completion:] */

void FUN_1055dac0c(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long unaff_x27;
  ulong *puVar22;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  ulong uStack_238;
  ulong uStack_230;
  long lStack_228;
  ulong uStack_220;
  undefined *puStack_218;
  ulong uStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = param_7;
  uVar12 = param_8;
  lStack_198 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_178 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uStack_188 = param_10;
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126bbdc8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lStack_160 = param_3;
  func_0x00010c1686c0();
  uStack_180 = param_8;
  func_0x00010c172cc0(puVar1);
  uStack_168 = param_4;
  func_0x00010c196360(puVar1);
  uStack_170 = param_5;
  func_0x00010c1bbd60(puVar1);
  puStack_190 = puVar1;
  func_0x00010c1b4c60(puVar1);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_9);
  lVar18 = param_9;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    unaff_x27 = *plStack_120;
    do {
      lVar20 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_9);
        }
        uVar15 = *(undefined8 *)(lStack_128 + lVar20 * 8);
        puVar2 = PTR_PTR_1126bbdf8;
        func_0x00010c0cb140(PTR_PTR_1126bbdf8);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar15;
        func_0x00010c28f340(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar13;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21afe0(puVar2);
        _objc_release(uVar3);
        _objc_release(uVar13);
        uVar13 = uVar15;
        func_0x00010c086560(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c195ce0(puVar2);
        _objc_release(uVar13);
        func_0x00010c085300(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c195cc0(puVar2);
        _objc_release(uVar15);
        func_0x00010befa120(puVar1);
        _objc_release(puVar2);
        lVar20 = lVar20 + 1;
      } while (lVar18 != lVar20);
      lVar18 = param_9;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(param_9);
  _objc_release(param_9);
  puVar16 = puStack_190;
  func_0x00010c1bdf40(puStack_190);
  _objc_release(puVar1);
  uVar3 = uStack_178;
  uVar15 = uStack_178;
  func_0x00010c0d3c80();
  lVar20 = lStack_160;
  lVar18 = lStack_198;
  func_0x00010c0ec840(PTR_PTR_1126bbdd0);
  func_0x00010c1d8f40(puVar16);
  uVar14 = *(undefined8 *)(lVar18 + 8);
  func_0x00010be24c20();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uStack_188;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x1055dafb8;
  puStack_140 = &UNK_11089d508;
  uStack_138 = uStack_188;
  _objc_retain(uStack_188);
  puVar2 = puVar16;
  func_0x00010c0f8360(uVar14);
  _objc_release(lVar18);
  _objc_release(uStack_138);
  _objc_release(uVar13);
  _objc_release(uVar15);
  _objc_release(puVar16);
  _objc_release(param_9);
  _objc_release(uStack_180);
  _objc_release(uVar3);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  lVar4 = lVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_1f0 = puVar16;
  uStack_1e8 = uVar13;
  lStack_1e0 = param_9;
  uStack_1d8 = uVar3;
  lStack_1d0 = lVar20;
  uStack_1a8 = 0x1055dafb8;
  puVar22 = &uStack_250;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = puVar1;
  lStack_1f8 = unaff_x27;
  lStack_1c8 = lVar18;
  uStack_1c0 = uVar15;
  uStack_1b8 = uVar14;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(puVar2);
  lVar18 = *(long *)(lVar4 + 0x20);
  uVar19 = param_2;
  func_0x00010c13b780();
  uVar5 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0998c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar21 = uVar7;
  func_0x00010bf529e0();
  if (uVar21 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    uVar8 = uVar7;
    puStack_240 = (undefined1 *)&uStack_250;
    uStack_238 = uVar19;
    uStack_230 = uVar6;
    lStack_228 = lVar18;
    uStack_220 = uVar5;
    puStack_218 = puVar2;
    uStack_210 = param_2;
    func_0x00010bf529e0();
    uVar21 = uVar8 * 8;
    uStack_250 = uVar8;
    puStack_248 = (undefined1 *)&uStack_250;
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar21 + 0xf & 0xfffffffffffffff0);
    puVar1 = (undefined *)((long)&uStack_250 + -extraout_x8);
    _bzero(puVar1,uVar21);
    uVar19 = uVar7;
    func_0x00010bf529e0();
    if (uVar19 != 0) {
      uVar19 = 0;
      do {
        uVar6 = uVar7;
        func_0x00010c0dfd40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b1cf0;
        _objc_alloc();
        puVar16 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
        uVar5 = uVar6;
        func_0x00010bdc2b80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar16);
        uVar8 = uVar6;
        func_0x00010bf93ec0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010bf93e80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05a120();
        uVar13 = *(undefined8 *)(puVar1 + uVar19 * 8);
        *(undefined **)(puVar1 + uVar19 * 8) = puVar2;
        _objc_release(uVar13);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(puVar16);
        _objc_release(uVar5);
        _objc_release(uVar6);
        uVar19 = uVar19 + 1;
        uVar6 = uVar7;
        func_0x00010bf529e0();
      } while (uVar19 < uVar6);
    }
    uVar8 = uStack_250;
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = (ulong *)puStack_240;
    uVar19 = uStack_238;
    uVar6 = uStack_230;
    lVar18 = lStack_228;
    uVar5 = uStack_220;
    puVar2 = puStack_218;
    param_2 = uStack_210;
    while (puStack_240 = (undefined1 *)puVar22, uStack_238 = uVar19, uStack_230 = uVar6,
          lStack_228 = lVar18, uStack_220 = uVar5, puStack_218 = puVar2, uStack_210 = param_2,
          uVar8 != 0) {
      _objc_release(*(undefined8 *)((long)&uStack_258 + uVar21 + -extraout_x8));
      uVar21 = uVar21 - 8;
      puVar22 = (ulong *)puStack_240;
      uVar19 = uStack_238;
      uVar6 = uStack_230;
      lVar18 = lStack_228;
      uVar5 = uStack_220;
      puVar2 = puStack_218;
      param_2 = uStack_210;
      uVar8 = uVar21;
    }
  }
  _objc_release(uVar7);
  uVar8 = uVar5;
  uVar9 = uVar6;
  puVar11 = puVar16;
  puVar10 = puVar2;
  (**(code **)(lVar18 + 0x10))(lVar18,(long)(int)uVar19,uVar5,uVar6,puVar16,puVar2);
  _objc_release(puVar16);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  uVar21 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
    ___stack_chk_fail();
    *(undefined **)((long)puVar22 + -0x60) = puVar1;
    *(ulong **)((long)puVar22 + -0x58) = puVar22;
    *(ulong *)((long)puVar22 + -0x50) = uVar6;
    *(long *)((long)puVar22 + -0x48) = lVar18;
    *(ulong *)((long)puVar22 + -0x40) = uVar7;
    *(ulong *)((long)puVar22 + -0x38) = uVar5;
    *(undefined **)((long)puVar22 + -0x30) = puVar2;
    *(undefined **)((long)puVar22 + -0x28) = puVar16;
    *(ulong *)((long)puVar22 + -0x20) = param_2;
    *(long *)((long)puVar22 + -0x18) = (long)(int)uVar19;
    *(undefined1 ***)((long)puVar22 + -0x10) = &puStack_1b0;
    *(code **)((long)puVar22 + -8) = FUN_1055db2a0;
    _objc_retain(uVar12);
    _objc_retain(uVar17);
    _objc_retain(puVar11);
    _objc_retain(uVar9);
    _objc_retain(uVar8);
    func_0x00010c0d3c80(puVar10);
    func_0x00010c12d3e0();
    func_0x00010c0ec840(PTR_PTR_1126bbdd0);
    puVar1 = PTR_PTR_1126bbdd8;
    func_0x00010c0cb140(PTR_PTR_1126bbdd8);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar8;
    func_0x00010beec820(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    func_0x00010c21afe0(puVar1);
    _objc_release(uVar19);
    func_0x00010c1686a0(puVar1);
    _objc_release(uVar9);
    func_0x00010c172cc0(puVar1);
    _objc_release(uVar17);
    func_0x00010c1a7b40(puVar1);
    _objc_opt_class(uVar21);
    func_0x00010c0cc9a0();
    _objc_release(puVar11);
    func_0x00010c1c7660(puVar1);
    uVar17 = *(undefined8 *)(uVar21 + 8);
    func_0x00010be24c20(uVar21);
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)puVar22 + -0x88) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)((long)puVar22 + -0x80) = 0xc2000000;
    *(code **)((long)puVar22 + -0x78) = FUN_1055db484;
    *(undefined **)((long)puVar22 + -0x70) = &UNK_11089d538;
    *(undefined8 *)((long)puVar22 + -0x68) = uVar12;
    _objc_retain(uVar12);
    func_0x00010c0f8880(uVar17);
    _objc_release(uVar21);
    _objc_release(*(undefined8 *)((long)puVar22 + -0x68));
    _objc_release(uVar12);
    _objc_release(puVar1);
    _objc_release(puVar10);
    return;
  }
  return;
}



/* Entry: 1055db2a0; end: 1055db483; -[SCLensRemoteApiRPCHandlerImpl handleHttpRequestWithUri:remoteApiId:method:metadata:data:completion:] */

void FUN_1055db2a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d3c80(param_6);
  func_0x00010c12d3e0();
  func_0x00010c0ec840(PTR_PTR_1126bbdd0,param_2,param_6,param_4,*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR_PTR_1126bbdd8;
  func_0x00010c0cb140(PTR_PTR_1126bbdd8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21afe0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c1686a0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c172cc0(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1a7b40(puVar1,param_2,param_6);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c0cc9a0();
  _objc_release(param_5);
  func_0x00010c1c7660(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010be24c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055db484;
  puStack_70 = &UNK_11089d538;
  uStack_68 = param_8;
  _objc_retain(param_8);
  func_0x00010c0f8880(uVar3,param_2,puVar1,param_1,&puStack_88);
  _objc_release(param_1);
  _objc_release(uStack_68);
  _objc_release(param_8);
  _objc_release(puVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 1055db484; end: 1055db537;  */

void FUN_1055db484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf3ec40(param_2);
  uVar2 = param_2;
  func_0x00010bfe02c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1e9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar4 + 0x10))(lVar4,(long)(int)uVar1,uVar2,uVar3,0,param_3);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1055db538; end: 1055db847; -[SCLensRemoteApiRPCHandlerImpl performTokenExchangeWithSpecId:authCode:codeVerifier:completion:] */

void FUN_1055db538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bbde0;
  _objc_retain(param_4);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1686a0();
  func_0x00010c16ca00(puVar1,param_2,param_4);
  _objc_release(param_4);
  lVar2 = param_5;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c17dcc0(puVar1,param_2,param_5);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1;
  func_0x00010be24c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1055db69c;
  puStack_70 = &UNK_11089d568;
  uStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f9080(uVar3,param_2,puVar1,lVar2,&puStack_88);
  _objc_release(lVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1055db848; end: 1055db977; -[SCLensRemoteApiRPCHandlerImpl refreshTokenWithSpecId:refreshToken:completion:] */

void FUN_1055db848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bbde8;
  _objc_retain(param_4);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1686a0();
  func_0x00010c1e9600(puVar1,param_2,param_4);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1;
  func_0x00010be24c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1055db978;
  puStack_60 = &UNK_11089d598;
  uStack_58 = param_3;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1256c0(uVar3,param_2,puVar1,lVar2,&puStack_78);
  _objc_release(lVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1055db978; end: 1055dbb23;  */

void FUN_1055db978(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x00010c13ba40();
    if ((int)uVar1 == 1) {
      uVar6 = param_2;
      func_0x00010c272fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x30);
      uVar1 = uVar6;
      func_0x00010beecce0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010c2732e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010bf9cb60(uVar6);
      uVar4 = uVar6;
      func_0x00010c125640(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c150520(uVar6);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar7 + 0x10))(lVar7,uVar1,uVar2,uVar3,uVar4,uVar5,0);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_opt_class(uVar6);
      uVar1 = param_2;
      func_0x00010bf987e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf98b80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0,0,0,uVar6);
    }
    _objc_release(uVar6);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0,0,0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055dbb24; end: 1055dbd23; -[SCLensRemoteApiRPCHandlerImpl getOAuth2InfoWithSpecId:completion:] */

void FUN_1055dbb24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bbdf0;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1686a0();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1;
  func_0x00010be24c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1055dbc20;
  puStack_58 = &UNK_11089d5c8;
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010bfc82a0(uVar3,param_2,puVar1,lVar2,&puStack_70);
  _objc_release(lVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1055dbd24; end: 1055dbe7f; -[SCLensRemoteApiRPCHandlerImpl _grpcCallOptions] */

undefined * FUN_1055dbd24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined *puVar7;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000106b9c3f0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar7 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar1,param_2,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release();
  }
  func_0x000106b9c3fc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110deec78;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar1,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  lVar5 = 90000;
  func_0x00010c1eeba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf32ee0(lVar5,param_2,&PTR____CFConstantStringClassReference_110deec98);
  if (lVar4 == 0) {
    puVar7 = (undefined *)0x1;
  }
  else {
    lVar4 = lVar5;
    func_0x00010bf32ee0(lVar5,param_2,&PTR____CFConstantStringClassReference_110dada18);
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x2;
    }
    else {
      lVar4 = lVar5;
      func_0x00010bf32ee0(lVar5,param_2,&PTR____CFConstantStringClassReference_110deecb8);
      if (lVar4 == 0) {
        puVar7 = (undefined *)0x3;
      }
      else {
        lVar4 = lVar5;
        func_0x00010bf32ee0(lVar5,param_2,&PTR____CFConstantStringClassReference_110deecd8);
        uVar6 = 4;
        if (lVar4 != 0) {
          uVar6 = 0;
        }
        puVar7 = (undefined *)(ulong)uVar6;
      }
    }
  }
  _objc_release(lVar5);
  return puVar7;
}



/* Entry: 1055dbe80; end: 1055dbf1f; +[SCLensRemoteApiRPCHandlerImpl methodFromString:] */

undefined4 FUN_1055dbe80(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf32ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110deec98);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf32ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110dada18);
    if (lVar1 == 0) {
      uVar2 = 2;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf32ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110deecb8);
      if (lVar1 == 0) {
        uVar2 = 3;
      }
      else {
        lVar1 = param_3;
        func_0x00010bf32ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110deecd8);
        uVar2 = 4;
        if (lVar1 != 0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1055dbf20; end: 1055dc077; +[SCLensRemoteApiRPCHandlerImpl errorFromTokenResponseError:isRefreshSequence:] */

undefined *
FUN_1055dbf20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  iVar6 = 0x10f2d2f8;
  uVar2 = param_3;
  func_0x00010bf987e0(param_3);
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f2d318;
  uVar3 = param_3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f2d338;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_68 = uVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_68,&ppuStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2d2f8,
                      (long)(int)uVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined *)0x0;
  if (iVar6 - 1U < 3) {
    puVar1 = (undefined *)((ulong)(iVar6 - 1U) + 1);
  }
  return puVar1;
}



/* Entry: 1055dc078; end: 1055dc087; +[SCLensRemoteApiRPCHandlerImpl grantTypeFromResponse:] */

long FUN_1055dc078(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 1055dc088; end: 1055dc197; +[SCLensRemoteApiRPCHandlerImpl optionallyAddAuthCodeToParams:remoteApiId:dataProvider:] */

void FUN_1055dc088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bfaaec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_5);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c2732e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010beecce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110db27b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,puVar4,&PTR____CFConstantStringClassReference_110deec58);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055dc198; end: 1055dc1d3; -[SCLensRemoteApiRPCHandlerImpl .cxx_destruct] */

void FUN_1055dc198(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055dc1d4; end: 1055dc2e3; -[SCLensRemoteApiServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dc1d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_112726718;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_11272671c;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c129ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1055dc2e4;
  puStack_48 = &UNK_11089d5f8;
  lStack_40 = lVar1;
  lStack_38 = lVar2;
  _objc_retain(lVar2);
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bbe00;
  _objc_alloc(PTR_PTR_1126bbe00);
  func_0x00010c025680();
  _objc_release(puVar3);
  _objc_release(lStack_38);
  _objc_release(lStack_40);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055dc2e4; end: 1055dc313;  */

void FUN_1055dc2e4(void)

{
  _objc_alloc(PTR_PTR_1126bbdd0);
  func_0x00010c058ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055dc314; end: 1055dc357; -[SCLensRemoteApiServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dc314(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726720);
  _objc_destroyWeak(param_1 + _DAT_11272671c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726718);
  return;
}



/* Entry: 1055dc358; end: 1055dc3cb; -[UNISCLensRemoteApiService initWithUnifiedGrpcService:] */

undefined1 * FUN_1055dc358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e93f0;
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



/* Entry: 1055dc3cc; end: 1055dc4af; -[UNISCLensRemoteApiService performHttpCallWithRequest:callOptionsBuilder:handler:] */

void FUN_1055dc3cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbe08;
  _objc_opt_class(PTR_PTR_1126bbe08);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deecf8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055dc4b0; end: 1055dc593; -[UNISCLensRemoteApiService getOAuth2InfoWithRequest:callOptionsBuilder:handler:] */

void FUN_1055dc4b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbe10;
  _objc_opt_class(PTR_PTR_1126bbe10);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deed18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055dc594; end: 1055dc677; -[UNISCLensRemoteApiService performTokenExchangeWithRequest:callOptionsBuilder:handler:] */

void FUN_1055dc594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbe18;
  _objc_opt_class(PTR_PTR_1126bbe18);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deed38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055dc678; end: 1055dc75b; -[UNISCLensRemoteApiService refreshTokenWithRequest:callOptionsBuilder:handler:] */

void FUN_1055dc678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbe20;
  _objc_opt_class(PTR_PTR_1126bbe20);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deed58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055dc75c; end: 1055dc83f; -[UNISCLensRemoteApiService performApiCallWithRequest:callOptionsBuilder:handler:] */

void FUN_1055dc75c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bbe28;
  _objc_opt_class(PTR_PTR_1126bbe28);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deed78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055dc840; end: 1055dc84b; -[UNISCLensRemoteApiService .cxx_destruct] */

void FUN_1055dc840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055dc84c; end: 1055dc8db;  */

undefined * FUN_1055dc84c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcea0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110deed98,
                        &UNK_10ddb3cd4,&UNK_10ddb3d34,6,FUN_1055dc8dc,0,&UNK_10ddb3d4c);
    do {
      if (puRam00000001136bcea0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcea0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcea0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcea0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcea0;
}



/* Entry: 1055dc8dc; end: 1055dc8e7;  */

bool FUN_1055dc8dc(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1055dc8e8; end: 1055dc963;  */

undefined * FUN_1055dc8e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcea8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110deedb8,
                        &UNK_10ddb3d6c,&UNK_10ddb3df8,0xc,FUN_1055dc964,0);
    do {
      if (puRam00000001136bcea8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcea8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcea8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcea8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcea8;
}


