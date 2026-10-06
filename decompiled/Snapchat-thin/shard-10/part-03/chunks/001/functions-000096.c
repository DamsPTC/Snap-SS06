/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ec58c0; end: 107ec58ef; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE detailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec58c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127710e0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ec58f0; end: 107ec591f; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE miniThumbnailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec58f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127710e4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ec5920; end: 107ec592f; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE numberOfSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec5920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127710dc),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107ec5930; end: 107ec595f; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE dataVaultEncryption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec5930(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127710e8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ec5960; end: 107ec59b7; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE isPrivateWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ec5960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + _DAT_1127710d4),param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07b240();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 107ec59b8; end: 107ec5efb; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE _updateEntriesFromNetworker:dataObjectContext:queue:snapsUploadInfo:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec59b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126d8280;
  func_0x00010c2b1ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x0) {
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar10;
    func_0x00010bf993c0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,puVar11);
    _objc_release(puVar11);
    _objc_release(ppuVar10);
  }
  else {
    puVar11 = puVar2;
    func_0x00010bfbdda0(puVar2);
    FUN_107ee8bec((long)(int)puVar11);
    func_0x00010c196ba0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf977c0(puVar2);
    func_0x00010c196b20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf9e140(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199560(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126af4d0;
    func_0x00010bfa74e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bebcd00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bebcd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be38f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b20(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010bf51e00();
    func_0x00010c2046e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c15e520(puVar2);
    func_0x00010c1fce80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c266aa0(puVar2);
    func_0x00010c1b3980(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2063a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (*(long *)(param_1 + _DAT_1127710d8) != 0) {
      func_0x00010c26f320();
      func_0x00010c1b7800(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar6 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d8288;
    func_0x00010c2b1dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1966e0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126bbf20;
    func_0x00010bdc1920(PTR_PTR_1126bbf20);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_7);
    ppuVar12 = &PTR____CFConstantStringClassReference_110ec2858;
    func_0x00010c25f400(param_3);
    _objc_release(puVar9);
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_release(param_8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar11);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(ppuVar12);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar12);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x7d0) {
    puVar11 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),puVar2);
  }
  else {
    lVar13 = *(long *)(param_3 + 0x28);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar7 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar6,puVar11);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar13 + 0x10))(lVar13,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ec5efc; end: 107ec606b;  */

void FUN_107ec5efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x7d0) {
    puVar5 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar4 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ec606c; end: 107ec60b3;  */

void FUN_107ec606c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99400(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ec60b4; end: 107ec6207; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE _snapIdsForSnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec60b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar4 = *(undefined8 *)(lVar6 * 8);
      func_0x00010c241220(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + _DAT_1127710f4,0);
  _objc_storeStrong(param_3 + _DAT_1127710f0,0);
  _objc_storeStrong(param_3 + _DAT_1127710e4,0);
  _objc_storeStrong(param_3 + _DAT_1127710e0,0);
  _objc_storeStrong(param_3 + _DAT_1127710dc,0);
  _objc_storeStrong(param_3 + _DAT_1127710e8,0);
  _objc_storeStrong(param_3 + _DAT_1127710d8,0);
  _objc_storeStrong(param_3 + _DAT_1127710ec,0);
  _objc_storeStrong(param_3 + _DAT_1127710d4,0);
  _objc_storeStrong(param_3 + _DAT_1127710d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_1127710cc,0);
  return;
}



/* Entry: 107ec6208; end: 107ec62d7; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec6208(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127710f4,0);
  _objc_storeStrong(param_1 + _DAT_1127710f0,0);
  _objc_storeStrong(param_1 + _DAT_1127710e4,0);
  _objc_storeStrong(param_1 + _DAT_1127710e0,0);
  _objc_storeStrong(param_1 + _DAT_1127710dc,0);
  _objc_storeStrong(param_1 + _DAT_1127710e8,0);
  _objc_storeStrong(param_1 + _DAT_1127710d8,0);
  _objc_storeStrong(param_1 + _DAT_1127710ec,0);
  _objc_storeStrong(param_1 + _DAT_1127710d4,0);
  _objc_storeStrong(param_1 + _DAT_1127710d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127710cc,0);
  return;
}



/* Entry: 107ec62d8; end: 107ec6553;  */

void FUN_107ec62d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c13a8c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf14ac0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06cde0(uVar1);
  func_0x00010c25d8c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c080740(uVar1);
  func_0x00010c25d8c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar6 = uVar5;
  func_0x00010c0c8b00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  FUN_107ec6554(param_1,param_2,param_3,param_4,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ec6554; end: 107ec673b;  */

void FUN_107ec6554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba558;
  _objc_alloc(PTR_PTR_1126ba558);
  func_0x00010c006480();
  _objc_release(param_5);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  _objc_release(param_1);
  func_0x00010bafc234();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126d8300;
  _objc_alloc(PTR_PTR_1126d8300);
  func_0x00010bffcf40();
  func_0x00010c132ce0(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ec673c; end: 107ec6e4f;  */

undefined *
FUN_107ec673c(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = param_2;
  uVar9 = param_7;
  FUN_107ec6e50(param_2,param_7);
  if ((int)puVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    puVar1 = PTR_PTR_1126af4d0;
    puVar6 = param_2;
    if (lVar2 != 2) {
LAB_107ec6a58:
      puVar3 = param_2;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar1 = PTR_PTR_1126af4d0;
      if (puVar3 == (undefined *)0x0) {
        puVar1 = param_2;
        uVar9 = param_4;
        FUN_107ee8f54(param_2,param_4,param_5);
        if (((ulong)puVar1 & 1) == 0) {
          uVar8 = param_6;
          func_0x00010bfcdfa0(param_6);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_6;
          func_0x00010bf53fa0(param_6);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_4;
          FUN_107ec62d8(param_2,param_4,param_8,&PTR____CFConstantStringClassReference_110ec2ad8,
                        uVar8,uVar5);
          _objc_release(uVar5);
          _objc_release(uVar8);
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0da520(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar7 = param_2;
          func_0x00010c0c5180(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0da520(puVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = 6;
          func_0x00010baa2848();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1ac0(param_6);
          _objc_release(uVar8);
          _objc_release(puVar3);
          _objc_release(puVar7);
          _objc_release(puVar1);
          goto LAB_107ec6cac;
        }
      }
      else {
        func_0x00010bf8b0c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar6);
        if (puVar1 == (undefined *)0x0) {
          puVar1 = param_2;
          uVar9 = param_4;
          FUN_107ee8f54(param_2,param_4,param_5);
          if (((ulong)puVar1 & 1) != 0) {
            puVar6 = PTR_PTR_1126bf910;
            func_0x00010c2aebc0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar6;
            func_0x00010c192ce0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar3;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            _objc_release(puVar6);
            goto LAB_107ec6cbc;
          }
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar3 = param_2;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar7 = param_2;
          func_0x00010c0c5180(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0da520(puVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = 2;
          func_0x00010baa2848();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1ac0(param_6);
          _objc_release(uVar8);
          _objc_release(puVar6);
          _objc_release(puVar7);
          _objc_release(puVar1);
          _objc_release(puVar3);
          goto LAB_107ec6cb4;
        }
      }
      _objc_retain(param_2);
      puVar1 = param_2;
      goto LAB_107ec6cbc;
    }
    _objc_retain(param_7);
    puVar3 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf529e0();
    _objc_release(puVar1);
    if (puVar3 == (undefined *)0x0) goto LAB_107ec6a58;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar7 = param_2;
    func_0x00010c0c5180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_6);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar1);
LAB_107ec6cac:
    _objc_release(puVar6);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar7 = param_2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_6);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
LAB_107ec6cb4:
  _objc_release(puVar4);
  puVar1 = (undefined *)0x0;
LAB_107ec6cbc:
  _objc_release(lVar11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126af4d0;
  _objc_retain(uVar9);
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(puVar1);
  return (undefined *)(ulong)(puVar1 != (undefined *)0x0);
}



/* Entry: 107ec6e50; end: 107ec6edb;  */

bool FUN_107ec6e50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af4d0;
  _objc_retain(param_2);
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar1 != (undefined *)0x0;
}



/* Entry: 107ec6edc; end: 107ec7243;  */

void FUN_107ec6edc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126af4c0;
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010bf97200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  puVar1 = param_1;
  if (puVar2 == (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)0x0) goto LAB_107ec7118;
    func_0x00010bf97200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_4);
LAB_107ec70f0:
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar2;
    func_0x00010c07b240();
    uVar3 = param_2;
    func_0x00010c0719c0();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar4 != (int)uVar3) {
      func_0x00010bf97200(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 3;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(param_4);
      _objc_release(uVar3);
      goto LAB_107ec70f0;
    }
LAB_107ec7118:
    _objc_retain(param_1);
    func_0x00010bf12220();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    if (puVar1 == (undefined *)0x0) goto LAB_107ec7198;
    puVar5 = param_1;
    func_0x00010bf12220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf12220(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf433a0();
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar1);
    if (puVar6 != (undefined *)0xffffffffffffffff) goto LAB_107ec7198;
    puVar1 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf12220(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c16d500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
LAB_107ec7198:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107ec7244; end: 107ec72e7; -[SCCloudSyncCachedDataVault initWithDataVault:cachedEncrytion:] */

undefined1 *
FUN_107ec7244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb978;
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



/* Entry: 107ec72e8; end: 107ec72ef; -[SCCloudSyncCachedDataVault addLocationsWithSnaps:] */

void FUN_107ec72e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addLocationsWithSnaps__11259c050);
  return;
}



/* Entry: 107ec72f0; end: 107ec72f7; -[SCCloudSyncCachedDataVault addEncryptionInfoWithSnaps:] */

void FUN_107ec72f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addEncryptionInfoWithSnaps__11259b970);
  return;
}



/* Entry: 107ec72f8; end: 107ec72ff; -[SCCloudSyncCachedDataVault addLocation:forSnapId:] */

void FUN_107ec72f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addLocation_forSnapId__11259c048);
  return;
}



/* Entry: 107ec7300; end: 107ec7307; -[SCCloudSyncCachedDataVault addKey:IV:isEncrypted:forSnapId:shouldSkipCoredataPersisting:] */

void FUN_107ec7300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addKey_IV_isEncrypted_forSnapId__11259bef8);
  return;
}



/* Entry: 107ec7308; end: 107ec7453; -[SCCloudSyncCachedDataVault requestLocationForSnapId:synchronous:queue:resultHandler:] */

void FUN_107ec7308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c135bc0(*(undefined8 *)(param_1 + 8));
  }
  else if (param_5 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,lVar2);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107ec7454;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(param_6);
    lStack_58 = param_6;
    _objc_retain(lVar2);
    lStack_60 = lVar2;
    func_0x00010007380c(param_5,&puStack_80);
    _objc_release(lStack_60);
    _objc_release(lStack_58);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107ec7454; end: 107ec7463;  */

void FUN_107ec7454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ec7460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107ec7464; end: 107ec761b; -[SCCloudSyncCachedDataVault requestKeyForSnap:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_107ec7464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = lVar5;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bdc1800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c0719c0();
  if ((lVar2 == 0) || (lVar3 == 0)) {
    func_0x00010c135a60(*(undefined8 *)(param_1 + 8));
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107ec761c;
    puStack_88 = &UNK_110864938;
    _objc_retain(param_6);
    uStack_70 = param_6;
    _objc_retain(lVar2);
    lStack_80 = lVar2;
    _objc_retain(lVar3);
    uStack_68 = (undefined1)lVar4;
    lStack_78 = lVar3;
    func_0x00010007380c(param_5,&puStack_a0);
    _objc_release(param_5);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    param_5 = uStack_70;
  }
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ec761c; end: 107ec766b;  */

void FUN_107ec761c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bf908;
  _objc_alloc(PTR_PTR_1126bf908);
  func_0x00010c020a60();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ec766c; end: 107ec7673; -[SCCloudSyncCachedDataVault requestKeyForEntryExternalId:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_107ec766c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_requestKeyForEntryExternalId_mem_11262b0a8);
  return;
}



/* Entry: 107ec7674; end: 107ec780f; -[SCCloudSyncCachedDataVault requestKeyForIdentifier:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_107ec7674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(param_5);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bdc1800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c0719c0();
  if (lVar1 == 0 || lVar2 == 0) {
    func_0x00010c135a40(*(undefined8 *)(param_1 + 8));
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107ec7810;
    puStack_88 = &UNK_110864938;
    _objc_retain(param_6);
    uStack_70 = param_6;
    _objc_retain(lVar1);
    lStack_80 = lVar1;
    _objc_retain(lVar2);
    uStack_68 = (undefined1)lVar3;
    lStack_78 = lVar2;
    func_0x00010007380c(param_5,&puStack_a0);
    _objc_release(param_5);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    param_5 = uStack_70;
  }
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ec7810; end: 107ec785f;  */

void FUN_107ec7810(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bf908;
  _objc_alloc(PTR_PTR_1126bf908);
  func_0x00010c020a60();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ec7860; end: 107ec7867; -[SCCloudSyncCachedDataVault duplicateFromSnapIds:toSnapIds:localOnly:shouldSkipCoredataPersisting:memoriesGrapheneContext:] */

void FUN_107ec7860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_duplicateFromSnapIds_toSnapIds_l_1125c05c8);
  return;
}



/* Entry: 107ec7868; end: 107ec78cb; -[SCCloudSyncCachedDataVault deleteRecordForSnapIds:memoriesGrapheneContext:] */

void FUN_107ec7868(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf6c600(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ec78cc; end: 107ec78fb; -[SCCloudSyncCachedDataVault .cxx_destruct] */

void FUN_107ec78cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ec78fc; end: 107ec7b3f; -[SCCloudSyncCreateSnapDocEntryOperation initWithSnapDoc:entryPlaceholder:addSnapEntity:snapIdToReplace:snapsOrder:dataVaultEncryption:profile:userContext:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ec78fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
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
  puStack_68 = PTR_PTR_1126fb980;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771100);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112771100) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112771104;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112771108;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277110c;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112771110;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112771114;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112771118;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277111c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112771120;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112771124;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar3);
  }
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



/* Entry: 107ec7b40; end: 107ec7b47; -[SCCloudSyncCreateSnapDocEntryOperation type] */

undefined8 FUN_107ec7b40(void)

{
  return 0xc;
}



/* Entry: 107ec7b48; end: 107ec7b4f; -[SCCloudSyncCreateSnapDocEntryOperation analyticsType] */

undefined8 FUN_107ec7b48(void)

{
  return 8;
}



/* Entry: 107ec7b50; end: 107ec7b7f; -[SCCloudSyncCreateSnapDocEntryOperation requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec7b50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771100);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ec7b80; end: 107ec7c17; -[SCCloudSyncCreateSnapDocEntryOperation entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec7b80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771104);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uStack_30 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d8308);
    func_0x00010c0475c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ec7c18; end: 107ec7c87; -[SCCloudSyncCreateSnapDocEntryOperation makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec7c18(void)

{
  _objc_alloc(PTR_PTR_1126d8308);
  func_0x00010c0475c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ec7c88; end: 107ec7e9f; -[SCCloudSyncCreateSnapDocEntryOperation initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ec7c88(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d8308;
  _objc_opt_class(PTR_PTR_1126d8308);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    ppuVar6 = (undefined1 **)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126fb980;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar6 != (undefined1 **)0x0) {
      uVar5 = param_4;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112771100);
      *(undefined8 *)((long)ppuVar6 + (long)_DAT_112771100) = uVar5;
      _objc_release(uVar4);
      uVar3 = param_3;
      func_0x00010bf973c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112771104);
      *(ulong *)((long)ppuVar6 + (long)_DAT_112771104) = uVar3;
      _objc_release(uVar5);
      uVar3 = param_3;
      func_0x00010befb620();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112771108);
      *(ulong *)((long)ppuVar6 + (long)_DAT_112771108) = uVar3;
      _objc_release(uVar5);
      uVar3 = param_3;
      func_0x00010c241300();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_11277110c);
      *(ulong *)((long)ppuVar6 + (long)_DAT_11277110c) = uVar3;
      _objc_release(uVar5);
      uVar3 = param_3;
      func_0x00010bf64980();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112771110);
      *(ulong *)((long)ppuVar6 + (long)_DAT_112771110) = uVar3;
      _objc_release(uVar5);
      uVar3 = param_3;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112771114);
      *(ulong *)((long)ppuVar6 + (long)_DAT_112771114) = uVar3;
      _objc_release(uVar5);
      uVar3 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112771118);
      *(ulong *)((long)ppuVar6 + (long)_DAT_112771118) = uVar3;
      _objc_release(uVar5);
      uVar3 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112771120);
      *(ulong *)((long)ppuVar6 + (long)_DAT_112771120) = uVar3;
      _objc_release(uVar5);
      uVar3 = param_3;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_11277111c);
      *(ulong *)((long)ppuVar6 + (long)_DAT_11277111c) = uVar3;
      _objc_release(uVar5);
    }
    _objc_retain(ppuVar6);
    param_1 = (undefined1 *)ppuVar6;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar6;
}



/* Entry: 107ec7ea0; end: 107ec80e3; -[SCCloudSyncCreateSnapDocEntryOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec7ea0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = (long)_DAT_112771104;
  lVar1 = (long)_DAT_112771108;
  lVar5 = *(long *)(param_1 + lVar7);
  uVar6 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(param_6);
  func_0x00010c23f220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112771100;
  FUN_107f06c7c(lVar5,uVar6,*(undefined8 *)(param_1 + lVar8),
                *(undefined8 *)(param_1 + _DAT_112771114),param_5,param_4,param_6,0xc);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar6);
  if (lVar5 == 0) {
    param_1 = (undefined *)0x0;
    goto LAB_107ec809c;
  }
  lVar2 = *(long *)(param_1 + lVar7);
  FUN_107ec6edc(lVar2,*(undefined8 *)(param_1 + _DAT_112771110),*(undefined8 *)(param_1 + lVar8),
                param_5,param_4,0xc);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    param_1 = (undefined *)0x0;
  }
  else {
    lVar8 = *(long *)(param_1 + lVar1);
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == lVar8) {
      lVar7 = *(long *)(param_1 + lVar7);
      _objc_release();
      if (lVar2 == lVar7) {
        _objc_retain(param_1);
        goto LAB_107ec8094;
      }
    }
    else {
      _objc_release();
    }
    puVar3 = PTR_PTR_1126d7f18;
    _objc_alloc(PTR_PTR_1126d7f18);
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bf6f520(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c0ce1e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e960(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar6);
    param_1 = PTR_PTR_1126d7f60;
    _objc_alloc(PTR_PTR_1126d7f60);
    func_0x00010c047400();
    _objc_release(puVar3);
  }
LAB_107ec8094:
  _objc_release(lVar2);
LAB_107ec809c:
  _objc_release(lVar5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ec80e4; end: 107ec860b; -[SCCloudSyncCreateSnapDocEntryOperation executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ec80e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  lVar12 = (long)_DAT_112771104;
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar13 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar13;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar13);
    puVar5 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar5);
    _objc_release(puVar13);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112771118);
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar5);
    _objc_release(uVar1);
    puVar13 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40(puVar13);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar13);
    puVar13 = (undefined *)0x7fffffffffffffff;
  }
  else {
    puVar6 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bfb3860(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e3a0(puVar5);
    _objc_release(uVar1);
    puVar13 = PTR_PTR_1126af4d0;
    func_0x00010bfa7420();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = puVar7;
    func_0x00010bf529e0();
    if (puVar13 == (undefined *)0x0) {
      puVar13 = (undefined *)0x7fffffffffffffff;
    }
    else {
      puVar13 = (undefined *)0x0;
      do {
        puVar8 = puVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar8;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(puVar8);
        if (((ulong)puVar4 & 1) != 0) goto LAB_107ec83e8;
        puVar13 = puVar13 + 1;
        puVar8 = puVar7;
        func_0x00010bf529e0();
      } while (puVar13 < puVar8);
      puVar13 = (undefined *)0x7fffffffffffffff;
    }
LAB_107ec83e8:
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  func_0x00010c0f7a20(puVar5);
  func_0x00010c1da4e0(puVar5);
  puVar6 = puVar5;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar8 = puVar2;
  uVar1 = param_3;
  if ((puVar2 == (undefined *)0x0) || (*(long *)(param_1 + _DAT_11277110c) == 0)) {
    if (*(long *)(param_1 + _DAT_11277110c) == 0) {
      uVar11 = *(undefined8 *)(param_1 + _DAT_112771118);
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      FUN_107f5892c(puVar5,puVar2,param_3,uVar11,puVar13,0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar13);
      goto LAB_107ec85b4;
    }
LAB_107ec848c:
    uVar11 = *(undefined8 *)(param_1 + _DAT_112771118);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + _DAT_112771108) == 0) goto LAB_107ec848c;
    uVar11 = *(undefined8 *)(param_1 + _DAT_112771118);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  FUN_107f58a24(puVar5,puVar2,param_3,uVar11,puVar7,puVar3,0,puVar13,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar7);
  lVar10 = (long)_DAT_11277111c;
  lVar12 = *(long *)(param_1 + lVar10);
  func_0x00010bf529e0();
  if (lVar12 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c2062e0(puVar6);
  }
LAB_107ec85b4:
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(uVar1);
    func_0x00010bf59960(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010bf59960(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = puVar8;
    func_0x00010bf433a0(puVar8);
    _objc_release(uVar11);
    _objc_release(puVar8);
    return puVar2;
  }
  return (undefined *)0x1;
}



/* Entry: 107ec860c; end: 107ec868f;  */

undefined8 FUN_107ec860c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf59960(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 107ec8690; end: 107ec87db; -[SCCloudSyncCreateSnapDocEntryOperation isOperationValidBeforeRemoteSync:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec8690(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112771104);
  _objc_retain(param_4);
  func_0x00010bf97200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar5);
  if (puVar2 == (undefined *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112771100);
    func_0x00010c0ac020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c293fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2938,uVar5,param_1,lVar4);
    bVar1 = false;
  }
  else {
    param_1 = *(long *)(param_1 + _DAT_112771108);
    func_0x00010c23f220(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08fa60();
    bVar1 = lVar3 != 0;
  }
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107ec87dc; end: 107ec8caf; -[SCCloudSyncCreateSnapDocEntryOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec87dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000018);
  puVar1 = PTR_PTR_1126d81b8;
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  lVar15 = (long)_DAT_112771104;
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c010360();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126d7f18;
  _objc_alloc();
  lVar15 = (long)_DAT_112771108;
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c23f220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf6f520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c0ce1e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e960();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = puVar4;
  FUN_107f05700(puVar4,puVar1,*(undefined8 *)(param_1 + _DAT_112771114));
  _objc_retainAutoreleasedReturnValue();
  if (in_stack_00000018 != 0) {
    puVar7 = PTR_PTR_1126d82c8;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c0f98a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e920();
    uVar13 = *(undefined8 *)(param_1 + _DAT_112771128);
    *(undefined **)(param_1 + _DAT_112771128) = puVar7;
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puVar7 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf1ef00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112771128);
  uVar9 = param_3;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  FUN_107efc434(puVar6,param_5,param_4,uVar3,uVar5,uVar8,param_6,param_7,uVar14,in_stack_00000008,
                uVar9,in_stack_00000010);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_retain(puVar6);
  _objc_retain(param_3);
  _objc_retain(puVar7);
  puVar11 = puVar10;
  func_0x00010bfb2660(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar6);
  _objc_retain(param_3);
  puVar12 = puVar11;
  func_0x00010c0b8600(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(&PTR____CFConstantStringClassReference_110e0a438);
  _objc_release(param_3);
  _objc_release(puVar11);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(in_stack_00000018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107ec8cb0; end: 107ec8d2b;  */

void FUN_107ec8cb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010c0dc640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_107f10fbc(param_2,uVar1,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107ec8d2c; end: 107ec8f9f;  */

void FUN_107ec8d2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2537c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c253720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1760(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c253720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a16c0(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107ec8fa0;
  uStack_60 = 0x107ec8fb0;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_107ec8fa0;
  uStack_90 = 0x107ec8fb0;
  uStack_88 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  func_0x00010c0c0800(uVar1);
  puVar4 = PTR_PTR_1126af5d0;
  if (puStack_a8[5] == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107ec8fa0; end: 107ec8fb7;  */

void FUN_107ec8fa0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ec8fb8; end: 107ec903f;  */

void FUN_107ec8fb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d82d0;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bf97280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c010400();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ec9040; end: 107ec9077;  */

void FUN_107ec9040(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ec9078; end: 107ec943f; -[SCCloudSyncCreateSnapDocEntryOperation commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec9078(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar17 = (long)_DAT_112771104;
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126af4c0;
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar7 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7a20();
  func_0x00010c1da4e0(puVar7);
  func_0x00010c0b4ca0(uVar3);
  func_0x00010c1fce60(puVar7);
  if (puVar6 == (undefined *)0x0) {
    func_0x00010c07b240(*(undefined8 *)(param_1 + lVar17));
    func_0x00010c210ec0(puVar7);
    uVar2 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f40(puVar7);
    _objc_release(uVar2);
  }
  lVar8 = *(long *)(param_1 + lVar17);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f40(puVar7);
    _objc_release(uVar2);
  }
  puVar6 = PTR_PTR_1126af4d0;
  uVar9 = *(undefined8 *)(param_1 + _DAT_112771108);
  func_0x00010c23f220(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  uVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar12 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar18);
  uVar1 = uVar11;
  if ((uVar12 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar11);
  func_0x00010c203f40(puVar10);
  _objc_release(uVar1);
  func_0x00010c210e20(puVar10);
  if (puVar6 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = puVar5;
  FUN_107ee8a94(puVar5,puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e860(puVar7);
  puVar14 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bf529e0(puVar13);
  func_0x00010bfed320();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c0670a0(puVar7);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar18);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  puVar4 = PTR_DAT_1126a5228;
  if (puVar15 != (undefined *)0x0) {
    _objc_retain(param_6);
    puVar5 = puVar15;
    func_0x00010010fab4(puVar15,puVar4);
    puVar4 = puVar15;
    if ((int)puVar5 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    func_0x000107f06b98(puVar4,param_6);
    _objc_release(puVar4);
    _objc_release(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 107ec9440; end: 107ec94bf; -[SCCloudSyncCreateSnapDocEntryOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107ec9440(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_DAT_1126a5228;
  if (param_3 != 0) {
    _objc_retain(param_6);
    lVar3 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    lVar1 = param_3;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    func_0x000107f06b98(lVar1,param_6);
    _objc_release(lVar1);
    _objc_release(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ec94c0; end: 107ec966f; -[SCCloudSyncCreateSnapDocEntryOperation changedSnapContextsWithEntryUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec94c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5228);
  lVar9 = param_3;
  if ((int)lVar1 == 0) {
    lVar9 = 0;
  }
  _objc_retain(lVar9);
  puVar5 = PTR_PTR_1126d8278;
  lVar1 = lVar9;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771120);
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112771104);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010c079400(param_1);
  func_0x00010c23f7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uVar2 = 0xc;
    func_0x00010bafc234(0xc);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar9 = (long)_DAT_112771104;
    uVar2 = *(undefined8 *)(param_3 + lVar9);
    func_0x00010bf97200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar5);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfbdda0(*(undefined8 *)(param_3 + lVar9));
    func_0x00010c0df760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar5);
    uVar4 = *(undefined8 *)(param_3 + _DAT_112771108);
    func_0x00010c23f220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c15e520(*(undefined8 *)(param_3 + lVar9));
    func_0x00010c0df7c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar5);
    uVar4 = *(undefined8 *)(param_3 + lVar9);
    func_0x00010bf59960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c07b240(*(undefined8 *)(param_3 + lVar9));
    func_0x00010c25d8c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar5);
    func_0x00010c1d0640(puVar7);
    lVar9 = *(long *)(param_3 + _DAT_112771120);
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c1d0640(puVar7);
    }
    _objc_release(lVar9);
    puVar6 = puVar7;
    func_0x00010bf51e00(puVar7);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ec9670; end: 107ec9977; -[SCCloudSyncCreateSnapDocEntryOperation logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec9670(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = 0xc;
  func_0x00010bafc234(0xc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec2238);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = (long)_DAT_112771104;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c18);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbdda0(uVar2);
  func_0x00010c0df760(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c38);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112771108);
  func_0x00010c23f220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e06db8);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c15e520(uVar2);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21d8);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf59960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec28d8);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c07b240(uVar2);
  func_0x00010c25d8c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21f8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112771100));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2998,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar5 = *(long *)(param_1 + _DAT_112771120);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar5,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar5);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ec9978; end: 107ec997f; -[SCCloudSyncCreateSnapDocEntryOperation doesNotRequireMediaUpload] */

undefined8 FUN_107ec9978(void)

{
  return 0;
}



/* Entry: 107ec9980; end: 107ec99bf; -[SCCloudSyncCreateSnapDocEntryOperation isOperationFromRetryEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec9980(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112771104);
  func_0x00010c13f6e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107ec99c0; end: 107ec99c7; -[SCCloudSyncCreateSnapDocEntryOperation allMediaUploadsCompleteWithBoltDataUploader:] */

undefined8 FUN_107ec99c0(void)

{
  return 0;
}



/* Entry: 107ec99c8; end: 107ec99cf; -[SCCloudSyncCreateSnapDocEntryOperation requiresSyncStatusUpdate] */

undefined8 FUN_107ec99c8(void)

{
  return 1;
}



/* Entry: 107ec99d0; end: 107ec99d7; -[SCCloudSyncCreateSnapDocEntryOperation eligibleForOutOfOrderExecution] */

undefined8 FUN_107ec99d0(void)

{
  return 1;
}



/* Entry: 107ec99d8; end: 107ec99df; -[SCCloudSyncCreateSnapDocEntryOperation needRunImmediately] */

undefined8 FUN_107ec99d8(void)

{
  return 0;
}



/* Entry: 107ec99e0; end: 107ec9b67; -[SCCloudSyncCreateSnapDocEntryOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107ec99e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = PTR_PTR_1126af4d0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771108);
  func_0x00010c23f220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar4,param_2,uVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar4 != (undefined *)0x0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107ec9b68;
    puStack_70 = &UNK_110842e18;
    _objc_retain(puVar4);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107ec9bf8;
    puStack_a0 = &UNK_1108bbd78;
    puStack_68 = puVar4;
    _objc_retain(puVar4);
    puStack_98 = puVar4;
    _objc_retain(param_7);
    uStack_90 = param_7;
    func_0x00010c0f8520(param_4,param_2,&puStack_88,param_6,&puStack_b8);
    _objc_release(uStack_90);
    _objc_release(puStack_98);
    _objc_release(puStack_68);
  }
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return 0;
}



/* Entry: 107ec9b68; end: 107ec9bf7;  */

void FUN_107ec9b68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = PTR_PTR_1126bc7f8;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bf20(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(puVar3 + 0x20);
  uVar1 = *(undefined8 *)(puVar3 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(uVar6);
  uVar4 = uVar6;
  func_0x00010c23ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar6;
  func_0x00010c241220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar4;
  func_0x000108017660(uVar4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c12b7c0(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107ec9bf8; end: 107ec9c03;  */

void FUN_107ec9bf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  uVar2 = uVar4;
  func_0x00010c23ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c241220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x000108017660(uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c12b7c0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107ec9c04; end: 107ec9c13; -[SCCloudSyncCreateSnapDocEntryOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec9c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112771108),PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 107ec9c14; end: 107ec9c53; -[SCCloudSyncCreateSnapDocEntryOperation isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107ec9c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c080960();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107ec9c54; end: 107ec9cfb; -[SCCloudSyncCreateSnapDocEntryOperation detailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ec9c54(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_30;
  long lStack_28;
  
  plVar4 = &lStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112771108);
  func_0x00010bf6f520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_30 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_30,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)plVar4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126af4c0;
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112771104);
    _objc_retain(param_3);
    func_0x00010bf97200(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(puVar2,param_2,uVar5,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = puVar2;
    func_0x00010c07b240(puVar2);
    _objc_release(puVar2);
    _objc_release(uVar5);
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 107ec9cfc; end: 107ec9d93; -[SCCloudSyncCreateSnapDocEntryOperation isPrivateWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ec9cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112771104);
  _objc_retain(param_3);
  func_0x00010bf97200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar1,param_2,uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c07b240(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  return puVar2;
}



/* Entry: 107ec9d94; end: 107ec9e63; -[SCCloudSyncCreateSnapDocEntryOperation snapPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec9d94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112771108;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar1 + _DAT_112771128,0);
    _objc_storeStrong(lVar1 + _DAT_11277111c,0);
    _objc_storeStrong(lVar1 + _DAT_112771114,0);
    _objc_storeStrong(lVar1 + _DAT_11277110c,0);
    _objc_storeStrong(lVar1 + _DAT_112771108,0);
    _objc_storeStrong(lVar1 + _DAT_112771124,0);
    _objc_storeStrong(lVar1 + _DAT_112771120,0);
    _objc_storeStrong(lVar1 + _DAT_112771118,0);
    _objc_storeStrong(lVar1 + _DAT_112771110,0);
    _objc_storeStrong(lVar1 + _DAT_112771104,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + _DAT_112771100,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ec9e64; end: 107ec9f33; -[SCCloudSyncCreateSnapDocEntryOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec9e64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771128,0);
  _objc_storeStrong(param_1 + _DAT_11277111c,0);
  _objc_storeStrong(param_1 + _DAT_112771114,0);
  _objc_storeStrong(param_1 + _DAT_11277110c,0);
  _objc_storeStrong(param_1 + _DAT_112771108,0);
  _objc_storeStrong(param_1 + _DAT_112771124,0);
  _objc_storeStrong(param_1 + _DAT_112771120,0);
  _objc_storeStrong(param_1 + _DAT_112771118,0);
  _objc_storeStrong(param_1 + _DAT_112771110,0);
  _objc_storeStrong(param_1 + _DAT_112771104,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771100,0);
  return;
}



/* Entry: 107ec9f34; end: 107eca263; -[SCCloudSyncSnapDocBasedEntryOperation initWithEntryId:gallerySnapDoc:entryAssets:addSnapEntities:snapDataVaultEncryptions:shouldRemoveSyncedSnaps:entryPlaceholder:profile:userContext:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ec9f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126fb988;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277112c);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277112c) = puVar2;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112771130;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112771134;
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar5);
    lVar6 = param_5;
    func_0x00010c0d3c80();
    puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(lVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    lVar8 = lVar6;
    func_0x00010bf529e0();
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6;
      func_0x00010bf51e00();
    }
    lVar9 = (long)_DAT_112771138;
    _objc_retain(lVar7);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    *(long *)((long)puVar1 + lVar9) = lVar7;
    _objc_release(uVar5);
    if (lVar8 != 0) {
      _objc_release(lVar7);
    }
    lVar8 = (long)_DAT_11277113c;
    _objc_retain(param_11);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_11;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112771140;
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_6;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112771144;
    _objc_retain(param_7);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_7;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112771148;
    _objc_retain(param_10);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_10;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277114c) = param_8;
    lVar8 = (long)_DAT_112771150;
    _objc_retain(param_9);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_9;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112771154;
    _objc_retain(param_12);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_12;
    _objc_release(uVar5);
    _objc_release(lVar6);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined8 *)0xb;
}



/* Entry: 107eca264; end: 107eca26b; -[SCCloudSyncSnapDocBasedEntryOperation type] */

undefined8 FUN_107eca264(void)

{
  return 0xb;
}



/* Entry: 107eca26c; end: 107eca273; -[SCCloudSyncSnapDocBasedEntryOperation analyticsType] */

undefined8 FUN_107eca26c(void)

{
  return 8;
}



/* Entry: 107eca274; end: 107eca2a3; -[SCCloudSyncSnapDocBasedEntryOperation requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eca274(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277112c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eca2a4; end: 107eca313; -[SCCloudSyncSnapDocBasedEntryOperation entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_107eca2a4(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 ****ppppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined8 ****ppppuVar30;
  long unaff_x26;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined8 *puVar31;
  undefined8 uVar32;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_328;
  undefined1 *puStack_310;
  long lStack_308;
  long lStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  undefined8 ***pppuStack_2e8;
  undefined1 *puStack_2e0;
  undefined8 ***pppuStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 ***pppuStack_270;
  undefined *puStack_268;
  undefined1 auStack_260 [128];
  long lStack_1e0;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_112771130);
  ppppuVar18 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  ppppuVar30 = ppppuVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_28 = FUN_107eca314;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_30 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar23 = *(long *)((long)ppppuVar18 + (long)_DAT_112771138);
  _objc_retain(lVar23);
  lVar21 = lVar23;
  func_0x00010bf52a60();
  if (lVar21 != 0) {
    lVar28 = *plStack_140;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_140 != lVar28) {
          _objc_enumerationMutation(lVar23);
        }
        puVar29 = PTR_PTR_1126d8310;
        _objc_alloc(PTR_PTR_1126d8310);
        func_0x00010c010220();
        func_0x00010befa120(ppppuVar2);
        _objc_release(puVar29);
        unaff_x26 = unaff_x26 + 1;
      } while (lVar21 != unaff_x26);
      lVar21 = lVar23;
      func_0x00010bf52a60();
    } while (lVar21 != 0);
  }
  _objc_release(lVar23);
  ppppuVar30 = (undefined8 ****)PTR_PTR_1126d8318;
  _objc_alloc();
  puVar29 = &DAT_112771130;
  puVar25 = *(undefined1 **)((long)ppppuVar18 + (long)_DAT_112771130);
  puVar26 = *(undefined1 **)((long)ppppuVar18 + (long)_DAT_112771134);
  ppppuVar3 = ppppuVar2;
  func_0x00010bf51e00();
  uVar19 = *(undefined8 *)((long)ppppuVar18 + (long)_DAT_11277113c);
  uStack_170 = *(undefined8 *)((long)ppppuVar18 + (long)_DAT_112771144);
  uStack_168 = *(undefined8 *)((long)ppppuVar18 + (long)_DAT_112771148);
  uStack_160 = *(undefined8 *)((long)ppppuVar18 + (long)_DAT_112771150);
  ppppuVar18 = ppppuVar3;
  func_0x00010c050b60();
  _objc_release(ppppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar8 = &uStack_2b0;
  pcStack_178 = FUN_107eca4e0;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar25;
  puVar5 = puVar26;
  ppuStack_180 = &puStack_30;
  _objc_retain(puVar25);
  _objc_retain(puVar26);
  puVar10 = PTR_PTR_1126d8318;
  _objc_opt_class(PTR_PTR_1126d8318);
  puVar4 = puVar25;
  _objc_opt_isKindOfClass(puVar25,puVar10);
  puVar1 = puVar25;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined1 *)0x0) {
    ppppuVar30 = (undefined8 ****)0x0;
  }
  else {
    puStack_268 = PTR_PTR_1126fb988;
    ppppuVar30 = &pppuStack_270;
    pppuStack_270 = ppppuVar2;
    _objc_msgSendSuper2(ppppuVar30,PTR_s_init_1125d9248);
    if (ppppuVar30 != (undefined8 ****)0x0) {
      puVar5 = puVar26;
      func_0x00010bf51e00();
      uVar20 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_11277112c);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_11277112c) = puVar5;
      _objc_release(uVar20);
      puVar5 = puVar25;
      func_0x00010c269ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771130);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771130) = puVar5;
      _objc_release(uVar20);
      puVar5 = puVar25;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771134);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771134) = puVar5;
      _objc_release(uVar20);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      puVar4 = puVar25;
      func_0x00010bef7fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = auStack_260;
      ppppuVar18 = (undefined8 ****)0x10;
      puVar6 = puVar4;
      func_0x00010bf52a60();
      if (puVar6 != (undefined1 *)0x0) {
        unaff_x27 = *plStack_2a0;
        do {
          unaff_x28 = (undefined1 *)0x0;
          do {
            if (*plStack_2a0 != unaff_x27) {
              _objc_enumerationMutation(puVar4);
            }
            uVar20 = *(undefined8 *)(lStack_2a8 + (long)unaff_x28 * 8);
            func_0x00010bf97080(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar10);
            _objc_release(uVar20);
            unaff_x28 = unaff_x28 + 1;
          } while (puVar6 != unaff_x28);
          puVar5 = auStack_260;
          ppppuVar18 = (undefined8 ****)0x10;
          puVar6 = puVar4;
          puVar8 = &uStack_2b0;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined1 *)0x0);
      }
      _objc_release(puVar4);
      puVar24 = puVar10;
      func_0x00010bf529e0();
      if (puVar24 == (undefined *)0x0) {
        puVar29 = (undefined *)0x0;
        puVar6 = (undefined1 *)puVar8;
      }
      else {
        puVar29 = puVar10;
        func_0x00010bf51e00();
        puVar6 = (undefined1 *)puVar8;
      }
      unaff_x26 = (long)_DAT_112771138;
      _objc_retain(puVar29);
      uVar20 = *(undefined8 *)((long)ppppuVar30 + unaff_x26);
      *(undefined **)((long)ppppuVar30 + unaff_x26) = puVar29;
      _objc_release(uVar20);
      if (puVar24 != (undefined *)0x0) {
        _objc_release(puVar29);
      }
      puVar4 = puVar25;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar3 = (undefined8 ****)&DAT_11277113c;
      uVar20 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_11277113c);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_11277113c) = puVar4;
      _objc_release(uVar20);
      puVar4 = puVar25;
      func_0x00010c2325c0();
      *(char *)((long)ppppuVar30 + (long)_DAT_11277114c) = (char)puVar4;
      puVar4 = puVar25;
      func_0x00010befb600();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771140);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771140) = puVar4;
      _objc_release(uVar20);
      puVar4 = puVar25;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771148);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771148) = puVar4;
      _objc_release(uVar20);
      puVar4 = puVar25;
      func_0x00010c23fd20();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771144);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771144) = puVar4;
      _objc_release(uVar20);
      puVar4 = puVar25;
      func_0x00010bf973c0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771150);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771150) = puVar4;
      _objc_release(uVar20);
      _objc_release(puVar10);
    }
    _objc_retain(ppppuVar30);
    ppppuVar2 = ppppuVar30;
  }
  _objc_release(puVar1);
  _objc_release(puVar26);
  _objc_release(puVar25);
  ppppuVar7 = ppppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return ppppuVar30;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_107eca844;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_310 = unaff_x28;
  lStack_308 = unaff_x27;
  lStack_300 = unaff_x26;
  puStack_2f8 = puVar29;
  pppuStack_2f0 = ppppuVar3;
  pppuStack_2e8 = ppppuVar30;
  puStack_2e0 = puVar1;
  pppuStack_2d8 = ppppuVar2;
  puStack_2d0 = puVar26;
  puStack_2c8 = puVar25;
  pppuStack_2c0 = &ppuStack_180;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(ppppuVar18);
  _objc_retain(uVar19);
  lVar21 = (long)_DAT_112771130;
  puVar8 = (undefined8 *)PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar8 == (undefined8 *)0x0) && (*(long *)((long)ppppuVar7 + (long)_DAT_112771150) == 0)) {
    puVar31 = *(undefined8 **)((long)ppppuVar7 + (long)_DAT_11277112c);
    puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = 1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(ppppuVar18);
    _objc_release(uVar20);
LAB_107ecaf44:
    _objc_release(puVar29);
    ppppuVar30 = (undefined8 ****)0x0;
  }
  else {
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    lStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    plStack_4e0 = (long *)0x0;
    lVar23 = (long)_DAT_112771140;
    puVar29 = *(undefined **)((long)ppppuVar7 + lVar23);
    _objc_retain(puVar29);
    puVar10 = puVar29;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar28 = *plStack_4e0;
      do {
        puVar24 = (undefined *)0x0;
        do {
          if (*plStack_4e0 != lVar28) {
            _objc_enumerationMutation(puVar29);
          }
          uVar20 = *(undefined8 *)(lStack_4e8 + (long)puVar24 * 8);
          puVar31 = puVar8;
          if (puVar8 == (undefined8 *)0x0) {
            puVar31 = *(undefined8 **)((long)ppppuVar7 + (long)_DAT_112771150);
          }
          uVar14 = uVar20;
          func_0x00010c23f220(uVar20);
          _objc_retainAutoreleasedReturnValue();
          lVar27 = (long)_DAT_11277112c;
          FUN_107ec673c(puVar31,uVar14,*(undefined8 *)((long)ppppuVar7 + lVar27),puVar6,uVar19,
                        ppppuVar18,puVar5,0xb);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar14);
          if (puVar31 == (undefined8 *)0x0) {
            puVar31 = *(undefined8 **)((long)ppppuVar7 + lVar27);
            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar20;
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            uVar32 = uVar14;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar20;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = 6;
            func_0x00010baa2848();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a1ac0(ppppuVar18);
            _objc_release(uVar13);
            _objc_release(uVar12);
            _objc_release(uVar20);
            _objc_release(uVar32);
            _objc_release(uVar14);
            _objc_release(puVar10);
            goto LAB_107ecaf44;
          }
          puVar24 = puVar24 + 1;
        } while (puVar10 != puVar24);
        puVar10 = puVar29;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar29);
    puVar29 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    plStack_520 = (long *)0x0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    lVar28 = (long)_DAT_112771138;
    puVar24 = *(undefined **)((long)ppppuVar7 + lVar28);
    _objc_retain(puVar24);
    puVar10 = puVar24;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar27 = *plStack_520;
      do {
        puVar22 = (undefined *)0x0;
        do {
          if (*plStack_520 != lVar27) {
            _objc_enumerationMutation(puVar24);
          }
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar20 = *(undefined8 *)(lStack_528 + (long)puVar22 * 8);
          func_0x00010bf0b760(uVar20);
          func_0x00010c0df760(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar29;
          func_0x00010bf4b900();
          _objc_release(puVar11);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)puVar9 != 0) {
            puVar31 = *(undefined8 **)((long)ppppuVar7 + (long)_DAT_11277112c);
            puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010bf0b260(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a1ac0(ppppuVar18);
            _objc_release(puVar10);
            _objc_release(uVar20);
            _objc_release(puVar22);
            ppppuVar30 = (undefined8 ****)0x0;
            goto LAB_107ecb014;
          }
          func_0x00010bf0b760(uVar20);
          func_0x00010c0df760(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar29);
          _objc_release(puVar11);
          puVar22 = puVar22 + 1;
        } while (puVar10 != puVar22);
        puVar10 = puVar24;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar24);
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    lStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    plStack_560 = (long *)0x0;
    puVar24 = *(undefined **)((long)ppppuVar7 + lVar28);
    _objc_retain(puVar24);
    puVar31 = &uStack_570;
    puVar10 = puVar24;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar27 = *plStack_560;
      do {
        puVar22 = (undefined *)0x0;
        do {
          if (*plStack_560 != lVar27) {
            _objc_enumerationMutation(puVar24);
          }
          uVar32 = *(undefined8 *)(lStack_568 + (long)puVar22 * 8);
          uVar20 = uVar32;
          func_0x00010bf0b260(uVar32);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar32;
          func_0x00010bf0b760();
          if ((uint)uVar14 < 0x16) {
            func_0x00010b697928();
          }
          puVar25 = puVar6;
          func_0x00010c13a860();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar25;
          func_0x00010c06cde0();
          _objc_release(puVar25);
          _objc_release(uVar20);
          if (((ulong)puVar26 & 1) == 0) {
            puVar31 = *(undefined8 **)((long)ppppuVar7 + (long)_DAT_11277112c);
            puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010bf0b260(uVar32);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            uVar20 = 6;
            func_0x00010baa2848();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a1ac0(ppppuVar18);
            _objc_release(uVar20);
            _objc_release(puVar10);
            _objc_release(uVar32);
            _objc_release(puVar22);
            goto LAB_107ecb010;
          }
          puVar22 = puVar22 + 1;
        } while (puVar10 != puVar22);
        puVar31 = &uStack_570;
        puVar10 = puVar24;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar24);
    puVar10 = *(undefined **)((long)ppppuVar7 + (long)_DAT_112771134);
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar10;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (puVar24 == (undefined *)0x0) {
      puVar31 = *(undefined8 **)((long)ppppuVar7 + (long)_DAT_11277112c);
      puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar14 = *(undefined8 *)((long)ppppuVar7 + lVar28);
      func_0x00010bfb1920(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar14;
      func_0x00010bf0b260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = 4;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(ppppuVar18);
      _objc_release(uVar32);
      _objc_release(puVar10);
      _objc_release(uVar20);
      _objc_release(uVar14);
      _objc_release(puVar24);
      puVar24 = (undefined *)0x0;
LAB_107ecb010:
      ppppuVar30 = (undefined8 ****)0x0;
    }
    else {
      puVar10 = *(undefined **)((long)ppppuVar7 + lVar23);
      func_0x00010bf529e0();
      if (puVar10 == (undefined *)0x0) {
        puVar22 = PTR_PTR_1126af4d0;
        puVar31 = puVar8;
        func_0x00010bfa7380();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar22;
        func_0x00010bf529e0();
        _objc_release(puVar22);
      }
      puVar22 = puVar24;
      func_0x0001080202b4();
      puVar11 = *(undefined **)((long)ppppuVar7 + lVar28);
      func_0x00010bf529e0();
      if ((puVar22 == puVar11) && (puVar22 = puVar24, func_0x000108020134(), puVar22 == puVar10)) {
        lVar23 = *(long *)((long)ppppuVar7 + lVar23);
        func_0x00010bf529e0();
        if (lVar23 == 0) {
          puVar10 = PTR_PTR_1126af4d0;
          puVar31 = puVar8;
          func_0x00010bfa74e0(PTR_PTR_1126af4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar10;
          func_0x00010bf529e0();
          puVar11 = puVar24;
          FUN_107f04cc8(puVar24,puVar22);
          if ((int)puVar11 == 0) {
            uStack_578 = 0;
            puVar22 = puVar24;
            FUN_107f04f14(puVar24,puVar10,puVar6,&uStack_578);
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uStack_578;
            _objc_retain();
            if (puVar22 == (undefined *)0x0) {
LAB_107ecb378:
              puVar31 = *(undefined8 **)((long)ppppuVar7 + (long)_DAT_11277112c);
              puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c0da520();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puVar16 = *(undefined **)((long)ppppuVar7 + lVar28);
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar16;
              func_0x00010bf0b260();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0da520();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              uVar14 = uVar20;
              func_0x00010bf6e340(uVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0da520();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0a1ac0(ppppuVar18);
              _objc_release(puVar9);
              _objc_release(uVar14);
              _objc_release(puVar11);
              _objc_release(puVar17);
              ppppuVar30 = (undefined8 ****)0x0;
            }
            else {
              puVar11 = puVar10;
              func_0x00010bf529e0(puVar10);
              puVar9 = puVar22;
              FUN_107f04cc8(puVar22,puVar11);
              if ((int)puVar9 == 0) goto LAB_107ecb378;
              puVar11 = PTR_PTR_1126d8320;
              func_0x00010c2aec00();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar22;
              func_0x00010bf63640(puVar22);
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar11;
              func_0x00010c203f40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              _objc_release(puVar11);
              ppppuVar30 = (undefined8 ****)PTR_PTR_1126d8328;
              _objc_alloc();
              puVar31 = *(undefined8 **)((long)ppppuVar7 + lVar21);
              puVar16 = puVar15;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c010280();
            }
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(puVar22);
            _objc_release(uVar20);
            _objc_release(puVar10);
            goto LAB_107ecb014;
          }
          _objc_release(puVar10);
        }
        _objc_retain(ppppuVar7);
        ppppuVar30 = ppppuVar7;
      }
      else {
        puVar31 = *(undefined8 **)((long)ppppuVar7 + (long)_DAT_11277112c);
        puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c0da520();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar14 = *(undefined8 *)((long)ppppuVar7 + lVar28);
        func_0x00010bfb1920(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar14;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520();
        _objc_retainAutoreleasedReturnValue();
        uVar32 = 2;
        func_0x00010baa2848();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1ac0(ppppuVar18);
        _objc_release(uVar32);
        _objc_release(puVar10);
        _objc_release(uVar20);
        _objc_release(uVar14);
        _objc_release(puVar22);
        ppppuVar30 = (undefined8 ****)0x0;
      }
    }
LAB_107ecb014:
    _objc_release(puVar24);
    _objc_release(puVar29);
  }
  _objc_release(puVar8);
  _objc_release(uVar19);
  _objc_release(ppppuVar18);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
    ___stack_chk_fail();
    puVar29 = PTR_PTR_1126af4c0;
    lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar31);
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(puVar6 + _DAT_112771150) == 0) {
      puVar10 = PTR_PTR_1126bc830;
      func_0x00010bf35080();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar10 = PTR_PTR_1126bf8c8;
      func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar10;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar24;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126bc830;
      func_0x00010bf5a940();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192cc0(puVar10);
      _objc_release(puVar24);
      uVar19 = *(undefined8 *)(puVar6 + _DAT_112771148);
      func_0x00010c2923e0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5ce0(puVar10);
      _objc_release(uVar19);
      puVar24 = PTR_PTR_1126b2508;
      func_0x00010bf350c0(PTR_PTR_1126b2508);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c0fd860();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f40(puVar24);
      _objc_release(puVar9);
      _objc_release(puVar11);
      _objc_release(puVar24);
      _objc_release(puVar22);
    }
    func_0x00010c0f7a20(puVar10);
    func_0x00010c1da4e0(puVar10);
    puVar24 = puVar10;
    FUN_107f5892c(puVar10,puVar29,puVar31,*(undefined8 *)(puVar6 + _DAT_112771148),
                  *(undefined8 *)(puVar6 + _DAT_112771140),puVar6[_DAT_11277114c],1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar24;
    FUN_107efd0bc(puVar24,*(undefined8 *)(puVar6 + _DAT_112771134));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    uVar19 = *(undefined8 *)(puVar6 + _DAT_112771138);
    puVar24 = puVar10;
    FUN_107efd134(puVar10,puVar29,puVar31,uVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar31);
    _objc_release(puVar10);
    _objc_release(puVar24);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
      ___stack_chk_fail();
      _objc_retain(uVar19);
      puVar29 = PTR_PTR_1126af4c0;
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar29 == (undefined *)0x0) {
        ppppuVar18 = (undefined8 ****)0x0;
      }
      else {
        puVar10 = PTR_PTR_1126bc800;
        func_0x00010bfa7180(PTR_PTR_1126bc800);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar10;
        func_0x00010c23ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar24;
        func_0x00010c08fa60();
        ppppuVar18 = (undefined8 ****)(ulong)(puVar22 != (undefined *)0x0);
        _objc_release(puVar24);
        _objc_release(puVar10);
      }
      _objc_release(puVar29);
      _objc_release(uVar19);
      return ppppuVar18;
    }
    return (undefined8 ****)0x1;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppppuVar30;
}



/* Entry: 107eca314; end: 107eca4df; -[SCCloudSyncSnapDocBasedEntryOperation makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_107eca314(long param_1)

{
  undefined1 *puVar1;
  undefined8 ****ppppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 ****ppppuVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 ****ppppuVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined8 ****ppppuVar30;
  long unaff_x26;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined8 *puVar31;
  undefined8 uVar32;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_308;
  undefined1 *puStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  undefined8 ***pppuStack_2c8;
  undefined1 *puStack_2c0;
  undefined8 ***pppuStack_2b8;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar24 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar22 = *(long *)(param_1 + _DAT_112771138);
  _objc_retain(lVar22);
  lVar20 = lVar22;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar28 = *plStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != lVar28) {
          _objc_enumerationMutation(lVar22);
        }
        puVar29 = PTR_PTR_1126d8310;
        _objc_alloc(PTR_PTR_1126d8310);
        func_0x00010c010220();
        func_0x00010befa120(ppppuVar24);
        _objc_release(puVar29);
        unaff_x26 = unaff_x26 + 1;
      } while (lVar20 != unaff_x26);
      lVar20 = lVar22;
      func_0x00010bf52a60();
    } while (lVar20 != 0);
  }
  _objc_release(lVar22);
  ppppuVar30 = (undefined8 ****)PTR_PTR_1126d8318;
  _objc_alloc();
  puVar29 = &DAT_112771130;
  puVar25 = *(undefined1 **)(param_1 + _DAT_112771130);
  puVar26 = *(undefined1 **)(param_1 + _DAT_112771134);
  ppppuVar2 = ppppuVar24;
  func_0x00010bf51e00();
  uVar18 = *(undefined8 *)(param_1 + _DAT_11277113c);
  uStack_150 = *(undefined8 *)(param_1 + _DAT_112771144);
  uStack_148 = *(undefined8 *)(param_1 + _DAT_112771148);
  uStack_140 = *(undefined8 *)(param_1 + _DAT_112771150);
  ppppuVar17 = ppppuVar2;
  func_0x00010c050b60();
  _objc_release(ppppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar7 = &uStack_290;
  pcStack_158 = FUN_107eca4e0;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar25;
  puVar4 = puVar26;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar25);
  _objc_retain(puVar26);
  puVar9 = PTR_PTR_1126d8318;
  _objc_opt_class(PTR_PTR_1126d8318);
  puVar3 = puVar25;
  _objc_opt_isKindOfClass(puVar25,puVar9);
  puVar1 = puVar25;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined1 *)0x0) {
    ppppuVar30 = (undefined8 ****)0x0;
  }
  else {
    puStack_248 = PTR_PTR_1126fb988;
    ppppuVar30 = &pppuStack_250;
    pppuStack_250 = ppppuVar24;
    _objc_msgSendSuper2(ppppuVar30,PTR_s_init_1125d9248);
    if (ppppuVar30 != (undefined8 ****)0x0) {
      puVar4 = puVar26;
      func_0x00010bf51e00();
      uVar19 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_11277112c);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_11277112c) = puVar4;
      _objc_release(uVar19);
      puVar4 = puVar25;
      func_0x00010c269ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771130);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771130) = puVar4;
      _objc_release(uVar19);
      puVar4 = puVar25;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771134);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771134) = puVar4;
      _objc_release(uVar19);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      plStack_280 = (long *)0x0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      puVar3 = puVar25;
      func_0x00010bef7fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = auStack_240;
      ppppuVar17 = (undefined8 ****)0x10;
      puVar5 = puVar3;
      func_0x00010bf52a60();
      if (puVar5 != (undefined1 *)0x0) {
        unaff_x27 = *plStack_280;
        do {
          unaff_x28 = (undefined1 *)0x0;
          do {
            if (*plStack_280 != unaff_x27) {
              _objc_enumerationMutation(puVar3);
            }
            uVar19 = *(undefined8 *)(lStack_288 + (long)unaff_x28 * 8);
            func_0x00010bf97080(uVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar9);
            _objc_release(uVar19);
            unaff_x28 = unaff_x28 + 1;
          } while (puVar5 != unaff_x28);
          puVar4 = auStack_240;
          ppppuVar17 = (undefined8 ****)0x10;
          puVar5 = puVar3;
          puVar7 = &uStack_290;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined1 *)0x0);
      }
      _objc_release(puVar3);
      puVar23 = puVar9;
      func_0x00010bf529e0();
      if (puVar23 == (undefined *)0x0) {
        puVar29 = (undefined *)0x0;
        puVar5 = (undefined1 *)puVar7;
      }
      else {
        puVar29 = puVar9;
        func_0x00010bf51e00();
        puVar5 = (undefined1 *)puVar7;
      }
      unaff_x26 = (long)_DAT_112771138;
      _objc_retain(puVar29);
      uVar19 = *(undefined8 *)((long)ppppuVar30 + unaff_x26);
      *(undefined **)((long)ppppuVar30 + unaff_x26) = puVar29;
      _objc_release(uVar19);
      if (puVar23 != (undefined *)0x0) {
        _objc_release(puVar29);
      }
      puVar3 = puVar25;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar2 = (undefined8 ****)&DAT_11277113c;
      uVar19 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_11277113c);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_11277113c) = puVar3;
      _objc_release(uVar19);
      puVar3 = puVar25;
      func_0x00010c2325c0();
      *(char *)((long)ppppuVar30 + (long)_DAT_11277114c) = (char)puVar3;
      puVar3 = puVar25;
      func_0x00010befb600();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771140);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771140) = puVar3;
      _objc_release(uVar19);
      puVar3 = puVar25;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771148);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771148) = puVar3;
      _objc_release(uVar19);
      puVar3 = puVar25;
      func_0x00010c23fd20();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771144);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771144) = puVar3;
      _objc_release(uVar19);
      puVar3 = puVar25;
      func_0x00010bf973c0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)ppppuVar30 + (long)_DAT_112771150);
      *(undefined1 **)((long)ppppuVar30 + (long)_DAT_112771150) = puVar3;
      _objc_release(uVar19);
      _objc_release(puVar9);
    }
    _objc_retain(ppppuVar30);
    ppppuVar24 = ppppuVar30;
  }
  _objc_release(puVar1);
  _objc_release(puVar26);
  _objc_release(puVar25);
  ppppuVar6 = ppppuVar24;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return ppppuVar30;
  }
  ___stack_chk_fail();
  pcStack_298 = FUN_107eca844;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2f0 = unaff_x28;
  lStack_2e8 = unaff_x27;
  lStack_2e0 = unaff_x26;
  puStack_2d8 = puVar29;
  pppuStack_2d0 = ppppuVar2;
  pppuStack_2c8 = ppppuVar30;
  puStack_2c0 = puVar1;
  pppuStack_2b8 = ppppuVar24;
  puStack_2b0 = puVar26;
  puStack_2a8 = puVar25;
  ppuStack_2a0 = &puStack_160;
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  _objc_retain(ppppuVar17);
  _objc_retain(uVar18);
  lVar20 = (long)_DAT_112771130;
  puVar7 = (undefined8 *)PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar7 == (undefined8 *)0x0) && (*(long *)((long)ppppuVar6 + (long)_DAT_112771150) == 0)) {
    puVar31 = *(undefined8 **)((long)ppppuVar6 + (long)_DAT_11277112c);
    puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = 1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(ppppuVar17);
    _objc_release(uVar19);
LAB_107ecaf44:
    _objc_release(puVar29);
    ppppuVar30 = (undefined8 ****)0x0;
  }
  else {
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    lStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    plStack_4c0 = (long *)0x0;
    lVar22 = (long)_DAT_112771140;
    puVar29 = *(undefined **)((long)ppppuVar6 + lVar22);
    _objc_retain(puVar29);
    puVar9 = puVar29;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar28 = *plStack_4c0;
      do {
        puVar23 = (undefined *)0x0;
        do {
          if (*plStack_4c0 != lVar28) {
            _objc_enumerationMutation(puVar29);
          }
          uVar19 = *(undefined8 *)(lStack_4c8 + (long)puVar23 * 8);
          puVar31 = puVar7;
          if (puVar7 == (undefined8 *)0x0) {
            puVar31 = *(undefined8 **)((long)ppppuVar6 + (long)_DAT_112771150);
          }
          uVar13 = uVar19;
          func_0x00010c23f220(uVar19);
          _objc_retainAutoreleasedReturnValue();
          lVar27 = (long)_DAT_11277112c;
          FUN_107ec673c(puVar31,uVar13,*(undefined8 *)((long)ppppuVar6 + lVar27),puVar5,uVar18,
                        ppppuVar17,puVar4,0xb);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar13);
          if (puVar31 == (undefined8 *)0x0) {
            puVar31 = *(undefined8 **)((long)ppppuVar6 + lVar27);
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar19;
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            uVar32 = uVar13;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar19;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = 6;
            func_0x00010baa2848();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a1ac0(ppppuVar17);
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar19);
            _objc_release(uVar32);
            _objc_release(uVar13);
            _objc_release(puVar9);
            goto LAB_107ecaf44;
          }
          puVar23 = puVar23 + 1;
        } while (puVar9 != puVar23);
        puVar9 = puVar29;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar29);
    puVar29 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    plStack_500 = (long *)0x0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    lVar28 = (long)_DAT_112771138;
    puVar23 = *(undefined **)((long)ppppuVar6 + lVar28);
    _objc_retain(puVar23);
    puVar9 = puVar23;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar27 = *plStack_500;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_500 != lVar27) {
            _objc_enumerationMutation(puVar23);
          }
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar19 = *(undefined8 *)(lStack_508 + (long)puVar21 * 8);
          func_0x00010bf0b760(uVar19);
          func_0x00010c0df760(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar29;
          func_0x00010bf4b900();
          _objc_release(puVar10);
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)puVar8 != 0) {
            puVar31 = *(undefined8 **)((long)ppppuVar6 + (long)_DAT_11277112c);
            puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010bf0b260(uVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a1ac0(ppppuVar17);
            _objc_release(puVar9);
            _objc_release(uVar19);
            _objc_release(puVar21);
            ppppuVar30 = (undefined8 ****)0x0;
            goto LAB_107ecb014;
          }
          func_0x00010bf0b760(uVar19);
          func_0x00010c0df760(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar29);
          _objc_release(puVar10);
          puVar21 = puVar21 + 1;
        } while (puVar9 != puVar21);
        puVar9 = puVar23;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar23);
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    lStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    plStack_540 = (long *)0x0;
    puVar23 = *(undefined **)((long)ppppuVar6 + lVar28);
    _objc_retain(puVar23);
    puVar31 = &uStack_550;
    puVar9 = puVar23;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar27 = *plStack_540;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_540 != lVar27) {
            _objc_enumerationMutation(puVar23);
          }
          uVar32 = *(undefined8 *)(lStack_548 + (long)puVar21 * 8);
          uVar19 = uVar32;
          func_0x00010bf0b260(uVar32);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar32;
          func_0x00010bf0b760();
          if ((uint)uVar13 < 0x16) {
            func_0x00010b697928();
          }
          puVar25 = puVar5;
          func_0x00010c13a860();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar25;
          func_0x00010c06cde0();
          _objc_release(puVar25);
          _objc_release(uVar19);
          if (((ulong)puVar26 & 1) == 0) {
            puVar31 = *(undefined8 **)((long)ppppuVar6 + (long)_DAT_11277112c);
            puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010bf0b260(uVar32);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = 6;
            func_0x00010baa2848();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a1ac0(ppppuVar17);
            _objc_release(uVar19);
            _objc_release(puVar9);
            _objc_release(uVar32);
            _objc_release(puVar21);
            goto LAB_107ecb010;
          }
          puVar21 = puVar21 + 1;
        } while (puVar9 != puVar21);
        puVar31 = &uStack_550;
        puVar9 = puVar23;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar23);
    puVar9 = *(undefined **)((long)ppppuVar6 + (long)_DAT_112771134);
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar9;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if (puVar23 == (undefined *)0x0) {
      puVar31 = *(undefined8 **)((long)ppppuVar6 + (long)_DAT_11277112c);
      puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar13 = *(undefined8 *)((long)ppppuVar6 + lVar28);
      func_0x00010bfb1920(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar13;
      func_0x00010bf0b260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = 4;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(ppppuVar17);
      _objc_release(uVar32);
      _objc_release(puVar9);
      _objc_release(uVar19);
      _objc_release(uVar13);
      _objc_release(puVar23);
      puVar23 = (undefined *)0x0;
LAB_107ecb010:
      ppppuVar30 = (undefined8 ****)0x0;
    }
    else {
      puVar9 = *(undefined **)((long)ppppuVar6 + lVar22);
      func_0x00010bf529e0();
      if (puVar9 == (undefined *)0x0) {
        puVar21 = PTR_PTR_1126af4d0;
        puVar31 = puVar7;
        func_0x00010bfa7380();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar21;
        func_0x00010bf529e0();
        _objc_release(puVar21);
      }
      puVar21 = puVar23;
      func_0x0001080202b4();
      puVar10 = *(undefined **)((long)ppppuVar6 + lVar28);
      func_0x00010bf529e0();
      if ((puVar21 == puVar10) && (puVar21 = puVar23, func_0x000108020134(), puVar21 == puVar9)) {
        lVar22 = *(long *)((long)ppppuVar6 + lVar22);
        func_0x00010bf529e0();
        if (lVar22 == 0) {
          puVar9 = PTR_PTR_1126af4d0;
          puVar31 = puVar7;
          func_0x00010bfa74e0(PTR_PTR_1126af4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar9;
          func_0x00010bf529e0();
          puVar10 = puVar23;
          FUN_107f04cc8(puVar23,puVar21);
          if ((int)puVar10 == 0) {
            uStack_558 = 0;
            puVar21 = puVar23;
            FUN_107f04f14(puVar23,puVar9,puVar5,&uStack_558);
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uStack_558;
            _objc_retain();
            if (puVar21 == (undefined *)0x0) {
LAB_107ecb378:
              puVar31 = *(undefined8 **)((long)ppppuVar6 + (long)_DAT_11277112c);
              puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c0da520();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puVar15 = *(undefined **)((long)ppppuVar6 + lVar28);
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              puVar16 = puVar15;
              func_0x00010bf0b260();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0da520();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              uVar13 = uVar19;
              func_0x00010bf6e340(uVar19);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0da520();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0a1ac0(ppppuVar17);
              _objc_release(puVar8);
              _objc_release(uVar13);
              _objc_release(puVar10);
              _objc_release(puVar16);
              ppppuVar30 = (undefined8 ****)0x0;
            }
            else {
              puVar10 = puVar9;
              func_0x00010bf529e0(puVar9);
              puVar8 = puVar21;
              FUN_107f04cc8(puVar21,puVar10);
              if ((int)puVar8 == 0) goto LAB_107ecb378;
              puVar10 = PTR_PTR_1126d8320;
              func_0x00010c2aec00();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar21;
              func_0x00010bf63640(puVar21);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar10;
              func_0x00010c203f40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              _objc_release(puVar10);
              ppppuVar30 = (undefined8 ****)PTR_PTR_1126d8328;
              _objc_alloc();
              puVar31 = *(undefined8 **)((long)ppppuVar6 + lVar20);
              puVar15 = puVar14;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c010280();
            }
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar21);
            _objc_release(uVar19);
            _objc_release(puVar9);
            goto LAB_107ecb014;
          }
          _objc_release(puVar9);
        }
        _objc_retain(ppppuVar6);
        ppppuVar30 = ppppuVar6;
      }
      else {
        puVar31 = *(undefined8 **)((long)ppppuVar6 + (long)_DAT_11277112c);
        puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c0da520();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar13 = *(undefined8 *)((long)ppppuVar6 + lVar28);
        func_0x00010bfb1920(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar13;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da520();
        _objc_retainAutoreleasedReturnValue();
        uVar32 = 2;
        func_0x00010baa2848();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1ac0(ppppuVar17);
        _objc_release(uVar32);
        _objc_release(puVar9);
        _objc_release(uVar19);
        _objc_release(uVar13);
        _objc_release(puVar21);
        ppppuVar30 = (undefined8 ****)0x0;
      }
    }
LAB_107ecb014:
    _objc_release(puVar23);
    _objc_release(puVar29);
  }
  _objc_release(puVar7);
  _objc_release(uVar18);
  _objc_release(ppppuVar17);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
    ___stack_chk_fail();
    puVar29 = PTR_PTR_1126af4c0;
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar31);
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(puVar5 + _DAT_112771150) == 0) {
      puVar9 = PTR_PTR_1126bc830;
      func_0x00010bf35080();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = PTR_PTR_1126bf8c8;
      func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar9;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar23;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126bc830;
      func_0x00010bf5a940();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192cc0(puVar9);
      _objc_release(puVar23);
      uVar18 = *(undefined8 *)(puVar5 + _DAT_112771148);
      func_0x00010c2923e0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5ce0(puVar9);
      _objc_release(uVar18);
      puVar23 = PTR_PTR_1126b2508;
      func_0x00010bf350c0(PTR_PTR_1126b2508);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0fd860();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f40(puVar23);
      _objc_release(puVar8);
      _objc_release(puVar10);
      _objc_release(puVar23);
      _objc_release(puVar21);
    }
    func_0x00010c0f7a20(puVar9);
    func_0x00010c1da4e0(puVar9);
    puVar23 = puVar9;
    FUN_107f5892c(puVar9,puVar29,puVar31,*(undefined8 *)(puVar5 + _DAT_112771148),
                  *(undefined8 *)(puVar5 + _DAT_112771140),puVar5[_DAT_11277114c],1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar23;
    FUN_107efd0bc(puVar23,*(undefined8 *)(puVar5 + _DAT_112771134));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
    uVar18 = *(undefined8 *)(puVar5 + _DAT_112771138);
    puVar23 = puVar9;
    FUN_107efd134(puVar9,puVar29,puVar31,uVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar31);
    _objc_release(puVar9);
    _objc_release(puVar23);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
      ___stack_chk_fail();
      _objc_retain(uVar18);
      puVar29 = PTR_PTR_1126af4c0;
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar29 == (undefined *)0x0) {
        ppppuVar24 = (undefined8 ****)0x0;
      }
      else {
        puVar9 = PTR_PTR_1126bc800;
        func_0x00010bfa7180(PTR_PTR_1126bc800);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar9;
        func_0x00010c23ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar23;
        func_0x00010c08fa60();
        ppppuVar24 = (undefined8 ****)(ulong)(puVar21 != (undefined *)0x0);
        _objc_release(puVar23);
        _objc_release(puVar9);
      }
      _objc_release(puVar29);
      _objc_release(uVar18);
      return ppppuVar24;
    }
    return (undefined8 ****)0x1;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar30);
  return ppppuVar30;
}



/* Entry: 107eca4e0; end: 107eca843; -[SCCloudSyncSnapDocBasedEntryOperation initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ****
FUN_107eca4e0(undefined8 ****param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  undefined *unaff_x24;
  undefined *puVar24;
  undefined *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_1b8;
  undefined1 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 ***pppuStack_178;
  undefined1 *puStack_170;
  undefined8 ***pppuStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar5 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar24 = PTR_PTR_1126d8318;
  _objc_opt_class(PTR_PTR_1126d8318);
  puVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar24);
  puVar7 = param_3;
  if (((ulong)puVar1 & 1) == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  _objc_retain(puVar7);
  if (puVar7 == (undefined1 *)0x0) {
    ppppuVar22 = (undefined8 ****)0x0;
  }
  else {
    puStack_f8 = PTR_PTR_1126fb988;
    ppppuVar22 = &pppuStack_100;
    pppuStack_100 = param_1;
    _objc_msgSendSuper2(ppppuVar22,PTR_s_init_1125d9248);
    if (ppppuVar22 != (undefined8 ****)0x0) {
      puVar2 = param_4;
      func_0x00010bf51e00();
      uVar16 = *(undefined8 *)((long)ppppuVar22 + (long)_DAT_11277112c);
      *(undefined1 **)((long)ppppuVar22 + (long)_DAT_11277112c) = puVar2;
      _objc_release(uVar16);
      puVar2 = param_3;
      func_0x00010c269ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)((long)ppppuVar22 + (long)_DAT_112771130);
      *(undefined1 **)((long)ppppuVar22 + (long)_DAT_112771130) = puVar2;
      _objc_release(uVar16);
      puVar2 = param_3;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)((long)ppppuVar22 + (long)_DAT_112771134);
      *(undefined1 **)((long)ppppuVar22 + (long)_DAT_112771134) = puVar2;
      _objc_release(uVar16);
      puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      puVar1 = param_3;
      func_0x00010bef7fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = auStack_f0;
      param_5 = 0x10;
      puVar3 = puVar1;
      func_0x00010bf52a60();
      if (puVar3 != (undefined1 *)0x0) {
        unaff_x27 = *plStack_130;
        do {
          unaff_x28 = (undefined1 *)0x0;
          do {
            if (*plStack_130 != unaff_x27) {
              _objc_enumerationMutation(puVar1);
            }
            uVar16 = *(undefined8 *)(lStack_138 + (long)unaff_x28 * 8);
            func_0x00010bf97080(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar24);
            _objc_release(uVar16);
            unaff_x28 = unaff_x28 + 1;
          } while (puVar3 != unaff_x28);
          puVar2 = auStack_f0;
          param_5 = 0x10;
          puVar3 = puVar1;
          puVar5 = &uStack_140;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined1 *)0x0);
      }
      _objc_release(puVar1);
      puVar8 = puVar24;
      func_0x00010bf529e0();
      if (puVar8 == (undefined *)0x0) {
        unaff_x25 = (undefined *)0x0;
        puVar3 = (undefined1 *)puVar5;
      }
      else {
        unaff_x25 = puVar24;
        func_0x00010bf51e00();
        puVar3 = (undefined1 *)puVar5;
      }
      unaff_x26 = (long)_DAT_112771138;
      _objc_retain(unaff_x25);
      uVar16 = *(undefined8 *)((long)ppppuVar22 + unaff_x26);
      *(undefined **)((long)ppppuVar22 + unaff_x26) = unaff_x25;
      _objc_release(uVar16);
      if (puVar8 != (undefined *)0x0) {
        _objc_release(unaff_x25);
      }
      puVar1 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = &DAT_11277113c;
      uVar16 = *(undefined8 *)((long)ppppuVar22 + (long)_DAT_11277113c);
      *(undefined1 **)((long)ppppuVar22 + (long)_DAT_11277113c) = puVar1;
      _objc_release(uVar16);
      puVar1 = param_3;
      func_0x00010c2325c0();
      *(char *)((long)ppppuVar22 + (long)_DAT_11277114c) = (char)puVar1;
      puVar1 = param_3;
      func_0x00010befb600();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)((long)ppppuVar22 + (long)_DAT_112771140);
      *(undefined1 **)((long)ppppuVar22 + (long)_DAT_112771140) = puVar1;
      _objc_release(uVar16);
      puVar1 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)((long)ppppuVar22 + (long)_DAT_112771148);
      *(undefined1 **)((long)ppppuVar22 + (long)_DAT_112771148) = puVar1;
      _objc_release(uVar16);
      puVar1 = param_3;
      func_0x00010c23fd20();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)((long)ppppuVar22 + (long)_DAT_112771144);
      *(undefined1 **)((long)ppppuVar22 + (long)_DAT_112771144) = puVar1;
      _objc_release(uVar16);
      puVar1 = param_3;
      func_0x00010bf973c0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)((long)ppppuVar22 + (long)_DAT_112771150);
      *(undefined1 **)((long)ppppuVar22 + (long)_DAT_112771150) = puVar1;
      _objc_release(uVar16);
      _objc_release(puVar24);
    }
    _objc_retain(ppppuVar22);
    param_1 = ppppuVar22;
  }
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  ppppuVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppuVar22;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_107eca844;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  lStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  pppuStack_178 = ppppuVar22;
  puStack_170 = puVar7;
  pppuStack_168 = param_1;
  puStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar17 = (long)_DAT_112771130;
  puVar5 = (undefined8 *)PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar5 == (undefined8 *)0x0) && (*(long *)((long)ppppuVar4 + (long)_DAT_112771150) == 0)) {
    puVar25 = *(undefined8 **)((long)ppppuVar4 + (long)_DAT_11277112c);
    puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_5);
    _objc_release(uVar16);
LAB_107ecaf44:
    _objc_release(puVar24);
    ppppuVar22 = (undefined8 ****)0x0;
    goto LAB_107ecb024;
  }
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  lVar18 = (long)_DAT_112771140;
  puVar24 = *(undefined **)((long)ppppuVar4 + lVar18);
  _objc_retain(puVar24);
  puVar8 = puVar24;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar20 = *plStack_370;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (*plStack_370 != lVar20) {
          _objc_enumerationMutation(puVar24);
        }
        uVar16 = *(undefined8 *)(lStack_378 + (long)puVar21 * 8);
        puVar25 = puVar5;
        if (puVar5 == (undefined8 *)0x0) {
          puVar25 = *(undefined8 **)((long)ppppuVar4 + (long)_DAT_112771150);
        }
        uVar12 = uVar16;
        func_0x00010c23f220(uVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar23 = (long)_DAT_11277112c;
        FUN_107ec673c(puVar25,uVar12,*(undefined8 *)((long)ppppuVar4 + lVar23),puVar3,param_6,
                      param_5,puVar2,0xb);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar12);
        if (puVar25 == (undefined8 *)0x0) {
          puVar25 = *(undefined8 **)((long)ppppuVar4 + lVar23);
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar16;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar26 = uVar12;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar16;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = 6;
          func_0x00010baa2848();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1ac0(param_5);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar16);
          _objc_release(uVar26);
          _objc_release(uVar12);
          _objc_release(puVar8);
          goto LAB_107ecaf44;
        }
        puVar21 = puVar21 + 1;
      } while (puVar8 != puVar21);
      puVar8 = puVar24;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar24);
  puVar24 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  lVar20 = (long)_DAT_112771138;
  puVar21 = *(undefined **)((long)ppppuVar4 + lVar20);
  _objc_retain(puVar21);
  puVar8 = puVar21;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar23 = *plStack_3b0;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_3b0 != lVar23) {
          _objc_enumerationMutation(puVar21);
        }
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar16 = *(undefined8 *)(lStack_3b8 + (long)puVar19 * 8);
        func_0x00010bf0b760(uVar16);
        func_0x00010c0df760(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar24;
        func_0x00010bf4b900();
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)puVar6 != 0) {
          puVar25 = *(undefined8 **)((long)ppppuVar4 + (long)_DAT_11277112c);
          puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf0b260(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1ac0(param_5);
          _objc_release(puVar8);
          _objc_release(uVar16);
          _objc_release(puVar19);
          ppppuVar22 = (undefined8 ****)0x0;
          goto LAB_107ecb014;
        }
        func_0x00010bf0b760(uVar16);
        func_0x00010c0df760(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar24);
        _objc_release(puVar9);
        puVar19 = puVar19 + 1;
      } while (puVar8 != puVar19);
      puVar8 = puVar21;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar21);
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  plStack_3f0 = (long *)0x0;
  puVar21 = *(undefined **)((long)ppppuVar4 + lVar20);
  _objc_retain(puVar21);
  puVar25 = &uStack_400;
  puVar8 = puVar21;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar23 = *plStack_3f0;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_3f0 != lVar23) {
          _objc_enumerationMutation(puVar21);
        }
        uVar26 = *(undefined8 *)(lStack_3f8 + (long)puVar19 * 8);
        uVar16 = uVar26;
        func_0x00010bf0b260(uVar26);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar26;
        func_0x00010bf0b760();
        if ((uint)uVar12 < 0x16) {
          func_0x00010b697928();
        }
        puVar7 = puVar3;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar7;
        func_0x00010c06cde0();
        _objc_release(puVar7);
        _objc_release(uVar16);
        if (((ulong)puVar1 & 1) == 0) {
          puVar25 = *(undefined8 **)((long)ppppuVar4 + (long)_DAT_11277112c);
          puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf0b260(uVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = 6;
          func_0x00010baa2848();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1ac0(param_5);
          _objc_release(uVar16);
          _objc_release(puVar8);
          _objc_release(uVar26);
          _objc_release(puVar19);
          goto LAB_107ecb010;
        }
        puVar19 = puVar19 + 1;
      } while (puVar8 != puVar19);
      puVar25 = &uStack_400;
      puVar8 = puVar21;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar21);
  puVar8 = *(undefined **)((long)ppppuVar4 + (long)_DAT_112771134);
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar8;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (puVar21 == (undefined *)0x0) {
    puVar25 = *(undefined8 **)((long)ppppuVar4 + (long)_DAT_11277112c);
    puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar12 = *(undefined8 *)((long)ppppuVar4 + lVar20);
    func_0x00010bfb1920(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010bf0b260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = 4;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_5);
    _objc_release(uVar26);
    _objc_release(puVar8);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(puVar21);
    puVar21 = (undefined *)0x0;
LAB_107ecb010:
    ppppuVar22 = (undefined8 ****)0x0;
  }
  else {
    puVar8 = *(undefined **)((long)ppppuVar4 + lVar18);
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) {
      puVar19 = PTR_PTR_1126af4d0;
      puVar25 = puVar5;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar19;
      func_0x00010bf529e0();
      _objc_release(puVar19);
    }
    puVar19 = puVar21;
    func_0x0001080202b4();
    puVar9 = *(undefined **)((long)ppppuVar4 + lVar20);
    func_0x00010bf529e0();
    if ((puVar19 == puVar9) && (puVar19 = puVar21, func_0x000108020134(), puVar19 == puVar8)) {
      lVar18 = *(long *)((long)ppppuVar4 + lVar18);
      func_0x00010bf529e0();
      if (lVar18 == 0) {
        puVar8 = PTR_PTR_1126af4d0;
        puVar25 = puVar5;
        func_0x00010bfa74e0(PTR_PTR_1126af4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar8;
        func_0x00010bf529e0();
        puVar9 = puVar21;
        FUN_107f04cc8(puVar21,puVar19);
        if ((int)puVar9 == 0) {
          uStack_408 = 0;
          puVar19 = puVar21;
          FUN_107f04f14(puVar21,puVar8,puVar3,&uStack_408);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uStack_408;
          _objc_retain();
          if (puVar19 == (undefined *)0x0) {
LAB_107ecb378:
            puVar25 = *(undefined8 **)((long)ppppuVar4 + (long)_DAT_11277112c);
            puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar14 = *(undefined **)((long)ppppuVar4 + lVar20);
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            func_0x00010bf0b260();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            uVar12 = uVar16;
            func_0x00010bf6e340(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a1ac0(param_5);
            _objc_release(puVar6);
            _objc_release(uVar12);
            _objc_release(puVar9);
            _objc_release(puVar15);
            ppppuVar22 = (undefined8 ****)0x0;
          }
          else {
            puVar9 = puVar8;
            func_0x00010bf529e0(puVar8);
            puVar6 = puVar19;
            FUN_107f04cc8(puVar19,puVar9);
            if ((int)puVar6 == 0) goto LAB_107ecb378;
            puVar9 = PTR_PTR_1126d8320;
            func_0x00010c2aec00();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar19;
            func_0x00010bf63640(puVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar9;
            func_0x00010c203f40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            _objc_release(puVar9);
            ppppuVar22 = (undefined8 ****)PTR_PTR_1126d8328;
            _objc_alloc();
            puVar25 = *(undefined8 **)((long)ppppuVar4 + lVar17);
            puVar14 = puVar13;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c010280();
          }
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar19);
          _objc_release(uVar16);
          _objc_release(puVar8);
          goto LAB_107ecb014;
        }
        _objc_release(puVar8);
      }
      _objc_retain(ppppuVar4);
      ppppuVar22 = ppppuVar4;
    }
    else {
      puVar25 = *(undefined8 **)((long)ppppuVar4 + (long)_DAT_11277112c);
      puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar12 = *(undefined8 *)((long)ppppuVar4 + lVar20);
      func_0x00010bfb1920(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar12;
      func_0x00010bf0b260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = 2;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(param_5);
      _objc_release(uVar26);
      _objc_release(puVar8);
      _objc_release(uVar16);
      _objc_release(uVar12);
      _objc_release(puVar19);
      ppppuVar22 = (undefined8 ****)0x0;
    }
  }
LAB_107ecb014:
  _objc_release(puVar21);
  _objc_release(puVar24);
LAB_107ecb024:
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar22);
    return ppppuVar22;
  }
  ___stack_chk_fail();
  puVar24 = PTR_PTR_1126af4c0;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar25);
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(puVar3 + _DAT_112771150) == 0) {
    puVar8 = PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar8;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar21;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar8);
    _objc_release(puVar21);
    uVar16 = *(undefined8 *)(puVar3 + _DAT_112771148);
    func_0x00010c2923e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar8);
    _objc_release(uVar16);
    puVar21 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40(puVar21);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar21);
    _objc_release(puVar19);
  }
  func_0x00010c0f7a20(puVar8);
  func_0x00010c1da4e0(puVar8);
  puVar21 = puVar8;
  FUN_107f5892c(puVar8,puVar24,puVar25,*(undefined8 *)(puVar3 + _DAT_112771148),
                *(undefined8 *)(puVar3 + _DAT_112771140),puVar3[_DAT_11277114c],1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar21;
  FUN_107efd0bc(puVar21,*(undefined8 *)(puVar3 + _DAT_112771134));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  uVar16 = *(undefined8 *)(puVar3 + _DAT_112771138);
  puVar21 = puVar8;
  FUN_107efd134(puVar8,puVar24,puVar25,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  _objc_release(puVar8);
  _objc_release(puVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_retain(uVar16);
    puVar24 = PTR_PTR_1126af4c0;
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar24 == (undefined *)0x0) {
      ppppuVar22 = (undefined8 ****)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126bc800;
      func_0x00010bfa7180(PTR_PTR_1126bc800);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar8;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar21;
      func_0x00010c08fa60();
      ppppuVar22 = (undefined8 ****)(ulong)(puVar19 != (undefined *)0x0);
      _objc_release(puVar21);
      _objc_release(puVar8);
    }
    _objc_release(puVar24);
    _objc_release(uVar16);
    return ppppuVar22;
  }
  return (undefined8 ****)0x1;
}



/* Entry: 107eca844; end: 107ecb49f; -[SCCloudSyncSnapDocBasedEntryOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_107eca844(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar12 = (long)_DAT_112771130;
  puVar1 = (undefined8 *)PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined8 *)0x0) && (*(long *)(param_1 + _DAT_112771150) == 0)) {
    puVar21 = *(undefined8 **)(param_1 + _DAT_11277112c);
    puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = 1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_5);
    _objc_release(uVar20);
LAB_107ecaf44:
    _objc_release(puVar19);
    puVar19 = (undefined *)0x0;
    goto LAB_107ecb024;
  }
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  lVar13 = (long)_DAT_112771140;
  puVar19 = *(undefined **)(param_1 + lVar13);
  _objc_retain(puVar19);
  puVar17 = puVar19;
  func_0x00010bf52a60();
  if (puVar17 != (undefined *)0x0) {
    lVar15 = *plStack_230;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_230 != lVar15) {
          _objc_enumerationMutation(puVar19);
        }
        uVar20 = *(undefined8 *)(lStack_238 + (long)puVar16 * 8);
        puVar21 = puVar1;
        if (puVar1 == (undefined8 *)0x0) {
          puVar21 = *(undefined8 **)(param_1 + _DAT_112771150);
        }
        uVar8 = uVar20;
        func_0x00010c23f220(uVar20);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_11277112c;
        FUN_107ec673c(puVar21,uVar8,*(undefined8 *)(param_1 + lVar18),param_3,param_6,param_5,
                      param_4,0xb);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar8);
        if (puVar21 == (undefined8 *)0x0) {
          puVar21 = *(undefined8 **)(param_1 + lVar18);
          puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar20;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar8;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar20;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = 6;
          func_0x00010baa2848();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1ac0(param_5);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar20);
          _objc_release(uVar22);
          _objc_release(uVar8);
          _objc_release(puVar17);
          goto LAB_107ecaf44;
        }
        puVar16 = puVar16 + 1;
      } while (puVar17 != puVar16);
      puVar17 = puVar19;
      func_0x00010bf52a60();
    } while (puVar17 != (undefined *)0x0);
  }
  _objc_release(puVar19);
  puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lVar15 = (long)_DAT_112771138;
  puVar16 = *(undefined **)(param_1 + lVar15);
  _objc_retain(puVar16);
  puVar19 = puVar16;
  func_0x00010bf52a60();
  if (puVar19 != (undefined *)0x0) {
    lVar18 = *plStack_270;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_270 != lVar18) {
          _objc_enumerationMutation(puVar16);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar20 = *(undefined8 *)(lStack_278 + (long)puVar14 * 8);
        func_0x00010bf0b760(uVar20);
        func_0x00010c0df760(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar17;
        func_0x00010bf4b900();
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)puVar2 != 0) {
          puVar21 = *(undefined8 **)(param_1 + _DAT_11277112c);
          puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf0b260(uVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1ac0(param_5);
          _objc_release(puVar19);
          _objc_release(uVar20);
          _objc_release(puVar14);
          puVar19 = (undefined *)0x0;
          goto LAB_107ecb014;
        }
        func_0x00010bf0b760(uVar20);
        func_0x00010c0df760(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar17);
        _objc_release(puVar5);
        puVar14 = puVar14 + 1;
      } while (puVar19 != puVar14);
      puVar19 = puVar16;
      func_0x00010bf52a60();
    } while (puVar19 != (undefined *)0x0);
  }
  _objc_release(puVar16);
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  puVar16 = *(undefined **)(param_1 + lVar15);
  _objc_retain(puVar16);
  puVar21 = &uStack_2c0;
  puVar19 = puVar16;
  func_0x00010bf52a60();
  if (puVar19 != (undefined *)0x0) {
    lVar18 = *plStack_2b0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_2b0 != lVar18) {
          _objc_enumerationMutation(puVar16);
        }
        uVar22 = *(undefined8 *)(lStack_2b8 + (long)puVar14 * 8);
        uVar20 = uVar22;
        func_0x00010bf0b260(uVar22);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar22;
        func_0x00010bf0b760();
        if ((uint)uVar8 < 0x16) {
          func_0x00010b697928();
        }
        uVar3 = param_3;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c06cde0();
        _objc_release(uVar3);
        _objc_release(uVar20);
        if ((uVar4 & 1) == 0) {
          puVar21 = *(undefined8 **)(param_1 + _DAT_11277112c);
          puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf0b260(uVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0da520();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = 6;
          func_0x00010baa2848();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1ac0(param_5);
          _objc_release(uVar20);
          _objc_release(puVar19);
          _objc_release(uVar22);
          _objc_release(puVar14);
          goto LAB_107ecb010;
        }
        puVar14 = puVar14 + 1;
      } while (puVar19 != puVar14);
      puVar21 = &uStack_2c0;
      puVar19 = puVar16;
      func_0x00010bf52a60();
    } while (puVar19 != (undefined *)0x0);
  }
  _objc_release(puVar16);
  puVar19 = *(undefined **)(param_1 + _DAT_112771134);
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar19;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  if (puVar16 == (undefined *)0x0) {
    puVar21 = *(undefined8 **)(param_1 + _DAT_11277112c);
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar8 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bfb1920(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar8;
    func_0x00010bf0b260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = 4;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_5);
    _objc_release(uVar22);
    _objc_release(puVar19);
    _objc_release(uVar20);
    _objc_release(uVar8);
    _objc_release(puVar16);
    puVar16 = (undefined *)0x0;
LAB_107ecb010:
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = *(undefined **)(param_1 + lVar13);
    func_0x00010bf529e0();
    if (puVar19 == (undefined *)0x0) {
      puVar14 = PTR_PTR_1126af4d0;
      puVar21 = puVar1;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar14;
      func_0x00010bf529e0();
      _objc_release(puVar14);
    }
    puVar14 = puVar16;
    func_0x0001080202b4();
    puVar5 = *(undefined **)(param_1 + lVar15);
    func_0x00010bf529e0();
    if ((puVar14 == puVar5) && (puVar14 = puVar16, func_0x000108020134(), puVar14 == puVar19)) {
      lVar13 = *(long *)(param_1 + lVar13);
      func_0x00010bf529e0();
      if (lVar13 == 0) {
        puVar14 = PTR_PTR_1126af4d0;
        puVar21 = puVar1;
        func_0x00010bfa74e0(PTR_PTR_1126af4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar14;
        func_0x00010bf529e0();
        puVar5 = puVar16;
        FUN_107f04cc8(puVar16,puVar19);
        if ((int)puVar5 == 0) {
          uStack_2c8 = 0;
          puVar5 = puVar16;
          FUN_107f04f14(puVar16,puVar14,param_3,&uStack_2c8);
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uStack_2c8;
          _objc_retain();
          if (puVar5 == (undefined *)0x0) {
LAB_107ecb378:
            puVar21 = *(undefined8 **)(param_1 + _DAT_11277112c);
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar10 = *(undefined **)(param_1 + lVar15);
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010bf0b260();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            uVar8 = uVar20;
            func_0x00010bf6e340(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a1ac0(param_5);
            _objc_release(puVar2);
            _objc_release(uVar8);
            _objc_release(puVar19);
            _objc_release(puVar11);
            puVar19 = (undefined *)0x0;
          }
          else {
            puVar19 = puVar14;
            func_0x00010bf529e0(puVar14);
            puVar2 = puVar5;
            FUN_107f04cc8(puVar5,puVar19);
            if ((int)puVar2 == 0) goto LAB_107ecb378;
            puVar19 = PTR_PTR_1126d8320;
            func_0x00010c2aec00();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar5;
            func_0x00010bf63640(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar19;
            func_0x00010c203f40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            _objc_release(puVar19);
            puVar19 = PTR_PTR_1126d8328;
            _objc_alloc();
            puVar21 = *(undefined8 **)(param_1 + lVar12);
            puVar10 = puVar9;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c010280();
          }
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(uVar20);
          _objc_release(puVar14);
          goto LAB_107ecb014;
        }
        _objc_release(puVar14);
      }
      _objc_retain(param_1);
      puVar19 = param_1;
    }
    else {
      puVar21 = *(undefined8 **)(param_1 + _DAT_11277112c);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar8 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010bfb1920(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar8;
      func_0x00010bf0b260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = 2;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(param_5);
      _objc_release(uVar22);
      _objc_release(puVar19);
      _objc_release(uVar20);
      _objc_release(uVar8);
      _objc_release(puVar14);
      puVar19 = (undefined *)0x0;
    }
  }
LAB_107ecb014:
  _objc_release(puVar16);
  _objc_release(puVar17);
LAB_107ecb024:
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return puVar19;
  }
  ___stack_chk_fail();
  puVar19 = PTR_PTR_1126af4c0;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar21);
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_3 + (long)_DAT_112771150) == 0) {
    puVar17 = PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar17 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar17;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar16;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar17);
    puVar17 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar17);
    _objc_release(puVar16);
    uVar20 = *(undefined8 *)(param_3 + (long)_DAT_112771148);
    func_0x00010c2923e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar17);
    _objc_release(uVar20);
    puVar16 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar17;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40(puVar16);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar16);
    _objc_release(puVar14);
  }
  func_0x00010c0f7a20(puVar17);
  func_0x00010c1da4e0(puVar17);
  puVar16 = puVar17;
  FUN_107f5892c(puVar17,puVar19,puVar21,*(undefined8 *)(param_3 + (long)_DAT_112771148),
                *(undefined8 *)(param_3 + (long)_DAT_112771140),
                *(undefined1 *)(param_3 + (long)_DAT_11277114c),1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  puVar17 = puVar16;
  FUN_107efd0bc(puVar16,*(undefined8 *)(param_3 + (long)_DAT_112771134));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  uVar20 = *(undefined8 *)(param_3 + (long)_DAT_112771138);
  puVar16 = puVar17;
  FUN_107efd134(puVar17,puVar19,puVar21,uVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain(uVar20);
    puVar19 = PTR_PTR_1126af4c0;
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar19 == (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR_PTR_1126bc800;
      func_0x00010bfa7180(PTR_PTR_1126bc800);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar16;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar14;
      func_0x00010c08fa60();
      puVar17 = (undefined *)(ulong)(puVar17 != (undefined *)0x0);
      _objc_release(puVar14);
      _objc_release(puVar16);
    }
    _objc_release(puVar19);
    _objc_release(uVar20);
    return puVar17;
  }
  return (undefined *)0x1;
}



/* Entry: 107ecb4a0; end: 107ecb77b; -[SCCloudSyncSnapDocBasedEntryOperation executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ecb4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126af4c0;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_112771150) == 0) {
    puVar8 = PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar8);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112771148);
    func_0x00010c2923e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar8);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar8;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  func_0x00010c0f7a20(puVar8);
  func_0x00010c1da4e0(puVar8);
  puVar3 = puVar8;
  FUN_107f5892c(puVar8,puVar2,param_3,*(undefined8 *)(param_1 + _DAT_112771148),
                *(undefined8 *)(param_1 + _DAT_112771140),*(undefined1 *)(param_1 + _DAT_11277114c),
                1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar3;
  FUN_107efd0bc(puVar3,*(undefined8 *)(param_1 + _DAT_112771134));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112771138);
  puVar3 = puVar8;
  FUN_107efd134(puVar8,puVar2,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return true;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    puVar8 = PTR_PTR_1126bc800;
    func_0x00010bfa7180(PTR_PTR_1126bc800);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    bVar1 = puVar4 != (undefined *)0x0;
    _objc_release(puVar3);
    _objc_release(puVar8);
  }
  _objc_release(puVar2);
  _objc_release(uVar5);
  return bVar1;
}



/* Entry: 107ecb77c; end: 107ecb84b; -[SCCloudSyncSnapDocBasedEntryOperation isOperationValidBeforeRemoteSync:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ecb77c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + _DAT_112771130),param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR_PTR_1126bc800;
    func_0x00010bfa7180(PTR_PTR_1126bc800,param_2,puVar2,0,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    bVar1 = puVar5 != (undefined *)0x0;
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 107ecb84c; end: 107ecbb6f; -[SCCloudSyncSnapDocBasedEntryOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecb84c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
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
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107ecbb70;
  puStack_b0 = &UNK_110a117f0;
  lStack_a8 = param_1;
  _objc_retain(param_7);
  uStack_a0 = param_7;
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_retain(in_stack_00000020);
  uStack_88 = in_stack_00000020;
  _objc_retain(in_stack_00000028);
  uStack_80 = in_stack_00000028;
  ppuVar1 = &puStack_c8;
  _objc_retainBlock();
  lVar11 = (long)_DAT_112771140;
  lVar2 = *(long *)(param_1 + lVar11);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,0,0);
  }
  else {
    puVar3 = PTR_PTR_1126d8270;
    _objc_alloc();
    func_0x00010c0093a0();
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112771130);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112771134);
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_107ecc1e4;
    puStack_d8 = &UNK_110a11820;
    _objc_retain(ppuVar1);
    ppuStack_d0 = ppuVar1;
    FUN_107eecc84(param_3,uVar9,uVar10,uVar5,0,puVar3,param_6,param_7,param_4,0,8,uVar8,
                  in_stack_00000020,&puStack_f0);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(ppuStack_d0);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ecbb70; end: 107ecc1e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecbb70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112771138);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf3e200(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed78e0(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf3e200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_107ef5cdc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0f98a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x107ecbe40;
    puStack_a8 = &UNK_110a117c0;
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uStack_70 = uVar7;
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uStack_a0 = uVar8;
    uStack_98 = uVar9;
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uStack_90 = uVar7;
    _objc_retain(uVar8);
    uStack_88 = uVar8;
    _objc_retain(param_2);
    uStack_80 = param_2;
    _objc_retain(param_3);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uStack_78 = param_3;
    _objc_retain(uVar7);
    uStack_68 = uVar7;
    FUN_107ef60f4(uVar5,uVar6,uVar2,&puStack_c0);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uStack_68);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_70);
  }
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107ecc1e4; end: 107ecc1ef;  */

void FUN_107ecc1e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ecc1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ecc1f0; end: 107ecc62f; -[SCCloudSyncSnapDocBasedEntryOperation commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecc1f0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7a20();
  func_0x00010c1da4e0(puVar4);
  func_0x00010c0b4ca0(uVar2);
  func_0x00010c1fce60(puVar4);
  puVar17 = PTR_PTR_1126d8330;
  func_0x00010bf3e580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar13 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar13 = 0;
  }
  _objc_retain(uVar13);
  _objc_release(uVar5);
  uVar7 = uVar13;
  func_0x000107efd37c(uVar13,puVar3,*(undefined1 *)(param_1 + _DAT_11277114c),puVar4,puVar17,param_4
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  uVar5 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar8);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112771134);
  func_0x00010c09d860(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x000107efd6ec(uVar5,uVar10,puVar3,uVar7,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar10);
  uVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar11 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar4);
  uVar7 = uVar9;
  if ((uVar11 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar9);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar16 = *(long *)(param_1 + _DAT_112771138);
  _objc_retain(lVar16);
  lVar12 = lVar16;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar16);
      }
      uVar19 = *(undefined8 *)(lVar18 * 8);
      uVar10 = uVar19;
      func_0x00010c09d860(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0b260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(uVar19);
      _objc_release(uVar10);
      lVar18 = lVar18 + 1;
    } while (lVar12 != lVar18);
    lVar12 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  puVar6 = puVar4;
  func_0x00010bf51e00();
  uVar9 = uVar7;
  puVar14 = puVar3;
  uVar11 = uVar8;
  FUN_107efd8bc(uVar7,puVar6,puVar3,uVar8,puVar17,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar6);
  puVar6 = puVar17;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(puVar17);
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar14);
    _objc_retain(uVar11);
    if (puVar14 != (undefined *)0x0) {
      _objc_retain(puVar14);
      puVar4 = puVar14;
      func_0x00010befcd40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar4);
          }
          uVar13 = uVar11;
          func_0x00010c13a8c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bb0c0();
          _objc_release(uVar13);
          puVar17 = puVar17 + 1;
        } while (puVar3 != puVar17);
        puVar3 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
      puVar4 = puVar14;
      func_0x00010bf6cfe0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar4);
          }
          func_0x0001080194b4(*(undefined8 *)((long)puVar17 * 8),uVar11);
          puVar17 = puVar17 + 1;
        } while (puVar3 != puVar17);
        puVar3 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
      puVar4 = puVar14;
      func_0x00010befcb20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar4);
          }
          uVar19 = *(undefined8 *)((long)puVar17 * 8);
          uVar10 = uVar19;
          func_0x00010bf0b260();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0b760();
          if ((uint)uVar19 < 0x16) {
            func_0x00010b697928();
          }
          uVar13 = uVar11;
          func_0x00010c13a860(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bb0c0();
          _objc_release(uVar13);
          _objc_release(uVar10);
          puVar17 = puVar17 + 1;
        } while (puVar3 != puVar17);
        puVar3 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
      puVar3 = puVar14;
      func_0x00010bf6cec0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      if (puVar4 != (undefined *)0x0) {
        uVar10 = *(undefined8 *)(param_3 + (long)_DAT_112771130);
        puVar3 = puVar14;
        func_0x00010bf6cec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108019660(uVar10,puVar3,uVar11);
        _objc_release(puVar3);
      }
      _objc_release(puVar14);
    }
    _objc_release(uVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      return;
    }
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uVar10 = 0xb;
    func_0x00010bafc234(0xb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(uVar10);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    lVar15 = *(long *)(puVar14 + _DAT_11277113c);
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar4);
    }
    else {
      func_0x00010c1d0640(puVar3);
    }
    _objc_release(lVar15);
    puVar6 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ecc630; end: 107ecc997; -[SCCloudSyncSnapDocBasedEntryOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecc630(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010befcd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        uVar7 = param_4;
        func_0x00010c13a8c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bb0c0();
        _objc_release(uVar7);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    }
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf6cfe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x0001080194b4(*(undefined8 *)(lVar8 * 8),param_4);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    }
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010befcb20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        uVar9 = *(undefined8 *)(lVar8 * 8);
        uVar7 = uVar9;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)uVar9 < 0x16) {
          func_0x00010b697928();
        }
        uVar9 = param_4;
        func_0x00010c13a860(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bb0c0();
        _objc_release(uVar9);
        _objc_release(uVar7);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    }
    _objc_release(lVar1);
    lVar2 = param_3;
    func_0x00010bf6cec0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar7 = *(undefined8 *)(param_1 + _DAT_112771130);
      lVar2 = param_3;
      func_0x00010bf6cec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108019660(uVar7,lVar2,param_4);
      _objc_release(lVar2);
    }
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar7 = 0xb;
  func_0x00010bafc234(0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(uVar7);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar5);
  lVar6 = *(long *)(param_3 + _DAT_11277113c);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c1d0640(puVar4);
  }
  _objc_release(lVar6);
  puVar5 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107ecc998; end: 107eccb07; -[SCCloudSyncSnapDocBasedEntryOperation logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecc998(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = 0xb;
  func_0x00010bafc234(0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec2238);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112771130));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c18);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_11277112c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  lVar4 = *(long *)(param_1 + _DAT_11277113c);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar4);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107eccb08; end: 107eccb0f; -[SCCloudSyncSnapDocBasedEntryOperation doesNotRequireMediaUpload] */

undefined8 FUN_107eccb08(void)

{
  return 0;
}



/* Entry: 107eccb10; end: 107eccb17; -[SCCloudSyncSnapDocBasedEntryOperation allMediaUploadsCompleteWithBoltDataUploader:] */

undefined8 FUN_107eccb10(void)

{
  return 0;
}



/* Entry: 107eccb18; end: 107eccb1f; -[SCCloudSyncSnapDocBasedEntryOperation requiresSyncStatusUpdate] */

undefined8 FUN_107eccb18(void)

{
  return 1;
}



/* Entry: 107eccb20; end: 107eccb27; -[SCCloudSyncSnapDocBasedEntryOperation eligibleForOutOfOrderExecution] */

undefined8 FUN_107eccb20(void)

{
  return 1;
}



/* Entry: 107eccb28; end: 107eccb2f; -[SCCloudSyncSnapDocBasedEntryOperation needRunImmediately] */

undefined8 FUN_107eccb28(void)

{
  return 0;
}



/* Entry: 107eccb30; end: 107ecce87; -[SCCloudSyncSnapDocBasedEntryOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_107eccb30(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_1 + _DAT_112771140);
    _objc_retain(lVar11);
    lVar8 = lVar11;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar11);
        }
        puVar3 = PTR_PTR_1126af4d0;
        uVar2 = *(undefined8 *)(lVar10 * 8);
        func_0x00010c23f220(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar2);
        if (puVar3 != (undefined *)0x0) {
          func_0x00010befa120(puVar6);
        }
        _objc_release(puVar3);
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      lVar8 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    puVar3 = PTR_PTR_1126bc800;
    func_0x00010bfa7180();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bc808;
    func_0x00010bfa6fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    _objc_retain(puVar4);
    _objc_retain(param_3);
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    _objc_retain(puVar3);
    func_0x00010c0f8520(param_4);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return (undefined *)0x0;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_3 + 0x20);
  func_0x00010bf529e0();
  puVar1 = PTR_PTR_1126bc7f8;
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf51e00();
    func_0x00010bf6bf20(puVar1);
    _objc_release(uVar5);
  }
  puVar1 = PTR_PTR_1126bc828;
  if (*(long *)(param_3 + 0x28) != 0) {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bec0(puVar1);
    _objc_release(puVar6);
  }
  lVar7 = *(long *)(param_3 + 0x30);
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (lVar7 != 0) {
    puVar1 = PTR_PTR_1126bc820;
    func_0x00010bf6bea0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(puVar1 + 0x20);
  _objc_retain(lVar11);
  lVar7 = lVar11;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar11);
      }
      func_0x0001080194b4(*(undefined8 *)(lVar10 * 8),*(undefined8 *)(puVar1 + 0x28));
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
    lVar7 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  lVar7 = *(long *)(puVar1 + 0x30);
  func_0x00010bf529e0();
  puVar6 = (undefined *)0x0;
  if (lVar7 != 0) {
    puVar6 = *(undefined **)(*(long *)(puVar1 + 0x38) + (long)_DAT_112771130);
    func_0x000108019660(puVar6,*(undefined8 *)(puVar1 + 0x30),*(undefined8 *)(puVar1 + 0x28));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d8278;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(puVar6 + _DAT_11277113c);
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079400(puVar6);
  func_0x00010c23f7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(lVar7 + _DAT_112771138);
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 107ecce88; end: 107eccf77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecce88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar3 = PTR_PTR_1126bc7f8;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    func_0x00010bf6bf20(puVar3);
    _objc_release(uVar2);
  }
  puVar3 = PTR_PTR_1126bc828;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bec0(puVar3);
    _objc_release(puVar6);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126bc820;
    func_0x00010bf6bea0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(puVar3 + 0x20);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar7);
      }
      func_0x0001080194b4(*(undefined8 *)(lVar8 * 8),*(undefined8 *)(puVar3 + 0x28));
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    lVar1 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  lVar4 = *(long *)(puVar3 + 0x30);
  func_0x00010bf529e0();
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = *(long *)(*(long *)(puVar3 + 0x38) + (long)_DAT_112771130);
    func_0x000108019660(lVar1,*(undefined8 *)(puVar3 + 0x30),*(undefined8 *)(puVar3 + 0x28));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d8278;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(lVar1 + _DAT_11277113c);
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079400(lVar1);
  func_0x00010c23f7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(lVar4 + _DAT_112771138);
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107eccf78; end: 107ecd093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eccf78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      func_0x0001080194b4(*(undefined8 *)(lVar7 * 8),*(undefined8 *)(param_1 + 0x28));
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + (long)_DAT_112771130);
    func_0x000108019660(lVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d8278;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(lVar2 + _DAT_11277113c);
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079400(lVar2);
  func_0x00010c23f7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    puVar5 = *(undefined **)(lVar1 + _DAT_112771138);
    _objc_retain(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107ecd094; end: 107ecd19b; -[SCCloudSyncSnapDocBasedEntryOperation changedSnapContextsWithEntryUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecd094(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126d8278;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_11277113c);
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112771130);
  func_0x00010c079400(param_1);
  func_0x00010c23f7c0(puVar2,param_2,0,lVar1,0,uVar4,8,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = *(undefined **)(lVar1 + _DAT_112771138);
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ecd19c; end: 107ecd1cb; -[SCCloudSyncSnapDocBasedEntryOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecd19c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771138);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ecd1cc; end: 107ecd1d3; -[SCCloudSyncSnapDocBasedEntryOperation isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107ecd1cc(void)

{
  return 0;
}



/* Entry: 107ecd1d4; end: 107ecd823; -[SCCloudSyncSnapDocBasedEntryOperation _updateEntryFromNetworker:dataObjectContext:cloudFS:addAssetsResponse:snapsUploadInfo:snapUploadRequestInfoMap:queue:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecd1d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong auStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112771140;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar18 = PTR_PTR_1126bc800;
    func_0x00010bfa7180();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar18 = *(undefined **)(param_1 + _DAT_112771134);
    _objc_retain(puVar18);
  }
  puVar3 = puVar18;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  auStack_f8[0] = 0;
  puVar3 = puVar4;
  FUN_107f04554(puVar4,param_6,param_5,auStack_f8);
  _objc_retainAutoreleasedReturnValue();
  uStack_190 = auStack_f8[0];
  _objc_retain(auStack_f8[0]);
  if (puVar3 == (undefined *)0x0) {
    uVar19 = uStack_190;
    (**(code **)(param_10 + 0x10))(param_10);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar2 = *(long *)(param_1 + lVar17);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = *(long *)(param_1 + lVar17);
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        uVar19 = 0;
        puVar14 = puVar3;
        do {
          uVar13 = uStack_190;
          puVar7 = *(undefined **)(param_1 + lVar17);
          func_0x00010c0dfd40(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar7;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar7);
          func_0x00010befa120(puVar5);
          lVar2 = param_8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c0c6f20();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf7ef60();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar2;
          func_0x00010c0efe20(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bf7ef60();
          _objc_retainAutoreleasedReturnValue();
          uStack_100 = uStack_190;
          puVar3 = puVar14;
          FUN_107f04064(puVar14,uVar19,lVar10,lVar12,param_5,&uStack_100);
          _objc_retainAutoreleasedReturnValue();
          uStack_190 = uStack_100;
          _objc_retain();
          _objc_release(uVar13);
          _objc_release(puVar14);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(lVar9);
          if (puVar3 == (undefined *)0x0) {
            uVar19 = uStack_190;
            (**(code **)(param_10 + 0x10))(param_10);
            goto LAB_107ecd72c;
          }
          _objc_release(lVar2);
          _objc_release(puVar8);
          uVar19 = uVar19 + 1;
          uVar13 = *(ulong *)(param_1 + lVar17);
          func_0x00010bf529e0();
          puVar14 = puVar3;
        } while (uVar19 < uVar13);
      }
      puVar14 = PTR_PTR_1126af4d0;
      func_0x00010bfa74e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      puVar8 = puVar14;
      func_0x00010bf52a60();
      if (puVar8 != (undefined *)0x0) {
        lVar2 = *plStack_130;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar2) {
              _objc_enumerationMutation(puVar14);
            }
            uVar15 = *(undefined8 *)(lStack_138 + (long)puVar7 * 8);
            func_0x00010c241220(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6);
            _objc_release(uVar15);
            puVar7 = puVar7 + 1;
          } while (puVar8 != puVar7);
          puVar8 = puVar14;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(puVar14);
    }
    uVar19 = (ulong)(*(long *)(param_1 + _DAT_112771150) != 0);
    puVar14 = puVar5;
    func_0x00010bf51e00(puVar5);
    puVar8 = puVar6;
    func_0x00010bf51e00(puVar6);
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_107ecd824;
    puStack_170 = &UNK_110a11880;
    _objc_retain(param_10);
    lStack_150 = param_10;
    puStack_168 = puVar3;
    _objc_retain(param_6);
    uStack_160 = param_6;
    _objc_retain(param_8);
    lStack_158 = param_8;
    _objc_retain(param_11);
    uStack_148 = param_11;
    _objc_retain(puVar3);
    FUN_107f033dc(puVar1,uVar19,param_6,puVar3,puVar14,puVar8,param_7,param_3,param_9,&puStack_188);
    _objc_release(puVar8);
    _objc_release(puVar14);
    _objc_release(uStack_148);
    _objc_release(lStack_158);
    _objc_release(uStack_160);
    _objc_release(puStack_168);
    puVar8 = puVar3;
    lVar2 = lStack_150;
LAB_107ecd72c:
    _objc_release(lVar2);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(uStack_190);
  _objc_release(puVar4);
  _objc_release(puVar18);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(uVar19);
    uVar13 = uVar19;
    func_0x00010c261740();
    if ((uVar13 & 1) == 0) {
      lVar2 = *(long *)(param_3 + 0x38);
      uVar13 = uVar19;
      func_0x00010bf987e0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar19);
      (**(code **)(lVar2 + 0x10))(lVar2,uVar13);
    }
    else {
      uVar16 = uVar19;
      func_0x00010bf97760(uVar19);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar19);
      uVar13 = uVar16;
      func_0x00010c0d3c80(uVar16);
      _objc_release(uVar16);
      uVar15 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010bf63640(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar13);
      _objc_release(uVar15);
      lVar2 = *(long *)(param_3 + 0x28);
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        uVar15 = *(undefined8 *)(param_3 + 0x28);
        FUN_107f04b88(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar13);
        _objc_release(uVar15);
      }
      lVar2 = *(long *)(param_3 + 0x30);
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        func_0x00010c1d0640(uVar13);
      }
      lVar2 = *(long *)(param_3 + 0x40);
      uVar19 = uVar13;
      func_0x00010bf51e00(uVar13);
      (**(code **)(lVar2 + 0x10))(lVar2,uVar19);
      _objc_release(uVar19);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar13);
    return;
  }
  return;
}



/* Entry: 107ecd824; end: 107ecd987;  */

void FUN_107ecd824(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c261740();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    uVar1 = param_2;
    func_0x00010bf987e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    (**(code **)(lVar4 + 0x10))(lVar4,uVar1);
  }
  else {
    uVar2 = param_2;
    func_0x00010bf97760(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar1 = uVar2;
    func_0x00010c0d3c80(uVar2);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf63640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1);
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      FUN_107f04b88(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar1);
      _objc_release(uVar3);
    }
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      func_0x00010c1d0640(uVar1);
    }
    lVar4 = *(long *)(param_1 + 0x40);
    uVar2 = uVar1;
    func_0x00010bf51e00(uVar1);
    (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ecd988; end: 107ecda47; -[SCCloudSyncSnapDocBasedEntryOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecd988(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771154,0);
  _objc_storeStrong(param_1 + _DAT_112771150,0);
  _objc_storeStrong(param_1 + _DAT_112771148,0);
  _objc_storeStrong(param_1 + _DAT_112771138,0);
  _objc_storeStrong(param_1 + _DAT_112771134,0);
  _objc_storeStrong(param_1 + _DAT_112771144,0);
  _objc_storeStrong(param_1 + _DAT_112771140,0);
  _objc_storeStrong(param_1 + _DAT_11277113c,0);
  _objc_storeStrong(param_1 + _DAT_112771130,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277112c,0);
  return;
}



/* Entry: 107ecda48; end: 107ecdb8f; -[SCCloudUpdateEntryHighlightsOperation initWithProfile:entryId:highlightedSnapIdSet:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ecda48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fb990;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771158);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112771158) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11277115c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771160);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771160) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771164);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771164) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771168);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771168) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ecdb90; end: 107ecdb97; -[SCCloudUpdateEntryHighlightsOperation type] */

undefined8 FUN_107ecdb90(void)

{
  return 7;
}



/* Entry: 107ecdb98; end: 107ecdb9f; -[SCCloudUpdateEntryHighlightsOperation analyticsType] */

undefined8 FUN_107ecdb98(void)

{
  return 5;
}



/* Entry: 107ecdba0; end: 107ecdbcf; -[SCCloudUpdateEntryHighlightsOperation requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecdba0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771158);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


