/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aebb1b0; end: 10aebb413; -[SCUnlockableDataStore _addUnlockedLens:] */

void FUN_10aebb1b0(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **unaff_x23;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    _objc_initWeak(auStack_68,param_1);
    puVar2 = PTR_PTR_1126ae790;
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10aebb414;
    puStack_80 = &UNK_110841fb0;
    unaff_x23 = &puStack_98;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    puStack_78 = param_3;
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bed1940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0d3c80();
    _objc_release(lVar1);
    if (lVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = param_3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea8c80(param_1);
    }
    else {
      _objc_retain(param_3);
      lVar1 = lVar3;
      func_0x00010bfece40();
      puVar2 = param_3;
      if (lVar1 == 0x7fffffffffffffff) {
        func_0x00010c066b00(lVar3);
        lVar1 = lVar3;
        func_0x00010bf51e00(lVar3);
        func_0x00010bea8c80(param_1);
        _objc_release(lVar1);
      }
    }
    _objc_release(puVar2);
    _objc_release(lVar3);
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x23 + 5);
    _objc_destroyWeak(auStack_68);
    __Unwind_Resume();
    puVar2 = param_3 + 0x28;
    _objc_loadWeakRetained();
    if (puVar2 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(puVar2 + 0x30);
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c094540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c180(uVar5);
      _objc_release(uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10aebb414; end: 10aebb4e7;  */

void FUN_10aebb414(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c180(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aebb4e8; end: 10aebb57b; -[SCUnlockableDataStore removeUnlockedLens:] */

void FUN_10aebb4e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aebb57c;
  puStack_50 = &UNK_110844b80;
  uStack_38 = 0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10aebb57c; end: 10aebb5b7;  */

void FUN_10aebb57c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8dc60(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aebb5b8; end: 10aebb79f; -[SCUnlockableDataStore _removeUnlockedLensWithId:] */

void FUN_10aebb5b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar2 = PTR_PTR_1126ae790;
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bed1940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0d3c80();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      _objc_retain(param_3);
      lVar1 = lVar3;
      func_0x00010bfece40();
      if (lVar1 != 0x7fffffffffffffff) {
        func_0x00010c12d3c0(lVar3);
        lVar1 = lVar3;
        func_0x00010bf51e00(lVar3);
        func_0x00010bea8c80(param_1);
        _objc_release(lVar1);
      }
      _objc_release(param_3);
    }
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10aebb7a0; end: 10aebb823;  */

void FUN_10aebb7a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bef7f80(*(undefined8 *)(lVar1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aebb824; end: 10aebb8cf; -[SCUnlockableDataStore unlockedLensesFuture] */

void FUN_10aebb824(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aebb8d0;
  puStack_50 = &UNK_110844b80;
  uStack_38 = 0;
  puStack_48 = puVar1;
  lStack_40 = param_1;
  _objc_retain();
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aebb8d0; end: 10aebb90b;  */

void FUN_10aebb8d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bed1940(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aebb90c; end: 10aebb9db; -[SCUnlockableDataStore unlockedLenses] */

void FUN_10aebb90c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aebac24;
  uStack_30 = 0x10aebac34;
  uStack_28 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10aebb9dc;
  puStack_70 = &UNK_11084a858;
  uStack_58 = 0;
  lStack_68 = param_1;
  puStack_48 = puStack_60;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_88);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aebb9dc; end: 10aebba1b;  */

void FUN_10aebb9dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bed1940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aebba1c; end: 10aebba53; -[SCUnlockableDataStore _unlockedLenses] */

void FUN_10aebba1c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde0460();
  func_0x00010be16280(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aebba54; end: 10aebbc17; -[SCUnlockableDataStore _clearExpiredLens] */

void FUN_10aebba54(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 8);
  lStack_138 = param_1;
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      param_1 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        lVar8 = *(long *)(lStack_128 + param_1 * 8);
        lVar3 = lVar8;
        func_0x00010bf9c720();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf433a0();
        if (lVar5 == 1) {
          _objc_release(puVar4);
          _objc_release(lVar3);
LAB_10aebbb7c:
          func_0x00010befa120(puVar1);
        }
        else {
          func_0x00010c27dd80();
          _objc_release(puVar4);
          _objc_release(lVar3);
          if (lVar8 == 0xf) goto LAB_10aebbb7c;
        }
        param_1 = param_1 + 1;
      } while (lVar2 != param_1);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(lStack_138 + 8);
  *(undefined **)(lStack_138 + 8) = puVar4;
  _objc_release(uVar6);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10aebbc18;
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x3032000000;
  pcStack_178 = FUN_10aebac24;
  uStack_170 = 0x10aebac34;
  uStack_168 = 0;
  puStack_160 = puVar1;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c0f8240(*(undefined8 *)(puVar4 + 0x58));
  uVar6 = puStack_188[5];
  _objc_retain(uVar6);
  __Block_object_dispose(&uStack_190,8);
  _objc_release(uStack_168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10aebbc18; end: 10aebbce7; -[SCUnlockableDataStore lensIdToChecksumMap] */

void FUN_10aebbc18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aebac24;
  uStack_30 = 0x10aebac34;
  uStack_28 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10aebbce8;
  puStack_70 = &UNK_11084a858;
  uStack_58 = 0;
  lStack_68 = param_1;
  puStack_48 = puStack_60;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_88);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aebbce8; end: 10aebbd2b;  */

void FUN_10aebbce8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0945e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aebbd2c; end: 10aebbf6f; -[SCUnlockableDataStore _filterOutLenses] */

void FUN_10aebbd2c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bfaeba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010bfaeba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if ((uVar3 != 0) || (uVar3 = uVar2, func_0x00010bf529e0(), uVar3 != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar11 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar11);
    if (puVar11 != (undefined *)0x0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar5 = puVar11;
      func_0x00010bf52a60(puVar11,param_2,&uStack_130,auStack_f0,0x10);
      if (puVar5 != (undefined *)0x0) {
        lVar10 = *plStack_120;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(puVar11);
            }
            uVar12 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
            uVar8 = uVar12;
            func_0x00010bf43020(uVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar8;
            func_0x00010bf0ea80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar6);
            if (((ulong)puVar7 & 1) == 0) {
              uVar3 = uVar1;
              func_0x00010bf4b900(uVar1,param_2,uVar6);
              if ((uVar3 & 1) == 0) goto LAB_10aebbe6c;
            }
            else {
LAB_10aebbe6c:
              uVar8 = uVar12;
              func_0x00010c094540(uVar12);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010bf4b900(uVar2,param_2,uVar8);
              _objc_release(uVar8);
              if ((uVar3 & 1) == 0) {
                func_0x00010befa120(puVar4,param_2,uVar12);
              }
            }
            _objc_release(uVar6);
            puVar9 = puVar9 + 1;
          } while (puVar5 != puVar9);
          puVar5 = puVar11;
          func_0x00010bf52a60(puVar11,param_2,&uStack_130,auStack_f0,0x10);
        } while (puVar5 != (undefined *)0x0);
      }
      puVar5 = puVar11;
      func_0x00010bf529e0();
      puVar9 = puVar4;
      func_0x00010bf529e0();
      if (puVar5 != puVar9) {
        puVar5 = puVar4;
        func_0x00010bf51e00();
        uVar8 = *(undefined8 *)(param_1 + 8);
        *(undefined **)(param_1 + 8) = puVar5;
        _objc_release(uVar8);
      }
    }
    _objc_release(puVar11);
    _objc_release(puVar4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(&PTR____CFConstantStringClassReference_110f7c398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f7c398);
  return;
}



/* Entry: 10aebbf70; end: 10aebbf9f; -[SCUnlockableDataStore unlockLensUpdatedNotificationName] */

void FUN_10aebbf70(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f7c398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f7c398);
  return;
}



/* Entry: 10aebbfa0; end: 10aebbfcf; -[SCUnlockableDataStore unlockLensUpdatedNotificationKey] */

void FUN_10aebbfa0(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f7c3b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f7c3b8);
  return;
}



/* Entry: 10aebbfd0; end: 10aebc063; -[SCUnlockableDataStore _didFetchData:] */

void FUN_10aebbfd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aebc064;
  puStack_50 = &UNK_110844b80;
  uStack_38 = 0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10aebc064; end: 10aebc06f;  */

void FUN_10aebc064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c115610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_processUnlockedLensesResponse__112622fa0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10aebc070; end: 10aebc10b; -[SCUnlockableDataStore .cxx_destruct] */

void FUN_10aebc070(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10aebc10c; end: 10aebc153; -[SCUnlockableDataStoreFilterFactory .cxx_destruct] */

void FUN_10aebc10c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aebc154; end: 10aebc1bb; -[SCUnlockableDataStoreMemento saveUsingArchiveUtils:] */

void FUN_10aebc154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be70ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14aa80(param_3,param_2,param_1,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aebc1bc; end: 10aebc317; -[SCUnlockableLensMetadataStoreAdapter initWithUnlockableDataStore:announcerPerformer:] */

undefined1 *
FUN_10aebc1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112701768;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126de8b8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ddc80;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aebc318; end: 10aebc33f; -[SCUnlockableLensMetadataStoreAdapter lensMemoryStorage] */

void FUN_10aebc318(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aebc340; end: 10aebc347; -[SCUnlockableLensMetadataStoreAdapter addListener:] */

void FUN_10aebc340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10aebc348; end: 10aebc34f; -[SCUnlockableLensMetadataStoreAdapter removeListener:] */

void FUN_10aebc348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10aebc350; end: 10aebc42b; -[SCUnlockableLensMetadataStoreAdapter lenses] */

void FUN_10aebc350(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aebc42c;
  uStack_30 = 0x10aebc43c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10aebc444;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_80);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if ((undefined *)puStack_48[5] != (undefined *)0x0) {
    puVar1 = (undefined *)puStack_48[5];
  }
  _objc_retain(puVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aebc42c; end: 10aebc443;  */

void FUN_10aebc42c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aebc444; end: 10aebc477;  */

void FUN_10aebc444(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aebc478; end: 10aebc483; -[SCUnlockableLensMetadataStoreAdapter lensesToPrefetch] */

undefined * FUN_10aebc478(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10aebc484; end: 10aebc48b; -[SCUnlockableLensMetadataStoreAdapter warmUp] */

void FUN_10aebc484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c284eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateDataIfNecessary_11267edd0);
  return;
}



/* Entry: 10aebc48c; end: 10aebc5bf; -[SCUnlockableLensMetadataStoreAdapter startUpdatingWithMode:] */

void FUN_10aebc48c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c280cc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010c284ea0(*(undefined8 *)(param_1 + 8));
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c281740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10aebc5c0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = uVar3;
  _objc_retain();
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 10aebc5c0; end: 10aebc60b;  */

void FUN_10aebc5c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd4c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedabb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateLenses_112594490);
  return;
}



/* Entry: 10aebc60c; end: 10aebc60f; -[SCUnlockableLensMetadataStoreAdapter stopUpdating] */

void FUN_10aebc60c(void)

{
  return;
}



/* Entry: 10aebc610; end: 10aebc693; -[SCUnlockableLensMetadataStoreAdapter applyMetadataProviderSettings:] */

void FUN_10aebc610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de6c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bba0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c115be0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf08460(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aebc694; end: 10aebc723; -[SCUnlockableLensMetadataStoreAdapter synchronize] */

void FUN_10aebc694(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c281740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10aebc724;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_retain();
  func_0x00010c0f8240(uVar2,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aebc724; end: 10aebc76f;  */

void FUN_10aebc724(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd4c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedabb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateLenses_112594490);
  return;
}



/* Entry: 10aebc770; end: 10aebc777; -[SCUnlockableLensMetadataStoreAdapter hasMoreLensesToLoad] */

undefined8 FUN_10aebc770(void)

{
  return 0;
}



/* Entry: 10aebc778; end: 10aebc77f; -[SCUnlockableLensMetadataStoreAdapter loadMoreTriggerDistance] */

undefined8 FUN_10aebc778(void)

{
  return 0;
}



/* Entry: 10aebc780; end: 10aebc873; -[SCUnlockableLensMetadataStoreAdapter applyFilter:] */

void FUN_10aebc780(long param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10aebc814;
  puStack_50 = &UNK_110844b80;
  uStack_38 = 0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10aebc874; end: 10aebc87f; -[SCUnlockableLensMetadataStoreAdapter supportsFilteringForAttribute:] */

bool FUN_10aebc874(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 2;
}



/* Entry: 10aebc880; end: 10aebc9bb; -[SCUnlockableLensMetadataStoreAdapter _unlockedLensesDataStoreDidUpdate:] */

void FUN_10aebc880(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c280ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    ppuVar3 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c281740();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10aebc9bc;
    puStack_68 = &UNK_11084d788;
    uStack_48 = 0;
    lStack_60 = param_1;
    ppuStack_58 = ppuVar1;
    uStack_50 = uVar5;
    _objc_retain();
    _objc_retain(ppuVar1);
    func_0x00010c0f7fc0(uVar6,param_2,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(ppuStack_58);
    _objc_release(uVar5);
    _objc_release(ppuVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10aebc9bc; end: 10aebca4f;  */

void FUN_10aebc9bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c098560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x30);
  func_0x00010c071b60(uVar3,param_2,uVar2);
  if ((uVar3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094f80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bd4c0();
    _objc_release(uVar1);
    func_0x00010bedaba0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aebca50; end: 10aebcb87; -[SCUnlockableLensMetadataStoreAdapter _updateLenses] */

void FUN_10aebca50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = param_1;
  func_0x00010c094f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf003c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x38);
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    _objc_retain(lVar6);
  }
  else {
    func_0x00010bfae0a0(lVar4,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
  }
  uVar1 = param_1;
  func_0x00010be165a0(param_1,param_2,lVar6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c071ae0();
  if ((uVar5 & 1) == 0) {
    _objc_retain(lVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar6;
    _objc_release(uVar3);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10aebcb88;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    func_0x00010be71580(param_1,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(uVar1);
  _objc_release(lVar6);
  _objc_release(uVar2);
  return;
}



/* Entry: 10aebcb88; end: 10aebcba3;  */

void FUN_10aebcb88(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_didUpdateLenses_lensMetadataStor_1125bd278,puVar1);
  return;
}



/* Entry: 10aebcba4; end: 10aebccbb; -[SCUnlockableLensMetadataStoreAdapter _filteredLensesWithStudioPreviewFromFilteredLenses:allLenses:] */

void FUN_10aebcba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8f8d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aebccc4;
  puStack_50 = &UNK_110857a38;
  puStack_48 = puVar2;
  _objc_retain();
  uVar3 = param_4;
  func_0x00010bfaea20(param_4,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = param_3;
  func_0x00010bf09f80(param_3,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puStack_48);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10aebccbc; end: 10aebccc3;  */

void FUN_10aebccbc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10aebccc4; end: 10aebcd43;  */

uint FUN_10aebccc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c080040();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar3);
    uVar2 = (uint)uVar3 ^ 1;
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10aebcd44; end: 10aebcd5b; -[SCUnlockableLensMetadataStoreAdapter _performAnnouncementBlock:] */

void FUN_10aebcd44(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x18),PTR_s_perform__11261ba10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aebcd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 10aebcd5c; end: 10aebcd8b; -[SCUnlockableLensMetadataStoreAdapter setLensMemoryStorage:] */

void FUN_10aebcd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aebcd8c; end: 10aebce03; -[SCUnlockableLensMetadataStoreAdapter .cxx_destruct] */

void FUN_10aebcd8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10aebce04; end: 10aebcfab; -[SCLensMetadataDiskStore initWithDocObjectContext:lensMetadataTransformer:lensMetadataModelTransformer:centralizedDataStoreConfigProvider:timeProvider:includeExpired:resetExpirationDate:performer:] */

undefined1 *
FUN_10aebce04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112701770;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_8;
    *(undefined1 *)((long)puVar1 + 0x39) = param_9;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aebcfac; end: 10aebd10f; -[SCLensMetadataDiskStore cachedLensMetadataForLensId:namespaces:mainNamespace:] */

void FUN_10aebcfac(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4b420(param_1,param_2,unaff_x23,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(unaff_x23);
    unaff_x24 = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume(lVar1);
    func_0x00010be4b420();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aebd110; end: 10aebd12b; -[SCLensMetadataDiskStore cachedLensMetadataArrayForLensIds:namespaces:mainNamespace:] */

void FUN_10aebd110(void)

{
  func_0x00010be4b420();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aebd12c; end: 10aebd21b; -[SCLensMetadataDiskStore addLensMetadata:namespaceName:] */

void FUN_10aebd12c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  lVar5 = param_4;
  func_0x00010bef9820(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  lVar3 = lVar2;
  __Unwind_Resume();
  pcStack_48 = FUN_10aebd21c;
  puStack_70 = puVar1;
  lStack_68 = lVar2;
  lStack_60 = param_4;
  lStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010c08fa60();
  if ((lVar2 != 0) && (puVar1 = puVar4, func_0x00010bf529e0(), puVar1 != (undefined *)0x0)) {
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10aebd320;
    puStack_90 = &UNK_110896e48;
    _objc_retain(puVar4);
    puStack_88 = puVar4;
    lStack_80 = lVar3;
    _objc_retain(lVar5);
    lStack_78 = lVar5;
    func_0x00010c0f7fc0(uVar6,param_2,&puStack_a8);
    _objc_release(lStack_78);
    _objc_release(puStack_88);
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 10aebd21c; end: 10aebd31f; -[SCLensMetadataDiskStore addLensMetadataArray:namespaceName:] */

void FUN_10aebd21c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10aebd320;
    puStack_50 = &UNK_110896e48;
    _objc_retain(param_3);
    lStack_48 = param_3;
    lStack_40 = param_1;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aebd320; end: 10aebd4b3;  */

void FUN_10aebd320(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10aebd4b4;
  puStack_60 = &UNK_110c8f8f8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf43280(uVar2,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be0c5c0(uVar4,param_2,*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10aebd4dc;
  puStack_98 = &UNK_1108b27f8;
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = uVar2;
  uStack_80 = uVar4;
  _objc_retain(uVar5);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10aebd704;
  puStack_c0 = &UNK_110896ce8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar5;
  _objc_retain(uVar4);
  uStack_b8 = uVar4;
  func_0x00010c0f8500(uVar3,param_2,&puStack_b0,0,&puStack_d8);
  _objc_release(uVar3);
  _objc_release(uStack_b8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uVar2);
  return;
}



/* Entry: 10aebd4b4; end: 10aebd4db;  */

void FUN_10aebd4b4(long param_1,undefined8 param_2)

{
  func_0x00010c095160(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aebd4dc; end: 10aebd703;  */

void FUN_10aebd4dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar9 = *(undefined8 *)(lVar8 * 8);
      puVar3 = PTR_PTR_1126de8c0;
      _objc_alloc(PTR_PTR_1126de8c0);
      uVar4 = uVar9;
      func_0x00010c094540(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf38a80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c024340(puVar3);
      _objc_release(uVar9);
      _objc_release(uVar4);
      puVar5 = puVar3;
      FUN_10aedc838(puVar3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar3);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  uVar4 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar7);
  _objc_release(param_2);
  __Unwind_Resume(uVar4);
  return;
}



/* Entry: 10aebd704; end: 10aebd707;  */

void FUN_10aebd704(void)

{
  return;
}



/* Entry: 10aebd708; end: 10aebd763; -[SCLensMetadataDiskStore cleanupExpiredItems] */

void FUN_10aebd708(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10aebd764;
  puStack_20 = &UNK_11087bb00;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 10aebd764; end: 10aebdabf;  */

void FUN_10aebd764(double param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
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
  long lStack_c8;
  long lStack_c0;
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
  
  func_0x00010beec800(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30));
  lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126de8c0);
  if (lVar2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar2);
  }
  puVar3 = &uStack_111;
  FUN_10aedbd3c();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  ppuStack_188 = &PTR_DAT_110864b98;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_108 = 6;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110864b38;
  pppuStack_d0 = &ppuStack_188;
  lStack_c0 = 0;
  lStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar4 = &uStack_a0;
  lStack_158 = (long)param_1;
  puStack_d8 = puVar3;
  func_0x000107c310cc(puVar4,&ppuStack_110,&lStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_1a0 != 0) {
    lStack_198 = lStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110864b38;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110864b98;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar2);
  puVar4 = puVar5;
  func_0x00010bf529e0();
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar5);
    func_0x00010c0f8500(uVar6);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar5);
  return;
}



/* Entry: 10aebdac0; end: 10aebdc3f;  */

void FUN_10aebdac0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
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
      puVar3 = PTR_PTR_1126de8c8;
      FUN_10aedc7c4(PTR_PTR_1126de8c8,*(undefined8 *)(lVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  uVar4 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(param_2);
  __Unwind_Resume(uVar4);
  return;
}



/* Entry: 10aebdc40; end: 10aebdc43;  */

void FUN_10aebdc40(void)

{
  return;
}



/* Entry: 10aebdc44; end: 10aebe607; -[SCLensMetadataDiskStore _lensMetadataForLensIds:namespaceNames:] */

void FUN_10aebdc44(double param_1,long param_2,undefined8 param_3,undefined *param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined ****ppppuVar6;
  undefined ****ppppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined4 uStack_3c4;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined **ppuStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_390;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 uStack_331;
  undefined ***pppuStack_330;
  undefined4 uStack_328;
  undefined2 uStack_318;
  byte bStack_316;
  byte bStack_315;
  undefined1 *puStack_2f8;
  undefined ***pppuStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined **appuStack_2c0 [3];
  undefined1 uStack_2a1;
  undefined ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined **appuStack_258 [3];
  long *plStack_240;
  long *plStack_238;
  undefined4 auStack_230 [7];
  undefined1 uStack_211;
  undefined ***pppuStack_210;
  undefined ***pppuStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined ***apppuStack_1d0 [3];
  byte bStack_1b7;
  byte bStack_1b6;
  byte bStack_1b5;
  undefined **appuStack_188 [3];
  long *plStack_170;
  long *plStack_168;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  undefined1 uStack_148;
  byte bStack_147;
  byte bStack_146;
  byte bStack_145;
  undefined ****ppppuStack_128;
  undefined ***pppuStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  short sStack_d8;
  byte bStack_d6;
  byte bStack_d5;
  undefined ***pppuStack_b8;
  undefined ****ppppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010bf529e0();
  puVar9 = PTR____NSArray0__struct_11034ab48;
  if ((puVar1 != (undefined *)0x0) &&
     (lVar2 = param_5, func_0x00010bf529e0(), puVar9 = PTR____NSArray0__struct_11034ab48, lVar2 != 0
     )) {
    if (*(char *)(param_2 + 0x38) == '\x01') {
      lVar2 = *(long *)(param_2 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126de8c0);
      if (lVar2 == 0) {
        uStack_270 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_298 = 0;
        pppuStack_2a0 = (undefined ***)0x0;
      }
      else {
        func_0x00010bfa6be0(&pppuStack_2a0,lVar2);
      }
      pppuVar3 = appuStack_2c0;
      FUN_10aedbbc4(pppuVar3);
      FUN_10aebe608(&pppuStack_330,param_4);
      func_0x000107c281a0(&ppuStack_160,0xc,pppuVar3,&pppuStack_330);
      plVar4 = &lStack_3c0;
      FUN_10aedbe84(plVar4);
      FUN_10aebe608(&ppuStack_3a8,param_5);
      func_0x000107c281a0(apppuStack_1d0,0xc,plVar4,&ppuStack_3a8);
      bStack_d5 = bStack_145 & bStack_1b5;
      bStack_d6 = (bStack_146 | bStack_1b6) & 1;
      uStack_e8 = 4;
      sStack_d8 = ((bStack_147 | bStack_1b7) & 1) << 8;
      ppuStack_f0 = &PTR_DAT_1108629c8;
      uStack_a0 = 0;
      lStack_a8 = 0;
      plStack_90 = (long *)0x0;
      uStack_98 = 0;
      plStack_88 = (long *)0x0;
      pppuStack_208 = (undefined ***)0x0;
      pppuStack_210 = (undefined ***)0x0;
      uStack_200 = 0;
      auStack_230[0] = 0;
      ppppuVar6 = &pppuStack_2a0;
      pppuStack_b8 = &ppuStack_160;
      ppppuStack_b0 = apppuStack_1d0;
      func_0x000107c310cc(ppppuVar6,&ppuStack_f0,&pppuStack_210,auStack_230);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar6;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar6);
      if (pppuStack_210 != (undefined ***)0x0) {
        pppuStack_208 = pppuStack_210;
        __ZdlPv();
      }
      plVar4 = plStack_88;
      ppuStack_f0 = &PTR_DAT_1108629c8;
      plStack_88 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = plStack_90;
      plStack_90 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (lStack_a8 != 0) {
        __ZdlPv();
      }
      plVar4 = plStack_168;
      apppuStack_1d0[0] = (undefined ***)&PTR_DAT_110862700;
      plStack_168 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = plStack_170;
      plStack_170 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      pppuStack_210 = appuStack_188;
      func_0x000107c27dd4(&pppuStack_210);
      pppuStack_210 = &ppuStack_3a8;
      func_0x000107c27dd4(&pppuStack_210);
      plVar4 = plStack_f8;
      ppuStack_160 = &PTR_DAT_110862700;
      plStack_f8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = plStack_100;
      plStack_100 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      apppuStack_1d0[0] = &ppuStack_118;
      func_0x000107c27dd4(apppuStack_1d0);
      apppuStack_1d0[0] = (undefined ***)&pppuStack_330;
      func_0x000107c27dd4(apppuStack_1d0);
      func_0x000107c27da8(&uStack_278);
      _objc_release(uStack_288);
      uVar8 = uStack_290;
    }
    else {
      func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
      lVar2 = *(long *)(param_2 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126de8c0);
      if (lVar2 == 0) {
        uStack_1e0 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        pppuStack_208 = (undefined ***)0x0;
        pppuStack_210 = (undefined ***)0x0;
      }
      else {
        func_0x00010bfa6be0(&pppuStack_210,lVar2);
      }
      puVar5 = &uStack_211;
      FUN_10aedbbc4(puVar5);
      FUN_10aebe608(auStack_230,param_4);
      func_0x000107c281a0(apppuStack_1d0,0xc,puVar5,auStack_230);
      puVar5 = &uStack_2a1;
      FUN_10aedbe84(puVar5);
      FUN_10aebe608(appuStack_2c0,param_5);
      func_0x000107c281a0(&pppuStack_2a0,0xc,puVar5,appuStack_2c0);
      bStack_145 = bStack_1b5 & uStack_288._3_1_;
      bStack_147 = (bStack_1b7 | uStack_288._1_1_) & 1;
      bStack_146 = (bStack_1b6 | uStack_288._2_1_) & 1;
      uStack_158 = 4;
      uStack_148 = 0;
      ppuStack_160 = &PTR_DAT_1108629c8;
      uStack_110 = 0;
      ppuStack_118 = (undefined **)0x0;
      plStack_100 = (long *)0x0;
      uStack_108 = 0;
      plStack_f8 = (long *)0x0;
      puVar5 = &uStack_331;
      ppppuStack_128 = apppuStack_1d0;
      pppuStack_120 = (undefined ***)&pppuStack_2a0;
      FUN_10aedbd3c();
      uStack_3a0 = 0xf;
      uStack_390 = 0x100;
      ppuStack_3a8 = &PTR_DAT_110864b98;
      uStack_368 = 0;
      uStack_370 = 0;
      lStack_358 = 0;
      lStack_360 = 0;
      plStack_348 = (long *)0x0;
      uStack_350 = 0;
      plStack_340 = (long *)0x0;
      bStack_316 = puVar5[0x1a];
      bStack_315 = puVar5[0x1b];
      uStack_328 = 9;
      uStack_318 = 0x100;
      pppuStack_330 = (undefined ***)&PTR_DAT_110864b38;
      pppuStack_2f0 = &ppuStack_3a8;
      plStack_2c8 = (long *)0x0;
      lStack_2e0 = 0;
      lStack_2e8 = 0;
      plStack_2d0 = (long *)0x0;
      uStack_2d8 = 0;
      bStack_d6 = bStack_146 | bStack_316;
      bStack_d5 = bStack_145 & bStack_315;
      uStack_e8 = 4;
      sStack_d8 = 0x100;
      ppuStack_f0 = &PTR_DAT_1108629c8;
      pppuStack_b8 = &ppuStack_160;
      ppppuStack_b0 = &pppuStack_330;
      uStack_a0 = 0;
      lStack_a8 = 0;
      plStack_90 = (long *)0x0;
      uStack_98 = 0;
      plStack_88 = (long *)0x0;
      lStack_3c0 = 0;
      lStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3c4 = 0;
      ppppuVar6 = &pppuStack_210;
      lStack_378 = (long)param_1;
      puStack_2f8 = puVar5;
      func_0x000107c310cc(ppppuVar6,&ppuStack_f0,&lStack_3c0,&uStack_3c4);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar6;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar6);
      if (lStack_3c0 != 0) {
        lStack_3b8 = lStack_3c0;
        __ZdlPv();
      }
      plVar4 = plStack_88;
      ppuStack_f0 = &PTR_DAT_1108629c8;
      plStack_88 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = plStack_90;
      plStack_90 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (lStack_a8 != 0) {
        __ZdlPv();
      }
      plVar4 = plStack_2c8;
      pppuStack_330 = (undefined ***)&PTR_DAT_110864b38;
      plStack_2c8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = plStack_2d0;
      plStack_2d0 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (lStack_2e8 != 0) {
        lStack_2e0 = lStack_2e8;
        __ZdlPv();
      }
      plVar4 = plStack_340;
      ppuStack_3a8 = &PTR_DAT_110864b98;
      plStack_340 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = plStack_348;
      plStack_348 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (lStack_360 != 0) {
        lStack_358 = lStack_360;
        __ZdlPv();
      }
      plVar4 = plStack_f8;
      ppuStack_160 = &PTR_DAT_1108629c8;
      plStack_f8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = plStack_100;
      plStack_100 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (ppuStack_118 != (undefined **)0x0) {
        __ZdlPv();
      }
      plVar4 = plStack_238;
      pppuStack_2a0 = (undefined ***)&PTR_DAT_110862700;
      plStack_238 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = plStack_240;
      plStack_240 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      pppuStack_330 = appuStack_258;
      func_0x000107c27dd4(&pppuStack_330);
      pppuStack_330 = appuStack_2c0;
      func_0x000107c27dd4(&pppuStack_330);
      plVar4 = plStack_168;
      apppuStack_1d0[0] = (undefined ***)&PTR_DAT_110862700;
      plStack_168 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = plStack_170;
      plStack_170 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      pppuStack_2a0 = appuStack_188;
      func_0x000107c27dd4(&pppuStack_2a0);
      pppuStack_2a0 = (undefined ***)auStack_230;
      func_0x000107c27dd4(&pppuStack_2a0);
      func_0x000107c27da8(&uStack_1e8);
      _objc_release(uStack_1f8);
      uVar8 = uStack_200;
    }
    _objc_release(uVar8);
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(ppppuVar7);
    func_0x00010bf71fe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = ppppuVar7;
    func_0x00010c124d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_retain(ppppuVar6);
    puVar9 = param_4;
    func_0x00010bf43280(param_4);
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_2 + 0x39) == '\x01') {
      func_0x00010be92b40(param_2);
    }
    _objc_release(ppppuVar6);
    _objc_release(ppppuVar6);
    _objc_release(ppppuVar7);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10aebe608; end: 10aebe76b;  */

void FUN_10aebe608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x00010bf529e0();
  func_0x000107c281a4(param_1);
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar2 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_2);
      }
      uVar5 = *(undefined8 *)((long)puVar6 * 8);
      _objc_retain(uVar5);
      puVar1 = auStack_e0;
      auStack_e0[0] = uVar5;
      func_0x000107c281a8(param_1);
      _objc_release(auStack_e0[0]);
      puVar6 = (undefined8 *)((long)puVar6 + 1);
    } while (puVar2 != puVar6);
    puVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar1 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  _objc_retain(puVar1);
  lVar3 = param_2[4];
  func_0x00010be4b460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = lVar3;
    func_0x00010c094540(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aebe76c; end: 10aebe83f;  */

void FUN_10aebe76c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be4b460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = lVar1;
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_2);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10aebe840; end: 10aebe863;  */

void FUN_10aebe840(long param_1,undefined8 param_2)

{
  func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aebe864; end: 10aebe927; -[SCLensMetadataDiskStore _resetExpirationDateForLensMetadataModels:] */

void FUN_10aebe864(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10aebe928;
    puStack_48 = &UNK_110883780;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10aebe928; end: 10aebea2b;  */

void FUN_10aebe928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10aebea2c;
  puStack_58 = &UNK_110897108;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_98 = puVar2;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10aebec2c;
  puStack_80 = &UNK_110896ce8;
  uStack_50 = uVar4;
  _objc_retain(uVar1);
  uStack_78 = uVar1;
  func_0x00010c0f8500(uVar3,param_2,&puStack_70,0,&puStack_98);
  _objc_release(uVar3);
  _objc_release(uStack_78);
  _objc_release(uStack_50);
  return;
}



/* Entry: 10aebea2c; end: 10aebec2b;  */

void FUN_10aebea2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0d5440(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0c5c0(uVar8);
      _objc_release(uVar7);
      puVar3 = PTR_PTR_1126de2f0;
      func_0x00010bee5300(PTR_PTR_1126de2f0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_10aedc838();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  uVar7 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(param_2);
  __Unwind_Resume(uVar7);
  return;
}



/* Entry: 10aebec2c; end: 10aebec2f;  */

void FUN_10aebec2c(void)

{
  return;
}



/* Entry: 10aebec30; end: 10aebecd3; -[SCLensMetadataDiskStore _expirationTimestampForNamespace:] */

long FUN_10aebec30(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0d5260(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf26d60();
  _objc_release(uVar1);
  _objc_release(param_4);
  return (long)param_1 + (long)(int)uVar2;
}



/* Entry: 10aebecd4; end: 10aebed77; +[SCLensMetadataDiskStore _resetLogStringForLensMetadata:successful:] */

void FUN_10aebecd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126de2f0;
  func_0x00010be4b140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f2f7f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aebed78; end: 10aebee1b; +[SCLensMetadataDiskStore _updateLogStringForLensMetadata:successful:] */

void FUN_10aebed78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126de2f0;
  func_0x00010be4b140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f2f818);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aebee1c; end: 10aebeebf; +[SCLensMetadataDiskStore _saveLogStringForLensMetadata:successful:] */

void FUN_10aebee1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126de2f0;
  func_0x00010be4b120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f2f838);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aebeec0; end: 10aebef2f; +[SCLensMetadataDiskStore _lensIdsStringFromLensMetadata:] */

void FUN_10aebeec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b8620(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8f988,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aebef30; end: 10aebef4f;  */

void FUN_10aebef30(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aebef50; end: 10aebefbf; +[SCLensMetadataDiskStore _lensIdsStringFromLensMetadataModel:] */

void FUN_10aebef50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b8620(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8f9c8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aebefc0; end: 10aebefdf;  */

void FUN_10aebefc0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aebefe0; end: 10aebf04f; +[SCLensMetadataDiskStore _lensIdsAndNamespacesStringFromLensMetadataModel:] */

void FUN_10aebefe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b8620(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8f9e8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aebf050; end: 10aebf123;  */

void FUN_10aebf050(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0d5440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aebf124; end: 10aebf223; +[SCLensMetadataDiskStore _lensMetadataItemModelFromLensMetadata:namespaceName:] */

void FUN_10aebf124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126de8c0;
  _objc_alloc(PTR_PTR_1126de8c0);
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf38a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf9c880(param_3);
  func_0x00010c024340(puVar1,param_2,uVar2,uVar3,uVar4,param_4,param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aebf224; end: 10aebf2ef; -[SCLensMetadataDiskStore _lensMetadataFromLensMetadataItemModel:] */

void FUN_10aebf224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010c094fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d5440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0950c0(uVar3,param_2,uVar1,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10aebf2f0; end: 10aebf42f; +[SCLensMetadataDiskStore _updatedItemDataModel:expirationDate:] */

void FUN_10aebf2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de8c0;
  _objc_alloc(PTR_PTR_1126de8c0);
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf38a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0d5440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c094fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024340(puVar1,param_2,uVar2,uVar3,param_4,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aebf430; end: 10aebf48f; -[SCLensMetadataDiskStore .cxx_destruct] */

void FUN_10aebf430(long param_1)

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



/* Entry: 10aebf490; end: 10aebf577; -[SCMixerFeedDocObjectStore feedDataForGroupId:] */

void FUN_10aebf490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _os_unfair_lock_lock(param_1 + 0x58);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x48);
  func_0x00010c0e00e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aebf578; end: 10aebf613; -[SCMixerFeedDocObjectStore groupDataForGroupId:] */

void FUN_10aebf578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x58);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10aebf614; end: 10aebf673; -[SCMixerFeedDocObjectStore feedDataObservableForGroupId:] */

void FUN_10aebf614(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x58);
  lVar1 = param_1;
  func_0x00010bec5d00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aebf674; end: 10aebf7bf; -[SCMixerFeedDocObjectStore saveFeedData:groupId:completion:] */

void FUN_10aebf674(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfa45e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10aebf7c0; end: 10aebf7f3;  */

void FUN_10aebf7c0(long param_1,undefined8 param_2)

{
  func_0x00010bedb800(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010be99090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveFeedData_groupId_completion_112583dc0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10aebf7f4; end: 10aebf7f7; -[SCMixerFeedDocObjectStore cleanDataInPersistence:] */

void FUN_10aebf7f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddeeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanDataInPersistence__112555548);
  return;
}



/* Entry: 10aebf7f8; end: 10aebf88b; -[SCMixerFeedDocObjectStore warmupGroupIdIfNeeded:] */

void FUN_10aebf7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _os_unfair_lock_unlock(param_1 + 0x58);
  if (lVar2 == 0) {
    func_0x00010beea7c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aebf88c; end: 10aebf96b; -[SCMixerFeedDocObjectStore _cleanDataInPersistence:] */

void FUN_10aebf88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aebf96c;
  puStack_50 = &UNK_1108a5ee8;
  lStack_48 = param_1;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10aebf96c; end: 10aebfb53;  */

void FUN_10aebf96c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10aebfb54;
  puStack_68 = &UNK_110897108;
  _objc_retain(puVar2);
  puStack_60 = puVar2;
  _objc_retain(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puStack_58 = puVar3;
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10aebffb4;
  puStack_a0 = &UNK_110a50200;
  _objc_retain(puVar2);
  puStack_98 = puVar2;
  _objc_retain(puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puStack_90 = puVar3;
  _objc_retain(uVar6);
  uStack_88 = uVar6;
  func_0x00010c0f8500(uVar4,param_2,&puStack_80,uVar5,&puStack_b8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_88);
  _objc_release(puStack_90);
  _objc_release(puStack_98);
  _objc_release(puStack_58);
  _objc_release(puStack_60);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10aebfb54; end: 10aebffb3;  */

void FUN_10aebfb54(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uStack_1cc;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126de848);
  if (param_2 == 0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0,param_2);
  }
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar1 = &uStack_1b0;
  func_0x000107c310d0(puVar1,&lStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar3 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar2);
      }
      uVar7 = *(undefined8 *)((long)puVar10 * 8);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = uVar7;
      func_0x00010c0d53e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa140(uVar9);
      _objc_release(uVar8);
      puVar4 = PTR_PTR_1126de8d0;
      FUN_10aeddf94(PTR_PTR_1126de8d0,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    } while (puVar3 != puVar10);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126de850);
  if (param_2 == 0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0,param_2);
  }
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar3 = &uStack_1b0;
  func_0x000107c310d0(puVar3,&lStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  puVar10 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar2 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar10);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar8 = *(undefined8 *)((long)puVar6 * 8);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfceb20(uVar8);
      func_0x00010c0df760(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar7);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126de8d8;
      FUN_10aedf5bc(PTR_PTR_1126de8d8,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar6 = (undefined8 *)((long)puVar6 + 1);
    } while (puVar2 != puVar6);
    puVar2 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
  __Unwind_Resume();
  if (*(long *)(lVar5 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aebffc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar5 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10aebffb4; end: 10aebffc7;  */

void FUN_10aebffb4(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aebffc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10aebffc8; end: 10aec048f; -[SCMixerFeedDocObjectStore _warmupGroupId:] */

void FUN_10aebffc8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack_1b4;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x48);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar9 = *(long *)(param_1 + 8);
    _objc_retain(lVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar10);
    lVar3 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126de850);
    if (lVar3 == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_b0,lVar3);
    }
    puVar4 = &uStack_121;
    FUN_10aeded44();
    uStack_190 = 0xf;
    uStack_180 = 0x100;
    ppuStack_198 = &PTR_DAT_110864c08;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_148 = 0;
    lStack_150 = 0;
    plStack_138 = (long *)0x0;
    uStack_140 = 0;
    plStack_130 = (long *)0x0;
    uStack_106 = *(undefined2 *)(puVar4 + 0x1a);
    uStack_118 = 10;
    uStack_108 = 0x100;
    ppuStack_120 = &PTR_DAT_110866be0;
    pppuStack_e0 = &ppuStack_198;
    lStack_d0 = 0;
    lStack_d8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    plStack_b8 = (long *)0x0;
    lStack_1b0 = 0;
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b4 = 0;
    puVar5 = &uStack_b0;
    uStack_168 = param_3;
    puStack_e8 = puVar4;
    func_0x000107c310cc(puVar5,&ppuStack_120,&lStack_1b0,&uStack_1b4);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_1b0 != 0) {
      lStack_1a8 = lStack_1b0;
      __ZdlPv();
    }
    plVar1 = plStack_b8;
    ppuStack_120 = &PTR_DAT_110866be0;
    plStack_b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_d8 != 0) {
      lStack_d0 = lStack_d8;
      __ZdlPv();
    }
    plVar1 = plStack_130;
    ppuStack_198 = &PTR_DAT_110864c08;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_138;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_150 != 0) {
      lStack_148 = lStack_150;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_88);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(lVar3);
    puVar6 = puVar5;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar7 != (undefined8 *)0x0) {
      uVar11 = uVar10;
      func_0x00010c0cefc0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50));
      _objc_release(uVar11);
    }
    puVar8 = PTR_PTR_1126ae720;
    _objc_retain(puVar7);
    _objc_retain(lVar9);
    _objc_retain(uVar10);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48));
    lVar3 = param_1;
    func_0x00010bec5d00();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x58);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(puVar8);
    _objc_retain(lVar3);
    func_0x00010c0f7fc0(uVar11);
    _objc_release(lVar3);
    _objc_release(puVar8);
    _objc_release(lVar3);
    _objc_release(puVar8);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(uVar10);
    _objc_release(lVar9);
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0x58);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 10aec0490; end: 10aec096f;  */

void FUN_10aec0490(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined *unaff_x23;
  long unaff_x24;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puStack_268;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong auStack_180 [17];
  undefined **appuStack_f8 [9];
  undefined8 auStack_b0 [3];
  long *plStack_98;
  long *plStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x00010c0d5400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    unaff_x19 = lVar2;
    if (lVar3 == 0) {
      _objc_release();
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126de848);
      if (lVar3 == 0) {
        uStack_1d0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_200,lVar3);
      }
      puVar4 = &uStack_201;
      FUN_10aedd394(puVar4);
      _objc_retain(lVar2);
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_220 = 0;
      lVar5 = lVar2;
      func_0x00010bf529e0(lVar2);
      func_0x000107c281a4(&uStack_220,lVar5);
      puStack_1b8 = (undefined8 *)0x0;
      puStack_1c0 = (undefined8 *)0x0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      _objc_retain(lVar2);
      lVar5 = lVar2;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        lVar8 = *plStack_1b0;
        do {
          lVar9 = 0;
          do {
            if (*plStack_1b0 != lVar8) {
              _objc_enumerationMutation(lVar2);
            }
            uVar7 = *(ulong *)((long)puStack_1b8 + lVar9 * 8);
            _objc_retain(uVar7);
            auStack_180[0] = uVar7;
            func_0x000107c281a8(&uStack_220,auStack_180);
            _objc_release(auStack_180[0]);
            lVar9 = lVar9 + 1;
          } while (lVar5 != lVar9);
          lVar5 = lVar2;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar2);
      _objc_release(lVar2);
      func_0x000107c281a0(appuStack_f8,0xc,puVar4,&uStack_220);
      puStack_1c0 = (undefined8 *)0x0;
      puStack_1b8 = (undefined8 *)0x0;
      plStack_1b0 = (long *)0x0;
      auStack_180[0] = auStack_180[0] & 0xffffffff00000000;
      unaff_x21 = &uStack_200;
      func_0x000107c310cc(unaff_x21,appuStack_f8,&puStack_1c0,auStack_180);
      _objc_retainAutoreleasedReturnValue();
      if (puStack_1c0 != (undefined8 *)0x0) {
        puStack_1b8 = puStack_1c0;
        __ZdlPv();
      }
      plVar1 = plStack_90;
      appuStack_f8[0] = &PTR_DAT_110862700;
      plStack_90 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_98;
      plStack_98 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_1c0 = auStack_b0;
      func_0x000107c27dd4(&puStack_1c0);
      puStack_1c0 = &uStack_220;
      func_0x000107c27dd4(&puStack_1c0);
      func_0x000107c27da8(&uStack_1d8);
      _objc_release(uStack_1e8);
      _objc_release(uStack_1f0);
      _objc_release(lVar3);
      unaff_x22 = unaff_x21;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(unaff_x22);
      puVar6 = unaff_x22;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (puVar6 != (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(unaff_x22);
          }
          uVar10 = *(undefined8 *)((long)puVar11 * 8);
          func_0x00010c0d53e0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(unaff_x23);
          _objc_release(uVar10);
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar6 != puVar11);
        puVar6 = unaff_x22;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x22);
      _objc_retain(unaff_x23);
      unaff_x24 = lVar2;
      func_0x00010bf43280(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cef40(*(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(unaff_x21);
      _objc_release();
      puStack_268 = unaff_x23;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_release(unaff_x24);
    _objc_release(puStack_268);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x19);
    __Unwind_Resume();
    func_0x00010c0e00e0(*(undefined8 *)(lVar2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec0970; end: 10aec0993;  */

void FUN_10aec0970(long param_1,undefined8 param_2)

{
  func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


