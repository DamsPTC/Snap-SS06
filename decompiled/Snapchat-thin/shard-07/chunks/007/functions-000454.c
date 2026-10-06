/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10585b228; end: 10585b313; -[SCMediaCache addCallback:forKey:] */

void FUN_10585b228(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010c2be7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2be7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_1);
  }
  uVar3 = param_3;
  _objc_retainBlock(param_3);
  func_0x00010befa120(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10585b314; end: 10585b4b3; -[SCMediaCache cache:willEvictObject:] */

void FUN_10585b314(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010c0e03c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) goto LAB_10585b468;
  uVar1 = param_1;
  func_0x00010c0e03c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c296640(param_1,param_2,uVar2,1);
  uVar4 = param_1;
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c086e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_10585b3ec;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
  }
  else {
LAB_10585b3ec:
    uVar1 = param_1;
    func_0x00010c086e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((int)uVar3 == 0) goto LAB_10585b468;
    func_0x00010bf9a680(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7440(param_1,param_2,uVar4,uVar2);
  }
  _objc_release(uVar4);
LAB_10585b468:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10585b4b4; end: 10585b897; -[SCMediaCache writePersistentKeysToDisk] */

void FUN_10585b4b4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  lVar12 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bffc4a0();
  _objc_release(lVar12);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar3 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar4 = param_1;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar5;
      func_0x00010c0f9f00();
      if ((int)lVar4 != 0) {
        lVar4 = lVar5;
        func_0x00010bfacf40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar4 != 0) {
          func_0x00010bf93820(lVar5);
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar5;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(puVar6);
          lVar4 = lVar5;
          func_0x00010bf3cd60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar6 = puVar7;
          if (lVar4 != 0) {
            lVar4 = lVar5;
            func_0x00010bf3cd60(lVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14ca00(puVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(lVar4);
          }
          lVar4 = lVar5;
          func_0x00010bfacf40(lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar4;
          func_0x00010c0899c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(lVar8);
          _objc_release(lVar4);
          _objc_release(puVar6);
        }
      }
      _objc_release(lVar5);
      lVar13 = lVar13 + 1;
    } while (lVar12 != lVar13);
    lVar12 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lRam00000001136c0e68 != -1) {
    func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
  }
  puVar6 = puRam00000001136c0e60;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar2);
  func_0x00010c1426e0(param_1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c14e020(*(undefined8 *)(puVar2 + 0x20));
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c16b7e0();
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar6 = puVar2;
  func_0x00010c086a40();
  lVar12 = lRam00000001136c0e68;
  if ((int)puVar6 == 0) {
    _objc_retain(puVar7);
    if (lVar12 != -1) {
      func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
    }
    puVar6 = puRam00000001136c0e60;
    func_0x00010c25ce00(puRam00000001136c0e60);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
  }
  else {
    _objc_retain(puVar2);
    _objc_sync_enter(puVar2);
    puVar9 = puVar2;
    func_0x00010bf0e840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010bfacf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (lRam00000001136c0e68 != -1) {
        func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
      }
      puVar6 = puRam00000001136c0e60;
      func_0x00010c25ce00(puRam00000001136c0e60);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
    }
    else {
      puVar6 = puVar9;
      func_0x00010bfacf40(puVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar9);
    _objc_sync_exit(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10585b898; end: 10585b97b;  */

void FUN_10585b898(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c14e020(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),1);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c16b7e0();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar2 = puVar1;
  func_0x00010c086a40();
  lVar6 = lRam00000001136c0e68;
  if ((int)puVar2 == 0) {
    _objc_retain(puVar5);
    if (lVar6 != -1) {
      func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
    }
    puVar2 = puRam00000001136c0e60;
    func_0x00010c25ce00(puRam00000001136c0e60);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
  }
  else {
    _objc_retain(puVar1);
    _objc_sync_enter(puVar1);
    puVar3 = puVar1;
    func_0x00010bf0e840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfacf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (lRam00000001136c0e68 != -1) {
        func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
      }
      puVar2 = puRam00000001136c0e60;
      func_0x00010c25ce00(puRam00000001136c0e60);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      puVar2 = puVar3;
      func_0x00010bfacf40(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_sync_exit(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10585b97c; end: 10585bb2f; -[SCMediaCache cachePathForKey:] */

void FUN_10585b97c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c086a40();
  lVar2 = lRam00000001136c0e68;
  if ((int)lVar1 == 0) {
    _objc_retain(param_3);
    if (lVar2 != -1) {
      func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
    }
    lVar2 = lRam00000001136c0e60;
    func_0x00010c25ce00(lRam00000001136c0e60);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_3;
  }
  else {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    lVar1 = param_1;
    func_0x00010bf0e840();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfacf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (lRam00000001136c0e68 != -1) {
        func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
      }
      lVar2 = lRam00000001136c0e60;
      func_0x00010c25ce00(lRam00000001136c0e60);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      lVar2 = lVar1;
      func_0x00010bfacf40(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    _objc_sync_exit(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10585bb30; end: 10585bbcf; -[SCMediaCache attributesItemForKey:] */

void FUN_10585bb30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10585bbd0; end: 10585bc77; -[SCMediaCache keyShouldBeEncrypted:] */

long FUN_10585bbd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010bf0e840(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf93820(lVar1);
  }
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10585bc78; end: 10585bca7; -[SCMediaCache mediaEncryptionKey] */

void FUN_10585bc78(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110ea22b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110ea22b8);
  return;
}



/* Entry: 10585bca8; end: 10585bcd7; -[SCMediaCache mediaInitializationVectorKey] */

void FUN_10585bca8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dc1778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dc1778);
  return;
}



/* Entry: 10585bcd8; end: 10585bce7; -[SCMediaCache keysBeingWrittenToDisk] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10585bcd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272acf4);
}



/* Entry: 10585bce8; end: 10585bcf7; -[SCMediaCache writtenToDiskCallbacks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10585bce8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272acf8);
}



/* Entry: 10585bcf8; end: 10585bd07; -[SCMediaCache resetMediaStatePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10585bcf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272ace8);
}



/* Entry: 10585bd08; end: 10585bd47; -[SCMediaCache setResetMediaStatePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585bd08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272ace8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10585bd48; end: 10585bdb7; -[SCMediaCache .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585bd48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ace8,0);
  _objc_storeStrong(param_1 + _DAT_11272acf8,0);
  _objc_storeStrong(param_1 + _DAT_11272acf4,0);
  _objc_storeStrong(param_1 + _DAT_11272acf0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272acec,0);
  return;
}



/* Entry: 10585bdb8; end: 10585bdc3; -[SCImageProcessBasicCommandProvider identityRGBCommand] */

void FUN_10585bdb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26c8,PTR_s_sharedCommand_112668830);
  return;
}



/* Entry: 10585bdc4; end: 10585bdcf; -[SCImageProcessBasicCommandProvider identityYUVCommand] */

void FUN_10585bdc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf440,PTR_s_sharedCommand_112668830);
  return;
}



/* Entry: 10585bdd0; end: 10585bddb; -[SCImageProcessBasicCommandProvider grayscaleRGBCommand] */

void FUN_10585bdd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf448,PTR_s_sharedCommand_112668830);
  return;
}



/* Entry: 10585bddc; end: 10585bde7; -[SCImageProcessBasicCommandProvider grayscaleRGBCPUCommand] */

void FUN_10585bddc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf450,PTR_s_sharedCommand_112668830);
  return;
}



/* Entry: 10585bde8; end: 10585bdf3; -[SCImageProcessBasicCommandProvider instasnapRGBCommand] */

void FUN_10585bde8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf458,PTR_s_sharedCommand_112668830);
  return;
}



/* Entry: 10585bdf4; end: 10585bdff; -[SCImageProcessBasicCommandProvider instasnapRGBCPUCommand] */

void FUN_10585bdf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf460,PTR_s_sharedCommand_112668830);
  return;
}



/* Entry: 10585be00; end: 10585be0b; -[SCImageProcessBasicCommandProvider missEtikateRGBCommand] */

void FUN_10585be00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf468,PTR_s_sharedCommand_112668830);
  return;
}



/* Entry: 10585be0c; end: 10585be17; -[SCImageProcessBasicCommandProvider missEtikateRGBCPUCommand] */

void FUN_10585be0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf470,PTR_s_sharedCommand_112668830);
  return;
}



/* Entry: 10585be18; end: 10585be23; -[SCImageProcessBasicCommandProvider lutRGBCommandWithLutName:] */

void FUN_10585be18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf478,PTR_s_sharedCommandWithLookupName__112668838);
  return;
}



/* Entry: 10585be24; end: 10585be2f; -[SCImageProcessBasicCommandProvider lutRGBCPUCommandWithLutName:] */

void FUN_10585be24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf480,PTR_s_sharedCommandWithLookupName__112668838);
  return;
}



/* Entry: 10585be30; end: 10585be3b; -[SCImageProcessBasicCommandProvider blendRGBCommandWithImage:outputSize:] */

void FUN_10585be30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf488,PTR_s_commandWithImage_outputSize__1125ae118);
  return;
}



/* Entry: 10585be3c; end: 10585be47; -[SCImageProcessBasicCommandProvider blendRGBCPUCommandWithImage:outputSize:] */

void FUN_10585be3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf490,PTR_s_commandWithImage_outputSize__1125ae118);
  return;
}



/* Entry: 10585be48; end: 10585be53; -[SCImageProcessBasicCommandProvider mosaicRGBCommandWithImage:outputSize:] */

void FUN_10585be48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf498,PTR_s_commandWithImage_outputSize__1125ae118);
  return;
}



/* Entry: 10585be54; end: 10585be5f; -[SCImageProcessBasicCommandProvider mosaicRGBCPUCommandWithImage:outputSize:] */

void FUN_10585be54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf4a0,PTR_s_commandWithImage_outputSize__1125ae118);
  return;
}



/* Entry: 10585be60; end: 10585beab; -[SCImageProcessBasicCommandProvider compoundCommandWithCommands:] */

void FUN_10585be60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b26e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfffdc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585beac; end: 10585bf27; -[SCImageProcessBasicCommandProvider pairedCommandWithLeftCommand:rightCommand:offset:] */

void FUN_10585beac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf4a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c0220c0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585bf28; end: 10585bfcb; -[SCImageProcessBasicCommandProvider glRenderPassWithGLCommand:correspondingCPUCommand:inputBufferIds:outputBufferIds:] */

void FUN_10585bf28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf4b0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016a80();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585bfcc; end: 10585c053; -[SCImageProcessGLWrapperServicesFactoryEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585bfcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108b8490);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf4c0;
  _objc_alloc(PTR_PTR_1126bf4c0);
  func_0x00010c01ccc0();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272ad00);
  }
  func_0x00010bf9d660(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10585c054; end: 10585c06f;  */

void FUN_10585c054(void)

{
  _objc_opt_new(PTR_PTR_1126bf4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10585c070; end: 10585c0ab; -[SCImageProcessGLWrapperServicesFactoryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585c070(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ad00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272acfc);
  return;
}



/* Entry: 10585c0ac; end: 10585c277; -[SCImageProcessMultiImagesRenderer startRunningWithInputs:commands:viewportTransform:backgroundColors:renderedImagesHandler:] */

void FUN_10585c0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10585c278;
  puStack_78 = &UNK_1108b84b0;
  puStack_70 = puVar1;
  puStack_68 = puVar2;
  _objc_retain();
  _objc_retain(puVar1);
  func_0x00010bf97e80(param_3,param_2,&puStack_90);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126bf4c8;
  _objc_alloc(PTR_PTR_1126bf4c8);
  puVar4 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  uStack_b8 = param_5[1];
  uStack_c0 = *param_5;
  uStack_a8 = param_5[3];
  uStack_b0 = param_5[2];
  uStack_98 = param_5[5];
  uStack_a0 = param_5[4];
  func_0x00010c03c6e0(puVar3,param_2,puVar4,puVar5,puVar6,param_4,&uStack_c0,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c142ae0(puVar3,param_2,param_7);
  _objc_release(param_7);
  _objc_release(puVar3);
  _objc_release(puStack_68);
  _objc_release(puStack_70);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10585c278; end: 10585c333;  */

void FUN_10585c278(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_retain(0);
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    _objc_retain(lVar1);
    if (lVar1 != 0) {
      lVar3 = *(long *)(param_2 + 0x10);
      _objc_retain(lVar3);
      _objc_release(lVar3);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = *(undefined8 *)(param_2 + 8);
        _objc_retain(uVar4);
        func_0x00010befa120(uVar2);
        _objc_release(uVar4);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        uVar4 = *(undefined8 *)(param_2 + 0x10);
        _objc_retain(uVar4);
        func_0x00010befa120(uVar2);
        _objc_release(uVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10585c334; end: 10585c44b; -[SCImageProcessOutputRendererServicesFactoryEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585c334(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf4d8;
  _objc_alloc(PTR_PTR_1126bf4d8);
  func_0x00010c03e280();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272ad0c);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10585c44c; end: 10585c48b;  */

void FUN_10585c44c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10585c48c; end: 10585c507; -[SCImageProcessOutputRendererServicesFactoryEntryPoint _createOutputRendererFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585c48c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bf4e0;
  _objc_alloc(PTR_PTR_1126bf4e0);
  param_1 = param_1 + _DAT_11272ad04;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfe8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ccc0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585c508; end: 10585c54f; -[SCImageProcessOutputRendererServicesFactoryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585c508(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ad0c,0);
  _objc_destroyWeak(param_1 + _DAT_11272ad04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ad08);
  return;
}



/* Entry: 10585c550; end: 10585c5c3; -[SCImageProcessPipelineOutputRendererFactoryImpl initWithImageProcessGLWrapper:] */

undefined1 * FUN_10585c550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea9f8;
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



/* Entry: 10585c5c4; end: 10585c643; -[SCImageProcessPipelineOutputRendererFactoryImpl createPipelinePlaybackRendererWithImageProcessGlLayer:] */

void FUN_10585c5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bf4e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cce0(puVar1,param_2,uVar2,param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585c644; end: 10585c64f; -[SCImageProcessPipelineOutputRendererFactoryImpl .cxx_destruct] */

void FUN_10585c644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10585c650; end: 10585c6d3; -[SCImageProcessRenderSessionStaticCommandManagerFactoryImpl getManagerWithQueue:outputCommands:midOutputCommands:] */

void FUN_10585c650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf4f0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03c700();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585c6d4; end: 10585c747; -[SCImageProcessRenderingSessionFactoryImpl initWithAudioSessionServices:cofEngine:] */

undefined1 * FUN_10585c6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eaa00;
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



/* Entry: 10585c748; end: 10585c7c7; -[SCImageProcessRenderingSessionFactoryImpl createColorFilterSessionWithCommandManager:] */

void FUN_10585c748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bf4f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c620(puVar1,param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585c7c8; end: 10585c90b; -[SCImageProcessRenderingSessionFactoryImpl createVideoPlaybackSessionWithPlayer:asset:layer:orientation:useHighFrameRate:isPlaybackBufferMonitoringEnabled:videoPlaybackLogger:commandManager:isSpectaclesMedia:isOpera:] */

void FUN_10585c7c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bf500;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15fac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c5e0(puVar1,param_2,puVar2,uVar3,param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585c90c; end: 10585c917; -[SCImageProcessRenderingSessionFactoryImpl .cxx_destruct] */

void FUN_10585c90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10585c918; end: 10585c99b; -[SCImageProcessSingleImageRenderer initWithUseOutputTextureEnable:circumstanceEngine:] */

undefined1 *
FUN_10585c918(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eaa08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10585c99c; end: 10585cae7; -[SCImageProcessSingleImageRenderer startRunningWithImage:outputSize:commands:orientation:viewportTransform:commandMapper:presentationTime:renderedImageHandler:] */

void FUN_10585c99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR_PTR_1126bf4d0;
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c22bec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf508;
  _objc_alloc(PTR_PTR_1126bf508);
  uStack_98 = param_8[1];
  uStack_a0 = *param_8;
  uStack_88 = param_8[3];
  uStack_90 = param_8[2];
  uStack_78 = param_8[5];
  uStack_80 = param_8[4];
  func_0x00010c03c6a0(param_1,param_2);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  uStack_98 = param_10[1];
  uStack_a0 = *param_10;
  uStack_90 = param_10[2];
  func_0x00010c2505e0(puVar2,param_4,param_11,&uStack_a0);
  _objc_release(param_11);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10585cae8; end: 10585cc9f; -[SCImageProcessSingleImageRenderer startRunningWithImage:outputSize:inputId:renderPasses:orientation:viewportTransform:cpuTransform:presentationTime:] */

void FUN_10585cae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
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
  
  puVar1 = PTR_PTR_1126bf4d0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c22bec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf510;
  _objc_alloc(PTR_PTR_1126bf510);
  uStack_98 = param_9[1];
  uStack_a0 = *param_9;
  uStack_88 = param_9[3];
  uStack_90 = param_9[2];
  uStack_78 = param_9[5];
  uStack_80 = param_9[4];
  uStack_c8 = param_10[1];
  uStack_d0 = *param_10;
  uStack_b8 = param_10[3];
  uStack_c0 = param_10[2];
  uStack_a8 = param_10[5];
  uStack_b0 = param_10[4];
  func_0x00010c03c6c0(param_1,param_2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10585cca0;
  puStack_e0 = &UNK_11086dbb8;
  uStack_98 = param_11[1];
  uStack_a0 = *param_11;
  uStack_90 = param_11[2];
  puStack_d8 = puVar3;
  _objc_retain();
  func_0x00010c2505e0(puVar2,param_4,&puStack_f8,&uStack_a0);
  puVar4 = puVar3;
  func_0x00010bfbc3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_d8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10585cca0; end: 10585ccb3;  */

void FUN_10585cca0(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 10585ccb4; end: 10585ccbf; -[SCImageProcessSingleImageRenderer .cxx_destruct] */

void FUN_10585ccb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10585ccc0; end: 10585ccff;  */

void FUN_10585ccc0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeafa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10585cd00; end: 10585cd9b; -[SCMPAudioProcessingServiceProvider _createAudioProcessingSessionFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585cd00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bf520;
  _objc_alloc(PTR_PTR_1126bf520);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11272ad24;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c26b280(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051060(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585cd9c; end: 10585cdd3; -[SCMPAudioProcessingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585cd9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ad24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ad20);
  return;
}



/* Entry: 10585cdd4; end: 10585cdef;  */

void FUN_10585cdd4(void)

{
  _objc_opt_new(PTR_PTR_1126bf528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10585cdf0; end: 10585cdff; -[SCMPBasicCommandProvidingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585cdf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ad28);
  return;
}



/* Entry: 10585ce00; end: 10585ce3f;  */

void FUN_10585ce00(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10585ce40; end: 10585ce4b; -[SCMPGlobalQueueServiceProvider _createImageProcessQueue] */

void FUN_10585ce40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22bed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf4d0,PTR_s_sharedQueue_1126689d8);
  return;
}



/* Entry: 10585ce4c; end: 10585cea7; -[SCMPGlobalQueueServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585ce4c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ad2c);
  _objc_destroyWeak(param_1 + _DAT_11272ad30);
  _objc_destroyWeak(param_1 + _DAT_11272ad34);
  _objc_destroyWeak(param_1 + _DAT_11272ad3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ad38);
  return;
}



/* Entry: 10585cea8; end: 10585cf03; -[SCMPMultiImagesRendererServiceProvider provide] */

void FUN_10585cea8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108b85d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf548;
  _objc_alloc(PTR_PTR_1126bf548);
  func_0x00010c02ca20();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10585cf04; end: 10585cf1f;  */

void FUN_10585cf04(void)

{
  _objc_opt_new(PTR_PTR_1126bf540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10585cf20; end: 10585cf2f; -[SCMPMultiImagesRendererServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585cf20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ad40);
  return;
}



/* Entry: 10585cf30; end: 10585d03f; -[SCMPRenderingSessionServiceProvider provide] */

void FUN_10585cf30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bf560;
  _objc_alloc(PTR_PTR_1126bf560);
  func_0x00010c03e340();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10585d040; end: 10585d0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585d040(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126bf550;
    _objc_alloc(PTR_PTR_1126bf550);
    lVar1 = param_1 + _DAT_11272ad44;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11272ad48;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5620(puVar4,param_2,lVar1,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10585d100; end: 10585d11b;  */

void FUN_10585d100(void)

{
  _objc_opt_new(PTR_PTR_1126bf558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10585d11c; end: 10585d15f; -[SCMPRenderingSessionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585d11c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ad48);
  _objc_destroyWeak(param_1 + _DAT_11272ad44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ad4c);
  return;
}



/* Entry: 10585d160; end: 10585d23f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585d160(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_11272ad54;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c06dac0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126bf568;
    _objc_alloc(PTR_PTR_1126bf568);
    lVar1 = param_1;
    func_0x00010bf39940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a620(puVar4,param_2,lVar3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10585d240; end: 10585d25f; -[SCMPSingleImageRendererServicesServiceProvider circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585d240(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272ad58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10585d260; end: 10585d273; -[SCMPSingleImageRendererServicesServiceProvider setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585d260(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272ad58,param_3);
  return;
}



/* Entry: 10585d274; end: 10585d2b7; -[SCMPSingleImageRendererServicesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585d274(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ad58);
  _objc_destroyWeak(param_1 + _DAT_11272ad54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ad50);
  return;
}



/* Entry: 10585d2b8; end: 10585d34b; -[SCAudioProcessServiceProvider provide] */

void FUN_10585d2b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10585d34c;
  puStack_30 = &UNK_1108b8690;
  puVar1 = PTR_PTR_1126ae720;
  uStack_28 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf518;
  _objc_alloc(PTR_PTR_1126bf518);
  func_0x00010bff5400();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10585d34c; end: 10585d3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585d34c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bf520;
  _objc_alloc(PTR_PTR_1126bf520);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20) + (long)_DAT_11272ad60;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c26b280(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051060(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585d3f4; end: 10585d42b; -[SCAudioProcessServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585d3f4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ad60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ad5c);
  return;
}



/* Entry: 10585d42c; end: 10585d49f; -[SCAudioProcessingSessionFactoryImpl initWithTemporaryFileWriter:] */

undefined1 * FUN_10585d42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eaa10;
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



/* Entry: 10585d4a0; end: 10585d513; -[SCAudioProcessingSessionFactoryImpl createAudioMixProcessingSessionWithAudioAssetTrack:processingWrapper:usageType:] */

void FUN_10585d4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf578;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff5220();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585d514; end: 10585d56f; -[SCAudioProcessingSessionFactoryImpl createReverseAudioProcessingSessionWithVideoAsset:] */

void FUN_10585d514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf580;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585d570; end: 10585d57b; -[SCAudioProcessingSessionFactoryImpl .cxx_destruct] */

void FUN_10585d570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10585d57c; end: 10585d643; -[SCAudioMixProcessingSession initWithAudioAssetTrack:processingWrapper:usageType:] */

undefined1 *
FUN_10585d57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eaa18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10585d644; end: 10585d7f3; -[SCAudioMixProcessingSession audioMix] */

void FUN_10585d644(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puStack_c8;
  undefined8 uStack_80;
  undefined4 uStack_74;
  long lStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 == 0) {
    puVar2 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
    func_0x00010bf0f320();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      param_3 = *(undefined8 **)(param_1 + 8);
      unaff_x21 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590;
      func_0x00010bf0f3c0();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x21 != (undefined *)0x0) {
        uStack_74 = 0;
        pcStack_68 = FUN_10585d7f4;
        pcStack_60 = FUN_10585d908;
        pcStack_58 = FUN_10585d97c;
        pcStack_50 = FUN_10585da30;
        pcStack_48 = FUN_10585da4c;
        iVar1 = (int)*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        param_2 = &uStack_74;
        param_3 = (undefined8 *)0x1;
        lStack_70 = param_1;
        _MTAudioProcessingTapCreate();
        if (iVar1 == 0) {
          func_0x00010c16c4a0(unaff_x21);
          _CFRelease(uStack_80);
          unaff_x22 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_40 = unaff_x21;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          param_3 = unaff_x22;
          func_0x00010c1ad580(puVar2);
          _objc_release(unaff_x22);
          _objc_retain(puVar2);
          uVar3 = *(undefined8 *)(param_1 + 0x28);
          *(undefined **)(param_1 + 0x28) = puVar2;
          _objc_release(uVar3);
        }
      }
      _objc_release(unaff_x21);
    }
    _objc_release(puVar2);
    lVar7 = *(long *)(param_1 + 0x28);
  }
  lVar4 = lVar7;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x22);
  _objc_release(unaff_x21);
  _objc_release(lVar7);
  __Unwind_Resume(lVar4);
  puVar5 = (undefined8 *)0x18;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar6 = (undefined8 *)0x40;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1108b86d0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar8 = puVar6 + 3;
  puVar6[4] = 0;
  *puVar8 = 0;
  *puVar5 = puVar8;
  puVar5[1] = puVar6;
  puVar6[4] = 0x7ff8000000000000;
  puVar6[5] = 0;
  _objc_retain(param_2);
  *(undefined8 **)(param_2 + 4) = puVar8;
  uVar9 = *(undefined8 *)(param_2 + 8);
  _objc_retain(uVar9);
  uVar3 = puVar6[7];
  puVar6[7] = uVar9;
  _objc_release(uVar3);
  *(undefined4 *)((long)puVar5 + 0x14) = param_2[6];
  *param_3 = puVar5;
  if (lRam00000001136c0e78 != -1) {
    func_0x00010002a2fc(0x1136c0e78,&PTR___NSConcreteGlobalBlock_1108b8710);
  }
  puStack_c8 = puVar5;
  FUN_10585dd64(uRam00000001136c0e70,&puStack_c8,&puStack_c8);
  _objc_release(param_2);
  return;
}



/* Entry: 10585d7f4; end: 10585d907;  */

void FUN_10585d7f4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puStack_48;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_1108b86d0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar4 = puVar2 + 3;
  puVar2[4] = 0;
  *puVar4 = 0;
  *puVar1 = puVar4;
  puVar1[1] = puVar2;
  puVar2[4] = 0x7ff8000000000000;
  puVar2[5] = 0;
  _objc_retain(param_2);
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar5);
  uVar3 = puVar2[7];
  puVar2[7] = uVar5;
  _objc_release(uVar3);
  *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *param_3 = puVar1;
  if (lRam00000001136c0e78 != -1) {
    func_0x00010002a2fc(0x1136c0e78,&PTR___NSConcreteGlobalBlock_1108b8710);
  }
  puStack_48 = puVar1;
  FUN_10585dd64(uRam00000001136c0e70,&puStack_48,&puStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10585d908; end: 10585d97b;  */

void FUN_10585d908(long param_1)

{
  long lStack_28;
  
  _MTAudioProcessingTapGetStorage();
  if (lRam00000001136c0e78 != -1) {
    func_0x00010002a2fc(0x1136c0e78,&PTR___NSConcreteGlobalBlock_1108b8710);
  }
  lStack_28 = param_1;
  func_0x00010585de6c(uRam00000001136c0e70,&lStack_28);
  if (param_1 != 0) {
    FUN_10585dcdc(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10585d97c; end: 10585da2f;  */

void FUN_10585d97c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long lStack_38;
  
  _MTAudioProcessingTapGetStorage();
  pbVar3 = (byte *)*param_1;
  lStack_38 = 0;
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CMAudioFormatDescriptionCreate(uVar2,param_3,0,0,0,0,0,&lStack_38);
  if (((int)uVar2 == 0) && (lStack_38 != 0)) {
    _CFRelease();
  }
  *(undefined8 *)(pbVar3 + 8) = *param_3;
  iVar1 = *(int *)(param_3 + 1);
  *pbVar3 = iVar1 == 0x6c70636d;
  *pbVar3 = (byte)*(undefined4 *)((long)param_3 + 0xc) & iVar1 == 0x6c70636d;
  func_0x00010c229ba0(*(undefined8 *)(pbVar3 + 0x20));
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10585da30; end: 10585da4b;  */

void FUN_10585da30(long param_1)

{
  _MTAudioProcessingTapGetStorage();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10585da4c; end: 10585dc5b;  */

void FUN_10585da4c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  undefined8 param_6)

{
  long **pplVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long **pplStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar5 = param_1;
  _MTAudioProcessingTapGetStorage();
  if (lRam00000001136c0e78 != -1) {
    func_0x00010002a2fc(0x1136c0e78,&PTR___NSConcreteGlobalBlock_1108b8710);
  }
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  plVar8 = puRam00000001136c0e70 + 1;
  plVar9 = (long *)*puRam00000001136c0e70;
  pplStack_78 = &plStack_70;
  if (plVar9 != plVar8) {
    do {
      FUN_10585df5c(&pplStack_78,&plStack_70,plVar9 + 4,plVar9 + 4);
      plVar6 = (long *)plVar9[1];
      plVar10 = plVar9;
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar10[2];
          bVar3 = plVar10 != (long *)*plVar9;
          plVar10 = plVar9;
        } while (bVar3);
      }
      else {
        do {
          plVar9 = plVar6;
          plVar6 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      plVar6 = plStack_70;
    } while (plVar9 != plVar8);
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if ((long *)plVar6[4] <= plVar5) {
        if (plVar5 <= (long *)plVar6[4]) {
          FUN_10585e17c(&pplStack_78);
          if ((char)plVar5[2] != '\0') {
            return;
          }
          pplVar1 = (long **)*plVar5;
          plVar5 = (long *)plVar5[1];
          if (plVar5 != (long *)0x0) {
            plVar9 = plVar5 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *plVar9 = *plVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pplStack_78 = pplVar1;
          plStack_70 = plVar5;
          if ((*(char *)pplVar1 != '\0') &&
             (_MTAudioProcessingTapGetSourceAudio(param_1,param_2,param_4,param_6,0,param_5),
             (int)param_1 == 0)) {
            iVar4 = (int)pplVar1[4];
            func_0x00010c114660();
            pplVar1[2] = (long *)((double)pplVar1[2] + (double)param_2);
            *param_5 = (long)iVar4;
          }
          if (plVar5 == (long *)0x0) {
            return;
          }
          plVar9 = plVar5 + 1;
          do {
            lVar7 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 != 0) {
            return;
          }
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          return;
        }
        plVar6 = plVar6 + 1;
      }
    }
  }
  FUN_10585e17c(&pplStack_78,plStack_70);
  return;
}



/* Entry: 10585dc5c; end: 10585dc63; -[SCAudioMixProcessingSession setParametersWithAudioFilterStyleId:] */

void FUN_10585dc5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d8f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setParametersWithAudioFilterStyl_112653e00);
  return;
}



/* Entry: 10585dc64; end: 10585dc9f; -[SCAudioMixProcessingSession .cxx_destruct] */

void FUN_10585dc64(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10585dca0; end: 10585dcaf;  */

void FUN_10585dca0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108b86d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10585dcb0; end: 10585dccf;  */

void FUN_10585dcb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108b86d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10585dcd0; end: 10585dcdb;  */

void FUN_10585dcd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10585dcdc; end: 10585dd33;  */

long FUN_10585dcdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10585dd34; end: 10585dd63;  */

void FUN_10585dd34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = puVar1 + 1;
  puRam00000001136c0e70 = puVar1;
  return;
}



/* Entry: 10585dd64; end: 10585de1b;  */

undefined1  [16] FUN_10585dd64(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_10585de04;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10585ddcc;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10585ddcc:
  plVar1 = (long *)0x28;
  __Znwm();
  plVar1[4] = *param_3;
  FUN_10585de1c(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10585de04:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10585de1c; end: 10585df5b;  */

void FUN_10585de1c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10585df5c; end: 10585dfdf;  */

undefined1  [16]
FUN_10585df5c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10585dfe0(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    *(undefined8 *)(lVar3 + 0x20) = *param_4;
    FUN_10585de1c(param_1,uStack_38,plVar2,lVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10585dfe0; end: 10585e17b;  */

long * FUN_10585dfe0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,ulong *param_5)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1 + 1;
  if (param_2 == plVar4) {
LAB_10585dffc:
    plVar3 = (long *)*param_2;
    plVar6 = param_2;
    if (param_2 != (long *)*param_1) {
      plVar5 = param_2;
      plVar7 = plVar3;
      if (plVar3 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar1 = plVar5 == (long *)*plVar6;
          plVar5 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar7;
          plVar7 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      uVar2 = *param_5;
      if (uVar2 <= (ulong)plVar6[4]) {
        plVar6 = (long *)*plVar4;
        param_2 = plVar4;
        while (plVar4 = param_2, plVar6 != (long *)0x0) {
          while (plVar4 = plVar6, (ulong)plVar4[4] <= uVar2) {
            if (uVar2 <= (ulong)plVar4[4]) goto LAB_10585e160;
            param_2 = plVar4 + 1;
            plVar6 = (long *)*param_2;
            if ((long *)*param_2 == (long *)0x0) goto LAB_10585e160;
          }
          param_2 = plVar4;
          plVar6 = (long *)*plVar4;
        }
        goto LAB_10585e160;
      }
    }
    if (plVar3 == (long *)0x0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar6;
      param_2 = plVar6 + 1;
    }
  }
  else {
    uVar2 = *param_5;
    if (uVar2 < (ulong)param_2[4]) goto LAB_10585dffc;
    if (uVar2 <= (ulong)param_2[4]) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
    plVar5 = (long *)param_2[1];
    plVar6 = param_2;
    plVar3 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar1 = plVar6 != (long *)*plVar7;
        plVar6 = plVar7;
      } while (bVar1);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
    if ((plVar7 == plVar4) || (uVar2 < (ulong)plVar7[4])) {
      if (plVar5 != (long *)0x0) {
        *param_3 = (long)plVar7;
        return plVar7;
      }
      *param_3 = (long)param_2;
      return param_2 + 1;
    }
    plVar6 = (long *)*plVar4;
    param_2 = plVar4;
    while (plVar4 = param_2, plVar3 = plVar6, plVar6 != (long *)0x0) {
      while ((ulong)plVar3[4] <= uVar2) {
        plVar4 = plVar3;
        if (uVar2 <= (ulong)plVar3[4]) goto LAB_10585e160;
        param_2 = plVar3 + 1;
        plVar3 = (long *)*param_2;
        if ((long *)*param_2 == (long *)0x0) goto LAB_10585e160;
      }
      param_2 = plVar3;
      plVar6 = (long *)*plVar3;
    }
LAB_10585e160:
    *param_3 = (long)plVar4;
  }
  return param_2;
}



/* Entry: 10585e17c; end: 10585e1bb;  */

void FUN_10585e17c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10585e17c(param_1,*param_2);
    FUN_10585e17c(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10585e1bc; end: 10585e22f; -[SCAudioReverseGeneratingSession originalAudioURL] */

void FUN_10585e1bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfacf80(uVar2,param_2,*(undefined8 *)(param_1 + 0x40),3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10585e230; end: 10585e3c7; -[SCAudioReverseGeneratingSession initWithVideoAsset:temporaryFileWriter:] */

undefined1 *
FUN_10585e230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126eaa20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar4);
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


