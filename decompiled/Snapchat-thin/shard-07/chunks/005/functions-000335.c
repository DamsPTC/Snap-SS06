/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105618700; end: 10561871f;  */

void FUN_105618700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010561870c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105618720; end: 10561874f; -[SCMediaDataPackageManagerV2 .cxx_destruct] */

void FUN_105618720(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105618750; end: 105618827; -[SCMediaDataPackage initWithCoder:] */

undefined1 * FUN_105618750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9650;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105618828; end: 1056188ff; -[SCMediaDataPackage initWithPackageId:mediaData:overlayData:] */

undefined1 *
FUN_105618828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e9650;
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



/* Entry: 105618900; end: 105618923; -[SCMediaDataPackage copyWithZone:] */

undefined8 FUN_105618900(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105618924; end: 105618997; -[SCMediaDataPackage encodeWithCoder:] */

void FUN_105618924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110df2898);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110df28b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110df28d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105618998; end: 105618a17; -[SCMediaDataPackage hash] */

undefined8 * FUN_105618998(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_105618ab0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105618abc;
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
            goto LAB_105618abc;
          }
          goto LAB_105618ab0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105618abc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105618a18; end: 105618ad7; -[SCMediaDataPackage isEqual:] */

long FUN_105618a18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105618ab0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105618abc;
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
            goto LAB_105618abc;
          }
          goto LAB_105618ab0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105618abc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105618ad8; end: 105618adf; -[SCMediaDataPackage packageId] */

undefined8 FUN_105618ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105618ae0; end: 105618ae7; -[SCMediaDataPackage mediaData] */

undefined8 FUN_105618ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105618ae8; end: 105618aef; -[SCMediaDataPackage overlayData] */

undefined8 FUN_105618ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105618af0; end: 105618b2b; -[SCMediaDataPackage .cxx_destruct] */

void FUN_105618af0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105618b2c; end: 105618b47; +[SCMediaDataPackageBuilder mediaDataPackage] */

void FUN_105618b2c(void)

{
  _objc_alloc_init(PTR_PTR_1126bc588);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105618b48; end: 105618c5f; +[SCMediaDataPackageBuilder mediaDataPackageFromExistingMediaDataPackage:] */

void FUN_105618b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126bc588;
  _objc_retain(param_3);
  func_0x00010c0c4920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f0b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b52a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0c4820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b3760(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0ef700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2b5220(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105618c60; end: 105618c93; -[SCMediaDataPackageBuilder build] */

void FUN_105618c60(void)

{
  _objc_alloc(PTR_PTR_1126bc590);
  func_0x00010c032d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105618c94; end: 105618ccb; -[SCMediaDataPackageBuilder withPackageId:] */

long FUN_105618c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105618ccc; end: 105618d03; -[SCMediaDataPackageBuilder withMediaData:] */

long FUN_105618ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105618d04; end: 105618d3b; -[SCMediaDataPackageBuilder withOverlayData:] */

long FUN_105618d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105618d3c; end: 105618d77; -[SCMediaDataPackageBuilder .cxx_destruct] */

void FUN_105618d3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105618d78; end: 105618df7; -[SCFileBasedKeyValueStore initWithDirectoryURL:] */

undefined1 * FUN_105618d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9658;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010bcb6c2c(param_3,1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105618df8; end: 105618e83; -[SCFileBasedKeyValueStore allKeys] */

void FUN_105618df8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105618e84; end: 105618e8b;  */

void FUN_105618e84(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0899d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lastPathComponent_112600080);
  return;
}



/* Entry: 105618e8c; end: 105618ff3; -[SCFileBasedKeyValueStore setObject:forKey:] */

undefined *
FUN_105618e8c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  puVar2 = PTR_DAT_1126a4f90;
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    _objc_release(param_3);
    puVar2 = (undefined *)0x0;
    if ((param_3 == (undefined *)0x0) || ((int)puVar1 == 0)) goto LAB_105618fcc;
  }
  else {
    _objc_release(param_3);
  }
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  if ((param_3 == (undefined *)0x0) || (((ulong)puVar2 & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  func_0x00010be15b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14e060(puVar1);
  _objc_release(param_1);
  _objc_release(puVar1);
LAB_105618fcc:
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105618ff4; end: 1056190df; -[SCFileBasedKeyValueStore objectForKey:deserializeToClass:] */

void FUN_105618ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010be15b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64ac0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (param_4 == 0) {
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar3 = puVar2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_opt_isKindOfClass();
    puVar5 = (undefined *)0x0;
    if (((ulong)puVar4 & 1) != 0) {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056190e0; end: 105619167; -[SCFileBasedKeyValueStore removeObjectForKey:] */

void FUN_1056190e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_3);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be15b00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12cc60(puVar1,param_2,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105619168; end: 10561916f; -[SCFileBasedKeyValueStore _fileURLWithKey:] */

void FUN_105619168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_URLByAppendingPathComponent__11254e4b8);
  return;
}



/* Entry: 105619170; end: 10561917b; -[SCFileBasedKeyValueStore .cxx_destruct] */

void FUN_105619170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10561917c; end: 1056191bb;  */

void FUN_10561917c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd50c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056191bc; end: 10561931b; -[SCUploadMediaDataManagerServiceProvider _boltUploader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056191bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126bc5a0;
  _objc_alloc_init(PTR_PTR_1126bc5a0);
  puVar2 = PTR_PTR_1126bc5a8;
  _objc_alloc_init(PTR_PTR_1126bc5a8);
  lVar3 = param_1 + _DAT_112726e18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf1ef20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_112726e1c;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf1f440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126bc5b0;
  _objc_alloc(PTR_PTR_1126bc5b0);
  param_1 = param_1 + _DAT_112726e20;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00fda0(puVar7,param_2,puVar1,puVar2,lVar5,lVar6,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10561931c; end: 10561936b; -[SCUploadMediaDataManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10561931c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726e1c);
  _objc_destroyWeak(param_1 + _DAT_112726e24);
  _objc_destroyWeak(param_1 + _DAT_112726e20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726e18);
  return;
}



/* Entry: 10561936c; end: 10561937b; -[SCMediaPackageDataEncryptor encryptData:key:iv:] */

void FUN_10561936c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c156cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_secureEncryptWithKey_iv__112633558,param_4,param_5);
  return;
}



/* Entry: 10561937c; end: 10561967f; -[SCMediaPackageZipPacker packWithMediaData:overlayData:] */

void FUN_10561937c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc5ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc5ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126b9fa8;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105619680;
  puStack_a8 = &UNK_110891a60;
  uStack_a0 = param_3;
  _objc_retain(param_3);
  func_0x00010bf09600(puVar7,param_2,puVar2,0,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9fa8;
  puStack_e8 = puVar5;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1056196a8;
  puStack_d0 = &UNK_110891a60;
  uStack_c8 = param_4;
  puStack_88 = puVar7;
  _objc_retain(param_4);
  func_0x00010bf09600(puVar4,param_2,puVar3,0,&puStack_e8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9fb0;
  _objc_alloc(PTR_PTR_1126b9fb0);
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f769d8;
  puStack_90 = PTR____kCFBooleanTrue_11034ab68;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_90,&ppuStack_98,1);
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = 0;
  func_0x00010c008480(puVar4,param_2,puVar7,puVar6,&uStack_f0);
  uVar1 = uStack_f0;
  _objc_retain(uStack_f0);
  _objc_release(puVar6);
  uStack_f8 = 0;
  func_0x00010c2858e0(puVar4,param_2,puVar5,&uStack_f8);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(uStack_c8);
  _objc_release(uStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar7 = *(undefined **)(puVar2 + 0x20);
    _objc_retain(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105619680; end: 1056196cf;  */

void FUN_105619680(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056196d0; end: 1056198bf; -[SCMediaPackageZipPacker unpackData:mediaDataPtr:overlayDataPtr:] */

undefined1 *
FUN_1056196d0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong *param_4,
             ulong *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *unaff_x20;
  ulong *unaff_x22;
  ulong uVar12;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  ulong *puStack_190;
  ulong *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  ulong *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_148 = param_5;
  _objc_retain(param_3);
  puVar11 = PTR_PTR_1126b9fb0;
  _objc_alloc();
  uStack_f8 = 0;
  puStack_150 = param_3;
  func_0x00010c008480();
  uStack_158 = uStack_f8;
  _objc_retain();
  puVar1 = puVar11;
  puStack_160 = puVar11;
  func_0x00010bf96fc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  puStack_130 = (undefined8 *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar8 = &uStack_140;
  puVar9 = auStack_f0;
  uVar10 = 0x10;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)*puStack_130;
    do {
      unaff_x20 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_130 != puVar11) {
          _objc_enumerationMutation(puVar1);
        }
        uVar12 = *(ulong *)(lStack_138 + (long)unaff_x20 * 8);
        uVar3 = uVar12;
        func_0x00010bfacec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfda7c0();
        _objc_release(uVar3);
        unaff_x22 = param_4;
        if ((uVar4 & 1) == 0) {
          uVar3 = uVar12;
          func_0x00010bfacec0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfda7c0();
          _objc_release(uVar3);
          unaff_x22 = puStack_148;
          if ((int)uVar4 != 0) goto LAB_105619828;
        }
        else {
LAB_105619828:
          func_0x00010c0d8860();
          _objc_autorelease();
          *unaff_x22 = uVar12;
        }
        unaff_x20 = unaff_x20 + 1;
      } while (puVar2 != unaff_x20);
      puVar8 = &uStack_140;
      puVar9 = auStack_f0;
      uVar10 = 0x10;
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puStack_160);
  _objc_release(uStack_158);
  puVar5 = puStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_1a0;
  pcStack_168 = FUN_1056198c0;
  puStack_190 = unaff_x22;
  puStack_188 = param_4;
  puStack_180 = unaff_x20;
  puStack_178 = puVar11;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  puStack_198 = PTR_PTR_1126e9660;
  puStack_1a0 = puVar5;
  _objc_msgSendSuper2(&puStack_1a0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined1 **)0x0) {
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined8 **)((long)ppuVar6 + 8) = puVar8;
    _objc_release(uVar7);
    _objc_retain(puVar9);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined1 **)((long)ppuVar6 + 0x10) = puVar9;
    _objc_release(uVar7);
    _objc_retain(uVar10);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x18);
    *(undefined8 *)((long)ppuVar6 + 0x18) = uVar10;
    _objc_release(uVar7);
  }
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  return (undefined1 *)ppuVar6;
}



/* Entry: 1056198c0; end: 10561998b; -[SCUploadChunkDataManager initWithEncryptor:uploader:performer:] */

undefined1 *
FUN_1056198c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9660;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10561998c; end: 105619b97; -[SCUploadChunkDataManager initiateSegmentUploadWithTaskId:segmentData:overlayData:key:iv:stepMetrics:callbackPerformer:successHandler:failureHandler:] */

void FUN_10561998c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105619b98; end: 105619cb7;  */

void FUN_105619b98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined **)(lVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf06ae0(*(undefined8 *)(lVar1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined1 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = uVar4;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = uVar4;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = uVar4;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x40) = uVar4;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = uVar3;
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x70) = uVar3;
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x80) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105619cb8; end: 105619ddb; -[SCUploadChunkDataManager continueSegmentUploadWithTaskId:segmentData:segmentIndex:overlayData:] */

void FUN_105619cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105619ddc; end: 105619e3f;  */

void FUN_105619ddc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 2)) {
    func_0x00010bf06ae0(*(undefined8 *)(lVar1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20));
    *(long *)(lVar1 + 0x48) = *(long *)(lVar1 + 0x48) + 1;
    func_0x00010becfec0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 0x78))
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105619e40; end: 105619f17; -[SCUploadChunkDataManager completeSegmentUploadWithTaskId:] */

void FUN_105619e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105619f18; end: 105619ff7;  */

void FUN_105619f18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x38), lVar2 != 2)) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    if (lVar2 == 3) {
      uVar3 = *(undefined8 *)(lVar1 + 0x40);
      _objc_copyWeak(auStack_38,param_1 + 0x28);
      func_0x00010c0f7fc0(uVar3);
      _objc_destroyWeak(auStack_38);
    }
    else if (lVar2 == 0) {
      func_0x00010becfec0(lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105619ff8; end: 10561a037;  */

void FUN_105619ff8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x70) + 0x10))
              (*(long *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80),
               *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x78));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10561a038; end: 10561a0fb; -[SCUploadChunkDataManager cancelSegmentUploadWithTaskId:] */

void FUN_10561a038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10561a0fc; end: 10561a11f;  */

void FUN_10561a0fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x38) = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10561a120; end: 10561a123; -[SCUploadChunkDataManager uploadWithUploadTaskId:mediaData:overlayData:key:iv:mediaDuration:mediaType:captureSessionId:stepMetrics:callbackPerformer:successHandler:failureHandler:] */

void FUN_10561a120(void)

{
  return;
}



/* Entry: 10561a124; end: 10561a127; -[SCUploadChunkDataManager startMonitoringUploadProgressWithUploadTaskId:progressHandler:] */

void FUN_10561a124(void)

{
  return;
}



/* Entry: 10561a128; end: 10561a2e3; -[SCUploadChunkDataManager _uploadWithUploadRequest:uploadTaskId:stepMetrics:callbackPerformer:successHandler:failureHandler:] */

void FUN_10561a128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar3 = &puStack_e0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10561a2e4;
  puStack_90 = &UNK_1108a0790;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_5);
  uStack_80 = param_5;
  uStack_78 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  ppuVar2 = &puStack_a8;
  _objc_retainBlock(ppuVar2);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x10561a3c4;
  puStack_c8 = &UNK_1108a07c0;
  uStack_c0 = param_4;
  uStack_b8 = param_5;
  uStack_b0 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_e0);
  func_0x00010c28eb40(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_6,ppuVar2,ppuVar3);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_7);
  return;
}



/* Entry: 10561a2e4; end: 10561a4df;  */

void FUN_10561a2e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = 4;
  FUN_10562f854(4,0,uVar5,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x30);
  uVar5 = param_2;
  func_0x00010c15ea20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0c59e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5,uVar2,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10561a4e0; end: 10561a907; -[SCUploadChunkDataManager _triggerUploadWithUploadTaskId:stepMetrics:] */

void FUN_10561a4e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    uVar11 = lVar1 - *(long *)(param_1 + 0x28);
    if (uVar11 >> 0x12 == 0) {
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) goto LAB_10561a8ac;
      uStack_e0 = 1;
      *(undefined8 *)(param_1 + 0x38) = 1;
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010c08fa60(lVar1);
    }
    else {
      uStack_e0 = 0;
      *(undefined8 *)(param_1 + 0x38) = 1;
      lVar1 = *(long *)(param_1 + 0x20);
    }
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar2;
    _objc_retain(lVar1);
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010bf93860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (uVar11 < 0x40000) {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    else {
      func_0x00010c08fa60(puVar3);
      puVar4 = puVar3;
      func_0x00010c25eac0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c08fa60(puVar5);
      puVar4 = puVar3;
      func_0x00010c25eac0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      *(undefined **)(param_1 + 0x60) = puVar6;
      _objc_release(uVar10);
      _objc_release(puVar4);
    }
    puVar6 = PTR_PTR_1126b5980;
    func_0x00010bf1f1e0(PTR_PTR_1126b5980);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aade0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3a20(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8800(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5988;
    func_0x00010bfeb740(PTR_PTR_1126b5988);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abca0(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar7 = PTR_PTR_1126bc5b8;
    _objc_alloc(PTR_PTR_1126bc5b8);
    func_0x00010c08fa60(puVar5);
    func_0x00010c01d800(puVar7);
    func_0x00010c2bc100(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    _objc_initWeak(auStack_78,param_1);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10561a908;
    puStack_98 = &UNK_1108a07f0;
    _objc_copyWeak(auStack_88,auStack_78);
    uStack_80 = uStack_e0;
    _objc_retain(param_3);
    ppuVar8 = &puStack_b0;
    uStack_90 = param_3;
    _objc_retainBlock(ppuVar8);
    puStack_d8 = puVar4;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10561aacc;
    puStack_c0 = &UNK_1108a0820;
    _objc_copyWeak(auStack_b8,auStack_78);
    ppuVar9 = &puStack_d8;
    _objc_retainBlock(ppuVar9);
    puVar4 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee5f60(param_1);
    _objc_release(puVar4);
    _objc_release(ppuVar9);
    _objc_destroyWeak(auStack_b8);
    _objc_release(ppuVar8);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(lVar1);
  }
LAB_10561a8ac:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10561a908; end: 10561aa83;  */

void FUN_10561a908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x38) = 0;
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      func_0x00010becfec0(lVar1);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
      _objc_copyWeak(auStack_58,param_1 + 0x28);
      _objc_retain(param_2);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10561aa84; end: 10561aacb;  */

void FUN_10561aa84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x68) + 0x10))
              (*(long *)(lVar1 + 0x68),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 0x20),
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10561aacc; end: 10561ab5b;  */

void FUN_10561aacc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x38) = 3;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_2;
    _objc_release(uVar1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10561ab5c; end: 10561ac03; -[SCUploadChunkDataManager .cxx_destruct] */

void FUN_10561ab5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10561ac04; end: 10561ad57; -[SCUploadMediaDataManager initWithEncryptor:packer:uploader:uploadFromFile:grapheneRegistryLazy:] */

undefined1 *
FUN_10561ac04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e9668;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10561ad58; end: 10561b487; -[SCUploadMediaDataManager uploadWithUploadTaskId:mediaData:overlayData:key:iv:mediaDuration:mediaType:captureSessionId:stepMetrics:callbackPerformer:successHandler:failureHandler:] */

void FUN_10561ad58(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,long param_15)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_12);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    FUN_10562f854();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_12);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    (**(code **)(param_15 + 0x10))
              (param_15,0,puVar3,lVar2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  else {
    uVar1 = 0;
    FUN_10562f854(0,0,param_12,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_12);
    lVar2 = param_5;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      _objc_retain(param_4);
      lVar2 = param_4;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c0f0a60();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = 2;
    FUN_10562f854(2,0,uVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010bf93860();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      uVar1 = 3;
      FUN_10562f854(3,4,uVar4,0,6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      (**(code **)(param_15 + 0x10))
                (param_15,0,puVar3,uVar1,&PTR____CFConstantStringClassReference_110daafd8);
      _objc_release(puVar3);
      _objc_release(uVar1);
    }
    else {
      uVar1 = 3;
      FUN_10562f854(3,0,uVar4,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar3 = PTR_PTR_1126b5980;
      func_0x00010bf1f1e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aade0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3a20(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8800(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010c2bc180();
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x0001005c6500();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar11;
        func_0x00010c25ce00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf55d80();
        _objc_release();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar9 = puVar7;
        func_0x00010c25ce00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c14e080();
        if ((int)lVar6 == 0) {
          _objc_release(puVar11);
          puVar10 = PTR_PTR_1126b5988;
          func_0x00010bfeb740(PTR_PTR_1126b5988);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar10 = PTR_PTR_1126b5988;
          func_0x00010c09d8a0(PTR_PTR_1126b5988);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c2abca0(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      else {
        puVar11 = PTR_PTR_1126b5988;
        func_0x00010bfeb740(PTR_PTR_1126b5988);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2abca0(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = (undefined *)0x0;
      }
      func_0x00010c2acb60(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2aa1c0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee5f80(param_1);
      _objc_release(puVar8);
      _objc_release(puVar11);
      _objc_release(puVar3);
      uVar4 = uVar1;
    }
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(uVar4);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10561b488; end: 10561b6a3; -[SCUploadMediaDataManager initiateSegmentUploadWithTaskId:segmentData:overlayData:key:iv:stepMetrics:callbackPerformer:successHandler:failureHandler:] */

void FUN_10561b488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126bc5c0;
  _objc_alloc(PTR_PTR_1126bc5c0);
  func_0x00010c00fdc0();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_10);
  _objc_retain(param_3);
  func_0x00010c064e00(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10561b6a4; end: 10561b77b;  */

void FUN_10561b6a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),param_2,param_3,param_4,param_5,param_6);
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x30));
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10561b77c; end: 10561b817; -[SCUploadMediaDataManager continueSegmentUploadWithTaskId:segmentData:segmentIndex:overlayData:] */

void FUN_10561b77c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4fc00();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10561b818; end: 10561b86b; -[SCUploadMediaDataManager completeSegmentUploadWithTaskId:] */

void FUN_10561b818(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43b40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10561b86c; end: 10561b8f3; -[SCUploadMediaDataManager cancelSegmentUploadWithTaskId:] */

void FUN_10561b86c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2f060();
    _objc_release(uVar2);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10561b8f4; end: 10561b983; -[SCUploadMediaDataManager cancelUploadWithUploadTaskId:completion:] */

void FUN_10561b8f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_s_cancelUploadWithUniqueMediaId_co_1125a96c0;
  uVar2 = *(ulong *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_opt_respondsToSelector(uVar2,puVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    func_0x00010bf2f460(*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10561b984; end: 10561b98b; -[SCUploadMediaDataManager startMonitoringUploadProgressWithUploadTaskId:progressHandler:] */

void FUN_10561b984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_startMonitoringUploadProgressWit_112671770);
  return;
}



/* Entry: 10561b98c; end: 10561bc8f; -[SCUploadMediaDataManager _uploadWithUploadRequest:uploadTaskId:stepMetrics:callbackPerformer:tempFileURL:dataSource:fileFallback:successHandler:failureHandler:] */

void FUN_10561b98c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10561bc90;
  puStack_88 = &UNK_110842e18;
  uStack_80 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10561bce0;
  puStack_c0 = &UNK_1108a0880;
  uStack_a8 = param_9;
  uStack_b8 = param_8;
  uStack_b0 = uVar6;
  _objc_retain(uVar6);
  _objc_retain(param_8);
  ppuVar3 = &puStack_d8;
  _objc_retainBlock();
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10561be00;
  puStack_108 = &UNK_1108a08b0;
  _objc_retain(ppuVar2);
  ppuStack_f0 = ppuVar2;
  _objc_retain(ppuVar3);
  ppuStack_e8 = ppuVar3;
  _objc_retain(param_4);
  uStack_100 = param_4;
  _objc_retain(param_5);
  uStack_e0 = param_11;
  uStack_f8 = param_5;
  _objc_retain(param_11);
  ppuVar4 = &puStack_120;
  _objc_retainBlock(ppuVar4);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_10561bf5c;
  puStack_150 = &UNK_1108a08e0;
  uStack_128 = param_12;
  uStack_148 = param_4;
  uStack_140 = param_5;
  ppuStack_138 = ppuVar2;
  ppuStack_130 = ppuVar3;
  _objc_retain(param_12);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar2);
  ppuVar5 = &puStack_168;
  _objc_retainBlock(ppuVar5);
  func_0x00010c28eb40(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_6,ppuVar4,ppuVar5);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(ppuVar5);
  _objc_release(uStack_128);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(ppuStack_130);
  _objc_release(ppuStack_138);
  _objc_release(ppuVar4);
  _objc_release(uStack_e0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(ppuStack_e8);
  _objc_release(ppuStack_f0);
  _objc_release(ppuVar3);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uVar6);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(param_12);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 10561bc90; end: 10561bcdf;  */

void FUN_10561bc90(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10561bce0; end: 10561bdff;  */

void FUN_10561bce0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bc530;
  _objc_retain(param_2);
  func_0x00010c28de60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c5a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10561be00; end: 10561beff;  */

void FUN_10561be00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  lVar5 = *(long *)(param_1 + 0x30);
  pcVar6 = *(code **)(lVar5 + 0x10);
  _objc_retain(param_2);
  (*pcVar6)(lVar5);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),&PTR____CFConstantStringClassReference_110dab0d8);
  uVar1 = 4;
  FUN_10562f854(4,0,*(undefined8 *)(param_1 + 0x28),0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x40);
  uVar2 = param_2;
  func_0x00010c15ea20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0c59e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar5 + 0x10))(lVar5,uVar2,uVar3,uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10561bf00; end: 10561bf5b;  */

void FUN_10561bf00(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  return;
}



/* Entry: 10561bf5c; end: 10561c09b;  */

void FUN_10561bf5c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(param_1 + 0x30);
  pcVar7 = *(code **)(lVar6 + 0x10);
  _objc_retain(param_2);
  (*pcVar7)(lVar6);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),&PTR____CFConstantStringClassReference_110dab118);
  lVar6 = param_2;
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 3;
  if (lVar6 == 0) {
    uVar1 = 1;
  }
  _objc_release();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  lVar6 = param_2;
  func_0x00010bfa00c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 4;
  FUN_10562f854(4,uVar1,uVar8,lVar6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = param_2;
  func_0x00010c13b720(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c0c59e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar5 + 0x10))(lVar5,lVar6,lVar3,uVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10561c09c; end: 10561c0fb; -[SCUploadMediaDataManager .cxx_destruct] */

void FUN_10561c09c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10561c0fc; end: 10561c323; -[SCNativeDirectDataUploader initWithNativeNetworkManager:uploadProgressMonitorLazy:userBlizzardLoggerLazy:backgroundUploadDbPath:applicationLifecycleEvents:] */

undefined8 *
FUN_10561c0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e9670;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bc5c8;
    func_0x00010bf54440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bc5d0;
    func_0x00010bf54280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    lVar4 = param_6;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      func_0x00010bec7360(puVar1);
      _objc_initWeak(auStack_68,puVar1);
      uVar2 = param_7;
      func_0x00010bf75dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      uVar5 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = puVar1[5];
      puVar1[5] = uVar5;
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    puVar3 = PTR_PTR_1126bc5d8;
    _objc_alloc();
    func_0x00010bff8c60();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10561c324; end: 10561c377;  */

void FUN_10561c324(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    func_0x00010bf04f80(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10561c378; end: 10561c467; -[SCNativeDirectDataUploader _subscribeToBackgroundTaskResults] */

void FUN_10561c378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126bc5e0;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  puVar2 = puVar1;
  func_0x00010bf00300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x15,
                        &PTR____CFConstantStringClassReference_110df2a58);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10561c468;
    puStack_48 = &UNK_110841f80;
    _objc_retain(puVar2);
    puStack_40 = puVar2;
    uStack_38 = param_1;
    func_0x00010c0f7fc0(puVar3,param_2,&puStack_60);
    _objc_release(puStack_40);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10561c468; end: 10561c59b;  */

void FUN_10561c468(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  puVar5 = auStack_e8;
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,puVar5,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e00e0(uVar7,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        func_0x00010c2827c0();
        func_0x00010bf7e820(uVar1,param_2,uVar8,uVar3);
        _objc_release(uVar7);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar5 = auStack_e8;
      lVar2 = lVar6;
      puVar4 = &uStack_130;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,puVar5,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(lVar6 + 0x18);
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f520();
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10561c59c; end: 10561c60b; -[SCNativeDirectDataUploader startMonitoringUploadProgressWithUniqueMediaId:progressHandler:] */

void FUN_10561c59c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f520();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10561c60c; end: 10561c60f; -[SCNativeDirectDataUploader uploadData:uniqueMediaId:callbackPerformer:successBlock:failureBlock:] */

void FUN_10561c60c(void)

{
  return;
}



/* Entry: 10561c610; end: 10561c613; -[SCNativeDirectDataUploader uploadWithRequest:callbackPerformer:successBlock:failureBlock:] */

void FUN_10561c610(void)

{
  return;
}



/* Entry: 10561c614; end: 10561c6d3; -[SCNativeDirectDataUploader isBackgroundUploadComplete:] */

bool FUN_10561c614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bc5e8;
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf4c700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0c67c0(param_3);
  uVar4 = param_3;
  func_0x00010bf0b760(param_3);
  _objc_release(param_3);
  func_0x00010c029600(puVar1,param_2,uVar2,uVar3,uVar4);
  func_0x00010bfcbb40(lVar5,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  return lVar5 == 0;
}



/* Entry: 10561c6d4; end: 10561cb9b; -[SCNativeDirectDataUploader uploadWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:] */

void FUN_10561c6d4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126bc5f0;
  _objc_alloc();
  func_0x00010bf0b760(param_3);
  _objc_retain(param_3);
  _objc_retain(param_9);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10561ce1c;
  uStack_88 = 0x10561ce2c;
  uStack_80 = 0;
  uVar2 = param_3;
  func_0x00010bf64080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_9);
  func_0x00010c0be5c0(uVar2);
  _objc_release(uVar2);
  uVar14 = puStack_a0[5];
  _objc_retain(uVar14);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_9);
  _objc_release(param_3);
  uVar2 = param_3;
  func_0x00010bf4c700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c67c0(param_3);
  uVar3 = param_3;
  func_0x00010c28e280();
  FUN_10562d740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235140();
  func_0x00010c28e560();
  func_0x00010bff4600();
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c235140();
  puVar4 = PTR_PTR_1126bc5f8;
  uVar14 = 0;
  if ((uVar2 & 1) == 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar14);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf8b340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059c40();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = param_4;
  func_0x00010c28ea00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(uVar6);
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar6 = param_4;
  func_0x00010c28e9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bdc2f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf51e00();
  uVar9 = param_4;
  func_0x00010bf4d200(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010bf4d200(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28da80(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10561cb9c; end: 10561cdc7; -[SCNativeDirectDataUploader didUpdateTaskResultForRequestKey:withTaskResult:] */

void FUN_10561cb9c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 4) {
    lVar1 = param_3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      lVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0dfd40(param_3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bf529e0();
      if (lVar4 == 2) {
        lVar4 = lVar2;
        func_0x00010c0dfd40(lVar2,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(lVar4);
        lVar4 = lVar2;
        func_0x00010c0dfd40(lVar2,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(lVar4);
        puVar3 = PTR_PTR_1126bc5e8;
        _objc_alloc(PTR_PTR_1126bc5e8);
        func_0x00010c029600();
        uVar7 = 0;
        lVar4 = *(long *)(param_1 + 0x10);
        if (param_4 < 6) {
          uVar7 = *(undefined8 *)(&UNK_10ddb5908 + param_4 * 8);
        }
        func_0x00010c21cc40(lVar4,param_2,puVar3,uVar7);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          lVar5 = lVar4;
          func_0x00010c28e0a0(lVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar4;
          func_0x00010bf4db80(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0aa460(uVar7,param_2,lVar4,lVar5,lVar6,0,0,0,0);
          _objc_release(lVar6);
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
        _objc_release(puVar3);
      }
      _objc_release(lVar1);
      param_3 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10561cdc8; end: 10561ce1b; -[SCNativeDirectDataUploader .cxx_destruct] */

void FUN_10561cdc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10561ce1c; end: 10561ce33;  */

void FUN_10561ce1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10561ce34; end: 10561d257;  */

void FUN_10561ce34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar5 = param_2;
  if (lVar1 == 0) {
    _objc_retain(param_2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf93e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf93e00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar2);
  }
  puVar6 = PTR_PTR_1126bc600;
  _objc_alloc();
  func_0x00010c008cc0();
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined **)(lVar1 + 0x28) = puVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10561d258; end: 10561d43b; -[SCNativeDirectDataUploaderCallback initWithUploadSuccessBlock:failureBlock:callbackPerformer:cupsMetricsLogger:uploadLocationCallbackMetrics:locationAttribution:mediaDuration:captureSessionId:mediaOrchestrationId:] */

undefined1 *
FUN_10561d258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e9678;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10561d43c; end: 10561d677; -[SCNativeDirectDataUploaderCallback onSuccess:serializedContentObject:contentUploadCallbackMetrics:] */

void FUN_10561d43c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c0aa460(*(long *)(param_1 + 0x20),param_2,param_5,*(undefined8 *)(param_1 + 0x28),
                        param_3,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30));
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf51e00();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x10561d574;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_5);
    uStack_50 = param_5;
    _objc_retain(lVar1);
    lStack_48 = lVar1;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10561d678; end: 10561d8d3; -[SCNativeDirectDataUploaderCallback onFailure:contentUploadCallbackMetrics:] */

void FUN_10561d678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c0aa460(*(long *)(param_1 + 0x20),param_2,param_4,*(undefined8 *)(param_1 + 0x28),0,
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30));
  }
  uVar1 = param_3;
  func_0x00010b7f5498();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf51e00();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x10561d7b8;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(uVar1);
    uStack_60 = uVar1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(lVar2);
    lStack_48 = lVar2;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10561d8d4; end: 10561d957; -[SCNativeDirectDataUploaderCallback .cxx_destruct] */

void FUN_10561d8d4(long param_1)

{
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



/* Entry: 10561d958; end: 10561d9cb; -[SCResumableUploadDataProvider initWithContentDeliveryLazy:] */

undefined1 * FUN_10561d958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9680;
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



/* Entry: 10561d9cc; end: 10561db53; -[SCResumableUploadDataProvider saveUploadData:forMediaId:completion:callbackPerformer:] */

void FUN_10561d9cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    FUN_10561db54(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf64e40(0x4132750000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10561dbc4;
    puStack_68 = &UNK_110858070;
    _objc_retain(param_6);
    lStack_60 = param_6;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x00010c14a860(uVar4,param_2,param_3,lVar1,puVar3,1,&puStack_80);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(uVar4);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10561db54; end: 10561dbc3;  */

void FUN_10561db54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df2af8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10561dbc4; end: 10561dc43;  */

void FUN_10561dbc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10561dc44; end: 10561dc57;  */

void FUN_10561dc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010561dc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10561dc58; end: 10561dda3; -[SCResumableUploadDataProvider retrieveUploadDataForMediaId:completion:callbackPerformer:] */

void FUN_10561dc58(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_10561db54(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10561dda4;
    puStack_58 = &UNK_1108a0970;
    _objc_retain(param_5);
    lStack_50 = param_5;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010c13e480(uVar3,param_2,lVar1,puVar2,&puStack_70);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10561dda4; end: 10561de43;  */

void FUN_10561dda4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10561de44; end: 10561de53;  */

void FUN_10561de44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010561de50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10561de54; end: 10561df6f; -[SCResumableUploadDataProvider removeUploadDataForMediaId:] */

void FUN_10561de54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    FUN_10561db54(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c1285c0(uVar1);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10561df70; end: 10561dfab;  */

void FUN_10561df70(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be8bb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10561dfac; end: 10561e08f; -[SCResumableUploadDataProvider _removeContentForMediaId:] */

void FUN_10561dfac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    param_1 = *(long *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_10561db54();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b940(param_1);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10561e090; end: 10561e09b; -[SCResumableUploadDataProvider .cxx_destruct] */

void FUN_10561e090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10561e09c; end: 10561e1ab; -[SCBoltDataUploadProgressMonitor initWithRequestManager:] */

undefined1 * FUN_10561e09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9688;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10561e1ac; end: 10561e2f3; -[SCBoltDataUploadProgressMonitor cancelUploadForUniqueMediaId:completion:] */

void FUN_10561e1ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10561e264;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


