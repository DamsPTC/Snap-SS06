/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066b7f78; end: 1066b7f7f; -[SCLensExplorerDataStore setRemoteState:] */

void FUN_1066b7f78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1066b7f80; end: 1066b7fd3; -[SCLensExplorerDataStore .cxx_destruct] */

void FUN_1066b7f80(long param_1)

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



/* Entry: 1066b7fd4; end: 1066b80a7; -[SCLensExplorerItemsStore initWithPerformer:] */

undefined1 * FUN_1066b7fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2680;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066b80a8; end: 1066b80cf; -[SCLensExplorerItemsStore allItems] */

void FUN_1066b80a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066b80d0; end: 1066b819f; -[SCLensExplorerItemsStore itemWithId:] */

void FUN_1066b80d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066b81a0;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  puStack_40 = puVar1;
  lStack_38 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_40);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066b81a0; end: 1066b81f7;  */

/* WARNING: Possible PIC construction at 0x0001066b81d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001066b81d8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1066b81a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithValue__1125ae900,uVar2);
  return;
}



/* Entry: 1066b81f8; end: 1066b8287; -[SCLensExplorerItemsStore appendItems:] */

void FUN_1066b81f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1066b8288;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1066b8288; end: 1066b8387;  */

void FUN_1066b8288(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 unaff_x21;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010bdcd1e0(*(undefined8 *)(param_1 + 0x28),param_2,
                            *(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010be65320();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1066b8388;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  lStack_130 = lVar3;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  uVar4 = *(undefined8 *)(lVar1 + 8);
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1066b8418;
  puStack_158 = &UNK_110841f80;
  lStack_150 = lVar1;
  puStack_148 = (undefined1 *)puVar2;
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_170);
  _objc_release(puStack_148);
  _objc_release(puVar2);
  return;
}



/* Entry: 1066b8388; end: 1066b8417; -[SCLensExplorerItemsStore appendItem:] */

void FUN_1066b8388(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1066b8418;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066b8418; end: 1066b8443;  */

void FUN_1066b8418(long param_1,undefined8 param_2)

{
  func_0x00010bdcd1e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be65330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__notifyWithItemsUpdates_112576e68);
  return;
}



/* Entry: 1066b8444; end: 1066b861f; -[SCLensExplorerItemsStore _appendItem:] */

void FUN_1066b8444(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      _objc_release(lVar1);
    }
    else {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0x7fffffffffffffff;
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(param_3);
      func_0x00010bfed480(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (puStack_58[3] != 0x7fffffffffffffff) {
        lVar1 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x10));
        _objc_release(lVar1);
      }
      _objc_release(param_3);
      __Block_object_dispose(&uStack_60,8);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066b8620; end: 1066b8703;  */

undefined8 FUN_1066b8620(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(lVar1);
  if (param_2 == lVar1) {
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_release(lVar1);
LAB_1066b86c4:
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
    uVar3 = 1;
    *param_4 = 1;
  }
  else {
    if (lVar1 == 0) {
      _objc_release();
    }
    else {
      lVar2 = param_2;
      func_0x00010c071ae0();
      _objc_release(lVar1);
      _objc_release(param_2);
      _objc_release(lVar1);
      if ((int)lVar2 != 0) goto LAB_1066b86c4;
    }
    uVar3 = 0;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1066b8704; end: 1066b87db; -[SCLensExplorerItemsStore _updateItemsWithNewItems:] */

void FUN_1066b8704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066b87dc; end: 1066b8917;  */

void FUN_1066b87dc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined **)(lVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar5);
    lVar3 = lVar5;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          func_0x00010bdcd1e0(lVar1);
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar5;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar5);
    func_0x00010be65320(*(undefined8 *)(param_1 + 0x28));
  }
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1066b8918;
  lStack_140 = param_1;
  lStack_138 = lVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_148,lVar3);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  _objc_copyWeak(auStack_150,auStack_148);
  func_0x00010c0f7fc0(uVar4);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  return;
}



/* Entry: 1066b8918; end: 1066b89bf; -[SCLensExplorerItemsStore removeAllItems] */

void FUN_1066b8918(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1066b89c0; end: 1066b8a2b;  */

void FUN_1066b89c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    func_0x00010be65320(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066b8a2c; end: 1066b8b03; -[SCLensExplorerItemsStore updateItems:] */

void FUN_1066b8a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066b8b04; end: 1066b8c53;  */

void FUN_1066b8b04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined **)(lVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined **)(lVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar5);
    lVar3 = lVar5;
    func_0x00010bf52a60(lVar5,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar3 != 0) {
      lVar6 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          func_0x00010bdcd1e0(lVar1,param_2,*(undefined8 *)(lStack_108 + lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar5);
    func_0x00010be65320(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1066b8c54;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1066b8cac;
  puStack_130 = &UNK_110842e18;
  lStack_128 = lVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(lVar1 + 8),param_2,&puStack_148);
  return;
}



/* Entry: 1066b8c54; end: 1066b8cab; -[SCLensExplorerItemsStore _notifyWithItemsUpdates] */

void FUN_1066b8c54(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1066b8cac;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1066b8cac; end: 1066b8e33;  */

void FUN_1066b8cac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(lVar4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c0d9840(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 1066b8e34; end: 1066b8e7b; -[SCLensExplorerItemsStore .cxx_destruct] */

void FUN_1066b8e34(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066b8e7c; end: 1066b8ea7; -[SCLensExplorerNullDataStore remoteState] */

void FUN_1066b8e7c(void)

{
  _objc_alloc(PTR_PTR_1126ccc80);
  func_0x00010c04e760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066b8ea8; end: 1066b8eaf; -[SCLensExplorerNullDataStore dataStoreIdentifier] */

undefined8 FUN_1066b8ea8(void)

{
  return 0;
}



/* Entry: 1066b8eb0; end: 1066b8ec3; -[SCLensExplorerNullDataStore allItems] */

void FUN_1066b8eb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 1066b8ec4; end: 1066b8ed7; -[SCLensExplorerNullDataStore isEmpty] */

void FUN_1066b8ec4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1066b8ed8; end: 1066b8edb; -[SCLensExplorerNullDataStore appendItems:remoteState:] */

void FUN_1066b8ed8(void)

{
  return;
}



/* Entry: 1066b8edc; end: 1066b8edf; -[SCLensExplorerNullDataStore updateItems:remoteState:] */

void FUN_1066b8edc(void)

{
  return;
}



/* Entry: 1066b8ee0; end: 1066b8eeb; +[SCLensExplorerNullDataStore announcerIdentifier] */

undefined ** FUN_1066b8ee0(void)

{
  return &PTR____CFConstantStringClassReference_110e59318;
}



/* Entry: 1066b8eec; end: 1066b8f8f; -[SCLensExplorerBannerCategorySectionsProvider initWithBaseCategorySectionsProvider:bannerProvider:] */

undefined1 *
FUN_1066b8eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2688;
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



/* Entry: 1066b8f90; end: 1066b904f; -[SCLensExplorerBannerCategorySectionsProvider feedConfigurationsForCategory:] */

void FUN_1066b8f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfa3960(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010bf334a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf158e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf41860(uVar3,param_2,uVar2,&PTR___NSConcreteGlobalBlock_110934148);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066b9050; end: 1066b915b;  */

void FUN_1066b9050(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_2);
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    puVar1 = PTR_PTR_1126ccf28;
    func_0x00010be9cc00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puVar6 = param_2;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    puVar1 = puVar6;
    func_0x00010c08c7c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ccd80;
    _objc_alloc(PTR_PTR_1126ccd80);
    puVar3 = PTR_PTR_1126ccd88;
    func_0x00010c298de0(PTR_PTR_1126ccd88);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf4ab80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fec0();
    func_0x00010c04ad80(0,0,puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126ccf20;
    _objc_alloc(PTR_PTR_1126ccf20);
    puVar3 = puVar6;
    func_0x00010c155f40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027860(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ccc58;
    _objc_alloc(PTR_PTR_1126ccc58);
    puVar5 = puVar6;
    func_0x00010c155f40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c0431a0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066b915c; end: 1066b92e7; +[SCLensExplorerBannerCategorySectionsProvider _sectionConfigurationFromBannerModel:] */

void FUN_1066b915c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08c7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccd80;
  _objc_alloc(PTR_PTR_1126ccd80);
  puVar3 = PTR_PTR_1126ccd88;
  func_0x00010c298de0(PTR_PTR_1126ccd88);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf4ab80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c28fec0();
  func_0x00010c04ad80(0,0,puVar2,param_2,3,puVar3,2,uVar5,0,0);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ccf20;
  _objc_alloc(PTR_PTR_1126ccf20);
  uVar4 = param_3;
  func_0x00010c155f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027860(puVar3,param_2,uVar4,0,0,0);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126ccc58;
  _objc_alloc(PTR_PTR_1126ccc58);
  uVar4 = param_3;
  func_0x00010c155f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0431a0(puVar6,param_2,uVar4,puVar3,0,0,puVar2,0,0);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066b92e8; end: 1066b9317; -[SCLensExplorerBannerCategorySectionsProvider .cxx_destruct] */

void FUN_1066b92e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066b9318; end: 1066b93bb; -[SCLensExplorerCategorySectionsProvider initWithSectionsDataStore:containersProvider:] */

undefined1 *
FUN_1066b9318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2690;
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



/* Entry: 1066b93bc; end: 1066b953f; -[SCLensExplorerCategorySectionsProvider feedConfigurationsForCategory:] */

void FUN_1066b93bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x00010bf334a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b3a0(uVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066b9540;
  puStack_70 = &UNK_110854bd0;
  uStack_68 = param_3;
  _objc_retain(param_3);
  uVar5 = uVar6;
  func_0x00010c0b8600(uVar6,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c156b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c2519e0(uVar5,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1066b95c8;
  puStack_98 = &UNK_1108eb990;
  uStack_90 = uVar5;
  _objc_retain(uVar5);
  uVar2 = uVar4;
  func_0x00010bfb26a0(uVar4,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066b9540; end: 1066b95c7;  */

void FUN_1066b9540(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c156b00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c12c080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066b95c8; end: 1066b95df;  */

void FUN_1066b95c8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccf30,PTR_s__configurationsForSections_secti_112556c10,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1066b95e0; end: 1066b9737; +[SCLensExplorerCategorySectionsProvider _configurationsForSections:sectionsDataStore:] */

void FUN_1066b95e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066b9738;
  puStack_60 = &UNK_11086bca8;
  uStack_58 = param_4;
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14f680();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar4;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1066b97cc;
  puStack_88 = &UNK_1108b2f88;
  uStack_80 = param_3;
  _objc_retain(param_3);
  puVar4 = puVar3;
  func_0x00010c0b8600(puVar3,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066b9738; end: 1066b9743;  */

void FUN_1066b9738(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_feedConfigurationWithIdentifier__1125c67f8,
             param_2);
  return;
}



/* Entry: 1066b9744; end: 1066b97cb;  */

void FUN_1066b9744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d3c80(param_2);
  uVar1 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_2);
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf51e00(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066b97cc; end: 1066b9863;  */

void FUN_1066b97cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfb2660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066b9864; end: 1066b986f;  */

void FUN_1066b9864(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1066b9870; end: 1066b989f; -[SCLensExplorerCategorySectionsProvider .cxx_destruct] */

void FUN_1066b9870(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066b98a0; end: 1066b9913; -[SCLensExplorerFullPageCategorySectionsProvider initWithCategorySectionsProvider:] */

undefined1 * FUN_1066b98a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2698;
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



/* Entry: 1066b9914; end: 1066b99cf; -[SCLensExplorerFullPageCategorySectionsProvider feedConfigurationsForCategory:] */

void FUN_1066b9914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa3960(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1066b99d0;
  puStack_40 = &UNK_110854bd0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066b99d0; end: 1066b9a53;  */

void FUN_1066b99d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1066b9a54; end: 1066b9b07;  */

void FUN_1066b9a54(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf334a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  else {
    puVar1 = PTR_PTR_1126ccf38;
    func_0x00010be19ce0(PTR_PTR_1126ccf38);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b9b08; end: 1066b9d0b; +[SCLensExplorerFullPageCategorySectionsProvider _fullPageConfigurationFromConfiguration:] */

void FUN_1066b9b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar2 = PTR_PTR_1126ccf38;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c130180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be19d20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ccf20;
  _objc_alloc(PTR_PTR_1126ccf20);
  uVar1 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0b3ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c156380();
  uVar7 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf4ae20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027860(puVar3,param_2,uVar4,uVar6,0,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf34000();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ccc58;
  _objc_alloc(PTR_PTR_1126ccc58);
  uVar4 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf643e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfdf5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0431a0(puVar9,param_2,uVar4,puVar3,uVar5,uVar6,puVar2,0,uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1066b9d0c; end: 1066b9ea7; +[SCLensExplorerFullPageCategorySectionsProvider _fullPageRenderStrategyFromStrategy:] */

void FUN_1066b9d0c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puVar1 = param_3;
  func_0x00010c0ed100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xc2000000;
  func_0x00010c0be340();
  _objc_release(puVar1);
  if (((*(char *)(puStack_58 + 3) == '\x01') &&
      (puVar1 = param_3, func_0x00010bf4dac0(), puVar1 != (undefined *)0x2)) &&
     (puVar1 = param_3, func_0x00010c097520(), puVar1 != (undefined *)0x2)) {
    puVar1 = PTR_PTR_1126ccd80;
    _objc_alloc(PTR_PTR_1126ccd80);
    func_0x00010bf6a480(PTR_PTR_1126ccf40);
    puVar2 = PTR_PTR_1126ccd88;
    func_0x00010c298de0(PTR_PTR_1126ccd88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c097520(param_3);
    func_0x00010c097500(param_3);
    func_0x00010c04ad80(0,uVar3,puVar1);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b9ea8; end: 1066b9ebb;  */

void FUN_1066b9ea8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1066b9ebc; end: 1066b9ec7; -[SCLensExplorerFullPageCategorySectionsProvider .cxx_destruct] */

void FUN_1066b9ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066b9ec8; end: 1066b9f3b; -[SCLensExplorerPredefinedCategorySectionsProvider initWithCategorySectionsProvider:] */

undefined1 * FUN_1066b9ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f26a0;
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



/* Entry: 1066b9f3c; end: 1066ba127; -[SCLensExplorerPredefinedCategorySectionsProvider feedConfigurationsForCategory:] */

void FUN_1066b9f3c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa3960(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf334a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR_PTR_110c909c0;
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf334a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010bf334a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((int)uVar4 != 0) {
        _objc_release(uVar3);
        goto LAB_1066ba000;
      }
      uVar4 = param_3;
      func_0x00010bf334a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar6 & 1) == 0) {
        uVar2 = param_3;
        func_0x00010bf334a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) == 0) {
          _objc_retain(uVar1);
          goto LAB_1066ba078;
        }
        ppuVar8 = &PTR_PTR_110c90ab0;
        goto LAB_1066ba00c;
      }
    }
    else {
LAB_1066ba000:
      _objc_release(uVar2);
    }
    ppuVar8 = &PTR_PTR_110c909c8;
  }
LAB_1066ba00c:
  puVar7 = *ppuVar8;
  _objc_retain(puVar7);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066ba128;
  puStack_60 = &UNK_110854bd0;
  puStack_58 = puVar7;
  _objc_retain(puVar7);
  func_0x00010c0b8600(uVar1,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(puVar7);
LAB_1066ba078:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1066ba128; end: 1066ba1ff;  */

void FUN_1066ba128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126ccf48;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010be3cbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  uVar4 = param_2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126ccd80;
    _objc_retain(uVar4);
    _objc_alloc(puVar1);
    func_0x00010bf6a480(PTR_PTR_1126ccf40);
    puVar2 = PTR_PTR_1126ccd88;
    func_0x00010c298de0(PTR_PTR_1126ccd88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ad80(0,0,puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ccf20;
    _objc_alloc(PTR_PTR_1126ccf20);
    func_0x00010c027860();
    puVar3 = PTR_PTR_1126ccc58;
    _objc_alloc(PTR_PTR_1126ccc58);
    func_0x00010c0431a0();
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066ba200; end: 1066ba313; +[SCLensExplorerPredefinedCategorySectionsProvider _insertedSectionConfigurationWithIdentifier:] */

void FUN_1066ba200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ccd80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126ccf40;
  func_0x00010bf6a480(PTR_PTR_1126ccf40);
  puVar3 = PTR_PTR_1126ccd88;
  func_0x00010c298de0(PTR_PTR_1126ccd88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ad80(0,0,puVar1,param_2,puVar2,puVar3,0,0,0,0);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126ccf20;
  _objc_alloc(PTR_PTR_1126ccf20);
  func_0x00010c027860();
  puVar3 = PTR_PTR_1126ccc58;
  _objc_alloc(PTR_PTR_1126ccc58);
  func_0x00010c0431a0();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066ba314; end: 1066ba31f; -[SCLensExplorerPredefinedCategorySectionsProvider .cxx_destruct] */

void FUN_1066ba314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066ba320; end: 1066ba323; -[SCLensExplorerCreatorItem identifier] */

void FUN_1066ba320(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_creatorId_1125b46b8);
  return;
}



/* Entry: 1066ba324; end: 1066ba5ab; +[SCLensExplorerCreatorItem lensExplorerItemWithCreatorTile:] */

void FUN_1066ba324(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (param_3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf5b280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0960c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1066ba5ac;
    puStack_78 = &UNK_110934208;
    lStack_70 = lVar1;
    uStack_68 = param_1;
    _objc_retain(lVar1);
    lVar3 = lVar2;
    func_0x00010bfb2660(lVar2,param_2,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c117080(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee64e0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126ccd40;
    func_0x00010c0b3b20(PTR_PTR_1126ccd40,param_2,2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ccc40;
    func_0x00010bf5b920(PTR_PTR_1126ccc40,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar12 = PTR_PTR_1126ccd50;
    _objc_alloc();
    lVar2 = lVar1;
    func_0x00010bf5b440(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c242880(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf5bc00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf5b580(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c078fa0(lVar1);
    lVar10 = lVar1;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c117080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006940(puVar12,param_2,lVar2,lVar6,lVar7,lVar8,0,lVar9,lVar10,lVar11,param_1,lVar3,
                        puVar4,puVar5);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lStack_70);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1066ba5ac; end: 1066ba72b;  */

void FUN_1066ba5ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c26d760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c26e0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee64e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  lVar6 = *(long *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x00010bfe5b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee64e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar2 = lVar6;
  if (lVar4 != 0) {
    lVar2 = lVar4;
  }
  func_0x00010beec820(lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar4 == 0 && lVar6 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ccd58;
    _objc_alloc(PTR_PTR_1126ccd58);
    func_0x00010c01bb00();
  }
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066ba72c; end: 1066ba84f; +[SCLensExplorerCreatorItem lensExplorerItemWithCreatorTile:containerId:] */

void FUN_1066ba72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010c0930c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cce78;
  uVar1 = param_1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0932c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2aad20(puVar2,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cce80;
  func_0x00010c092ca0(PTR_PTR_1126cce80,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066ba850; end: 1066ba85b; +[SCLensExplorerCreatorItem _urlWithString:] */

void FUN_1066ba850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithNotBlankString__11254e6a8);
  return;
}



/* Entry: 1066ba85c; end: 1066badd3; +[SCLensExplorerCreatorStory creatorStoryWithWithCreatorTile:] */

void FUN_1066ba85c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf5b860();
  if (uVar1 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf5b280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c078fa0();
    func_0x00010c242860(uVar1);
    puVar3 = PTR_PTR_1126ccd60;
    _objc_alloc();
    uVar4 = uVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    if (uVar5 == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = uVar1;
      func_0x00010bf5b440(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar22 = uVar1;
    func_0x00010bf5b580();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar22;
    func_0x00010c08fa60();
    if (uVar6 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = uVar1;
      func_0x00010bf5b580(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = uVar1;
    func_0x00010c078fa0(uVar1);
    func_0x00010c006900(puVar3,param_2,uVar24,uVar25,uVar7,uVar2 & 0xffffffff);
    if (uVar6 != 0) {
      _objc_release(uVar25);
    }
    _objc_release(uVar22);
    if (uVar5 != 0) {
      _objc_release(uVar24);
    }
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf5b840(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfd6340();
    if ((int)uVar2 == 0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      uVar2 = param_3;
      func_0x00010bf6a440();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR_PTR_1126ccd68;
      _objc_alloc();
      uVar5 = uVar2;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar5;
      func_0x00010c08fa60();
      if (uVar24 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = uVar2;
        func_0x00010c0c54a0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar6 = uVar2;
      func_0x00010c26df60();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar6;
      func_0x00010c08fa60();
      if (uVar25 == 0) {
        uStack_70 = 0;
      }
      else {
        uStack_70 = uVar2;
        func_0x00010c26df60();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar7 = uVar2;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c08fa60();
      if (uVar8 == 0) {
        uStack_78 = 0;
      }
      else {
        uStack_78 = uVar2;
        func_0x00010c26e3a0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar9 = uVar2;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c08fa60();
      if (uVar10 == 0) {
        uStack_80 = 0;
      }
      else {
        uStack_80 = uVar2;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar11 = uVar2;
      func_0x00010c0880a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c08fa60();
      if (uVar12 == 0) {
        uStack_88 = 0;
      }
      else {
        uStack_88 = uVar2;
        func_0x00010c0880a0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar13 = uVar2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c08fa60();
      if (uVar14 == 0) {
        uStack_90 = 0;
      }
      else {
        uStack_90 = uVar2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar15 = uVar2;
      func_0x00010c26d980();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c08fa60();
      if (uVar16 == 0) {
        uStack_98 = 0;
      }
      else {
        uStack_98 = uVar2;
        func_0x00010c26d980();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar17 = uVar2;
      func_0x00010c26d940();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c08fa60();
      if (uVar18 == 0) {
        uStack_a0 = 0;
      }
      else {
        uStack_a0 = uVar2;
        func_0x00010c26d940();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar19 = uVar2;
      func_0x00010c26d920();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c08fa60();
      if (uVar20 == 0) {
        func_0x00010c020be0(puVar21,param_2,uVar22,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90
                            ,uStack_98,uStack_a0,0);
      }
      else {
        uVar20 = uVar2;
        func_0x00010c26d920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c020be0(puVar21,param_2,uVar22,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90
                            ,uStack_98,uStack_a0,uVar20);
        _objc_release(uVar20);
      }
      _objc_release(uVar19);
      if (uVar18 != 0) {
        _objc_release(uStack_a0);
      }
      _objc_release(uVar17);
      if (uVar16 != 0) {
        _objc_release(uStack_98);
      }
      _objc_release(uVar15);
      if (uVar14 != 0) {
        _objc_release(uStack_90);
      }
      _objc_release(uVar13);
      if (uVar12 != 0) {
        _objc_release(uStack_88);
      }
      _objc_release(uVar11);
      if (uVar10 != 0) {
        _objc_release(uStack_80);
      }
      _objc_release(uVar9);
      if (uVar8 != 0) {
        _objc_release(uStack_78);
      }
      _objc_release(uVar7);
      if (uVar25 != 0) {
        _objc_release(uStack_70);
      }
      _objc_release(uVar6);
      if (uVar24 != 0) {
        _objc_release(uVar22);
      }
      _objc_release(uVar5);
      _objc_release(uVar2);
    }
    puVar23 = PTR_PTR_1126ccc40;
    _objc_alloc(PTR_PTR_1126ccc40);
    func_0x00010c006a80();
    _objc_release(puVar21);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1066badd4; end: 1066baddb;  */

void FUN_1066badd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c120350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_rawSnapId_112625af0);
  return;
}



/* Entry: 1066baddc; end: 1066bae7f; -[SCLensExplorerDelayingImageDataStore initWithBaseDataStore:animationLoadingDelay:] */

undefined1 *
FUN_1066baddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f26a8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1066bae80; end: 1066baea3; -[SCLensExplorerDelayingImageDataStore cancelAllDownloads] */

void FUN_1066bae80(long param_1)

{
  func_0x00010bdda3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bf2dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelAllDownloads_1125a90d8);
  return;
}



/* Entry: 1066baea4; end: 1066baee7; -[SCLensExplorerDelayingImageDataStore cancelOperationsForKeys:] */

void FUN_1066baea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bddad40(param_1,param_2,param_3);
  func_0x00010bf2e8c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066baee8; end: 1066baf23; -[SCLensExplorerDelayingImageDataStore lensExplorerAnimationForLensItem:preferredSize:] */

void FUN_1066baee8(long param_1)

{
  if (*(double *)(param_1 + 0x10) <= 0.0) {
    func_0x00010c092aa0(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdf9a80();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066baf24; end: 1066baf2b; -[SCLensExplorerDelayingImageDataStore lensExplorerImageForStoryItem:type:preferredSize:] */

void FUN_1066baf24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c092ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lensExplorerImageForStoryItem_ty_112602608);
  return;
}



/* Entry: 1066baf2c; end: 1066baf33; -[SCLensExplorerDelayingImageDataStore lensExplorerImageForURL:type:preferredSize:] */

void FUN_1066baf2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c093010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lensExplorerImageForURL_type_pre_112602610);
  return;
}



/* Entry: 1066baf34; end: 1066bb06b; -[SCLensExplorerDelayingImageDataStore _cancelAllScheduledFetches] */

void FUN_1066baf34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 auStack_2c0 [8];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_3 + 0x20);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = *(long *)(param_3 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c069d00(*(undefined8 *)(lStack_108 + lVar11 * 8));
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x18));
  lVar2 = param_3 + 0x20;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_3 + 0x20);
  __Unwind_Resume();
  puVar9 = &uStack_230;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _os_unfair_lock_lock(lVar2 + 0x20);
  uVar12 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  _objc_retain(puVar5);
  puVar3 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar1 = *plStack_220;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_220 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        uVar4 = *(undefined8 *)(lVar2 + 0x18);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c069d00();
        _objc_release(uVar4);
        func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x18));
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar3 = (undefined1 *)puVar5;
      puVar9 = &uStack_230;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar5);
  _os_unfair_lock_unlock(lVar2 + 0x20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar2 + 0x20);
  __Unwind_Resume();
  _objc_retain(puVar9);
  puVar6 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_2a8,puVar5);
  puVar7 = PTR_PTR_1126ae888;
  _objc_alloc(PTR_PTR_1126ae888);
  uVar4 = *(undefined8 *)((long)puVar5 + 0x10);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_2c0,auStack_2a8);
  _objc_retain(puVar9);
  uStack_2b8 = uVar12;
  uStack_2b0 = param_2;
  _objc_retain(puVar6);
  func_0x00010c0522e0(uVar4,puVar7);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _os_unfair_lock_lock((undefined1 *)((long)puVar5 + 0x20));
  uVar12 = *(undefined8 *)((long)puVar5 + 0x18);
  puVar3 = (undefined1 *)puVar9;
  func_0x00010c2810a0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar12);
  _objc_release(puVar3);
  puVar8 = puVar6;
  func_0x00010bfbc3e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock((undefined1 *)((long)puVar5 + 0x20));
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_2c0);
  _objc_destroyWeak(auStack_2a8);
  _objc_release(puVar6);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1066bb06c; end: 1066bb1db; -[SCLensExplorerDelayingImageDataStore _cancelScheduledFetchesForKeys:] */

void FUN_1066bb06c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_3 + 0x20);
  uVar9 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_5);
        }
        uVar2 = *(undefined8 *)(param_3 + 0x18);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c069d00();
        _objc_release(uVar2);
        func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x18));
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_5;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_5);
  _os_unfair_lock_unlock(param_3 + 0x20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_3 + 0x20);
  __Unwind_Resume();
  _objc_retain(puVar7);
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_198,param_5);
  puVar4 = PTR_PTR_1126ae888;
  _objc_alloc(PTR_PTR_1126ae888);
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_1b0,auStack_198);
  _objc_retain(puVar7);
  uStack_1a8 = uVar9;
  uStack_1a0 = param_2;
  _objc_retain(puVar3);
  func_0x00010c0522e0(uVar2,puVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _os_unfair_lock_lock(param_5 + 0x20);
  uVar9 = *(undefined8 *)(param_5 + 0x18);
  puVar5 = (undefined1 *)puVar7;
  func_0x00010c2810a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar9);
  _objc_release(puVar5);
  puVar6 = puVar3;
  func_0x00010bfbc3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_5 + 0x20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar3);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066bb1dc; end: 1066bb3bf; -[SCLensExplorerDelayingImageDataStore _delayedAnimationForLensItem:preferredSize:] */

void FUN_1066bb1dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_78,param_3);
  puVar2 = PTR_PTR_1126ae888;
  _objc_alloc(PTR_PTR_1126ae888);
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_retain(param_5);
  uStack_88 = param_1;
  uStack_80 = param_2;
  _objc_retain(puVar1);
  func_0x00010c0522e0(uVar5,puVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _os_unfair_lock_lock(param_3 + 0x20);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar5 = param_5;
  func_0x00010c2810a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(uVar5);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_3 + 0x20);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066bb3c0; end: 1066bb4cf;  */

void FUN_1066bb3c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c092aa0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),uVar2,
                        param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1066bb4d0;
    puStack_40 = &UNK_110934278;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x00010c297260(uVar2,param_2,&puStack_58,0);
    _os_unfair_lock_lock(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2810a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,0,uVar3);
    _objc_release(uVar3);
    _os_unfair_lock_unlock(lVar1 + 0x20);
    _objc_release(uStack_38);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1066bb4d0; end: 1066bb4e3;  */

void FUN_1066bb4d0(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 1066bb4e4; end: 1066bb513; -[SCLensExplorerDelayingImageDataStore .cxx_destruct] */

void FUN_1066bb4e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066bb514; end: 1066bb5cf; -[SCLensExplorerImageBlurringDataStore initWithImageDataStore:imagesCache:operationTracker:] */

undefined8
FUN_1066bb514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c01c6c0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1066bb5d0; end: 1066bb6f3; -[SCLensExplorerImageBlurringDataStore initWithImageDataStore:imagesCache:operationTracker:performer:] */

undefined1 *
FUN_1066bb5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f26b0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1066bb6f4; end: 1066bb6fb; -[SCLensExplorerImageBlurringDataStore lensExplorerAnimationForLensItem:preferredSize:] */

void FUN_1066bb6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c092ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lensExplorerAnimationForLensItem_1126024b8);
  return;
}



/* Entry: 1066bb6fc; end: 1066bb89b; -[SCLensExplorerImageBlurringDataStore lensExplorerImageForURL:type:preferredSize:] */

void FUN_1066bb6fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  if (param_6 == 1) {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar3);
    _objc_initWeak(auStack_68,param_3);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    _objc_copyWeak(auStack_90,auStack_68);
    _objc_retain(param_5);
    _objc_retain(puVar1);
    uStack_78 = 1;
    uStack_88 = param_1;
    uStack_80 = param_2;
    uStack_70 = uVar5;
    func_0x00010c0f7fc0(uVar4);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  else {
    puVar2 = *(undefined **)(param_3 + 8);
    func_0x00010c093000(param_1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066bb89c; end: 1066bba73;  */

void FUN_1066bb89c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010beec820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076b20();
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      puVar5 = PTR_PTR_1126ccf50;
      func_0x00010bfe86e0(PTR_PTR_1126ccf50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar4);
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x28);
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c092fc0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_68,param_1 + 0x38);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(*(undefined8 *)(param_1 + 0x28));
      uStack_60 = *(undefined8 *)(param_1 + 0x50);
      uStack_50 = *(undefined8 *)(param_1 + 0x48);
      uStack_58 = *(undefined8 *)(param_1 + 0x40);
      uStack_48 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(puVar5);
      func_0x00010c297260(uVar4);
      _objc_release(puVar5);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar4);
    }
    _objc_release(puVar5);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1066bba74; end: 1066bbcab;  */

void FUN_1066bba74(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR_PTR_1126ccf50;
    func_0x00010c0da4e0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != (undefined *)0x0) {
      puVar4 = param_3;
      func_0x00010bf3ec40();
      puVar2 = PTR_PTR_1126ccf50;
      func_0x00010bfe6f40();
      if (puVar4 == puVar2) {
        func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
        goto LAB_1066bbb84;
      }
    }
    uVar3 = *(ulong *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010beec820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076b20();
    _objc_release(uVar5);
    if ((uVar3 & 1) != 0) {
      if ((param_2 == 0) || (param_3 != (undefined *)0x0)) {
        uVar5 = *(undefined8 *)(lVar1 + 8);
        func_0x00010c093000(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_70,param_1 + 0x40);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar7);
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(*(undefined8 *)(param_1 + 0x30));
        uStack_60 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x50);
        uStack_58 = *(undefined8 *)(param_1 + 0x60);
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar6);
        func_0x00010c297260(uVar5);
        _objc_release(uVar5);
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_destroyWeak(auStack_70);
      }
      else {
        func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_1066bbb84;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR_PTR_1126ccf50;
    func_0x00010bfe86e0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf43ca0(uVar5);
  _objc_release(puVar4);
LAB_1066bbb84:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1066bbcac; end: 1066bbfa7;  */

void FUN_1066bbcac(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126ccf50;
    func_0x00010c0da4e0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
LAB_1066bbeec:
    func_0x00010bf43ca0(uVar7);
  }
  else {
    if ((param_2 == (undefined *)0x0) || (param_3 != 0)) {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
      goto LAB_1066bbf70;
    }
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010beec820(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076b20();
    _objc_release(uVar7);
    if ((uVar2 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      puVar5 = PTR_PTR_1126ccf50;
      func_0x00010bfe86e0(PTR_PTR_1126ccf50);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1066bbeec;
    }
    dVar8 = SQRT(*(double *)(param_1 + 0x48) * *(double *)(param_1 + 0x48) +
                 *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x50));
    puVar3 = param_2;
    func_0x00010bfe6ac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c14e6a0(dVar8,dVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1e840(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010beec820(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076b20();
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if ((uVar2 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = PTR_PTR_1126ccf50;
      func_0x00010bfe86e0(PTR_PTR_1126ccf50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar7);
    }
    else {
      dVar9 = *(double *)(param_1 + 0x48);
      dVar10 = *(double *)(param_1 + 0x50);
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc1020();
      func_0x00010bfe9260(*(undefined8 *)(param_1 + 0x58),puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf5c8a0((dVar8 - dVar9) * 0.5,(dVar8 - dVar10) * 0.5,dVar9,dVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ccf58;
      _objc_alloc(PTR_PTR_1126ccf58);
      func_0x00010c01c360();
      uVar2 = *(ulong *)(param_1 + 0x28);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010beec820(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c076b20();
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      if ((uVar2 & 1) == 0) {
        puVar6 = PTR_PTR_1126ccf50;
        func_0x00010bfe86e0(PTR_PTR_1126ccf50);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43ca0(uVar7);
        _objc_release(puVar6);
      }
      else {
        func_0x00010bf43d60(uVar7);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
LAB_1066bbf70:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066bbfa8; end: 1066bbfaf; -[SCLensExplorerImageBlurringDataStore lensExplorerImageForStoryItem:type:preferredSize:] */

void FUN_1066bbfa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c092ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lensExplorerImageForStoryItem_ty_112602608);
  return;
}



/* Entry: 1066bbfb0; end: 1066bbfb7; -[SCLensExplorerImageBlurringDataStore cancelOperationsForKeys:] */

void FUN_1066bbfb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelOperationsForKeys__1125a93d8);
  return;
}



/* Entry: 1066bbfb8; end: 1066bbfbf; -[SCLensExplorerImageBlurringDataStore cancelAllDownloads] */

void FUN_1066bbfb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelAllDownloads_1125a90d8);
  return;
}



/* Entry: 1066bbfc0; end: 1066bc007; -[SCLensExplorerImageBlurringDataStore .cxx_destruct] */

void FUN_1066bbfc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066bc008; end: 1066bc0a3; -[SCLensExplorerImageDecodingDataStore initWithImageDataStore:operationTracker:] */

undefined8
FUN_1066bc008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c01c740(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1066bc0a4; end: 1066bc16f; -[SCLensExplorerImageDecodingDataStore initWithImageDataStore:operationTracker:performer:] */

undefined1 *
FUN_1066bc0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f26b8;
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



/* Entry: 1066bc170; end: 1066bc2a3; -[SCLensExplorerImageDecodingDataStore lensExplorerAnimationForLensItem:preferredSize:] */

void FUN_1066bc170(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(uVar4);
  uVar1 = param_5;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_3 + 8);
  func_0x00010c092aa0(param_1,param_2,uVar3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1066bc2a4;
  puStack_80 = &UNK_110934358;
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  uStack_78 = param_5;
  uStack_70 = uVar4;
  uStack_68 = uVar2;
  uStack_60 = param_1;
  uStack_58 = param_2;
  _objc_retain(param_5);
  uVar1 = uVar3;
  func_0x00010c0b8640(uVar3,param_4,&puStack_98,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066bc2a4; end: 1066bc5fb;  */

void FUN_1066bc2a4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfe9920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar3 = *(undefined **)(param_1 + 0x20);
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe8fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (puVar2 == puVar5) {
    uVar6 = *(ulong *)(param_1 + 0x28);
    func_0x00010c076b20();
    puVar1 = PTR_PTR_1126af5d0;
    if ((uVar6 & 1) == 0) {
      puVar2 = PTR_PTR_1126ccf50;
      func_0x00010bfe86e0(PTR_PTR_1126ccf50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_2;
      func_0x00010bfe9920(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      uVar6 = *(ulong *)(param_1 + 0x28);
      func_0x00010c076b20();
      puVar1 = PTR_PTR_1126af5d0;
      if ((uVar6 & 1) == 0) {
        puVar4 = PTR_PTR_1126ccf50;
        func_0x00010bfe86e0(PTR_PTR_1126ccf50);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = PTR_PTR_1126ccf60;
        _objc_alloc(PTR_PTR_1126ccf60);
        puVar4 = param_2;
        func_0x00010bf039a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff2ec0(puVar5);
        func_0x00010c2619e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066bc5fc; end: 1066bc69f; -[SCLensExplorerImageDecodingDataStore lensExplorerImageForURL:type:preferredSize:] */

void FUN_1066bc5fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_5);
  func_0x00010c093000(param_1,param_2,uVar1,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf87e0(param_1,param_2,param_3,param_4,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1066bc6a0; end: 1066bc75f; -[SCLensExplorerImageDecodingDataStore lensExplorerImageForStoryItem:type:preferredSize:] */

void FUN_1066bc6a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_5);
  func_0x00010c092fe0(param_1,param_2,uVar2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c1121a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bdf87e0(param_1,param_2,param_3,param_4,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1066bc760; end: 1066bc767; -[SCLensExplorerImageDecodingDataStore cancelOperationsForKeys:] */

void FUN_1066bc760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelOperationsForKeys__1125a93d8);
  return;
}



/* Entry: 1066bc768; end: 1066bc76f; -[SCLensExplorerImageDecodingDataStore cancelAllDownloads] */

void FUN_1066bc768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelAllDownloads_1125a90d8);
  return;
}



/* Entry: 1066bc770; end: 1066bc847; -[SCLensExplorerImageDecodingDataStore _decodeImage:imageUrl:size:] */

void FUN_1066bc770(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(uVar2);
  _objc_retain(param_5);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1066bc848;
  puStack_68 = &UNK_110934388;
  uVar1 = param_5;
  uStack_60 = uVar2;
  uStack_58 = param_6;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x00010c0b8640(param_5,param_4,&puStack_80,*(undefined8 *)(param_3 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066bc848; end: 1066bca37;  */

void FUN_1066bc848(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if ((param_3 == (undefined *)0x0) ||
     (puVar1 = param_3, func_0x00010c247520(), puVar1 != (undefined *)0x2)) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x20);
    func_0x00010c076b20();
    puVar1 = PTR_PTR_1126af5d0;
    if ((uVar2 & 1) == 0) {
      puVar5 = PTR_PTR_1126ccf50;
      func_0x00010bfe86e0(PTR_PTR_1126ccf50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_3;
      func_0x00010bfe6ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010bfe6ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      puVar5 = puVar1;
      func_0x00010bf673c0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),param_1,
                          puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar1);
      uVar2 = *(ulong *)(param_2 + 0x20);
      func_0x00010c076b20();
      puVar1 = PTR_PTR_1126af5d0;
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR_PTR_1126ccf50;
        func_0x00010bfe86e0(PTR_PTR_1126ccf50);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = PTR_PTR_1126ccf58;
        _objc_alloc(PTR_PTR_1126ccf58);
        func_0x00010c247520(param_3);
        puVar3 = param_3;
        func_0x00010c0c5220(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01c360(puVar4);
        func_0x00010c2619e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066bca38; end: 1066bca73; -[SCLensExplorerImageDecodingDataStore .cxx_destruct] */

void FUN_1066bca38(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066bca74; end: 1066bcb1f; -[SCLensExplorerImageDownsamplingDataStore initWithImageDataStore:operationTracker:imageScale:] */

undefined8
FUN_1066bca74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c01c720(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 1066bcb20; end: 1066bcc37; -[SCLensExplorerImageDownsamplingDataStore initWithImageDataStore:operationTracker:imageScale:performer:] */

undefined1 *
FUN_1066bcb20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  dVar4 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f26c0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    if (0.0 < param_1) {
      *(double *)((long)puVar1 + 0x20) = param_1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      *(double *)((long)puVar1 + 0x20) = dVar4;
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1066bcc38; end: 1066bcd7b; -[SCLensExplorerImageDownsamplingDataStore lensExplorerAnimationForLensItem:preferredSize:] */

void FUN_1066bcc38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(uVar3);
  uVar5 = param_5;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 8);
  func_0x00010c092aa0(param_1,param_2,uVar2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1066bcd7c;
  puStack_98 = &UNK_1109343d8;
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uStack_90 = param_5;
  uStack_88 = uVar3;
  uStack_80 = uVar1;
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = uVar5;
  _objc_retain(param_5);
  uVar5 = uVar2;
  func_0x00010c0b8640(uVar2,param_4,&puStack_b0,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_90);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}


