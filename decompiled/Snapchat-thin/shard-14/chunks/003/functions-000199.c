/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0b768c; end: 10b0b77eb;  */

void FUN_10b0b768c(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  if (*(long *)(param_1 + 0x28) != 0) {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f5d638);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b0b77ec;
    puStack_60 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    puStack_58 = puVar3;
    uStack_50 = uVar2;
    _objc_retain(puVar3);
    func_0x000107c27d8c(uVar1,&puStack_78);
    _objc_release(puStack_58);
    _objc_release(uStack_50);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar4 + 0x28);
  puVar4 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c010760();
  (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b0b77ec; end: 10b0b7837;  */

void FUN_10b0b77ec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c010760();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b7838; end: 10b0b78a3;  */

void FUN_10b0b7838(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c280e20(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c022a20(puVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b78a4; end: 10b0b78ab; -[SCLensUnlockableUnlockerImpl unlockedLensMetadataObservable] */

undefined8 FUN_10b0b78a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0b78ac; end: 10b0b790b; -[SCLensUnlockableUnlockerImpl .cxx_destruct] */

void FUN_10b0b78ac(long param_1)

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



/* Entry: 10b0b790c; end: 10b0b7913; -[SCLensUnlockerAction initWithLensId:actionType:] */

void FUN_10b0b790c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0242b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLensId_actionType_expira_1125e6a90,param_3,param_4,0);
  return;
}



/* Entry: 10b0b7914; end: 10b0b79a3; -[SCLensUnlockerAction initWithLensMetadata:actionType:] */

undefined8
FUN_10b0b7914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024720(param_1,param_2,uVar1,0,param_4,0,0,0,0,0,0,param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0b79a4; end: 10b0b79af; -[SCLensUnlockerAction initWithLensId:actionType:unlockSource:lensCollectionId:] */

void FUN_10b0b79a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0242d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithLensId_actionType_unlock_1125e6a98);
  return;
}



/* Entry: 10b0b79b0; end: 10b0b79bf; -[SCLensUnlockerAction initWithLensId:actionType:expirationDate:] */

void FUN_10b0b79b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0242d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLensId_actionType_unlock_1125e6a98,param_3,param_4,0,param_5,0);
  return;
}



/* Entry: 10b0b79c0; end: 10b0b79fb; -[SCLensUnlockerAction initWithLensId:actionType:unlockSource:expirationDate:lensCollectionId:] */

void FUN_10b0b79c0(void)

{
  func_0x00010c024720();
  return;
}



/* Entry: 10b0b79fc; end: 10b0b7a37; -[SCLensUnlockerAction initWithMachineReadableCode:actionType:] */

void FUN_10b0b79fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c024720(param_1,param_2,0,param_3,param_4,1,0,0,0,0,0,0);
  return;
}



/* Entry: 10b0b7a38; end: 10b0b7bf7; -[SCLensUnlockerAction initWithLensId:machineReadableCode:actionType:unlockType:unlockSource:expirationDate:snapId:lensCollectionId:unlockableSnapInfo:lensMetadata:] */

undefined8 *
FUN_10b0b7a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_112705810;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    puVar1[3] = param_5;
    if (param_8 == 0) {
      puVar3 = PTR_PTR_1126b1be0;
      func_0x00010be0c520();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[2];
      puVar1[2] = puVar3;
    }
    else {
      _objc_retain(param_8);
      uVar2 = puVar1[2];
      puVar1[2] = param_8;
    }
    _objc_release(uVar2);
    puVar1[4] = param_6;
    puVar1[5] = param_7;
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b0b7bf8; end: 10b0b7c63; +[SCLensUnlockerAction _expirationDateForAction:] */

void FUN_10b0b7bf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 2) {
    uVar1 = 0x40f5180000000000;
  }
  else {
    if (param_3 == 1) {
      func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b0b7c5c;
    }
    if (param_3 != 0) goto LAB_10b0b7c5c;
    uVar1 = 0x4072c00000000000;
  }
  func_0x00010bf65600(uVar1,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
LAB_10b0b7c5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0b7c64; end: 10b0b7c6b; -[SCLensUnlockerAction lensId] */

undefined8 FUN_10b0b7c64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0b7c6c; end: 10b0b7c73; -[SCLensUnlockerAction expirationDate] */

undefined8 FUN_10b0b7c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0b7c74; end: 10b0b7c7b; -[SCLensUnlockerAction actionType] */

undefined8 FUN_10b0b7c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0b7c7c; end: 10b0b7c83; -[SCLensUnlockerAction unlockType] */

undefined8 FUN_10b0b7c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0b7c84; end: 10b0b7c8b; -[SCLensUnlockerAction unlockSource] */

undefined8 FUN_10b0b7c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0b7c8c; end: 10b0b7c93; -[SCLensUnlockerAction machineReadableCode] */

undefined8 FUN_10b0b7c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0b7c94; end: 10b0b7c9b; -[SCLensUnlockerAction lensMetadata] */

undefined8 FUN_10b0b7c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0b7c9c; end: 10b0b7ca3; -[SCLensUnlockerAction snapId] */

undefined8 FUN_10b0b7c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0b7ca4; end: 10b0b7cab; -[SCLensUnlockerAction unlockableSnapInfo] */

undefined8 FUN_10b0b7ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b0b7cac; end: 10b0b7cb3; -[SCLensUnlockerAction lensCollectionId] */

undefined8 FUN_10b0b7cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b0b7cb4; end: 10b0b7d1f; -[SCLensUnlockerAction .cxx_destruct] */

void FUN_10b0b7cb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b7d20; end: 10b0b7da7; -[SCLensUnlockerResult initWithLens:resultType:unlockType:] */

undefined1 *
FUN_10b0b7d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705818;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b7da8; end: 10b0b7e1f; -[SCLensUnlockerResult initWithError:] */

undefined1 * FUN_10b0b7da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705818;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b7e20; end: 10b0b7e27; -[SCLensUnlockerResult lens] */

undefined8 FUN_10b0b7e20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0b7e28; end: 10b0b7e2f; -[SCLensUnlockerResult resultType] */

undefined8 FUN_10b0b7e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0b7e30; end: 10b0b7e37; -[SCLensUnlockerResult unlockType] */

undefined8 FUN_10b0b7e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0b7e38; end: 10b0b7e3f; -[SCLensUnlockerResult error] */

undefined8 FUN_10b0b7e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0b7e40; end: 10b0b7e6f; -[SCLensUnlockerResult .cxx_destruct] */

void FUN_10b0b7e40(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b7e70; end: 10b0b7f3b; -[SCLensUnlockerStore initWithGenericStore:lensUnlocker:lensDataConfig:] */

undefined1 *
FUN_10b0b7e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112705820;
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



/* Entry: 10b0b7f3c; end: 10b0b80b3; -[SCLensUnlockerStore performAction:completion:completionQueue:] */

void FUN_10b0b7f3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = 0x19;
  func_0x000107c312b8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8060(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0b80b4; end: 10b0b83bf;  */

void FUN_10b0b80b4(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
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
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = param_2;
  if (puVar2 == (undefined *)0x0) {
    if (lVar1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar4 = *(long *)(lVar1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010c098240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar8);
    lVar4 = lVar8;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar8);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar7 * 8);
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c094540(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar9;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar9);
          if ((int)uVar3 != 0) {
            puVar6 = PTR_PTR_1126df910;
            _objc_alloc();
            func_0x00010c280e20(*(undefined8 *)(param_1 + 0x20));
            func_0x00010c022a20();
            _objc_release(param_2);
            goto LAB_10b0b82d0;
          }
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        lVar4 = lVar8;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
LAB_10b0b82d0:
    _objc_release(lVar8);
    _objc_release(lVar8);
  }
  else if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9720(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar2 = *(undefined **)(param_1 + 0x28);
    if (*(undefined **)(param_1 + 0x28) == (undefined *)0x0) {
      puVar2 = PTR___dispatch_main_q_11034be20;
    }
    _objc_retain(puVar2);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_10b0b83c0;
    puStack_148 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uStack_138 = uVar3;
    _objc_retain(puVar6);
    puStack_140 = puVar6;
    func_0x000107c27d8c(puVar2,&puStack_160);
    _objc_release(puStack_140);
    _objc_release(uStack_138);
    _objc_release(puVar2);
  }
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010b0b83cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
              (*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
    return;
  }
  return;
}



/* Entry: 10b0b83c0; end: 10b0b83cf;  */

void FUN_10b0b83c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0b83cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0b83d0; end: 10b0b846b; -[SCLensUnlockerStore applyMetadataProviderSettings:] */

void FUN_10b0b83d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126de6c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bba0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c115be0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bba80();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b846c; end: 10b0b84bb; -[SCLensUnlockerStore addListener:] */

void FUN_10b0b846c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b84bc; end: 10b0b850b; -[SCLensUnlockerStore removeListener:] */

void FUN_10b0b84bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b850c; end: 10b0b853f; -[SCLensUnlockerStore warmUp] */

void FUN_10b0b850c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b8540; end: 10b0b857b; -[SCLensUnlockerStore startUpdatingWithMode:] */

void FUN_10b0b8540(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b857c; end: 10b0b85af; -[SCLensUnlockerStore stopUpdating] */

void FUN_10b0b857c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b85b0; end: 10b0b85e3; -[SCLensUnlockerStore synchronize] */

void FUN_10b0b85b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b85e4; end: 10b0b8653; -[SCLensUnlockerStore lenses] */

void FUN_10b0b85e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0b8654; end: 10b0b86c3; -[SCLensUnlockerStore lensesToPrefetch] */

void FUN_10b0b8654(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0987c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0b86c4; end: 10b0b8703; -[SCLensUnlockerStore hasMoreLensesToLoad] */

undefined8 FUN_10b0b86c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd93e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10b0b8704; end: 10b0b8743; -[SCLensUnlockerStore loadMoreTriggerDistance] */

undefined8 FUN_10b0b8704(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09bc00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10b0b8744; end: 10b0b874f; -[SCLensUnlockerStore supportsFilteringForAttribute:] */

bool FUN_10b0b8744(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 10b0b8750; end: 10b0b878b; -[SCLensUnlockerStore .cxx_destruct] */

void FUN_10b0b8750(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b878c; end: 10b0b883f;  */

undefined8 FUN_10b0b878c(long param_1)

{
  if (param_1 < 0x2a) {
    if (param_1 == 0) {
      return 0xc;
    }
    if (param_1 == 1) {
      return 0xe;
    }
    if (param_1 == 8) {
      return 0x16;
    }
  }
  else {
    if (param_1 - 0x2aU < 3) {
      return 10;
    }
    if (param_1 == 0x4d) {
      return 0x14;
    }
    if (param_1 == 0x4f) {
      return 0x16;
    }
  }
  return 0;
}



/* Entry: 10b0b8840; end: 10b0b88b3; -[SCUnlockableNetworkAPIRetrievalAdapter initWithLensMetadataRetriever:] */

undefined1 * FUN_10b0b8840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705828;
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



/* Entry: 10b0b88b4; end: 10b0b891b; -[SCUnlockableNetworkAPIRetrievalAdapter fetchUnlockablesWhichChecksumsAbsentInMap:unlockGroups:callbackPerformer:successBlock:failureBlock:] */

void FUN_10b0b88b4(void)

{
  undefined *puVar1;
  long in_x6;
  
  puVar1 = PTR_PTR_1126bbbd8;
  if (in_x6 != 0) {
    _objc_retain(in_x6);
    func_0x00010be0b0a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_x6 + 0x10))(in_x6,puVar1,0);
    _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b0b891c; end: 10b0b898f; -[SCUnlockableNetworkAPIRetrievalAdapter addUnlockWithUnlockableId:unlockType:metadataParams:deepLinkAppId:deepLinkProperties:snapInfo:callbackPerformer:successBlock:failureBlock:] */

void FUN_10b0b891c(void)

{
  undefined *puVar1;
  long in_stack_00000010;
  
  puVar1 = PTR_PTR_1126bbbd8;
  if (in_stack_00000010 != 0) {
    _objc_retain(in_stack_00000010);
    func_0x00010be0b0a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_stack_00000010 + 0x10))(in_stack_00000010,puVar1,1,0);
    _objc_release(in_stack_00000010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b0b8990; end: 10b0b89f7; -[SCUnlockableNetworkAPIRetrievalAdapter removeUnlockableWithId:unlockTypes:callbackPerformer:successBlock:failureBlock:] */

void FUN_10b0b8990(void)

{
  undefined *puVar1;
  long in_x6;
  
  puVar1 = PTR_PTR_1126bbbd8;
  if (in_x6 != 0) {
    _objc_retain(in_x6);
    func_0x00010be0b0a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_x6 + 0x10))(in_x6,puVar1,0);
    _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b0b89f8; end: 10b0b8b53; -[SCUnlockableNetworkAPIRetrievalAdapter fetchMetadataWithUnlockableId:unlockType:metadataParams:callbackPerformer:successBlock:failureBlock:] */

void FUN_10b0b89f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0952c0(uVar4,param_2,puVar2,0xb);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b0b8b54;
  puStack_68 = &UNK_110cb84f8;
  uStack_60 = param_8;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c297260(uVar3,param_2,&puStack_80,param_6);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_7);
  _objc_release(param_8);
  return;
}



/* Entry: 10b0b8b54; end: 10b0b8ca3;  */

void FUN_10b0b8b54(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,1,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c0c0760(param_2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0b8ca4; end: 10b0b8cff;  */

void FUN_10b0b8ca4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0b8cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,200);
    return;
  }
  return;
}



/* Entry: 10b0b8d00; end: 10b0b8d1b; +[SCUnlockableNetworkAPIRetrievalAdapter _errorMethodNotImplemented] */

void FUN_10b0b8d00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110f5d898,0,0);
  return;
}



/* Entry: 10b0b8d1c; end: 10b0b8d27; -[SCUnlockableNetworkAPIRetrievalAdapter .cxx_destruct] */

void FUN_10b0b8d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b8d28; end: 10b0b8feb; -[SCUnlockableTrackInfo backfilledWithUnlockInfo:] */

void FUN_10b0b8d28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  if (lVar1 != 0) {
    lVar2 = param_3;
  }
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = param_3;
  func_0x00010c11fa40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  if (lVar3 != 0) {
    lVar1 = param_3;
  }
  func_0x00010c11fa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126bb898;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010bef4d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c11ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c23e500();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf93c40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bef5fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf93ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c086040();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c119580();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf17380();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c0fcb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1ec0(puVar4,param_2,lVar3,lVar5,lVar6,lVar7,lVar8,lVar2,lVar1,lVar9,lVar10,lVar11,
                      lVar12,lVar13,lVar14,lVar15,lVar16,param_1);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0b8fec; end: 10b0b8ff3; -[SCLensDataStoreWriterAdapter unlockableDataStore] */

void FUN_10b0b8fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 10b0b8ff4; end: 10b0b9043; -[SCLensDataStoreWriterAdapter updateDataStoresWithUnlockedLens:callerIdentifier:] */

void FUN_10b0b8ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c280fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284f60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0b9044; end: 10b0b904f; -[SCLensDataStoreWriterAdapter .cxx_destruct] */

void FUN_10b0b9044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b9050; end: 10b0b90c3; -[SCLensUnlockerMockService initWithLensUnlockerMock:] */

undefined1 * FUN_10b0b9050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705838;
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



/* Entry: 10b0b90c4; end: 10b0b90cb; -[SCLensUnlockerMockService lensUnlockerMock] */

undefined8 FUN_10b0b90c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0b90cc; end: 10b0b90d7; -[SCLensUnlockerMockService .cxx_destruct] */

void FUN_10b0b90cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b90d8; end: 10b0b90df; -[SCLensUnlockerService nonTrackedlensUnlocker] */

undefined8 FUN_10b0b90d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0b90e0; end: 10b0b910f; -[SCLensUnlockerService .cxx_destruct] */

void FUN_10b0b90e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b9110; end: 10b0b9157;  */

void FUN_10b0b9110(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5d8b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5d8b8,
                      &PTR____CFConstantStringClassReference_110f5d8d8,0);
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



/* Entry: 10b0b9158; end: 10b0b915f; -[SCLensUnlockServices nonTrackedlensUnlocker] */

undefined8 FUN_10b0b9158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0b9160; end: 10b0b9167; -[SCLensUnlockServices lensUnlockerFactory] */

undefined8 FUN_10b0b9160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0b9168; end: 10b0b91a3; -[SCLensUnlockServices .cxx_destruct] */

void FUN_10b0b9168(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b91a4; end: 10b0b92cb; -[SCLensIdUnlockAction initWithLensId:snapId:lensCollectionId:unlockableSnapInfo:actionType:unlockType:source:] */

undefined1 *
FUN_10b0b91a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112705850;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b92cc; end: 10b0b92ef; -[SCLensIdUnlockAction copyWithZone:] */

undefined8 FUN_10b0b92cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0b92f0; end: 10b0b938b; -[SCLensIdUnlockAction hash] */

undefined8 * FUN_10b0b92f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0b946c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0b9478;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28) &&
         (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
            if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b0b9478;
            }
            goto LAB_10b0b946c;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0b9478:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0b938c; end: 10b0b9493; -[SCLensIdUnlockAction isEqual:] */

long FUN_10b0b938c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0b946c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0b9478;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b0b9478;
            }
            goto LAB_10b0b946c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0b9478:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0b9494; end: 10b0b949b; -[SCLensIdUnlockAction lensId] */

undefined8 FUN_10b0b9494(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0b949c; end: 10b0b94a3; -[SCLensIdUnlockAction snapId] */

undefined8 FUN_10b0b949c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0b94a4; end: 10b0b94ab; -[SCLensIdUnlockAction lensCollectionId] */

undefined8 FUN_10b0b94a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0b94ac; end: 10b0b94b3; -[SCLensIdUnlockAction unlockableSnapInfo] */

undefined8 FUN_10b0b94ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0b94b4; end: 10b0b94bb; -[SCLensIdUnlockAction actionType] */

undefined8 FUN_10b0b94b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0b94bc; end: 10b0b94c3; -[SCLensIdUnlockAction unlockType] */

undefined8 FUN_10b0b94bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0b94c4; end: 10b0b94cb; -[SCLensIdUnlockAction source] */

undefined8 FUN_10b0b94c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0b94cc; end: 10b0b9513; -[SCLensIdUnlockAction .cxx_destruct] */

void FUN_10b0b94cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b9514; end: 10b0b9577; +[SCLensUnlockAction lensIdUnlockActionWithUnlockAction:] */

void FUN_10b0b9514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1ab0;
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



/* Entry: 10b0b9578; end: 10b0b965f; +[SCLensUnlockAction scanUnlockActionWithScanData:unlockableSnapInfo:rawData:codeTypeMeta:actionType:source:] */

void FUN_10b0b9578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1ab0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0b9660; end: 10b0b9683; -[SCLensUnlockAction copyWithZone:] */

undefined8 FUN_10b0b9660(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0b9684; end: 10b0b9723; -[SCLensUnlockAction hash] */

void FUN_10b0b9684(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
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
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  puVar3 = &uStack_68;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_112705858;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0b9724; end: 10b0b9767; -[SCLensUnlockAction internalInit] */

void FUN_10b0b9724(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112705858;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0b9768; end: 10b0b987f; -[SCLensUnlockAction isEqual:] */

long FUN_10b0b9768(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0b9858:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0b9864;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b0b9864;
            }
            goto LAB_10b0b9858;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0b9864:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0b9880; end: 10b0b990f; -[SCLensUnlockAction matchLensIdUnlockAction:scanUnlockAction:] */

void FUN_10b0b9880(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b9910; end: 10b0b9957; -[SCLensUnlockAction .cxx_destruct] */

void FUN_10b0b9910(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0b9958; end: 10b0b99e3; -[SCLensUnlockResult initWithLensMetadata:resultType:unlockType:] */

undefined1 *
FUN_10b0b9958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705860;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b99e4; end: 10b0b9a07; -[SCLensUnlockResult copyWithZone:] */

undefined8 FUN_10b0b99e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0b9a08; end: 10b0b9a77; -[SCLensUnlockResult hash] */

undefined8 * FUN_10b0b9a08(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0b9b0c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b0b9b0c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b0b9b0c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b0b9b0c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b0b9a78; end: 10b0b9b27; -[SCLensUnlockResult isEqual:] */

long FUN_10b0b9a78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0b9b0c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b0b9b0c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b0b9b0c;
    }
  }
  lVar3 = 1;
LAB_10b0b9b0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0b9b28; end: 10b0b9b2f; -[SCLensUnlockResult lensMetadata] */

undefined8 FUN_10b0b9b28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0b9b30; end: 10b0b9b37; -[SCLensUnlockResult resultType] */

undefined8 FUN_10b0b9b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0b9b38; end: 10b0b9b3f; -[SCLensUnlockResult unlockType] */

undefined8 FUN_10b0b9b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0b9b40; end: 10b0b9b4b; -[SCLensUnlockResult .cxx_destruct] */

void FUN_10b0b9b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b9b4c; end: 10b0b9b53; -[SCUnlockablesNetworkServices unlockableRemotePinner] */

undefined8 FUN_10b0b9b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


