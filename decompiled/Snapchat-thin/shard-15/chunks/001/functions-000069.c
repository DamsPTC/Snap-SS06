/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7f50c8; end: 10b7f511b; -[SCSimpleContentFetchingConfigBuilder buildConfig] */

void FUN_10b7f50c8(void)

{
  _objc_alloc(PTR_PTR_1126e1540);
  func_0x00010c003aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7f511c; end: 10b7f5193; -[SCSimpleContentFetchingConfigBuilder .cxx_destruct] */

void FUN_10b7f511c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f5194; end: 10b7f51bf;  */

undefined8 FUN_10b7f5194(void)

{
  return 0x1e;
}



/* Entry: 10b7f51c0; end: 10b7f5373;  */

void FUN_10b7f51c0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar3 = param_1;
  func_0x00010c23e860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c24d960();
  _objc_release(puVar3);
  puVar4 = param_1;
  func_0x00010c23e860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf940a0();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (((long)puVar1 < 0) || ((long)puVar3 < (long)puVar1)) {
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((long)puVar2 <= (long)puVar1) {
      puVar1 = puVar2;
    }
    if ((long)puVar2 <= (long)puVar3) {
      puVar3 = puVar2;
    }
    if ((puVar1 == (undefined *)0x0) && (puVar3 + -(long)puVar1 == puVar2)) {
      puVar4 = param_1;
      func_0x00010bf63640(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (puVar3 == puVar1) {
      func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = PTR_PTR_1126d6338;
      _objc_alloc(PTR_PTR_1126d6338);
      puVar2 = param_1;
      func_0x00010bf63640(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0084e0(puVar4,param_2,puVar2,puVar1,puVar3 + -(long)puVar1);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b7f5374; end: 10b7f546f;  */

void FUN_10b7f5374(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bfcaaa0(), lVar1 != 0)) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c13e900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_1;
      func_0x00010bf58280(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfc48a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      _objc_retain(lVar1);
      lVar3 = lVar1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b7f5470; end: 10b7f5497;  */

undefined ** FUN_10b7f5470(long param_1)

{
  if (param_1 - 1U < 4) {
    return (undefined **)(&PTR_PTR_110d61e88)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110f8a2d8;
}



/* Entry: 10b7f5498; end: 10b7f5627;  */

undefined ** FUN_10b7f5498(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **ppuVar2;
  undefined *unaff_x24;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == (undefined **)0x0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    ppuVar2 = param_1;
    func_0x00010bf98a20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = &PTR____CFConstantStringClassReference_110e0a478;
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x20 = ppuVar2;
    }
    _objc_retain(unaff_x20);
    _objc_release(ppuVar2);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    unaff_x21 = param_1;
    func_0x00010bf98a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x00010bf98940(param_1);
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_50 = unaff_x20;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(ppuVar2,param_2,unaff_x21,ppuVar1,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x24);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  ppuVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
  _objc_release(param_1);
  __Unwind_Resume();
  if ((long)ppuVar1 - 1U < 10) {
    return (undefined **)(&PTR_PTR_110d61ea8)[(long)ppuVar1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110f8a318;
}



/* Entry: 10b7f5628; end: 10b7f564f;  */

undefined ** FUN_10b7f5628(long param_1)

{
  if (param_1 - 1U < 10) {
    return (undefined **)(&PTR_PTR_110d61ea8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110f8a318;
}



/* Entry: 10b7f5650; end: 10b7f5737;  */

void FUN_10b7f5650(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b7fb0;
    _objc_alloc(PTR_PTR_1126b7fb0);
    lVar1 = param_1;
    func_0x00010bf87dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf3ec40(param_1);
    lVar3 = param_1;
    func_0x00010bf6e340(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010880(puVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b7f5738; end: 10b7f5773;  */

void FUN_10b7f5738(long param_1)

{
  if (param_1 != 0) {
    func_0x00010bf65600((double)(ulong)(param_1 * 0x15180),PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7f5774; end: 10b7f57df; +[SCContentReference cdnURLFutureWithUrlFuture:] */

void FUN_10b7f5774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7f57e0; end: 10b7f5843; +[SCContentReference cdnURLWithUrl:] */

void FUN_10b7f57e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b0;
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



/* Entry: 10b7f5844; end: 10b7f58af; +[SCContentReference contentObjectFutureWithCoFuture:] */

void FUN_10b7f5844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7f58b0; end: 10b7f591b; +[SCContentReference contentObjectWithCo:] */

void FUN_10b7f58b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b0;
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



/* Entry: 10b7f591c; end: 10b7f593f; -[SCContentReference copyWithZone:] */

undefined8 FUN_10b7f591c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7f5940; end: 10b7f59cf; -[SCContentReference hash] */

void FUN_10b7f5940(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270afa8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7f59d0; end: 10b7f5a13; -[SCContentReference internalInit] */

void FUN_10b7f59d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270afa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7f5a14; end: 10b7f5afb; -[SCContentReference isEqual:] */

long FUN_10b7f5a14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7f5ad4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7f5ae0;
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
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b7f5ae0;
            }
            goto LAB_10b7f5ad4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7f5ae0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7f5afc; end: 10b7f5be3; -[SCContentReference matchCdnURL:contentObject:cdnURLFuture:contentObjectFuture:] */

void FUN_10b7f5afc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10b7f5bb4;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10b7f5bb4;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10b7f5bb4;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else {
    if ((lVar1 != 3) || (param_6 == 0)) goto LAB_10b7f5bb4;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b7f5bb4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7f5be4; end: 10b7f5c2b; -[SCContentReference .cxx_destruct] */

void FUN_10b7f5be4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f5c2c; end: 10b7f5e0f; -[SCSimpleContentFetchingConfig initWithContentReference:mediaContextType:ttlInMinutes:requestContexts:encryptionKey:encryptionIV:mediaType:serializedFeatureMetadata:postDownloadTransformParams:networkRequestContext:contentKey:] */

undefined8 *
FUN_10b7f5c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_11270afb0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b7f5e10; end: 10b7f5e33; -[SCSimpleContentFetchingConfig copyWithZone:] */

undefined8 FUN_10b7f5e10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7f5e34; end: 10b7f5efb; -[SCSimpleContentFetchingConfig hash] */

undefined8 * FUN_10b7f5e34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b7f603c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7f6048;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x40);
              if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x48);
                if ((lVar5 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x50);
                  if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                      func_0x00010c071ae0();
                      goto LAB_10b7f6048;
                    }
                    goto LAB_10b7f603c;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b7f6048:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b7f5efc; end: 10b7f6063; -[SCSimpleContentFetchingConfig isEqual:] */

long FUN_10b7f5efc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7f603c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7f6048;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if (lVar3 != *(long *)(param_3 + 0x58)) {
                      func_0x00010c071ae0();
                      goto LAB_10b7f6048;
                    }
                    goto LAB_10b7f603c;
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
LAB_10b7f6048:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7f6064; end: 10b7f606b; -[SCSimpleContentFetchingConfig contentReference] */

undefined8 FUN_10b7f6064(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f606c; end: 10b7f6073; -[SCSimpleContentFetchingConfig mediaContextType] */

undefined8 FUN_10b7f606c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f6074; end: 10b7f607b; -[SCSimpleContentFetchingConfig ttlInMinutes] */

undefined8 FUN_10b7f6074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f607c; end: 10b7f6083; -[SCSimpleContentFetchingConfig requestContexts] */

undefined8 FUN_10b7f607c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f6084; end: 10b7f608b; -[SCSimpleContentFetchingConfig encryptionKey] */

undefined8 FUN_10b7f6084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f608c; end: 10b7f6093; -[SCSimpleContentFetchingConfig encryptionIV] */

undefined8 FUN_10b7f608c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7f6094; end: 10b7f609b; -[SCSimpleContentFetchingConfig mediaType] */

undefined8 FUN_10b7f6094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7f609c; end: 10b7f60a3; -[SCSimpleContentFetchingConfig serializedFeatureMetadata] */

undefined8 FUN_10b7f609c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7f60a4; end: 10b7f60ab; -[SCSimpleContentFetchingConfig postDownloadTransformParams] */

undefined8 FUN_10b7f60a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b7f60ac; end: 10b7f60b3; -[SCSimpleContentFetchingConfig networkRequestContext] */

undefined8 FUN_10b7f60ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b7f60b4; end: 10b7f60bb; -[SCSimpleContentFetchingConfig contentKey] */

undefined8 FUN_10b7f60b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b7f60bc; end: 10b7f6133; -[SCSimpleContentFetchingConfig .cxx_destruct] */

void FUN_10b7f60bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f6134; end: 10b7f620f; -[SCNContentManagerAesCbcDecryptionInfo initWithKey:iv:] */

undefined1 *
FUN_10b7f6134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270afb8;
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



/* Entry: 10b7f6210; end: 10b7f6217; -[SCNContentManagerAesCbcDecryptionInfo key] */

undefined8 FUN_10b7f6210(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f6218; end: 10b7f621f; -[SCNContentManagerAesCbcDecryptionInfo iv] */

undefined8 FUN_10b7f6218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f6220; end: 10b7f624f; -[SCNContentManagerAesCbcDecryptionInfo .cxx_destruct] */

void FUN_10b7f6220(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f6250; end: 10b7f632b; -[SCNContentManagerAesGcmDecryptionInfo initWithKey:iv:] */

undefined1 *
FUN_10b7f6250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270afc0;
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



/* Entry: 10b7f632c; end: 10b7f6333; -[SCNContentManagerAesGcmDecryptionInfo key] */

undefined8 FUN_10b7f632c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f6334; end: 10b7f633b; -[SCNContentManagerAesGcmDecryptionInfo iv] */

undefined8 FUN_10b7f6334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f633c; end: 10b7f636b; -[SCNContentManagerAesGcmDecryptionInfo .cxx_destruct] */

void FUN_10b7f633c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f636c; end: 10b7f63c7; -[SCNContentManagerBufferedContentFetcherCacheStatusResult initWithIsAvailable:contentSizeOnDiskBytes:contentLengthBytes:] */

void FUN_10b7f636c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270afc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10b7f63c8; end: 10b7f63cf; -[SCNContentManagerBufferedContentFetcherCacheStatusResult isAvailable] */

undefined1 FUN_10b7f63c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f63d0; end: 10b7f63d7; -[SCNContentManagerBufferedContentFetcherCacheStatusResult contentSizeOnDiskBytes] */

undefined8 FUN_10b7f63d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f63d8; end: 10b7f63df; -[SCNContentManagerBufferedContentFetcherCacheStatusResult contentLengthBytes] */

undefined8 FUN_10b7f63d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f63e0; end: 10b7f642b; -[SCNContentManagerCacheMetrics initWithCacheQueryStartTimestamp:cacheQueryEndTimestamp:] */

void FUN_10b7f63e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270afd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b7f642c; end: 10b7f6433; -[SCNContentManagerCacheMetrics cacheQueryStartTimestamp] */

undefined8 FUN_10b7f642c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f6434; end: 10b7f643b; -[SCNContentManagerCacheMetrics cacheQueryEndTimestamp] */

undefined8 FUN_10b7f6434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f643c; end: 10b7f64d3; -[SCNContentManagerCachePolicy initWithAuthoritative:expiration:] */

undefined1 *
FUN_10b7f643c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270afd8;
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



/* Entry: 10b7f64d4; end: 10b7f64db; -[SCNContentManagerCachePolicy authoritative] */

undefined1 FUN_10b7f64d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f64dc; end: 10b7f64e3; -[SCNContentManagerCachePolicy expiration] */

undefined8 FUN_10b7f64dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f64e4; end: 10b7f64ef; -[SCNContentManagerCachePolicy .cxx_destruct] */

void FUN_10b7f64e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f64f0; end: 10b7f65cb; -[SCNContentManagerCacheRootDirectory initWithRootCacheDirPath:rootFilesDirPath:] */

undefined1 *
FUN_10b7f64f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270afe0;
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



/* Entry: 10b7f65cc; end: 10b7f65d3; -[SCNContentManagerCacheRootDirectory rootCacheDirPath] */

undefined8 FUN_10b7f65cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f65d4; end: 10b7f65db; -[SCNContentManagerCacheRootDirectory rootFilesDirPath] */

undefined8 FUN_10b7f65d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f65dc; end: 10b7f660b; -[SCNContentManagerCacheRootDirectory .cxx_destruct] */

void FUN_10b7f65dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f660c; end: 10b7f671f; -[SCNContentManagerCachedContentMetadata initWithContentKey:postDownloadTranformParams:featureMetadata:] */

undefined1 *
FUN_10b7f660c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270afe8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 10b7f6720; end: 10b7f6727; -[SCNContentManagerCachedContentMetadata contentKey] */

undefined8 FUN_10b7f6720(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f6728; end: 10b7f672f; -[SCNContentManagerCachedContentMetadata postDownloadTranformParams] */

undefined8 FUN_10b7f6728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f6730; end: 10b7f6737; -[SCNContentManagerCachedContentMetadata featureMetadata] */

undefined8 FUN_10b7f6730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f6738; end: 10b7f6773; -[SCNContentManagerCachedContentMetadata .cxx_destruct] */

void FUN_10b7f6738(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f6774; end: 10b7f6807; -[SCNContentManagerContentKey initWithMediaId:mediaContextType:] */

undefined1 * FUN_10b7f6774(void)

{
  undefined1 *puVar1;
  undefined8 in_x3;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010b7f69f0();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
    *(undefined8 *)(puVar1 + 0x10) = in_x3;
  }
  func_0x00010b7f69e0();
  return puVar1;
}



/* Entry: 10b7f6808; end: 10b7f6903; -[SCNContentManagerContentKey isEqual:] */

bool FUN_10b7f6808(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x19;
  ulong unaff_x21;
  
  func_0x00010b7f69f0();
  _objc_opt_class(PTR_PTR_1126b08b8);
  uVar2 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain();
    uVar2 = unaff_x21;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010c0c46a0();
      func_0x00010c0c46a0();
      bVar1 = unaff_x21 == unaff_x19;
    }
    func_0x00010b7f69e8();
    _objc_release(uVar2);
    func_0x00010b7f69e0();
  }
  func_0x00010b7f69e0();
  return bVar1;
}



/* Entry: 10b7f6904; end: 10b7f699f; -[SCNContentManagerContentKey hash] */

ulong FUN_10b7f6904(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c0c46a0(param_1);
  func_0x00010b7f69e8();
  func_0x00010b7f69e0();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 10b7f69a0; end: 10b7f69c3; -[SCNContentManagerContentKey copyWithZone:] */

undefined8 FUN_10b7f69a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7f69c4; end: 10b7f69cb; -[SCNContentManagerContentKey mediaId] */

undefined8 FUN_10b7f69c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f69cc; end: 10b7f69d3; -[SCNContentManagerContentKey mediaContextType] */

undefined8 FUN_10b7f69cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f69d4; end: 10b7f69ff; -[SCNContentManagerContentKey .cxx_destruct] */

void FUN_10b7f69d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f6a00; end: 10b7f6adb; -[SCNContentManagerContentReference initWithUrl:contentObject:] */

undefined1 *
FUN_10b7f6a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270aff8;
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



/* Entry: 10b7f6adc; end: 10b7f6ae3; -[SCNContentManagerContentReference url] */

undefined8 FUN_10b7f6adc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f6ae4; end: 10b7f6aeb; -[SCNContentManagerContentReference contentObject] */

undefined8 FUN_10b7f6ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f6aec; end: 10b7f6b1b; -[SCNContentManagerContentReference .cxx_destruct] */

void FUN_10b7f6aec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f6b1c; end: 10b7f6bdb; -[SCNContentManagerContentResolutionAnalyticsInfo initWithVariantSelectionInfo:playerInfo:] */

undefined1 *
FUN_10b7f6b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b000;
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



/* Entry: 10b7f6bdc; end: 10b7f6be3; -[SCNContentManagerContentResolutionAnalyticsInfo variantSelectionInfo] */

undefined8 FUN_10b7f6bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f6be4; end: 10b7f6beb; -[SCNContentManagerContentResolutionAnalyticsInfo playerInfo] */

undefined8 FUN_10b7f6be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f6bec; end: 10b7f6c1b; -[SCNContentManagerContentResolutionAnalyticsInfo .cxx_destruct] */

void FUN_10b7f6bec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f6c1c; end: 10b7f6da7; -[SCNContentManagerContentRetrievalMetrics initWithNetworkMetrics:cacheMetrics:contentResolveExtractedParams:loadSource:error:boltContentId:boltOriginFallback:prefetchTrigger:] */

undefined1 *
FUN_10b7f6c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_11270b008;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f6da8; end: 10b7f6daf; -[SCNContentManagerContentRetrievalMetrics networkMetrics] */

undefined8 FUN_10b7f6da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f6db0; end: 10b7f6db7; -[SCNContentManagerContentRetrievalMetrics cacheMetrics] */

undefined8 FUN_10b7f6db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f6db8; end: 10b7f6dbf; -[SCNContentManagerContentRetrievalMetrics contentResolveExtractedParams] */

undefined8 FUN_10b7f6db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f6dc0; end: 10b7f6dc7; -[SCNContentManagerContentRetrievalMetrics loadSource] */

undefined8 FUN_10b7f6dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f6dc8; end: 10b7f6dcf; -[SCNContentManagerContentRetrievalMetrics error] */

undefined8 FUN_10b7f6dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7f6dd0; end: 10b7f6dd7; -[SCNContentManagerContentRetrievalMetrics boltContentId] */

undefined8 FUN_10b7f6dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7f6dd8; end: 10b7f6ddf; -[SCNContentManagerContentRetrievalMetrics boltOriginFallback] */

undefined1 FUN_10b7f6dd8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f6de0; end: 10b7f6de7; -[SCNContentManagerContentRetrievalMetrics prefetchTrigger] */

undefined8 FUN_10b7f6de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7f6de8; end: 10b7f6e2b; -[SCNContentManagerContentRetrievalMetrics .cxx_destruct] */

void FUN_10b7f6de8(long param_1)

{
  FUN_10b7f6e2c(param_1 + 0x38);
  FUN_10b7f6e2c(param_1 + 0x30);
  FUN_10b7f6e2c(param_1 + 0x20);
  FUN_10b7f6e2c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f6e2c; end: 10b7f6e33;  */

void FUN_10b7f6e2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b7f6e34; end: 10b7f6ef3; -[SCNContentManagerDataSlice initWithSlice:data:] */

undefined1 *
FUN_10b7f6e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b010;
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



/* Entry: 10b7f6ef4; end: 10b7f6efb; -[SCNContentManagerDataSlice slice] */

undefined8 FUN_10b7f6ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f6efc; end: 10b7f6f03; -[SCNContentManagerDataSlice data] */

undefined8 FUN_10b7f6efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f6f04; end: 10b7f6f33; -[SCNContentManagerDataSlice .cxx_destruct] */

void FUN_10b7f6f04(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f6f34; end: 10b7f6ff3; -[SCNContentManagerDecryptionInfo initWithAesCbc:aesGcm:] */

undefined1 *
FUN_10b7f6f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b018;
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



/* Entry: 10b7f6ff4; end: 10b7f6ffb; -[SCNContentManagerDecryptionInfo aesCbc] */

undefined8 FUN_10b7f6ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f6ffc; end: 10b7f7003; -[SCNContentManagerDecryptionInfo aesGcm] */

undefined8 FUN_10b7f6ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7004; end: 10b7f7033; -[SCNContentManagerDecryptionInfo .cxx_destruct] */

void FUN_10b7f7004(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f7034; end: 10b7f707f; -[SCNContentManagerDiskSizeBreakdown initWithAuthoritative:nonAuthoritative:] */

void FUN_10b7f7034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b020;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b7f7080; end: 10b7f7087; -[SCNContentManagerDiskSizeBreakdown authoritative] */

undefined8 FUN_10b7f7080(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


