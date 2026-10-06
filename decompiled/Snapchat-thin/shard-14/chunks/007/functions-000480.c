/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5ecadc; end: 10b5ecb9f; -[SCConflictingDocObjectContextDiagnoser registerDocObjectContextInstance:] */

void FUN_10b5ecadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e03c8;
  _objc_alloc(PTR_PTR_1126e03c8);
  func_0x00010c00c4a0();
  func_0x00010becbaa0(param_1,param_2,puVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5ecba0; end: 10b5ecceb; -[SCConflictingDocObjectContextDiagnoser _throwIfConflictingInstance:] */

void FUN_10b5ecba0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      iVar5 = (int)*(undefined8 *)(lVar6 * 8);
      func_0x00010bf481a0();
      if (iVar5 != 0) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10b5eccec; end: 10b5ecd1b; -[SCConflictingDocObjectContextDiagnoser .cxx_destruct] */

void FUN_10b5eccec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ecd1c; end: 10b5ece97; +[SQLPreferencesDB schema] */

void FUN_10b5ecd1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f780dd3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8500;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f780e41);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar2,param_2,0,1,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar6,param_2,1,puVar1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar6 = *(undefined **)(puVar5 + 8);
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b5ece98; end: 10b5ecebf; -[SQLPreferencesDB getConn] */

void FUN_10b5ece98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5ecec0; end: 10b5ecf47; -[SQLPreferencesDB initWithSqliteConnection:] */

undefined1 * FUN_10b5ecec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706618;
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



/* Entry: 10b5ecf48; end: 10b5ecfcb; -[SQLPreferencesDB .cxx_destruct] */

void FUN_10b5ecf48(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ecfcc; end: 10b5ecfd7; -[SQLPreferencesDB .cxx_construct] */

void FUN_10b5ecfcc(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b5ecfd8; end: 10b5ed13b;  */

void FUN_10b5ecfd8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10e5d1f00,0x30);
      func_0x000107c3075c();
      func_0x000107c30760(lVar1,FUN_10b5ed13c);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b5ed080;
    }
  }
  lVar1 = 0;
LAB_10b5ed080:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b5ed13c; end: 10b5ed1af;  */

void FUN_10b5ed13c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e03d0;
  _objc_alloc(PTR_PTR_1126e03d0);
  func_0x000107c3076c(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ed78c(puVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5ed1b0; end: 10b5ed313;  */

void FUN_10b5ed1b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x18;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10e5d1f31,0x3a);
      func_0x000107c3075c();
      func_0x000107c30760(lVar1,FUN_10b5ed314);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b5ed258;
    }
  }
  lVar1 = 0;
LAB_10b5ed258:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b5ed314; end: 10b5ed387;  */

void FUN_10b5ed314(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e03d8;
  _objc_alloc(PTR_PTR_1126e03d8);
  func_0x000107c30768(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b5ed8d0(puVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5ed388; end: 10b5ed4eb;  */

void FUN_10b5ed388(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10e5d1f6c,0x37);
      uStack_44 = 1;
      func_0x000107c3075c();
      FUN_10b5eec6c(lVar1,&uStack_44,param_3);
      FUN_10b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5ed4ec; end: 10b5ed61b;  */

void FUN_10b5ed4ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x28;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10e5d1fa4,0x2b);
      func_0x000107c3075c();
      FUN_10b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5ed61c; end: 10b5ed63f; -[SQLPreferencesObjectPreference copyWithZone:] */

undefined8 FUN_10b5ed61c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5ed640; end: 10b5ed6b3; -[SQLPreferencesObjectPreference hash] */

undefined8 * FUN_10b5ed640(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b5ed734:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b5ed740;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b5ed740;
        }
        goto LAB_10b5ed734;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b5ed740:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b5ed6b4; end: 10b5ed75b; -[SQLPreferencesObjectPreference isEqual:] */

long FUN_10b5ed6b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5ed734:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5ed740;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b5ed740;
        }
        goto LAB_10b5ed734;
      }
    }
    lVar3 = 0;
  }
LAB_10b5ed740:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5ed75c; end: 10b5ed807; -[SQLPreferencesObjectPreference .cxx_destruct] */

void FUN_10b5ed75c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ed808; end: 10b5ed82b; -[SQLPreferencesGet copyWithZone:] */

undefined8 FUN_10b5ed808(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5ed82c; end: 10b5ed833; -[SQLPreferencesGet hash] */

void FUN_10b5ed82c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b5ed834; end: 10b5ed8c3; -[SQLPreferencesGet isEqual:] */

long FUN_10b5ed834(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5ed8a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b5ed8a8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b5ed8a8;
    }
  }
  lVar3 = 1;
LAB_10b5ed8a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5ed8c4; end: 10b5ed8cf; -[SQLPreferencesGet .cxx_destruct] */

void FUN_10b5ed8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ed8d0; end: 10b5ed94b;  */

undefined1 * FUN_10b5ed8d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_28 = PTR_PTR_112706630;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b5ed94c; end: 10b5ed96f; -[SQLPreferencesKeys copyWithZone:] */

undefined8 FUN_10b5ed94c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5ed970; end: 10b5ed977; -[SQLPreferencesKeys hash] */

void FUN_10b5ed970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b5ed978; end: 10b5eda07; -[SQLPreferencesKeys isEqual:] */

long FUN_10b5ed978(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5ed9ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b5ed9ec;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b5ed9ec;
    }
  }
  lVar3 = 1;
LAB_10b5ed9ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5eda08; end: 10b5eda27; -[SQLPreferencesKeys .cxx_destruct] */

void FUN_10b5eda08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5eda28; end: 10b5eda33; -[SCSQLiteTransactionOptions .cxx_destruct] */

void FUN_10b5eda28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5eda34; end: 10b5eda4b; -[SCSQLiteTransactor _isTransactorForDatabaseSchema:] */

long FUN_10b5eda34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_isEqual__1125fa0c8);
    return lVar1;
  }
  return 1;
}



/* Entry: 10b5eda4c; end: 10b5edac7; +[SCSQLiteTransactor _transactorWithClass:databasePath:shared:wipe:] */

void FUN_10b5eda4c(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126c03b0;
  _objc_alloc(PTR_PTR_1126c03b0);
  func_0x00010be3ab00();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5edac8; end: 10b5edad3; -[SCSQLiteTransactor _initWithClass:databasePath:shared:wipe:] */

void FUN_10b5edac8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initWithClass_databasePath_shar_11256c468);
  return;
}



/* Entry: 10b5edad4; end: 10b5edb37;  */

undefined8 * FUN_10b5edad4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10b5edb38; end: 10b5edcbb;  */

void FUN_10b5edb38(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    _os_unfair_lock_assert_owner(param_1 + 0x4c);
    _os_unfair_lock_assert_owner(param_1 + 0x50);
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      _objc_release();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126c03b0;
      lVar5 = *(long *)(param_1 + 0x10);
      if ((lVar5 != 0) && (*(char *)(param_1 + 0x49) == '\x01')) {
        _objc_retain(lVar5);
        _objc_opt_self(puVar2);
        puVar3 = puVar2;
        func_0x000107c30738();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bed1e80();
        _os_unfair_lock_lock();
        _objc_release(puVar3);
        func_0x000107c3073c(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360();
        _objc_release(puVar2);
        _os_unfair_lock_unlock(puVar4);
        _objc_release(lVar5);
      }
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      func_0x000107c27d98(*(undefined8 *)(param_1 + 0x38),param_3,param_2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5edcbc; end: 10b5edddf; -[SCSQLiteTransactor _deactivateWithCompletion:] */

void FUN_10b5edcbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = 0x21;
  _dispatch_get_global_queue(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)param_1 + 0x4c;
  _os_unfair_lock_trylock();
  if (iVar1 != 0) {
    iVar1 = (int)param_1 + 0x50;
    _os_unfair_lock_trylock();
    if (iVar1 != 0) {
      FUN_10b5edb38(param_1,param_3,uVar2);
      _os_unfair_lock_unlock(param_1 + 0x50);
      _os_unfair_lock_unlock(param_1 + 0x4c);
      goto LAB_10b5edda0;
    }
    _os_unfair_lock_unlock(param_1 + 0x4c);
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b5edde0;
  puStack_50 = &UNK_1108a5ee8;
  lStack_48 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x000107c27d8c(uVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
LAB_10b5edda0:
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10b5edde0; end: 10b5ede4f;  */

void FUN_10b5edde0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar1 + 0x4c);
  lVar2 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar2 + 0x50);
  FUN_10b5edb38(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x28));
  _os_unfair_lock_unlock(lVar2 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(lVar1 + 0x4c);
  return;
}



/* Entry: 10b5ede50; end: 10b5edefb; -[SCSQLiteTransactor dealloc] */

void FUN_10b5ede50(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _os_unfair_lock_lock(param_1 + 0x4c);
  _os_unfair_lock_lock(param_1 + 0x50);
  FUN_10b5edb38(param_1,0,0);
  _os_unfair_lock_unlock(param_1 + 0x50);
  _os_unfair_lock_unlock(param_1 + 0x4c);
  puStack_28 = PTR_PTR_112706638;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5edefc; end: 10b5edfbb;  */

void FUN_10b5edefc(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 8);
    }
    _objc_retain(uVar1);
    func_0x000107c30744(param_1,uVar1,1,0,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b5edfbc; end: 10b5ee1c3;  */

void FUN_10b5edfbc(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  ulong param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  uVar6 = param_5;
  _objc_retain();
  if (param_2 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar5 = uVar6 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xff;
  }
  _objc_opt_self(PTR_PTR_1126c03b0);
  if ((bRam00000001137f7380 & 1) == 0) {
    iVar1 = 0x137f7380;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0;
      _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _dispatch_queue_attr_make_with_autorelease_frequency();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = &DAT_10f6ec418;
      _dispatch_queue_create(&DAT_10f6ec418,uVar3);
      _objc_release(uVar3);
      puRam00000001137f7378 = puVar4;
      ___cxa_guard_release(0x1137f7380);
    }
  }
  puVar4 = puRam00000001137f7378;
  _objc_retain(puRam00000001137f7378);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10b5ee1c4;
  puStack_a0 = &UNK_110d25a38;
  uStack_78 = uVar5 | uVar6;
  uStack_98 = param_1;
  uStack_70 = param_2 != 0;
  _objc_retain(param_2);
  lStack_90 = param_2;
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_5);
  uStack_80 = param_5;
  func_0x000107c27d8c(puVar4,&puStack_b8);
  _objc_release(puVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(lStack_90);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 10b5ee1c4; end: 10b5ee24f;  */

void FUN_10b5ee1c4(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  bVar1 = *(char *)(param_1 + 0x48) != '\x01';
  if (bVar1) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar3 = lVar3 - *(long *)(param_1 + 0x40);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c30744(uVar2,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x50),lVar3,
                      !bVar1,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b5ee250; end: 10b5ee31b;  */

void FUN_10b5ee250(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 8);
    }
    _objc_retain(uVar1);
    FUN_10b5edfbc(param_1,uVar1,0,param_3,param_4);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5ee31c; end: 10b5ee3e7;  */

void FUN_10b5ee31c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 8);
    }
    _objc_retain(uVar1);
    FUN_10b5edfbc(param_1,uVar1,1,param_3,param_4);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5ee3e8; end: 10b5ee437; -[SCSQLiteTransactor .cxx_destruct] */

void FUN_10b5ee3e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  func_0x000105276418(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b5ee438; end: 10b5ee51b; -[SCSQLiteObserverSharedToken dealloc] */

void FUN_10b5ee438(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plVar4 = *(long **)(param_1 + 8);
  plStack_28 = *(long **)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x28))(plVar4,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  puStack_38 = PTR_PTR_112706640;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5ee51c; end: 10b5ee573; -[SCSQLiteObserverSharedToken .cxx_destruct] */

long FUN_10b5ee51c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
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
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 10b5ee574; end: 10b5ee583; -[SCSQLiteObserverSharedToken .cxx_construct] */

void FUN_10b5ee574(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10b5ee584; end: 10b5ee607; -[SCSQLiteObserverNonSharedToken dealloc] */

void FUN_10b5ee584(long param_1)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
      func_0x00010bcc7994();
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_28 = PTR_PTR_112706648;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5ee608; end: 10b5ee66b; -[SCSQLiteObserverNonSharedToken .cxx_destruct] */

void FUN_10b5ee608(long param_1)

{
  long *plVar1;
  
  if (((*(char *)(param_1 + 0x20) == '\x01') && (*(long *)(param_1 + 0x18) != 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    func_0x00010bcc7994();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b5ee658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10b5ee66c; end: 10b5ee67b; -[SCSQLiteObserverNonSharedToken .cxx_construct] */

void FUN_10b5ee66c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b5ee67c; end: 10b5ee7e3; -[SCSqliteConnection rollbackTransaction] */

void FUN_10b5ee67c(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  puStack_68 = &UNK_105277f7c;
  ppuStack_60 = &PTR_DAT_110873830;
  pcVar2 = "ROLLBACK TRANSACTION;";
  func_0x000107c31358(*(undefined8 *)(param_1 + 0x20),"ROLLBACK TRANSACTION;",0x15,0,&puStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010bcc8020();
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (((int)pcVar2 == 0) || ((int)pcVar2 != 1)) break;
    ___cxa_begin_catch();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0(param_1);
    _objc_release();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf00570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x28),PTR_s_allObjects_11259db00);
  return;
}



/* Entry: 10b5ee7e4; end: 10b5ee7eb; -[SCSqliteConnection getObservedTables] */

void FUN_10b5ee7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_allObjects_11259db00)
  ;
  return;
}



/* Entry: 10b5ee7ec; end: 10b5ee85f; -[SCSqliteConnection .cxx_destruct] */

void FUN_10b5ee7ec(long param_1)

{
  long *plVar1;
  
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000105276418(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b5ee850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10b5ee860; end: 10b5eea8b;  */

long * FUN_10b5ee860(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  undefined2 uStack_66;
  undefined4 uStack_64;
  long lStack_60;
  undefined *puStack_58;
  
  if (param_1 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    puStack_58 = PTR_PTR_112706650;
    plVar4 = &lStack_60;
    lStack_60 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
    if (plVar4 != (long *)0x0) {
      plVar2 = plVar4;
      func_0x000107c31444();
      lVar1 = 0xa0;
      __Znwm();
      func_0x000107c278b8(&uStack_88,&UNK_10f780e7a);
      func_0x000107c31460(lVar1,&uStack_88,0,plVar2,0);
      if (uStack_74._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(uStack_87,uStack_88))));
      }
      plVar2 = (long *)plVar4[1];
      plVar4[1] = lVar1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_10b5eea8c(plVar4 + 2,param_2);
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_alloc_init();
      lVar1 = plVar4[5];
      plVar4[5] = (long)puVar3;
      _objc_release(lVar1);
      uStack_88 = 1;
      uStack_86 = 0x101;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 2;
      uStack_70 = 0x100;
      uStack_6e = 0;
      uStack_66 = 0;
      uStack_64 = 0x10101;
      uStack_74 = 0x1010101;
      lVar1 = 0x200;
      uStack_87 = param_4;
      __Znwm();
      func_0x00010bccaf50();
      plVar2 = (long *)plVar4[4];
      plVar4[4] = lVar1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    _objc_retain(plVar4);
  }
  _objc_release(plVar4);
  return plVar4;
}



/* Entry: 10b5eea8c; end: 10b5eeb07;  */

undefined8 * FUN_10b5eea8c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10b5eeb08; end: 10b5eeb93; +[SCSqliteSchema testSchemaUpgradeWithBaselineSchema:currentSchema:] */

undefined8
FUN_10b5eeb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfc42e0(param_3);
  uVar2 = param_4;
  func_0x00010bfc42e0(param_4);
  func_0x00010bcc8e88(uVar1,uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b5eeb94; end: 10b5eec6b;  */

void FUN_10b5eeb94(undefined8 param_1,int *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 uStack_31;
  
  _objc_retain(param_3);
  if (param_3 == (char *)0x0) {
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    func_0x00010bccb8cc(param_1,iVar1,&uStack_31);
  }
  else {
    pcVar2 = param_3;
    _objc_retainAutorelease();
    func_0x00010c0dfba0();
    if ((*pcVar2 == 'd') && (pcVar2[1] == '\0')) {
      func_0x00010bf885a0(param_3);
      *param_2 = *param_2 + 1;
      func_0x00010bccb848(param_1);
    }
    else {
      pcVar2 = param_3;
      func_0x00010c067fc0(param_3);
      iVar1 = *param_2;
      *param_2 = iVar1 + 1;
      func_0x000107c3140c(param_1,iVar1,pcVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5eec6c; end: 10b5eed13;  */

void FUN_10b5eec6c(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_31;
  
  _objc_retain(param_3);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  if (param_3 == 0) {
    func_0x00010bccb8cc(param_1,iVar1,&uStack_31);
  }
  else {
    lVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bf25f00();
    lVar3 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x000107c31414(param_1,iVar1,lVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5eed14; end: 10b5ef0cf;  */

void FUN_10b5eed14(undefined8 param_1,int *param_2,code *param_3)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined1 uStack_31;
  
  _objc_retain(param_3);
  if ((bRam00000001137f73a0 & 1) == 0) {
    iVar1 = 0x137f73a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f63f58;
      _NSSelectorFromString();
      ppuRam00000001137f7398 = ppuVar5;
      ___cxa_guard_release(0x1137f73a0);
    }
  }
  if ((bRam00000001137f73b0 & 1) == 0) {
    iVar1 = 0x137f73b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f63f78;
      _NSSelectorFromString();
      ppuRam00000001137f73a8 = ppuVar5;
      ___cxa_guard_release(0x1137f73b0);
    }
  }
  if ((bRam00000001137f73c0 & 1) == 0) {
    iVar1 = 0x137f73c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f63f98;
      _NSSelectorFromString();
      ppuRam00000001137f73b8 = ppuVar5;
      ___cxa_guard_release(0x1137f73c0);
    }
  }
  if ((bRam00000001137f73d0 & 1) == 0) {
    iVar1 = 0x137f73d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f63fb8;
      _NSSelectorFromString();
      ppuRam00000001137f73c8 = ppuVar5;
      ___cxa_guard_release(0x1137f73d0);
    }
  }
  if (param_3 == (code *)0x0) {
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    func_0x00010bccb8cc(param_1,iVar1,&uStack_31);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    pcVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      pcVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      if (((ulong)pcVar3 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
        pcVar3 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar2);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = param_3;
          _objc_opt_respondsToSelector(param_3,ppuRam00000001137f7398);
          pcVar4 = param_3;
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = param_3;
            _objc_opt_respondsToSelector(param_3,ppuRam00000001137f73a8);
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar3 = param_3;
              func_0x00010c0cc960();
              (*pcVar3)(param_3,ppuRam00000001137f73a8);
              iVar1 = *param_2;
              *param_2 = iVar1 + 1;
              func_0x000107c3140c(param_1,iVar1,pcVar4);
              goto LAB_10b5eef68;
            }
            pcVar3 = param_3;
            _objc_opt_respondsToSelector(param_3,ppuRam00000001137f73b8);
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar3 = param_3;
              func_0x00010c0cc960();
              (*pcVar3)(param_3,ppuRam00000001137f73b8);
              *param_2 = *param_2 + 1;
              func_0x00010bccb848(param_1);
              goto LAB_10b5eef68;
            }
            pcVar3 = param_3;
            _objc_opt_respondsToSelector(param_3,ppuRam00000001137f73c8);
            if (((ulong)pcVar3 & 1) == 0) goto LAB_10b5eef68;
            pcVar3 = param_3;
            func_0x00010c0cc960();
            (*pcVar3)(param_3,ppuRam00000001137f73c8);
            _objc_retainAutoreleasedReturnValue();
            FUN_10b5eec6c(param_1,param_2,pcVar4);
          }
          else {
            pcVar3 = param_3;
            func_0x00010c0cc960();
            (*pcVar3)(param_3,ppuRam00000001137f7398);
            _objc_retainAutoreleasedReturnValue();
            func_0x000107c3075c(param_1,param_2,pcVar4);
          }
          _objc_release(pcVar4);
        }
        else {
          FUN_10b5eec6c(param_1,param_2,param_3);
        }
      }
      else {
        func_0x000107c3075c(param_1,param_2,param_3);
      }
    }
    else {
      FUN_10b5eeb94(param_1,param_2,param_3);
    }
  }
LAB_10b5eef68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5ef0d0; end: 10b5ef213;  */

void FUN_10b5ef0d0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  func_0x000107c3141c();
  _os_unfair_lock_lock(0x1137f7388);
  lVar1 = 0x1137f7390;
  _objc_loadWeakRetained();
  _os_unfair_lock_unlock(0x1137f7388);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x6f) < '\0') {
      func_0x000107c3192c(&uStack_50,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60)
                         );
    }
    else {
      uStack_48 = *(undefined8 *)(param_1 + 0x60);
      uStack_50 = *(undefined8 *)(param_1 + 0x58);
      lStack_40 = *(long *)(param_1 + 0x68);
    }
    func_0x00010c25da80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0940(lVar1);
    _objc_release(puVar2);
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
  }
  _objc_release(lVar1);
  func_0x000107c31408(param_1);
  return;
}



/* Entry: 10b5ef214; end: 10b5ef267;  */

void FUN_10b5ef214(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5ef268; end: 10b5ef2d7;  */

void FUN_10b5ef268(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
    func_0x000107c31404(param_1);
    lVar1 = *(long *)(param_1 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_int64_11034cff8)(lVar1,param_2);
  return;
}



/* Entry: 10b5ef2d8; end: 10b5ef373;  */

void FUN_10b5ef2d8(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (param_1,param_2 * 2 + -1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f780e75,1);
    while (param_2 = param_2 + -1, param_2 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&UNK_10f780e77,2);
    }
  }
  return;
}



/* Entry: 10b5ef374; end: 10b5ef423;  */

long FUN_10b5ef374(long param_1)

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



/* Entry: 10b5ef424; end: 10b5ef493;  */

void FUN_10b5ef424(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar4 != lVar1) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010b5ef3cc();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b5ef494; end: 10b5ef49f; -[SCDirectoriesServices .cxx_destruct] */

void FUN_10b5ef494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ef4a0; end: 10b5ef513; -[SCSystemScopedDirectoriesServices initWithDirectories:] */

undefined1 * FUN_10b5ef4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706670;
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



/* Entry: 10b5ef514; end: 10b5ef51b; -[SCSystemScopedDirectoriesServices directories] */

undefined8 FUN_10b5ef514(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5ef51c; end: 10b5ef527; -[SCSystemScopedDirectoriesServices .cxx_destruct] */

void FUN_10b5ef51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ef528; end: 10b5ef753; -[EGODatabaseStatement initWithDatabase:SQL:] */

undefined8 *
FUN_10b5ef528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706678;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    func_0x00010bf9aec0(param_3);
    if (puVar1[2] == 0) {
      _objc_release(puVar1);
      _objc_release(param_3);
      _objc_release(param_4);
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b5ef650;
    }
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  _objc_retain(puVar1);
  puVar4 = puVar1;
LAB_10b5ef650:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10b5ef754; end: 10b5ef77b; -[EGODatabaseStatement resetAndClearBindings] */

void FUN_10b5ef754(long param_1)

{
  _sqlite3_reset(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_clear_bindings_11034cfb8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b5ef77c; end: 10b5ef7f7; -[EGODatabaseStatement dealloc] */

void FUN_10b5ef77c(long param_1,undefined8 param_2)

{
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10b5ef7f8;
  puStack_30 = &UNK_110d25ab0;
  func_0x00010bf9b1a0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  puStack_50 = PTR_PTR_112706678;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5ef7f8; end: 10b5ef7ff;  */

void FUN_10b5ef7f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_finalize_11034d060)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b5ef800; end: 10b5ef807; -[EGODatabaseStatement stmt] */

undefined8 FUN_10b5ef800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5ef808; end: 10b5ef80f; -[EGODatabaseStatement sql] */

undefined8 FUN_10b5ef808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5ef810; end: 10b5ef83f; -[EGODatabaseStatement .cxx_destruct] */

void FUN_10b5ef810(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ef840; end: 10b5ef89b; -[EGODatabase statementWithSQL:] */

void FUN_10b5ef840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e03e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c009400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5ef89c; end: 10b5ef993; -[EGODatabase initWithPath_DEPRECATED:enableWAL:grapheneRegistry:callSite:] */

undefined1 *
FUN_10b5ef89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706680;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x21) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    uVar2 = 1;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5ef994; end: 10b5ef99f; -[EGODatabase initWithPath_DEPRECATED:enableWAL:] */

void FUN_10b5ef994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c034730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPath_DEPRECATED_enableWA_1125eabc8,param_3,param_4,0,0);
  return;
}



/* Entry: 10b5ef9a0; end: 10b5ef9af; -[EGODatabase initWithPath_DEPRECATED:] */

void FUN_10b5ef9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c034730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPath_DEPRECATED_enableWA_1125eabc8,param_3,0,0,0);
  return;
}



/* Entry: 10b5ef9b0; end: 10b5efa9f; -[EGODatabase _logGrapheneForWALMode:errorCode:] */

void FUN_10b5ef9b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) {
      lVar4 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar4);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f1358();
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 10b5efaa0; end: 10b5efb73; -[EGODatabase open] */

undefined8 FUN_10b5efaa0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return 1;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bfad0c0();
  _sqlite3_open();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x21) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 8);
      _sqlite3_exec(uVar2,&UNK_10f516c88,0,0,0);
      if ((int)uVar2 != 0) {
        _NSLog(&PTR____CFConstantStringClassReference_110f64038);
        _sqlite3_extended_errcode(*(undefined8 *)(param_1 + 8));
        goto LAB_10b5efafc;
      }
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    _NSLog(&PTR____CFConstantStringClassReference_110f64018);
    _sqlite3_extended_errcode(*(undefined8 *)(param_1 + 8));
LAB_10b5efafc:
    func_0x00010be54260(param_1);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b5efb74; end: 10b5efbc7; -[EGODatabase close] */

void FUN_10b5efb74(long param_1)

{
  long lVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x10),0xffffffffffffffff);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__sqlite3_close_v2_11034cfc8)(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b5efbc8; end: 10b5efc23; -[EGODatabase execute:] */

void FUN_10b5efbc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x10),0xffffffffffffffff);
  lVar1 = param_1;
  func_0x00010c0e8e20();
  if ((int)lVar1 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 8));
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5efc24; end: 10b5efc7f; -[EGODatabase executeWithoutOpen:] */

void FUN_10b5efc24(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b5efc80; end: 10b5efc87; -[EGODatabase executeUpdate:] */

void FUN_10b5efc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_executeUpdate_parameters__1125c45c8,param_3,0);
  return;
}



/* Entry: 10b5efc88; end: 10b5efe2f; -[EGODatabase executeUpdate:parameters:] */

bool FUN_10b5efc88(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x10),0xffffffffffffffff);
  uVar3 = param_1;
  func_0x00010c0e8e20();
  if ((uVar3 & 1) != 0) {
    uVar3 = param_3;
    func_0x00010c255760();
    uVar2 = (uint)uVar3;
    uVar3 = param_1;
    func_0x00010bf1a3c0();
    if ((uVar3 & 1) != 0) {
      _sqlite3_step();
      if (uVar2 == 5) {
        uVar3 = param_3;
        func_0x00010c24ca40();
        _objc_retainAutoreleasedReturnValue();
        _NSLog(&PTR____CFConstantStringClassReference_110f63fd8);
LAB_10b5efde4:
        _objc_release(uVar3);
      }
      else if ((uVar2 & 0xfffffffe) != 100) {
        uVar3 = param_1;
        func_0x00010c088a60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c24ca40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 == 0x15) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110f64098;
        }
        else if (uVar2 == 1) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110f64078;
        }
        else {
          ppuVar5 = &PTR____CFConstantStringClassReference_110f640b8;
        }
        _NSLog(ppuVar5);
        _objc_release(uVar4);
        goto LAB_10b5efde4;
      }
      func_0x00010c138140(param_3);
      _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
      bVar1 = uVar2 == 0x65;
      goto LAB_10b5efe04;
    }
    _NSLog(&PTR____CFConstantStringClassReference_110f64058);
    func_0x00010c138140(param_3);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
  bVar1 = false;
LAB_10b5efe04:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b5efe30; end: 10b5efe5b; -[EGODatabase lastInsertRowId] */

long FUN_10b5efe30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbfd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__sqlite3_last_insert_rowid_11034d078)();
    return lVar1;
  }
  _NSLog(&PTR____CFConstantStringClassReference_110f640d8);
  return 0;
}



/* Entry: 10b5efe5c; end: 10b5efe63; -[EGODatabase executeQuery:] */

void FUN_10b5efe5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_executeQuery_parameters__1125c45a8,param_3,0)
  ;
  return;
}



/* Entry: 10b5efe64; end: 10b5f0297; -[EGODatabase executeQuery:parameters:] */

void FUN_10b5efe64(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x10),0xffffffffffffffff);
  puVar3 = PTR_PTR_1126e03f0;
  _objc_alloc_init();
  uVar4 = param_1;
  func_0x00010c0e8e20();
  if ((uVar4 & 1) != 0) {
    lVar5 = param_3;
    func_0x00010c255760();
    uVar4 = param_1;
    func_0x00010bf1a3c0();
    if ((uVar4 & 1) != 0) {
      lVar6 = lVar5;
      _sqlite3_column_count();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      iVar13 = (int)lVar6;
      if (0 < iVar13) {
        iVar1 = 0;
        do {
          lVar6 = lVar5;
          _sqlite3_column_name(lVar5,iVar1);
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (lVar6 == 0) {
            func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _sqlite3_column_name(lVar5,iVar1);
            func_0x00010c25da80(puVar9);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010befa120(puVar7);
          _objc_release(puVar9);
          lVar6 = lVar5;
          _sqlite3_column_decltype(lVar5,iVar1);
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (lVar6 == 0) {
            func_0x00010befa120(puVar8);
          }
          else {
            _sqlite3_column_decltype(lVar5,iVar1);
            func_0x00010c25da80(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar8);
            _objc_release(puVar9);
          }
          iVar1 = iVar1 + 1;
        } while (iVar13 != iVar1);
      }
      func_0x00010c17eba0(puVar3);
      func_0x00010c17ebc0(puVar3);
      func_0x00010c17ebe0(puVar3);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar6 = lVar5;
      _sqlite3_step();
      iVar1 = (int)lVar6;
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      while (PTR__OBJC_CLASS___NSMutableArray_1126ae5d8 = puVar9, iVar1 == 100) {
        _objc_alloc_init(puVar9);
        if (0 < iVar13) {
          iVar1 = 0;
          do {
            lVar6 = lVar5;
            _sqlite3_column_type(lVar5,iVar1);
            puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            iVar2 = (int)lVar6;
            if (iVar2 == 1) {
              _sqlite3_column_int64(lVar5,iVar1);
              func_0x00010c0df7c0(puVar12);
              _objc_retainAutoreleasedReturnValue();
LAB_10b5f0160:
              func_0x00010befa120(puVar9);
              _objc_release(puVar12);
            }
            else {
              if (iVar2 == 2) {
                _sqlite3_column_double(lVar5,iVar1);
                func_0x00010c0df720(puVar12);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_10b5f0160;
              }
              if (iVar2 == 4) {
                _sqlite3_column_text(lVar5,iVar1);
                _sqlite3_column_bytes(lVar5,iVar1);
                func_0x00010bf64a00(puVar11);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                goto LAB_10b5f0160;
              }
              lVar6 = lVar5;
              _sqlite3_column_text(lVar5,iVar1);
              puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              if (lVar6 != 0) {
                _sqlite3_column_text(lVar5,iVar1);
                func_0x00010c25da80(puVar12);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_10b5f0160;
              }
              func_0x00010befa120(puVar9);
            }
            iVar1 = iVar1 + 1;
          } while (iVar13 != iVar1);
        }
        puVar12 = PTR_PTR_1126e03f8;
        _objc_alloc(PTR_PTR_1126e03f8);
        func_0x00010c0094e0();
        func_0x00010befa120(puVar10);
        _objc_release(puVar12);
        _objc_release(puVar9);
        lVar6 = lVar5;
        _sqlite3_step();
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        iVar1 = (int)lVar6;
      }
      func_0x00010c1eeb80(puVar3);
      func_0x00010c138140(param_3);
      _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
      _objc_retain(puVar3);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      goto LAB_10b5f025c;
    }
    _NSLog(&PTR____CFConstantStringClassReference_110f64058);
    func_0x00010c138140(param_3);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
  _objc_retain(puVar3);
LAB_10b5f025c:
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b5f0298; end: 10b5f02e7; -[EGODatabase lastErrorMessage] */

void FUN_10b5f0298(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  func_0x00010bfcfdc0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _sqlite3_errmsg(uVar3);
    func_0x00010c25da80(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f02e8; end: 10b5f0303; -[EGODatabase hadError] */

bool FUN_10b5f02e8(int param_1)

{
  func_0x00010c088a40();
  return param_1 != 0;
}



/* Entry: 10b5f0304; end: 10b5f030b; -[EGODatabase lastErrorCode] */

void FUN_10b5f0304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_errcode_11034d030)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b5f030c; end: 10b5f0463; -[EGODatabase bindStatement:toParameters:] */

char * FUN_10b5f030c(undefined8 param_1,undefined8 param_2,char *param_3,undefined1 *param_4,
                    undefined8 param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  char acStack_130 [16];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  pcVar2 = acStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = param_3;
  puVar8 = param_4;
  _objc_retain(param_4);
  _sqlite3_bind_parameter_count();
  if (param_4 == (undefined1 *)0x0) {
    iVar6 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    acStack_130[8] = '\0';
    acStack_130[9] = '\0';
    acStack_130[10] = '\0';
    acStack_130[0xb] = '\0';
    acStack_130[0xc] = '\0';
    acStack_130[0xd] = '\0';
    acStack_130[0xe] = '\0';
    acStack_130[0xf] = '\0';
    acStack_130[0] = '\0';
    acStack_130[1] = '\0';
    acStack_130[2] = '\0';
    acStack_130[3] = '\0';
    acStack_130[4] = '\0';
    acStack_130[5] = '\0';
    acStack_130[6] = '\0';
    acStack_130[7] = '\0';
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    puVar8 = auStack_e8;
    param_5 = 0x10;
    puVar1 = param_4;
    func_0x00010bf52a60();
    if (puVar1 == (undefined1 *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_4);
          }
          iVar6 = iVar6 + 1;
          func_0x00010bf1a2e0(param_1);
          puVar8 = puVar8 + 1;
        } while (puVar1 != puVar8);
        puVar8 = auStack_e8;
        param_5 = 0x10;
        puVar1 = param_4;
        pcVar2 = acStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    pcVar5 = pcVar2;
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (char *)(ulong)(iVar6 == (int)param_3);
  }
  ___stack_chk_fail();
  _objc_retain(pcVar5);
  if (pcVar5 != (char *)0x0) {
    pcVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pcVar5 != pcVar2) {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      pcVar2 = pcVar5;
      _objc_opt_isKindOfClass(pcVar5,puVar3);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bf25f00();
        pcVar4 = pcVar5;
        func_0x00010c08fa60(pcVar5);
        _sqlite3_bind_blob(param_5,puVar8,pcVar2,pcVar4,0xffffffffffffffff);
        goto LAB_10b5f050c;
      }
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
      pcVar2 = pcVar5;
      _objc_opt_isKindOfClass(pcVar5,puVar3);
      if (((ulong)pcVar2 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        pcVar2 = pcVar5;
        _objc_opt_isKindOfClass(pcVar5,puVar3);
        if (((ulong)pcVar2 & 1) == 0) {
LAB_10b5f0610:
          pcVar2 = pcVar5;
          func_0x00010bf6e340(pcVar5);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar2;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _sqlite3_bind_text(param_5,puVar8,pcVar4,0xffffffff,0xffffffffffffffff);
          _objc_release(pcVar2);
          goto LAB_10b5f050c;
        }
        pcVar2 = pcVar5;
        _objc_retainAutorelease();
        func_0x00010c0dfba0();
        if ((*pcVar2 == 'B') && (pcVar2[1] == '\0')) {
          pcVar2 = pcVar5;
          func_0x00010bf1f3c0(pcVar5);
          _sqlite3_bind_int(param_5,puVar8,pcVar2);
          goto LAB_10b5f050c;
        }
        pcVar2 = pcVar5;
        _objc_retainAutorelease();
        func_0x00010c0dfba0();
        if ((*pcVar2 != 'i') || (pcVar2[1] != '\0')) {
          pcVar2 = pcVar5;
          _objc_retainAutorelease();
          func_0x00010c0dfba0();
          if ((*pcVar2 != 'q') || (pcVar2[1] != '\0')) {
            pcVar2 = pcVar5;
            _objc_retainAutorelease();
            func_0x00010c0dfba0();
            if ((*pcVar2 == 'f') && (pcVar2[1] == '\0')) {
              func_0x00010bfb2c80(pcVar5);
            }
            else {
              pcVar2 = pcVar5;
              _objc_retainAutorelease();
              func_0x00010c0dfba0();
              if ((*pcVar2 != 'd') || (pcVar2[1] != '\0')) goto LAB_10b5f0610;
              func_0x00010bf885a0(pcVar5);
            }
            goto LAB_10b5f0544;
          }
        }
        pcVar2 = pcVar5;
        func_0x00010c0b4fe0(pcVar5);
        _sqlite3_bind_int64(param_5,puVar8,pcVar2);
      }
      else {
        func_0x00010c26f320(pcVar5);
LAB_10b5f0544:
        _sqlite3_bind_double(param_5,puVar8);
      }
      goto LAB_10b5f050c;
    }
  }
  _sqlite3_bind_null(param_5,puVar8);
LAB_10b5f050c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return pcVar5;
}



/* Entry: 10b5f0464; end: 10b5f06a3; -[EGODatabase bindObject:toColumn:inStatement:] */

void FUN_10b5f0464(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  
  _objc_retain(param_3);
  if (param_3 != (char *)0x0) {
    pcVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 != pcVar1) {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      pcVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bf25f00();
        pcVar3 = param_3;
        func_0x00010c08fa60(param_3);
        _sqlite3_bind_blob(param_5,param_4,pcVar1,pcVar3,0xffffffffffffffff);
        goto LAB_10b5f050c;
      }
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
      pcVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        pcVar1 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar2);
        if (((ulong)pcVar1 & 1) == 0) {
LAB_10b5f0610:
          pcVar1 = param_3;
          func_0x00010bf6e340(param_3);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar1;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _sqlite3_bind_text(param_5,param_4,pcVar3,0xffffffff,0xffffffffffffffff);
          _objc_release(pcVar1);
          goto LAB_10b5f050c;
        }
        pcVar1 = param_3;
        _objc_retainAutorelease();
        func_0x00010c0dfba0();
        if ((*pcVar1 == 'B') && (pcVar1[1] == '\0')) {
          pcVar1 = param_3;
          func_0x00010bf1f3c0(param_3);
          _sqlite3_bind_int(param_5,param_4,pcVar1);
          goto LAB_10b5f050c;
        }
        pcVar1 = param_3;
        _objc_retainAutorelease();
        func_0x00010c0dfba0();
        if ((*pcVar1 != 'i') || (pcVar1[1] != '\0')) {
          pcVar1 = param_3;
          _objc_retainAutorelease();
          func_0x00010c0dfba0();
          if ((*pcVar1 != 'q') || (pcVar1[1] != '\0')) {
            pcVar1 = param_3;
            _objc_retainAutorelease();
            func_0x00010c0dfba0();
            if ((*pcVar1 == 'f') && (pcVar1[1] == '\0')) {
              func_0x00010bfb2c80(param_3);
            }
            else {
              pcVar1 = param_3;
              _objc_retainAutorelease();
              func_0x00010c0dfba0();
              if ((*pcVar1 != 'd') || (pcVar1[1] != '\0')) goto LAB_10b5f0610;
              func_0x00010bf885a0(param_3);
            }
            goto LAB_10b5f0544;
          }
        }
        pcVar1 = param_3;
        func_0x00010c0b4fe0(param_3);
        _sqlite3_bind_int64(param_5,param_4,pcVar1);
      }
      else {
        func_0x00010c26f320(param_3);
LAB_10b5f0544:
        _sqlite3_bind_double(param_5,param_4);
      }
      goto LAB_10b5f050c;
    }
  }
  _sqlite3_bind_null(param_5,param_4);
LAB_10b5f050c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5f06a4; end: 10b5f06e7; -[EGODatabase dealloc] */

void FUN_10b5f06a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3d9e0();
  puStack_28 = PTR_PTR_112706680;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5f06e8; end: 10b5f072f; -[EGODatabase .cxx_destruct] */

void FUN_10b5f06e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b5f0730; end: 10b5f077b; -[EGODatabaseResult rowAtIndex:] */

void FUN_10b5f0730(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5f077c; end: 10b5f07bf; -[EGODatabaseResult firstRow] */

void FUN_10b5f077c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5f07c0; end: 10b5f0803; -[EGODatabaseResult lastRow] */

void FUN_10b5f07c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5f0804; end: 10b5f083f; -[EGODatabaseResult count] */

undefined8 FUN_10b5f0804(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b5f0840; end: 10b5f089b; -[EGODatabaseResult countByEnumeratingWithState:objects:count:] */

undefined8 FUN_10b5f0840(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52a60();
  _objc_release(param_1);
  return uVar1;
}


