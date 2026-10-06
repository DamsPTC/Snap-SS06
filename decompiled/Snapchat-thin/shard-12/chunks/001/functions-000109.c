/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108dfb214; end: 108dfb29b; -[SCCMemoriesLocationDbDb initWithSqliteConnection:] */

undefined1 * FUN_108dfb214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe960;
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



/* Entry: 108dfb29c; end: 108dfb31f; -[SCCMemoriesLocationDbDb .cxx_destruct] */

void FUN_108dfb29c(long param_1)

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



/* Entry: 108dfb320; end: 108dfb32b; -[SCCMemoriesLocationDbDb .cxx_construct] */

void FUN_108dfb320(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 108dfb32c; end: 108dfb523;  */

void FUN_108dfb32c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined4 uStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dfa339b,0xc1);
      uStack_54 = 1;
      func_0x00010b5eeb94();
      func_0x00010b5eeb94(lVar1,&uStack_54,param_3);
      func_0x00010b5eeb94(lVar1,&uStack_54,param_4);
      func_0x00010b5eeb94(lVar1,&uStack_54,param_5);
      func_0x000107c30760(lVar1,FUN_108dfb524);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108dfb430;
    }
  }
  lVar1 = 0;
LAB_108dfb430:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108dfb524; end: 108dfb607;  */

void FUN_108dfb524(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dbf60;
  _objc_alloc(PTR_PTR_1126dbf60);
  uVar2 = param_1;
  func_0x000107c30768(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000107c30764(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30764(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108dfbc7c(puVar1,uVar2,uVar3,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dfb608; end: 108dfb76b;  */

void FUN_108dfb608(long param_1,undefined8 param_2)

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
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dfa345d,0x4c);
      func_0x000107c3075c();
      func_0x000107c30760(lVar1,FUN_108dfb76c);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108dfb6b0;
    }
  }
  lVar1 = 0;
LAB_108dfb6b0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108dfb76c; end: 108dfb81b;  */

void FUN_108dfb76c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dbf68;
  _objc_alloc(PTR_PTR_1126dbf68);
  uVar2 = param_1;
  func_0x000107c30764(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30764(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108dfbef8(puVar1,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dfb81c; end: 108dfb9ab;  */

void FUN_108dfb81c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dfa34aa,0x70);
      uStack_44 = 1;
      func_0x000107c3075c();
      func_0x00010b5eeb94(lVar1,&uStack_44,param_3);
      func_0x00010b5eeb94(lVar1,&uStack_44,param_4);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dfb9ac; end: 108dfbadb;  */

void FUN_108dfb9ac(long param_1,undefined8 param_2)

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
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dfa351b,0x3a);
      func_0x000107c3075c();
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dfbadc; end: 108dfbaff; -[SnapLocationTable copyWithZone:] */

undefined8 FUN_108dfbadc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108dfbb00; end: 108dfbb7f; -[SnapLocationTable hash] */

undefined8 * FUN_108dfbb00(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108dfbc18:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108dfbc24;
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
            goto LAB_108dfbc24;
          }
          goto LAB_108dfbc18;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108dfbc24:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108dfbb80; end: 108dfbc3f; -[SnapLocationTable isEqual:] */

long FUN_108dfbb80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108dfbc18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108dfbc24;
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
            goto LAB_108dfbc24;
          }
          goto LAB_108dfbc18;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108dfbc24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108dfbc40; end: 108dfbc7b; -[SnapLocationTable .cxx_destruct] */

void FUN_108dfbc40(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfbc7c; end: 108dfbd57;  */

undefined1 * FUN_108dfbc7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126fe970;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 108dfbd58; end: 108dfbd7b; -[QuerySnapsInRange copyWithZone:] */

undefined8 FUN_108dfbd58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108dfbd7c; end: 108dfbdfb; -[QuerySnapsInRange hash] */

undefined8 * FUN_108dfbd7c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108dfbe94:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108dfbea0;
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
            goto LAB_108dfbea0;
          }
          goto LAB_108dfbe94;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108dfbea0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108dfbdfc; end: 108dfbebb; -[QuerySnapsInRange isEqual:] */

long FUN_108dfbdfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108dfbe94:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108dfbea0;
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
            goto LAB_108dfbea0;
          }
          goto LAB_108dfbe94;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108dfbea0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108dfbebc; end: 108dfbef7; -[QuerySnapsInRange .cxx_destruct] */

void FUN_108dfbebc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfbef8; end: 108dfbfa7;  */

undefined1 * FUN_108dfbef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126fe978;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 108dfbfa8; end: 108dfbfcb; -[QueryLocationForSnapId copyWithZone:] */

undefined8 FUN_108dfbfa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108dfbfcc; end: 108dfc03f; -[QueryLocationForSnapId hash] */

undefined8 * FUN_108dfbfcc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108dfc0c0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108dfc0cc;
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
          goto LAB_108dfc0cc;
        }
        goto LAB_108dfc0c0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108dfc0cc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108dfc040; end: 108dfc0e7; -[QueryLocationForSnapId isEqual:] */

long FUN_108dfc040(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108dfc0c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108dfc0cc;
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
          goto LAB_108dfc0cc;
        }
        goto LAB_108dfc0c0;
      }
    }
    lVar3 = 0;
  }
LAB_108dfc0cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108dfc0e8; end: 108dfc117; -[QueryLocationForSnapId .cxx_destruct] */

void FUN_108dfc0e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfc118; end: 108dfc19f; -[SCTrackedAsyncMetric initWithEventName:andStartTime:] */

undefined1 *
FUN_108dfc118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe980;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108dfc1a0; end: 108dfc1a7; -[SCTrackedAsyncMetric start] */

undefined8 FUN_108dfc1a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108dfc1a8; end: 108dfc1af; -[SCTrackedAsyncMetric eventName] */

undefined8 FUN_108dfc1a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108dfc1b0; end: 108dfc1bb; -[SCTrackedAsyncMetric .cxx_destruct] */

void FUN_108dfc1b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108dfc1bc; end: 108dfc287; -[SCAsyncMetricsStore init] */

undefined1 * FUN_108dfc1bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe988;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108dfc288; end: 108dfc30f; +[SCAsyncMetricsStore shared] */

void FUN_108dfc288(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108dfc310;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam000000011372e9d8 != -1) {
    func_0x000107c27d9c(0x11372e9d8,&puStack_48);
  }
  uVar1 = uRam000000011372e9d0;
  _objc_retain(uRam000000011372e9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108dfc310; end: 108dfc337;  */

void FUN_108dfc310(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam000000011372e9d0;
  uRam000000011372e9d0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108dfc338; end: 108dfc44b; -[SCAsyncMetricsStore startLatencyMetric:withUniqueId:] */

void FUN_108dfc338(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108dfc44c; end: 108dfc4fb;  */

void FUN_108dfc44c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bed1320(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be47300(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126dbf70;
      _objc_alloc(PTR_PTR_1126dbf70);
      func_0x00010c010c20(*(undefined8 *)(param_1 + 0x38));
      func_0x00010bea52a0(lVar1,param_2,puVar4,lVar2);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dfc4fc; end: 108dfc5fb; -[SCAsyncMetricsStore cancelLatencyMetric:withUniqueId:] */

void FUN_108dfc4fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
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



/* Entry: 108dfc5fc; end: 108dfc683;  */

void FUN_108dfc5fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bed1320(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be47300(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010be8c620(lVar1,param_2,lVar2);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dfc684; end: 108dfc7f3; -[SCAsyncMetricsStore endLatencyMetric:withUniqueId:] */

undefined8 FUN_108dfc684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c06fc80();
  uVar3 = 0;
  if ((uVar1 & 1) == 0) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uVar2 = 0x2020000000;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    _CACurrentMediaTime();
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_80 = uVar2;
    func_0x00010c0f8240(uVar3);
    uVar3 = puStack_68[3];
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    __Block_object_dispose(&uStack_70,8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108dfc7f4; end: 108dfc89f;  */

void FUN_108dfc7f4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bed1320(lVar1,param_3,*(undefined8 *)(param_2 + 0x20),
                        *(undefined8 *)(param_2 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be47300(lVar1,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      dVar4 = *(double *)(param_2 + 0x40);
      func_0x00010c24d960(lVar3);
      *(double *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) = dVar4 - param_1;
      func_0x00010be8c620(lVar1,param_3,lVar2);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dfc8a0; end: 108dfc8cf; -[SCAsyncMetricsStore _uniqueEventKeyWithEventName:andUniqueId:] */

void FUN_108dfc8a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc0f98);
  return;
}



/* Entry: 108dfc8d0; end: 108dfc8fb; -[SCAsyncMetricsStore _latencyMetricForUniqueEventKey:] */

void FUN_108dfc8d0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dfc8fc; end: 108dfc90f; -[SCAsyncMetricsStore _setLatencyMetric:forUniqueEventKey:] */

void FUN_108dfc8fc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_setObject_forKeyedSubscript__112651bb8);
    return;
  }
  return;
}



/* Entry: 108dfc910; end: 108dfc91f; -[SCAsyncMetricsStore _removeLatencyMetricForUniqueEventKey:] */

void FUN_108dfc910(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
    return;
  }
  return;
}



/* Entry: 108dfc920; end: 108dfc94f; -[SCAsyncMetricsStore .cxx_destruct] */

void FUN_108dfc920(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfc950; end: 108dfc9db;  */

undefined ** FUN_108dfc950(long param_1)

{
  if (param_1 + 1U < 0x21) {
    return (undefined **)(&PTR_PTR_110ac5a50)[param_1 + 1U];
  }
  return &PTR____CFConstantStringClassReference_110db93d8;
}



/* Entry: 108dfc9dc; end: 108dfcaa3;  */

undefined ** FUN_108dfc9dc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  func_0x00010b5fa33c();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef94b8;
  if (param_1 != 9999) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e10b58;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e29ef8;
  if (param_1 != 8) {
    ppuVar1 = ppuVar4;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef9498;
  if (param_1 != 7) {
    ppuVar4 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e76d78;
  if (param_1 != 6) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e10b58;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef9418;
  if (param_1 != 5) {
    ppuVar3 = ppuVar1;
  }
  if (param_1 < 7) {
    ppuVar4 = ppuVar3;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef9478;
  if (param_1 != 4) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e10b58;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef9438;
  if (param_1 != 3) {
    ppuVar3 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef9458;
  if (param_1 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e10b58;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e9c0b8;
  if (param_1 != 1) {
    ppuVar2 = ppuVar1;
  }
  if (param_1 < 3) {
    ppuVar3 = ppuVar2;
  }
  if (param_1 < 5) {
    ppuVar4 = ppuVar3;
  }
  return ppuVar4;
}



/* Entry: 108dfcaa4; end: 108dfcb03;  */

undefined8 FUN_108dfcaa4(ulong param_1)

{
  if (param_1 < 0x11) {
    return *(undefined8 *)(&UNK_10dfa3558 + param_1 * 8);
  }
  return 8;
}



/* Entry: 108dfcb04; end: 108dfcb6f;  */

long FUN_108dfcb04(long param_1)

{
  long lVar1;
  
  func_0x00010b5fa33c();
  if (param_1 < 6) {
    lVar1 = 6;
    if (param_1 != 5) {
      lVar1 = 0;
    }
    if (param_1 - 1U < 4) {
      return param_1;
    }
    return lVar1;
  }
  if (1 < param_1 - 6U) {
    if (param_1 == 8) {
      return 7;
    }
    if (param_1 != 9999) {
      return 0;
    }
  }
  return -1;
}



/* Entry: 108dfcb70; end: 108dfcbef;  */

long FUN_108dfcb70(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 < 5) {
    if (param_1 - 1U < 4) {
      return param_1;
    }
    if (param_1 != -9999) {
      return 0;
    }
  }
  else if (1 < param_1 - 6U) {
    lVar1 = 7;
    if (param_1 != 8) {
      lVar1 = 0;
    }
    lVar2 = 6;
    if (param_1 != 5) {
      lVar2 = lVar1;
    }
    return lVar2;
  }
  return -1;
}



/* Entry: 108dfcbf0; end: 108dfcc3b;  */

void FUN_108dfcbf0(int param_1,uint param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 & 1) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
    if (param_1 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e36318;
    }
    _objc_retain(ppuVar1);
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef94d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108dfcc3c; end: 108dfcc4b;  */

int FUN_108dfcc3c(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 - 1U < 0x45) {
    iVar1 = (int)(param_1 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 108dfcc4c; end: 108dfcd7f;  */

void FUN_108dfcc4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_108dfcd60;
  }
  lVar1 = param_1;
  func_0x00010bf64920(param_1,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1900(puVar2,param_2,lVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126dbf78;
  _objc_alloc();
  func_0x00010c0206e0();
  puVar4 = puVar3;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar6 = puVar3;
    func_0x00010bf93e80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    else {
      puVar5 = puVar3;
      func_0x00010bf93960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar4);
      if (puVar5 != (undefined *)0x0) {
        _objc_retain(puVar3);
        puVar6 = puVar3;
        goto LAB_108dfcd50;
      }
    }
    puVar6 = (undefined *)0x0;
  }
LAB_108dfcd50:
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_108dfcd60:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108dfcd80; end: 108dfd173;  */

void FUN_108dfcd80(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR_PTR_1126d9150;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d9150;
  _objc_alloc_init();
  puVar6 = puVar5;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d9150;
  _objc_alloc_init();
  puVar9 = puVar8;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ba8c8;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ba9a8;
  _objc_alloc_init(PTR_PTR_1126ba9a8);
  puVar5 = puVar4;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c189a20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bcd48;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010c223ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c1ac480();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bcd60;
  _objc_alloc_init();
  func_0x00010c19c8e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c16bbc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_1 != 0) {
    puVar3 = PTR_PTR_1126d9158;
    _objc_alloc();
    uVar12 = 0xffffffff8419d893;
    func_0x00010b794420(0xffffffff8419d893);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bcd20;
    _objc_alloc(PTR_PTR_1126bcd20);
    func_0x00010c062ba0();
    func_0x00010bff4d20();
    _objc_release(puVar4);
    _objc_release(uVar12);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203a00(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar11);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c0702c0();
    bVar1 = (int)puVar3 == 0;
    ppuVar13 = &PTR____CFConstantStringClassReference_110ef94f8;
    if (bVar1) {
      ppuVar13 = &PTR____CFConstantStringClassReference_110ef9518;
    }
    ppuVar14 = &PTR____CFConstantStringClassReference_110ef9538;
    if (bVar1) {
      ppuVar14 = &PTR____CFConstantStringClassReference_110ef9558;
    }
    func_0x00010bcbeaa8(ppuVar13,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(ppuVar14,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c241120(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108dfd174; end: 108dfd26b;  */

void FUN_108dfd174(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c0702c0();
  bVar1 = (int)puVar3 == 0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef94f8;
  if (bVar1) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110ef9518;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110ef9538;
  if (bVar1) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110ef9558;
  }
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c241120(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108dfd26c; end: 108dfdf73;  */

void FUN_108dfd26c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eaf658;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eaf658,
                      &PTR____CFConstantStringClassReference_110ef91d8,0);
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



/* Entry: 108dfdf74; end: 108dfe2a7;  */

void FUN_108dfdf74(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  iVar1 = 0x10efa5f8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110efa5f8,
                      &PTR____CFConstantStringClassReference_110efa618);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010bcbeb30();
  puVar3 = puVar2;
  if (iVar1 != 0) {
    func_0x00010bcbea50(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108dfe2a8; end: 108dfe2d3; +[SCGrapheneMemoriesContentDeliveryMetric cmGetDiskSizeLatency] */

void FUN_108dfe2a8(void)

{
  _objc_alloc(PTR_PTR_1126dbf80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dfe2d4; end: 108dfe2ff; +[SCGrapheneMemoriesContentDeliveryMetric retrieveMemoriesCm] */

void FUN_108dfe2d4(void)

{
  _objc_alloc(PTR_PTR_1126dbf80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dfe300; end: 108dfe39f; -[SCGrapheneMemoriesContentDeliveryMetric description] */

void FUN_108dfe300(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110efa6b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110efa6b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fe990;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108dfe3a0; end: 108dfe4eb; -[SCGrapheneRegistry memoriesContentDeliveryGraphene] */

void FUN_108dfe3a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108dfe428;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372e9e8 != -1) {
    func_0x000107c27d9c(0x11372e9e8,&puStack_48);
  }
  uVar1 = uRam000000011372e9e0;
  _objc_retain(uRam000000011372e9e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108dfe4ec; end: 108dfe5c3;  */

void FUN_108dfe4ec(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126dbdd0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x000107c310d0(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dfe5c4; end: 108dfe64b;  */

void FUN_108dfe5c4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_108dff444(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dfe64c; end: 108dfe937;  */

void FUN_108dfe64c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126dbdd0);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_108dfec34();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x000107c310cc(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000107c27dd4(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000107c27dd4(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126dbf88;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    func_0x00010bfb1920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_108dff3d0(puVar5,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dfe938; end: 108dfea13; -[SCMemoriesUserBackupStatus initWithUserId:userName:pendingSnapCount:failedEntryCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108dfe938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fe998;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bd10);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277bd10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bd14);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277bd14) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11277bd18) = param_5;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11277bd1c) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dfea14; end: 108dfea37; -[SCMemoriesUserBackupStatus copyWithZone:] */

undefined8 FUN_108dfea14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108dfea38; end: 108dfeacb; -[SCMemoriesUserBackupStatus hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108dfea38(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277bd10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277bd14);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(uint *)(param_1 + _DAT_11277bd18);
  uStack_30 = (ulong)*(uint *)(param_1 + _DAT_11277bd1c);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108dfeb8c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108dfeb98;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(int *)((long)puVar3 + (long)_DAT_11277bd18) ==
         *(int *)((long)param_3 + (long)_DAT_11277bd18) &&
        (*(int *)((long)puVar3 + (long)_DAT_11277bd1c) ==
         *(int *)((long)param_3 + (long)_DAT_11277bd1c))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11277bd10);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11277bd10)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11277bd14);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11277bd14)) {
          func_0x00010c071ae0();
          goto LAB_108dfeb98;
        }
        goto LAB_108dfeb8c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108dfeb98:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108dfeacc; end: 108dfebb3; -[SCMemoriesUserBackupStatus isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108dfeacc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108dfeb8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108dfeb98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(int *)(param_1 + (long)_DAT_11277bd18) == *(int *)(param_3 + (long)_DAT_11277bd18) &&
        (*(int *)(param_1 + (long)_DAT_11277bd1c) == *(int *)(param_3 + (long)_DAT_11277bd1c))))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11277bd10);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11277bd10)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11277bd14);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_11277bd14)) {
          func_0x00010c071ae0();
          goto LAB_108dfeb98;
        }
        goto LAB_108dfeb8c;
      }
    }
    lVar3 = 0;
  }
LAB_108dfeb98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108dfebb4; end: 108dfebc3; -[SCMemoriesUserBackupStatus userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108dfebb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277bd10);
}



/* Entry: 108dfebc4; end: 108dfebd3; -[SCMemoriesUserBackupStatus userName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108dfebc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277bd14);
}



/* Entry: 108dfebd4; end: 108dfebe3; -[SCMemoriesUserBackupStatus pendingSnapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_108dfebd4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277bd18);
}



/* Entry: 108dfebe4; end: 108dfebf3; -[SCMemoriesUserBackupStatus failedEntryCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_108dfebe4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277bd1c);
}



/* Entry: 108dfebf4; end: 108dfec33; -[SCMemoriesUserBackupStatus .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dfebf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277bd14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bd10,0);
  return;
}



/* Entry: 108dfec34; end: 108dfec97;  */

undefined ** FUN_108dfec34(void)

{
  int iVar1;
  
  if ((bRam0000000113829b28 & 1) == 0) {
    iVar1 = 0x13829b28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113299c88,0x100000000);
      ___cxa_guard_release(0x113829b28);
    }
  }
  return &PTR_PTR_113299c88;
}



/* Entry: 108dfec98; end: 108dfed1f;  */

void FUN_108dfec98(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dfed20; end: 108dfedab;  */

void FUN_108dfed20(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108dfedac; end: 108dfedb7; +[SCMemoriesUserBackupStatus table] */

undefined * FUN_108dfedac(void)

{
  return &UNK_10f51dbf4;
}



/* Entry: 108dfedb8; end: 108dfef3b; +[SCMemoriesUserBackupStatus immutableObjectParse:bufferSize:] */

void FUN_108dfedb8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126dbdd0;
  _objc_alloc(PTR_PTR_1126dbdd0);
  lVar7 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar6 < 5) {
    puVar9 = (undefined *)0x0;
LAB_108dfee98:
    puVar10 = (undefined *)0x0;
LAB_108dfee9c:
    uVar4 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar8 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar7);
    }
    lVar7 = -lVar7;
    if (uVar6 < 7) goto LAB_108dfee98;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 6);
    if (uVar8 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 9) goto LAB_108dfee9c;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 8);
    if (uVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar8);
    }
    if ((10 < uVar6) && (uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 10), uVar8 != 0)) {
      uVar5 = *(undefined4 *)((long)piVar1 + uVar8);
      goto LAB_108dfeea4;
    }
  }
  uVar5 = 0;
LAB_108dfeea4:
  func_0x00010c05bea0(puVar3,param_2,puVar9,puVar10,uVar4,uVar5);
  _objc_release(puVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108dfef3c; end: 108dfef5f; +[SCMemoriesUserBackupStatus objectClassFunctionPointer] */

undefined1  [16] FUN_108dfef3c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108dfef58;
  auVar1._0_8_ = 0x108dfef50;
  return auVar1;
}



/* Entry: 108dfef60; end: 108dff03f;  */

undefined1 *
FUN_108dfef60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126fe9a0;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_4;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x14) = param_5;
      *(undefined4 *)((long)plVar1 + 0x18) = param_6;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 108dff040; end: 108dff3cf;  */

void FUN_108dff040(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar7,&UNK_10f51dc0f);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c2923e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar7,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar7;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar7;
            _sqlite3_column_int64(puVar7,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126dbdd0);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_108dff320;
            puVar7 = PTR_PTR_1126dbf88;
            _objc_alloc(PTR_PTR_1126dbf88);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c292e20(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c0f7960(puVar3);
            puVar6 = puVar3;
            func_0x00010bf9fc60(puVar3);
            FUN_108dfef60(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_108dff144;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126dbdd0);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126dbf88;
        _objc_alloc(PTR_PTR_1126dbf88);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c292e20(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0f7960(puVar3);
        puVar6 = puVar3;
        func_0x00010bf9fc60(puVar3);
        FUN_108dfef60(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_108dff144:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108dff328;
      }
LAB_108dff320:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_108dff328:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108dff3d0; end: 108dff443;  */

void FUN_108dff3d0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108dff040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108dff444; end: 108dff68b;  */

void FUN_108dff444(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126dbf88;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_108dff040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar6 = PTR_PTR_1126dbf88;
    _objc_retain(param_1);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126dbf88;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c292e20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c0f7960(param_1);
      puVar5 = param_1;
      func_0x00010bf9fc60(param_1);
      FUN_108dfef60(puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar6 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010c292e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010c0f7960();
    *(int *)(puVar1 + 0x14) = (int)puVar6;
    puVar6 = param_1;
    func_0x00010bf9fc60();
    *(int *)(puVar1 + 0x18) = (int)puVar6;
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108dff68c; end: 108dff6ef;  */

void FUN_108dff68c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126dbdd0;
    _objc_alloc(PTR_PTR_1126dbdd0);
    func_0x00010c05bea0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dff6f0; end: 108dff71f; -[SCMemoriesUserBackupStatusChangeRequest .cxx_destruct] */

void FUN_108dff6f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108dff720; end: 108dff72b; -[SCMemoriesUserBackupStatusChangeRequest table] */

undefined * FUN_108dff720(void)

{
  return &UNK_10f51dbf4;
}



/* Entry: 108dff72c; end: 108dff773; -[SCMemoriesUserBackupStatusChangeRequest createTableWithSQLite:] */

void FUN_108dff72c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dfa36a8,0x88,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108dff774; end: 108dffafb; -[SCMemoriesUserBackupStatusChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108dff774(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_108dff68c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108dffafc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f51dc8d);
    if (lVar6 == 0) goto LAB_108dffa98;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108dffa98;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126dbdd0);
    func_0x00010c21c9a0(puVar7);
LAB_108dffa80:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f51dc57);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126dbdd0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108dffaa4;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108dffaa4;
    }
    FUN_108dff68c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108dffafc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f51dcd0);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126dbdd0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108dffa80;
      }
    }
LAB_108dffa98:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108dffaa4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108dffafc; end: 108dffc5f;  */

ulong FUN_108dffafc(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_108dffc60(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c292e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_108dffc60(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c0f7960(param_2);
  uVar9 = param_2;
  func_0x00010bf9fc60(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27de0(param_1,10,uVar9,0);
  func_0x000107c27de0(param_1,8,uVar8,0);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108dffc60; end: 108dffd8f;  */

undefined8 FUN_108dffc60(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108dffd40;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108dffd40;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108dffd00;
    param_1 = 0;
  }
  else {
LAB_108dffd00:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x000107c27df0(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_108dffd40:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108dffd90; end: 108dffd9b; -[SCMemoriesNetworkerServices .cxx_destruct] */

void FUN_108dffd90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dffd9c; end: 108dffe57;  */

void FUN_108dffd9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010bf3ec40(param_1);
  _objc_release(param_1);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e17af8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108dffe58; end: 108dfff53;  */

void FUN_108dffe58(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    puVar1 = param_1;
    FUN_108dffd9c(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_1;
    FUN_108dffd9c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar4 = puVar2;
    FUN_108dffe58();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110efa718);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    param_1 = puVar3;
  }
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dfff54; end: 108e00073;  */

void FUN_108dfff54(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  long in_x6;
  undefined8 in_x7;
  
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puVar1 = PTR_PTR_1126dbf90;
  _objc_retain(in_x5);
  _objc_opt_new(puVar1);
  func_0x00010c227140();
  func_0x00010c161ea0(puVar1);
  func_0x00010c182d40(puVar1);
  func_0x00010c204fe0(puVar1);
  func_0x00010c203e20(puVar1);
  func_0x00010c1e2860(puVar1);
  _objc_release(in_x5);
  lVar2 = in_x6;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1e2820(puVar1);
  }
  uVar3 = in_x7;
  func_0x00010c269d40(in_x7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(in_x7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x6);
  return;
}



/* Entry: 108e00074; end: 108e001ff;  */

void FUN_108e00074(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d80e8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c197f20();
  _objc_release(param_1);
  func_0x00010c1971a0(puVar1);
  _objc_release(param_2);
  if (param_3 != 0) {
    _objc_retain(param_3);
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0();
    if ((int)puVar2 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110efa738;
    }
    else {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340();
      _objc_release(puVar2);
      ppuVar5 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar5 = ppuVar3;
      }
      _objc_retain(ppuVar5);
      _objc_release(ppuVar3);
    }
    _objc_release(param_3);
    func_0x00010c1999c0(puVar1);
    _objc_release(ppuVar5);
  }
  uVar4 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e00200; end: 108e0033f;  */

void FUN_108e00200(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d80e8;
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c197f20();
  _objc_release(param_1);
  if (param_3 == 0) {
    uVar2 = param_2;
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(puVar1);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1971a0(puVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_2;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_108dffe58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1999c0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e00340; end: 108e0034b; -[SCMemoriesEncryptedDatabaseServices .cxx_destruct] */

void FUN_108e00340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e0034c; end: 108e00357; -[SCFeatureSettingsService isGalleryEnabledAvailable] */

void FUN_108e0034c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa798);
  return;
}



/* Entry: 108e00358; end: 108e00363; -[SCFeatureSettingsService galleryEnabledServerParam] */

undefined ** FUN_108e00358(void)

{
  return &PTR____CFConstantStringClassReference_110efa798;
}



/* Entry: 108e00364; end: 108e00373; -[SCFeatureSettingsService setGalleryEnabled:] */

void FUN_108e00364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa798,param_3);
  return;
}



/* Entry: 108e00374; end: 108e0037b; -[SCFeatureSettingsService gallery_enabled_client_value:] */

undefined * FUN_108e00374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e0037c; end: 108e00383; -[SCFeatureSettingsService gallery_enabled_server_value:] */

void FUN_108e0037c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e00384; end: 108e0038f; -[SCFeatureSettingsService isGalleryBackupOnCellularAvailable] */

void FUN_108e00384(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa7b8);
  return;
}



/* Entry: 108e00390; end: 108e0039b; -[SCFeatureSettingsService galleryBackupOnCellularServerParam] */

undefined ** FUN_108e00390(void)

{
  return &PTR____CFConstantStringClassReference_110efa7b8;
}


