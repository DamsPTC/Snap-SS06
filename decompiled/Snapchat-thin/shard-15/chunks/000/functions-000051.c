/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7c2e1c; end: 10b7c2edf; -[SCCacheWrapper objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:] */

void FUN_10b7c2e1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bddc840(param_2,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff80(param_1,uVar1,param_3,param_4,param_5,param_6,param_2,param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7c2ee0; end: 10b7c2f1b; -[SCCacheWrapper removeExpiredContentWithBlock:] */

void FUN_10b7c2ee0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bddc820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c260(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c2f1c; end: 10b7c2f57; -[SCCacheWrapper removeAllObjectsWithBlock:] */

void FUN_10b7c2f1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bddc820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aec0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c2f58; end: 10b7c2f93; -[SCCacheWrapper removeAllObjectsFromMemoryWithBlock:] */

void FUN_10b7c2f58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bddc820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ae60(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c2f94; end: 10b7c2fff; -[SCCacheWrapper removeAllObjectsExceptKeys:block:] */

void FUN_10b7c2f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bddc820(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ae40(uVar1,param_2,param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c3000; end: 10b7c306b; -[SCCacheWrapper removeObjectsForKeys:block:] */

void FUN_10b7c3000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bddc820(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d4c0(uVar1,param_2,param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c306c; end: 10b7c30d7; -[SCCacheWrapper removeObjectForKey:block:] */

void FUN_10b7c306c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bddc840(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d400(uVar1,param_2,param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c30d8; end: 10b7c30df; -[SCCacheWrapper decreaseExpirationTo:forKey:] */

void FUN_10b7c30d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf67730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_decreaseExpirationTo_forKey__1125b7770);
  return;
}



/* Entry: 10b7c30e0; end: 10b7c30e7; -[SCCacheWrapper increaseExpirationTo:forKey:] */

void FUN_10b7c30e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_increaseExpirationTo_forKey__1125d8a28);
  return;
}



/* Entry: 10b7c30e8; end: 10b7c30ef; -[SCCacheWrapper contains:] */

void FUN_10b7c30e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_contains__1125b06d8);
  return;
}



/* Entry: 10b7c30f0; end: 10b7c30f7; -[SCCacheWrapper contains:block:] */

void FUN_10b7c30f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_contains_block__1125b06e0);
  return;
}



/* Entry: 10b7c30f8; end: 10b7c31bf; -[SCCacheWrapper _chainedCacheBlockWithSelf:] */

void FUN_10b7c30f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  else {
    func_0x00010bf51e00();
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b7c31c0;
    puStack_50 = &UNK_110d60f08;
    _objc_copyWeak(auStack_40,auStack_38);
    lStack_48 = param_3;
    _objc_retain(param_3);
    ppuVar1 = &puStack_68;
    _objc_retainBlock(ppuVar1);
    _objc_release(lStack_48);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b7c31c0; end: 10b7c31ff;  */

void FUN_10b7c31c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c3200; end: 10b7c333f; -[SCCacheWrapper _chainedCacheObjectBlockWithSelf:] */

void FUN_10b7c3200(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  else {
    func_0x00010bf51e00();
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10b7c32c8;
    puStack_50 = &UNK_110d60f38;
    _objc_copyWeak(auStack_40,auStack_38);
    lStack_48 = param_3;
    _objc_retain(param_3);
    ppuVar1 = &puStack_68;
    _objc_retainBlock(ppuVar1);
    _objc_release(lStack_48);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b7c3340; end: 10b7c3347; -[SCCacheWrapper kindName] */

undefined8 FUN_10b7c3340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7c3348; end: 10b7c334f; -[SCCacheWrapper underExperiment] */

undefined1 FUN_10b7c3348(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7c3350; end: 10b7c3357; -[SCCacheWrapper setUnderExperiment:] */

void FUN_10b7c3350(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b7c3358; end: 10b7c335f; -[SCCacheWrapper cache] */

undefined8 FUN_10b7c3358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7c3360; end: 10b7c338f; -[SCCacheWrapper setCache:] */

void FUN_10b7c3360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7c3390; end: 10b7c33bf; -[SCCacheWrapper .cxx_destruct] */

void FUN_10b7c3390(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7c33c0; end: 10b7c343f; -[SCClientEncryption init] */

undefined8 FUN_10b7c33c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00fd60(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b7c3440; end: 10b7c34ff; -[SCClientEncryption initWithEncryptionKey:initializationVector:] */

undefined1 *
FUN_10b7c3440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270aef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c3500; end: 10b7c3573; -[SCClientEncryption encodeWithCoder:] */

void FUN_10b7c3500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dae8f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f82ff8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f83018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c3574; end: 10b7c357b; -[SCClientEncryption identifier] */

undefined8 FUN_10b7c3574(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7c357c; end: 10b7c3583; -[SCClientEncryption encryptionKey] */

undefined8 FUN_10b7c357c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7c3584; end: 10b7c358b; -[SCClientEncryption initializationVector] */

undefined8 FUN_10b7c3584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7c358c; end: 10b7c35c7; -[SCClientEncryption .cxx_destruct] */

void FUN_10b7c358c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7c35c8; end: 10b7c360f; -[SCDiskCacheKeyGenerator keyNeedsClipping:] */

bool FUN_10b7c35c8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010be093e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  uVar3 = *(ulong *)(param_1 + 8);
  _objc_release(uVar1);
  return uVar3 < uVar2;
}



/* Entry: 10b7c3610; end: 10b7c376f; -[SCDiskCacheKeyGenerator keySet:] */

void FUN_10b7c3610(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar4 = param_1;
      func_0x00010c086580(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 0x10,0);
  return;
}



/* Entry: 10b7c3770; end: 10b7c377b; -[SCDiskCacheKeyGenerator .cxx_destruct] */

void FUN_10b7c3770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7c377c; end: 10b7c3833;  */

void FUN_10b7c377c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar1 = lRam00000001137f9cd0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b7c3834;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137f9cd0,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar2 = uRam00000001137f9cd8;
  _objc_retain(uRam00000001137f9cd8);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7c3834; end: 10b7c3983;  */

void FUN_10b7c3834(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x20);
  puVar3 = puVar6;
  _objc_retain();
  FUN_10b7c3984();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126af7d0;
    _objc_alloc_init(PTR_PTR_1126af7d0);
    puVar5 = puVar3;
    func_0x00010bf63640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar5 = puVar6;
    func_0x00010c1195e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110f83058,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126e1428;
    _objc_alloc();
    puVar3 = puVar5;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c008360(puVar4,param_2,puVar3,&lStack_48);
    lVar2 = lStack_48;
    _objc_release();
    if (lVar2 == 0) {
      _objc_retain(puVar4);
      puVar3 = puVar4;
    }
    else {
      FUN_10b7c3984();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  _objc_release(puVar6);
  uVar1 = puRam00000001137f9cd8;
  puRam00000001137f9cd8 = puVar3;
  _objc_release(uVar1);
  return;
}



/* Entry: 10b7c3984; end: 10b7c39cf;  */

void FUN_10b7c3984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1428;
  _objc_alloc_init(PTR_PTR_1126e1428);
  func_0x00010c1c3fc0();
  func_0x00010c1f5420(puVar1,param_2,10);
  func_0x00010c18e560(puVar1,param_2,10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7c39d0; end: 10b7c39d7; -[SCEncryptedCache initWithCache:encryptionKeyManager:] */

void FUN_10b7c39d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bffa710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithCache_encryptionKeyManag_1125dc388,param_3,param_4,0);
  return;
}



/* Entry: 10b7c39d8; end: 10b7c3a7b; -[SCEncryptedCache initWithCache:encryptionKeyManager:encryptionOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b7c39d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_11270af08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithSCCache__112547df8,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127937fc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112793800) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c3a7c; end: 10b7c3c17; -[SCEncryptedCache setObject:dataEncoding:forKey:expiration:block:] */

void FUN_10b7c3a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_1;
  func_0x00010bf262a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bddc840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0500(uVar1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c3c18; end: 10b7c3e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7c3c18(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
    goto LAB_10b7c3dd0;
  }
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar6 = param_2;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar6 = lVar2;
  }
  lVar7 = *(long *)(lVar1 + _DAT_1127937fc);
  lVar2 = lVar1;
  func_0x00010c0870c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar6;
  if (*(long *)(lVar1 + _DAT_112793800) == 1) {
    lVar5 = lVar7;
    func_0x00010bf93ec0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar5);
    if (lVar7 == 0) {
      _objc_retain(lVar6);
    }
    else {
      func_0x00010c156d00();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10b7c3db8:
    _objc_release(lVar4);
  }
  else {
    if (lVar7 != 0) {
      lVar4 = lVar7;
      func_0x00010bf93ec0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010c0646e0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c156ce0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      goto LAB_10b7c3db8;
    }
    _objc_retain(lVar6);
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
LAB_10b7c3dd0:
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b7c3e0c; end: 10b7c3e13; -[SCEncryptedCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:] */

void FUN_10b7c3e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f8);
  return;
}



/* Entry: 10b7c3e14; end: 10b7c3faf; -[SCEncryptedCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:] */

void FUN_10b7c3e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_2);
  uVar1 = param_2;
  func_0x00010bf262a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bddc840(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff80(param_1,uVar1);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7c3fb0; end: 10b7c418b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7c3fb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + _DAT_1127937fc);
    lVar4 = lVar1;
    func_0x00010c0870c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar1 + _DAT_112793800);
      lVar4 = lVar5;
      func_0x00010bf93ec0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 1) {
        lVar6 = lVar4;
        func_0x00010bf64920(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar4);
        lVar2 = param_2;
        func_0x00010c156c80();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_2;
        lVar4 = lVar3;
        param_2 = lVar2;
      }
      else {
        lVar6 = lVar5;
        func_0x00010c0646e0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_2;
        func_0x00010c156c60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        param_2 = lVar3;
      }
      _objc_release(lVar6);
      _objc_release(lVar4);
    }
    _objc_retain(param_2);
    if (param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x28);
      lVar4 = param_2;
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x10))(lVar6,param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        lVar4 = lVar6;
      }
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b7c418c; end: 10b7c41a7; -[SCEncryptedCache objectForKey:dataDecoding:block:] */

void FUN_10b7c418c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  if ((param_3 != 0) && (param_5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0dff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f0,param_3,param_4,0,param_5)
    ;
    return;
  }
  return;
}



/* Entry: 10b7c41a8; end: 10b7c41bb; -[SCEncryptedCache .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7c41a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127937fc,0);
  return;
}



/* Entry: 10b7c41bc; end: 10b7c42cb; -[SCExpiringData initWithEncrypted:anObject:data:expirationDate:clientEncryptionId:] */

undefined1 *
FUN_10b7c41bc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270af10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c42cc; end: 10b7c42ef; -[SCExpiringData copyWithZone:] */

undefined8 FUN_10b7c42cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7c42f0; end: 10b7c4403; -[SCExpiringData initWithCoder:] */

undefined1 * FUN_10b7c42f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270af10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c4404; end: 10b7c449f; -[SCExpiringData encodeWithCoder:] */

void FUN_10b7c4404(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110df2a98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f83078);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dbf1f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f83098);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f830b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c44a0; end: 10b7c44a7; -[SCExpiringData preferFasterCoding] */

undefined8 FUN_10b7c44a0(void)

{
  return 1;
}



/* Entry: 10b7c44a8; end: 10b7c451b; -[SCExpiringData encodeWithFasterCoder:] */

void FUN_10b7c44a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c451c; end: 10b7c45db; -[SCExpiringData decodeWithFasterDecoder:] */

void FUN_10b7c451c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 8) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b7c45dc; end: 10b7c46bb; -[SCExpiringData setObject:forUInt64Key:] */

void FUN_10b7c45dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0xf18f5168592dcb) {
    if (param_4 == 0x7d61f9cbd76312) {
      lVar2 = 0x20;
    }
    else {
      if (param_4 != 0x810e09e9c7712b) goto LAB_10b7c46a8;
      lVar2 = 0x18;
    }
  }
  else if (param_4 == 0xf23a91f0816b7a) {
    lVar2 = 0x10;
  }
  else {
    if (param_4 != 0xf18f5168592dcb) goto LAB_10b7c46a8;
    lVar2 = 0x28;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b7c46a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c46bc; end: 10b7c46db; -[SCExpiringData setBool:forUInt64Key:] */

void FUN_10b7c46bc(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  if (param_4 == 0x3c8e7a5693e2c1) {
    *(undefined1 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b7c46dc; end: 10b7c46ef; +[SCExpiringData fasterCodingVersion] */

undefined8 FUN_10b7c46dc(void)

{
  return 0xfd2c2357e0e0010;
}



/* Entry: 10b7c46f0; end: 10b7c46fb; +[SCExpiringData fasterCodingKeys] */

undefined8 FUN_10b7c46f0(void)

{
  return 0x1133e0dc8;
}



/* Entry: 10b7c46fc; end: 10b7c476b; -[SCExpiringData isEqual:] */

bool FUN_10b7c46fc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  FUN_10bc85c34(param_1,param_3,0x1137f9ce0,0x1137f9ce8,5,4);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_3 + 8) == *(char *)(param_1 + 8);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b7c476c; end: 10b7c482f; -[SCExpiringData hash] */

ulong FUN_10b7c476c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong auStack_50 [5];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  auStack_50[1] = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  auStack_50[2] = uVar2;
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x28);
  auStack_50[3] = uVar1;
  func_0x00010bfde980();
  auStack_50[4] = lVar3;
  lVar4 = 8;
  do {
    uVar5 = *(ulong *)((long)auStack_50 + lVar4) | uVar5 << 0x20;
    uVar5 = ~uVar5 + uVar5 * 0x40000;
    uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
    uVar5 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar5;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(lVar3 + 8);
}



/* Entry: 10b7c4830; end: 10b7c4837; -[SCExpiringData encrypted] */

undefined1 FUN_10b7c4830(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7c4838; end: 10b7c483f; -[SCExpiringData anObject] */

undefined8 FUN_10b7c4838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7c4840; end: 10b7c4847; -[SCExpiringData data] */

undefined8 FUN_10b7c4840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7c4848; end: 10b7c484f; -[SCExpiringData expirationDate] */

undefined8 FUN_10b7c4848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7c4850; end: 10b7c4857; -[SCExpiringData clientEncryptionId] */

undefined8 FUN_10b7c4850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7c4858; end: 10b7c489f; -[SCExpiringData .cxx_destruct] */

void FUN_10b7c4858(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7c48a0; end: 10b7c49ab; +[SCExpiringDataBuilder withExpiringData:] */

void FUN_10b7c48a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126e1430;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bf93960();
  puVar1[8] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf02480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  _objc_release(uVar3);
  uVar2 = param_3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf3cd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7c49ac; end: 10b7c49e3; -[SCExpiringDataBuilder build] */

void FUN_10b7c49ac(void)

{
  _objc_alloc(PTR_PTR_1126e1438);
  func_0x00010c00fc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7c49e4; end: 10b7c49eb; -[SCExpiringDataBuilder setEncrypted:] */

void FUN_10b7c49e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b7c49ec; end: 10b7c4a23; -[SCExpiringDataBuilder setAnObject:] */

long FUN_10b7c49ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7c4a24; end: 10b7c4a5b; -[SCExpiringDataBuilder setData:] */

long FUN_10b7c4a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7c4a5c; end: 10b7c4a93; -[SCExpiringDataBuilder setExpirationDate:] */

long FUN_10b7c4a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7c4a94; end: 10b7c4acb; -[SCExpiringDataBuilder setClientEncryptionId:] */

long FUN_10b7c4a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7c4acc; end: 10b7c4b13; -[SCExpiringDataBuilder .cxx_destruct] */

void FUN_10b7c4acc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7c4b14; end: 10b7c4b1b; -[SCGlobalCache initWithName:diskSizeLimitConfig:] */

void FUN_10b7c4b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithName_diskSizeLimitConfig_1125e8f88,param_3,param_4,1);
  return;
}



/* Entry: 10b7c4b1c; end: 10b7c4c1f; -[SCGlobalCache initWithName:diskSizeLimitConfig:useMemoryCache:] */

undefined8 *
FUN_10b7c4b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b7f60;
  lStack_48 = 0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfccf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  if (lVar1 == 0) {
    puStack_60 = PTR_PTR_11270af18;
    puVar3 = &uStack_68;
    uStack_68 = param_1;
    _objc_msgSendSuper2(puVar3,PTR_s_initWithScopedDirectory_name_met_112547d58,puVar2,param_3,0,
                        param_4,param_5);
  }
  else {
    puStack_50 = PTR_PTR_11270af18;
    puVar3 = &uStack_58;
    uStack_58 = param_1;
    _objc_msgSendSuper2(puVar3,PTR_s_initWithName_diskSizeLimitConfig_1125e8f80,param_3,param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return puVar3;
}



/* Entry: 10b7c4c20; end: 10b7c4cdb; -[SCManagedURL initFileURLWithPath:key:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b7c4c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270af20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initFileURLWithPath__1125d93d0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11279382c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112793830),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c4cdc; end: 10b7c4d5b; -[SCManagedURL dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7c4cdc(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112793830;
  _objc_loadWeakRetained(lVar1);
  func_0x00010befd940();
  _objc_release(lVar1);
  func_0x00010bfb3060(param_1);
  puStack_38 = PTR_PTR_11270af20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b7c4d5c; end: 10b7c4e1b; -[SCManagedURL copy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b7c4d5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126e1440;
  _objc_alloc(PTR_PTR_1126e1440);
  lVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_112793830;
  uVar5 = *(undefined8 *)(param_1 + _DAT_11279382c);
  lVar4 = param_1 + lVar1;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bfee860(puVar2,param_2,lVar3,uVar5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010befd940();
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10b7c4e1c; end: 10b7c4e67; -[SCManagedURL flushMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7c4e1c(long param_1)

{
  param_1 = param_1 + _DAT_112793830;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb3080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7c4e68; end: 10b7c4ec7; -[SCManagedURL metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7c4e68(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112793830;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cc340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7c4ec8; end: 10b7c4ed7; -[SCManagedURL key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7c4ec8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279382c);
}



/* Entry: 10b7c4ed8; end: 10b7c4f13; -[SCManagedURL .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7c4ed8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112793830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279382c,0);
  return;
}



/* Entry: 10b7c4f14; end: 10b7c5027; -[SCMemoryCache initWithName:] */

undefined8 FUN_10b7c4f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c3448;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e13e0;
  func_0x00010c22b7a0(PTR_PTR_1126e13e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar4 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  func_0x00010c02d5a0(param_1,param_2,param_3,puVar1,puVar2,puVar3,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b7c5028; end: 10b7c516f; -[SCMemoryCache initWithName:cacheManager:memoryCache:workQueuePerformer:completionQueuePerformer:] */

undefined1 *
FUN_10b7c5028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270af28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126e13c8;
    _objc_alloc();
    func_0x00010c02d480();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7c5170; end: 10b7c5217; -[SCMemoryCache setObject:dataEncoding:forKey:expiration:block:] */

void FUN_10b7c5170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf528e0(param_1,param_2,param_3,param_4);
  func_0x00010bea5fe0(param_1,param_2,param_3,uVar1,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c5218; end: 10b7c52bf; -[SCMemoryCache setObject:dataCost:forKey:expiration:block:] */

void FUN_10b7c5218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf528c0(param_1,param_2,param_3,param_4);
  func_0x00010bea5fe0(param_1,param_2,param_3,uVar1,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c52c0; end: 10b7c52d3; -[SCMemoryCache objectForKey:dataDecoding:block:] */

void FUN_10b7c52c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f8,param_3,param_4,0,param_5,1)
  ;
  return;
}



/* Entry: 10b7c52d4; end: 10b7c52db; -[SCMemoryCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:] */

void FUN_10b7c52d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f8);
  return;
}



/* Entry: 10b7c52dc; end: 10b7c545b; -[SCMemoryCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:] */

void FUN_10b7c52dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_4 != 0) && (param_7 != 0)) {
    _objc_initWeak(auStack_68,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uStack_78 = param_1;
    uStack_70 = param_8;
    _objc_retain(param_7);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7c545c; end: 10b7c54d3;  */

void FUN_10b7c545c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be4fa60(*(undefined8 *)(param_1 + 0x48),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b980(lVar1,param_2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x20),lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c54d4; end: 10b7c55d3; -[SCMemoryCache decreaseExpirationTo:forKey:] */

void FUN_10b7c54d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c55d4; end: 10b7c56cf;  */

void FUN_10b7c55d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10b7c56b4;
  lVar6 = *(long *)(lVar1 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x00010c086580(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc340(lVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 != 0) {
    lVar3 = lVar6;
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      lVar4 = lVar6;
      func_0x00010bf9c720(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c070260(puVar5,param_2,uVar2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      if ((int)puVar5 == 0) goto LAB_10b7c56ac;
    }
    func_0x00010bed7aa0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x20));
  }
LAB_10b7c56ac:
  _objc_release(lVar6);
LAB_10b7c56b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c56d0; end: 10b7c57cf; -[SCMemoryCache increaseExpirationTo:forKey:] */

void FUN_10b7c56d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c57d0; end: 10b7c58cb;  */

void FUN_10b7c57d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c086580(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc340(lVar6,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 != 0) {
      lVar3 = lVar6;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      if (lVar3 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        lVar4 = lVar6;
        func_0x00010bf9c720(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c070240(puVar5,param_2,uVar2,lVar4);
        _objc_release(lVar4);
        _objc_release(lVar3);
        if ((int)puVar5 != 0) {
          func_0x00010bed7aa0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                              *(undefined8 *)(param_1 + 0x20));
        }
      }
    }
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7c58cc; end: 10b7c58cf; -[SCMemoryCache validate] */

void FUN_10b7c58cc(void)

{
  return;
}



/* Entry: 10b7c58d0; end: 10b7c58d3; -[SCMemoryCache invalidate] */

void FUN_10b7c58d0(void)

{
  return;
}



/* Entry: 10b7c58d4; end: 10b7c59ab; -[SCMemoryCache removeExpiredContentWithBlock:] */

void FUN_10b7c58d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c59ac; end: 10b7c5ac3;  */

void FUN_10b7c59ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(lVar2 + 8);
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b7c5ac4;
    puStack_68 = &UNK_110d60b28;
    lStack_60 = lVar2;
    _objc_retain();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10b7c5b58;
    puStack_a0 = &UNK_110d60fc8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lStack_98 = lVar2;
    puStack_90 = puVar3;
    puStack_58 = puVar3;
    _objc_retain(uVar4);
    uStack_88 = uVar4;
    _objc_retain(puVar3);
    func_0x00010bf97e40(uVar5,param_2,uVar6,&puStack_80,&puStack_b8);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    _objc_release(puStack_58);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10b7c5ac4; end: 10b7c5b57;  */

void FUN_10b7c5ac4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) || (lVar1 = param_4, func_0x00010c072440(), (int)lVar1 != 0)) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7c5b58; end: 10b7c5b67;  */

void FUN_10b7c5b58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeObjectsForCombinedKeys_bl_112580c50,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b7c5b68; end: 10b7c5bbb; -[SCMemoryCache removeAllObjectsWithBlock:] */

void FUN_10b7c5b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c12ae20(uVar1,param_2,uVar2);
  func_0x00010be0b960(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7c5bbc; end: 10b7c5bbf; -[SCMemoryCache removeAllObjectsFromMemoryWithBlock:] */

void FUN_10b7c5bbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeAllObjectsWithBlock__1126285d0);
  return;
}



/* Entry: 10b7c5bc0; end: 10b7c5cbf; -[SCMemoryCache removeAllObjectsExceptKeys:block:] */

void FUN_10b7c5bc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7c5cc0; end: 10b7c5e37;  */

void FUN_10b7c5cc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c086a20(uVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uVar6 = *(undefined8 *)(lVar1 + 8);
    uVar7 = *(undefined8 *)(lVar1 + 0x38);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10b7c5e38;
    puStack_80 = &UNK_110d60c18;
    lStack_78 = lVar1;
    uStack_70 = uVar4;
    _objc_retain();
    puStack_d0 = puVar2;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10b7c5e80;
    puStack_b8 = &UNK_110d60fc8;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lStack_b0 = lVar1;
    puStack_a8 = puVar3;
    puStack_68 = puVar3;
    _objc_retain(uVar5);
    uStack_a0 = uVar5;
    _objc_retain(puVar3);
    _objc_retain(uVar4);
    func_0x00010bf97e40(uVar6,param_2,uVar7,&puStack_98,&puStack_d0);
    _objc_release(uStack_a0);
    _objc_release(puStack_a8);
    _objc_release(puStack_68);
    _objc_release(uStack_70);
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  return;
}


