/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f63a8c; end: 104f63ab7;  */

void FUN_104f63a8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f63ab8; end: 104f63b4f; -[SCMerlinOnboardingEntryPoint _didDetachUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63ab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112717dc0);
  *(undefined8 *)(param_1 + _DAT_112717dc0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112717db0);
  *(undefined8 *)(param_1 + _DAT_112717db0) = 0;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_112717da0;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0cafe0(lVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f63b50; end: 104f63da3; -[SCMerlinOnboardingEntryPoint _recordCompletionStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63b50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_112717da0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0e81e0();
  _objc_release(lVar1);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      param_1 = param_1 + _DAT_112717db8;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0cb000();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187e80();
    }
    else if (lVar2 == 1) {
      param_1 = param_1 + _DAT_112717db8;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0cb000();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187e40();
    }
    else {
      if (lVar2 != 2) {
        return;
      }
      param_1 = param_1 + _DAT_112717db8;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0cb000();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187e60();
    }
  }
  else if (lVar2 < 7) {
    if (2 < lVar2 - 3U) {
      return;
    }
    param_1 = param_1 + _DAT_112717db8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0cb000();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187ea0();
  }
  else if (lVar2 == 7) {
    param_1 = param_1 + _DAT_112717db8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0cb000();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187e20();
  }
  else if (lVar2 == 8) {
    param_1 = param_1 + _DAT_112717db8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0cb000();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187ec0();
  }
  else {
    if (lVar2 != 9) {
      return;
    }
    param_1 = param_1 + _DAT_112717db8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0cb000();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187ee0();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f63da4; end: 104f63e5f; -[SCMerlinOnboardingEntryPoint _logImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63da4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b2b78;
  _objc_opt_new(PTR_PTR_1126b2b78);
  lVar2 = param_1 + _DAT_112717da0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0e81e0();
  FUN_104f63e60();
  func_0x00010c1e4ec0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  FUN_104f63e84(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f63e60; end: 104f63e83;  */

undefined8 FUN_104f63e60(long param_1)

{
  if (param_1 - 1U < 9) {
    return *(undefined8 *)(&UNK_10dd8d738 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 104f63e84; end: 104f63ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63e84(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112717dc4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f63ea8; end: 104f63fc7; -[SCMerlinOnboardingEntryPoint _logCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63ea8(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar3 = PTR_PTR_1126b2b80;
  _objc_opt_new(PTR_PTR_1126b2b80);
  lVar8 = (long)_DAT_112717da0;
  lVar4 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0e81e0();
  FUN_104f63e60();
  func_0x00010c1e4ec0(puVar3,param_2,lVar5);
  _objc_release(lVar4);
  uVar6 = param_1 + lVar8;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  func_0x00010c0e81e0();
  uVar2 = 2;
  if (param_3 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  if (uVar7 != 2) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar1 = (ulong)(param_3 ^ 1);
  if ((1L << (uVar7 & 0x3f) & 0x3bbU) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xffffffffffffffff;
  if (uVar7 < 10) {
    uVar2 = uVar1;
  }
  func_0x00010c161fe0(puVar3,param_2,uVar2);
  _objc_release(uVar6);
  FUN_104f63e84(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104f63fc8; end: 104f63fdb; -[SCMerlinOnboardingEntryPoint tray:positionDidChange:] */

void FUN_104f63fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be03c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWithDidComplete__11255e8b0,0);
    return;
  }
  return;
}



/* Entry: 104f63fdc; end: 104f63ffb; -[SCMerlinOnboardingEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63fdc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112717dac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f63ffc; end: 104f6400f; -[SCMerlinOnboardingEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f63ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112717dac,param_3);
  return;
}



/* Entry: 104f64010; end: 104f640cb; -[SCMerlinOnboardingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f64010(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717db4,0);
  _objc_destroyWeak(param_1 + _DAT_112717dc8);
  _objc_destroyWeak(param_1 + _DAT_112717dac);
  _objc_destroyWeak(param_1 + _DAT_112717dc4);
  _objc_destroyWeak(param_1 + _DAT_112717db8);
  _objc_destroyWeak(param_1 + _DAT_112717da0);
  _objc_storeStrong(param_1 + _DAT_112717db0,0);
  _objc_storeStrong(param_1 + _DAT_112717dc0,0);
  _objc_storeStrong(param_1 + _DAT_112717dbc,0);
  _objc_storeStrong(param_1 + _DAT_112717d9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717da8,0);
  return;
}



/* Entry: 104f640cc; end: 104f642a3;  */

void FUN_104f640cc(undefined8 param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar7 = param_2;
    func_0x00010bf529e0();
    uVar2 = param_3;
    func_0x00010bf529e0();
    if (uVar7 == uVar2) {
      uVar7 = param_2;
      func_0x00010bf529e0();
      if (uVar7 != 0) {
        uVar7 = 0;
        do {
          uVar3 = param_1;
          func_0x00010c25cd40();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar7 = uVar7 + 1;
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f440();
          uVar2 = uVar6;
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(uVar3);
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          bVar1 = uVar6 != 0;
          uVar6 = uVar2;
          if (bVar1) {
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c130d20(param_1);
            _objc_release(puVar5);
            _objc_release(puVar4);
            uVar6 = uVar2;
          }
          uVar2 = param_2;
          func_0x00010bf529e0();
        } while (uVar7 < uVar2);
      }
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104f642a4; end: 104f6431f;  */

void FUN_104f642a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar2 = puVar1;
  func_0x000104f65fa8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2b88;
  _objc_alloc(PTR_PTR_1126b2b88);
  func_0x00010c051520();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f64320; end: 104f6444b;  */

void FUN_104f64320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104f65fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release();
  func_0x000104f65fd8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dbcfd8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2b88;
  _objc_alloc();
  func_0x00010c051520();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_58 = FUN_104f6444c;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar2 = puVar1;
    func_0x000104f65ff0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar1,param_2,puVar2);
    _objc_release();
    func_0x000104f66008();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puStack_a8 = puVar2;
    func_0x000104f66020();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110dbcff8;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110dbd018;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_b8,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2b88;
    _objc_alloc();
    func_0x00010c051520();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      pcStack_c8 = FUN_104f645a4;
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      puStack_f0 = puVar5;
      puStack_e8 = puVar2;
      puStack_e0 = puVar4;
      puStack_d8 = puVar1;
      ppuStack_d0 = &puStack_60;
      _objc_alloc();
      puVar1 = puVar3;
      func_0x000104f66038();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar3,param_2,puVar1);
      _objc_release();
      func_0x000104f66050();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_100,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      ppuStack_108 = &PTR____CFConstantStringClassReference_110dbd038;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_108,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2b88;
      _objc_alloc();
      func_0x00010c051520();
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
        ___stack_chk_fail();
        puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        puVar2 = puVar1;
        func_0x000104f66068();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar1,param_2,puVar2);
        _objc_release(puVar2);
        puVar4 = PTR_PTR_1126b2b88;
        _objc_alloc(PTR_PTR_1126b2b88);
        func_0x00010c051520();
        _objc_release(puVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f6444c; end: 104f645a3;  */

void FUN_104f6444c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104f65ff0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release();
  func_0x000104f66008();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puStack_58 = puVar2;
  func_0x000104f66020();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dbcff8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dbd018;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2b88;
  _objc_alloc();
  func_0x00010c051520();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_78 = FUN_104f645a4;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    puStack_a0 = puVar4;
    puStack_98 = puVar2;
    puStack_90 = puVar3;
    puStack_88 = puVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar1 = puVar5;
    func_0x000104f66038();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar5,param_2,puVar1);
    _objc_release();
    func_0x000104f66050();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110dbd038;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_b8,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2b88;
    _objc_alloc();
    func_0x00010c051520();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar2 = puVar1;
      func_0x000104f66068();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      puVar3 = PTR_PTR_1126b2b88;
      _objc_alloc(PTR_PTR_1126b2b88);
      func_0x00010c051520();
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f645a4; end: 104f646cf;  */

void FUN_104f645a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104f66038();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release();
  func_0x000104f66050();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dbd038;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2b88;
  _objc_alloc();
  func_0x00010c051520();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar2 = puVar1;
    func_0x000104f66068();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126b2b88;
    _objc_alloc(PTR_PTR_1126b2b88);
    func_0x00010c051520();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f646d0; end: 104f6474b;  */

void FUN_104f646d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar2 = puVar1;
  func_0x000104f66068();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2b88;
  _objc_alloc(PTR_PTR_1126b2b88);
  func_0x00010c051520();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f6474c; end: 104f64877;  */

void FUN_104f6474c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104f66080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release();
  func_0x000104f66098();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dbd058;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2b88;
  _objc_alloc();
  func_0x00010c051520();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar2 = puVar1;
    func_0x000104f660b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar1,param_2,puVar2);
    _objc_release();
    func_0x000104f660c8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puStack_a8 = puVar2;
    func_0x000104f660e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110dbd078;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110dbd098;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_b8,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2b88;
    _objc_alloc();
    func_0x00010c051520();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar2 = puVar1;
      func_0x000104f66200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      puVar4 = PTR_PTR_1126b2b88;
      _objc_alloc(PTR_PTR_1126b2b88);
      func_0x00010c051520();
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f64878; end: 104f649cf;  */

void FUN_104f64878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104f660b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release();
  func_0x000104f660c8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puStack_58 = puVar2;
  func_0x000104f660e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dbd078;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dbd098;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2b88;
  _objc_alloc();
  func_0x00010c051520();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar2 = puVar1;
    func_0x000104f66200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b2b88;
    _objc_alloc(PTR_PTR_1126b2b88);
    func_0x00010c051520();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f649d0; end: 104f64a4b;  */

void FUN_104f649d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar2 = puVar1;
  func_0x000104f66200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2b88;
  _objc_alloc(PTR_PTR_1126b2b88);
  func_0x00010c051520();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f64a4c; end: 104f65def;  */

void FUN_104f64a4c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
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
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puStack_2e8;
  undefined *puStack_2c8;
  undefined *puStack_2a8;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar15 = (undefined *)0x0;
  if (param_1 < 3) {
    if (param_1 == 0) {
      puVar15 = puVar3;
      func_0x000104f65f90();
      _objc_retainAutoreleasedReturnValue();
LAB_104f64e28:
      puVar19 = puVar15;
      if (param_2 == 1) {
        FUN_104f642a4();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar19;
        FUN_104f64320();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar6;
        FUN_104f6444c();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar18;
        FUN_104f645a4();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        FUN_104f6474c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_2 != 0) {
LAB_104f65004:
          puStack_2c8 = (undefined *)0x0;
          puVar15 = puVar19;
          goto LAB_104f65668;
        }
        FUN_104f642a4();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar19;
        FUN_104f64320();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar6;
        FUN_104f6444c();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar18;
        FUN_104f645a4();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        FUN_104f646d0();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_2c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
LAB_104f64f38:
      _objc_release(puVar7);
      _objc_release(puVar18);
      _objc_release(puVar6);
      _objc_release();
    }
    else {
      if (param_1 != 1) {
        puStack_2c8 = (undefined *)0x0;
        puVar19 = (undefined *)0x0;
        if (param_1 == 2) {
          puVar15 = puVar3;
          func_0x000104f661e8();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar15;
          FUN_104f649d0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar19;
          FUN_104f642a4();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          FUN_104f645a4();
          _objc_retainAutoreleasedReturnValue();
          puStack_2c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar19);
          puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          func_0x00010c04e820();
          puVar19 = puVar5;
          func_0x000104f660c8();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_104f65500;
        }
        goto LAB_104f65d88;
      }
      puVar15 = puVar3;
      func_0x000104f661d0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar15;
      if (param_2 == 1) {
        FUN_104f649d0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar19;
        FUN_104f642a4();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        FUN_104f64320();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        FUN_104f6444c();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar7;
        FUN_104f645a4();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar18;
        FUN_104f6474c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_2 != 0) goto LAB_104f65004;
        FUN_104f649d0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar19;
        FUN_104f642a4();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        FUN_104f64320();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        FUN_104f6444c();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar7;
        FUN_104f645a4();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar18;
        FUN_104f646d0();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_2c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar18);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release();
    }
LAB_104f65668:
    FUN_104f64878();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
joined_r0x000104f65588:
    PTR__OBJC_CLASS___NSAttributedString_1126af068 = puVar5;
    if (puVar15 == (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      uVar16 = param_1 - 3;
      _objc_alloc();
      func_0x00010c04e820();
      if (uVar16 < 4) {
        _objc_retain(puVar5);
        puStack_2a8 = puVar5;
      }
      else {
        puStack_2a8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        func_0x00010c04e820();
      }
      puVar6 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc();
      func_0x00010c04e820();
      func_0x00010bf069e0();
      func_0x00010c08fa60();
      _objc_retain(puStack_2c8);
      puVar7 = puStack_2c8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (puVar7 == (undefined *)0x0) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        do {
          puVar18 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puStack_2c8);
            }
            lVar20 = *(long *)((long)puVar18 * 8);
            lVar9 = lVar20;
            func_0x00010c26b700(lVar20);
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar20;
            func_0x00010c0997e0(lVar20);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar20;
            func_0x00010c099840(lVar20);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar9;
            FUN_104f640cc(lVar9,lVar10,lVar11,lVar17);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            _objc_release(lVar10);
            _objc_release(lVar9);
            func_0x00010bf069e0(puVar6);
            func_0x00010bf069e0(puVar6);
            if (uVar16 < 4) {
              func_0x00010bf069e0(puVar6);
            }
            lVar9 = lVar20;
            func_0x00010c0997e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar9 != 0) {
              lVar9 = lVar20;
              func_0x00010c0997e0(lVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa160(puVar2);
              _objc_release(lVar9);
              lVar9 = lVar20;
              func_0x00010c0997e0();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              func_0x00010bf529e0();
              lVar17 = lVar10 + lVar17;
              _objc_release(lVar9);
            }
            lVar9 = lVar20;
            func_0x00010c099840();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar9 != 0) {
              func_0x00010c099840(lVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa160(puVar3);
              _objc_release(lVar20);
            }
            _objc_release(lVar12);
            puVar18 = puVar18 + 1;
          } while (puVar7 != puVar18);
          puVar7 = puStack_2c8;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
      _objc_release(puStack_2c8);
      func_0x00010c08fa60();
      if (puVar19 == (undefined *)0x0) {
        puStack_2e8 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar19;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar19;
        func_0x00010c0997e0(puVar19);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar19;
        func_0x00010c099840(puVar19);
        _objc_retainAutoreleasedReturnValue();
        puStack_2e8 = puVar7;
        FUN_104f640cc(puVar7,puVar18,puVar8,lVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar18);
        _objc_release(puVar7);
        func_0x00010bf069e0(puVar6);
        func_0x00010bf069e0(puVar6);
        func_0x00010bf069e0(puVar6);
        func_0x00010bf069e0(puVar6);
        puVar7 = puVar19;
        func_0x00010c0997e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar7 != (undefined *)0x0) {
          puVar7 = puVar19;
          func_0x00010c0997e0(puVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar2);
          _objc_release(puVar7);
          puVar7 = puVar19;
          func_0x00010c0997e0(puVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(puVar7);
        }
        puVar7 = puVar19;
        func_0x00010c099840();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar7 != (undefined *)0x0) {
          func_0x00010c099840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar3);
          _objc_release();
        }
      }
      func_0x00010bcbeb30();
      puVar7 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
      func_0x00010bf69e80(PTR__OBJC_CLASS___NSParagraphStyle_1126af948);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar7;
      func_0x00010c0d3c80();
      _objc_release(puVar7);
      func_0x00010c16f520(puVar18);
      func_0x00010c166c00(puVar18);
      puVar7 = PTR__OBJC_CLASS___NSTextTab_1126b2b90;
      _objc_alloc();
      func_0x00010c0517e0(0x4034000000000000);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c211580(puVar18);
      _objc_release(puVar8);
      _objc_release(puVar7);
      func_0x00010c18b240(0x4034000000000000,puVar18);
      func_0x00010c19d260(0,puVar18);
      func_0x00010c1a75e0(0x4034000000000000,puVar18);
      puVar7 = puVar6;
      func_0x00010c23ba00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0d3c80();
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      if (uVar16 < 4) {
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar7);
        _objc_release(puVar4);
        func_0x00010bef6f40(puVar8);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar15);
        func_0x00010bef6f40(puVar8);
        _objc_release(puVar13);
        _objc_release(puVar4);
        if (puStack_2e8 != (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60(puVar8);
          func_0x00010c08fa60(puStack_2e8);
          func_0x00010c08fa60(puStack_2e8);
          func_0x00010bef6f40(puVar8);
          _objc_release(puVar13);
          _objc_release(puVar4);
        }
      }
      else {
        func_0x00010c1d0560(puVar7);
        func_0x00010bef6f40(puVar8);
      }
      _objc_alloc(PTR_PTR_1126b2b88);
      func_0x00010c051520();
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar18);
      _objc_release(puStack_2e8);
      _objc_release(puVar6);
      _objc_release(puStack_2a8);
      _objc_release(puVar5);
    }
  }
  else {
    if (6 < param_1) {
      if (param_1 == 7) {
        puVar15 = puVar3;
        func_0x000104f66128();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        puVar5 = puVar19;
        func_0x000104f66140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar19);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126b2b88;
        _objc_alloc();
        func_0x00010c051520();
        _objc_release(puVar19);
        puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        puVar6 = puVar19;
        func_0x000104f66158();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar19);
        _objc_release();
        func_0x000104f65fd8();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x000104f66050();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126b2b88;
        _objc_alloc();
        func_0x00010c051520();
        _objc_release(puVar6);
        _objc_release(puVar18);
        _objc_release(puVar19);
        puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        puVar6 = puVar19;
        func_0x000104f66170();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar19);
        _objc_release();
        func_0x000104f66008();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar6;
        func_0x000104f66020();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar18);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR_PTR_1126b2b88;
        _objc_alloc();
        func_0x00010c051520();
        _objc_release(puVar6);
        _objc_release(puVar8);
        _objc_release(puVar19);
        puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        puVar6 = puVar19;
        func_0x000104f66188();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar19);
        _objc_release();
        func_0x000104f660c8();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b2b88;
        _objc_alloc();
        func_0x00010c051520();
        _objc_release(puVar6);
        _objc_release(puVar8);
        _objc_release(puVar19);
        puStack_2c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar18);
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        puVar19 = puVar5;
        func_0x000104f661a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar5);
        _objc_release(puVar19);
        puVar19 = PTR_PTR_1126b2b88;
        _objc_alloc();
        func_0x00010c051520();
      }
      else {
        if (param_1 != 8) {
          puStack_2c8 = (undefined *)0x0;
          puVar19 = (undefined *)0x0;
          if (param_1 != 9) goto LAB_104f65d88;
          puVar15 = puVar3;
          func_0x000104f66308();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
          puVar19 = puVar5;
          func_0x000104f66320();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e820(puVar5);
          _objc_release(puVar19);
          puVar19 = PTR_PTR_1126b2b88;
          _objc_alloc();
          func_0x00010c051520();
          _objc_release(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
          puVar6 = puVar5;
          func_0x000104f66338();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e820(puVar5);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126b2b88;
          _objc_alloc();
          func_0x00010c051520();
          _objc_release(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          puVar7 = puVar5;
          func_0x000104f66350();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e820(puVar5);
          _objc_release();
          func_0x000104f66008();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar7;
          func_0x000104f66020();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar18);
          _objc_release(puVar7);
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = PTR_PTR_1126b2b88;
          _objc_alloc();
          func_0x00010c051520();
          _objc_release(puVar7);
          _objc_release(puVar8);
          _objc_release(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
          puVar7 = puVar5;
          func_0x000104f66368();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e820(puVar5);
          _objc_release(puVar7);
          puVar7 = PTR_PTR_1126b2b88;
          _objc_alloc();
          func_0x00010c051520();
          _objc_release(puVar5);
          puStack_2c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_104f64f38;
        }
        puVar15 = puVar3;
        func_0x000104f661d0();
        _objc_retainAutoreleasedReturnValue();
        if (param_2 < 2) {
          puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          puVar5 = puVar19;
          func_0x000104f66218();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e820();
          _objc_release(puVar5);
          puVar5 = PTR_PTR_1126b2b88;
          _objc_alloc();
          func_0x00010c051520();
          _objc_release();
          FUN_104f642a4();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar19;
          FUN_104f6444c();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          FUN_104f645a4();
          _objc_retainAutoreleasedReturnValue();
          puStack_2c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar19);
          _objc_release(puVar5);
        }
        else {
          puStack_2c8 = (undefined *)0x0;
        }
        puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        func_0x00010c04e820();
        puVar19 = puVar5;
        func_0x000104f660c8();
        _objc_retainAutoreleasedReturnValue();
LAB_104f65500:
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126b2b88;
        _objc_alloc();
        func_0x00010c051520();
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      goto joined_r0x000104f65588;
    }
    puStack_2c8 = (undefined *)0x0;
    puVar19 = (undefined *)0x0;
    if (param_1 - 3U < 3) {
      puVar15 = puVar3;
      func_0x000104f66260();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104f64e28;
    }
  }
LAB_104f65d88:
  _objc_release(puVar19);
  _objc_release(puStack_2c8);
  _objc_release(puVar15);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  if ((long)puVar2 < 4) {
    if ((undefined *)0x1 < puVar2 + -1) {
      if (puVar2 == (undefined *)0x0) {
        func_0x000104f65f78();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (puVar2 == (undefined *)0x3) {
        func_0x000104f66230();
        _objc_retainAutoreleasedReturnValue();
      }
      goto _objc_autoreleaseReturnValue;
    }
  }
  else {
    if ((long)puVar2 < 7) {
      func_0x000104f662a8();
      _objc_retainAutoreleasedReturnValue();
      goto _objc_autoreleaseReturnValue;
    }
    if (puVar2 == (undefined *)0x7) {
      func_0x000104f66110();
      _objc_retainAutoreleasedReturnValue();
      goto _objc_autoreleaseReturnValue;
    }
    if (puVar2 != (undefined *)0x8) {
      if (puVar2 == (undefined *)0x9) {
        func_0x000104f662f0();
        _objc_retainAutoreleasedReturnValue();
      }
      goto _objc_autoreleaseReturnValue;
    }
  }
  func_0x000104f661b8();
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f65df0; end: 104f65f77;  */

void FUN_104f65df0(long param_1)

{
  if (param_1 < 4) {
    if (1 < param_1 - 1U) {
      if (param_1 == 0) {
        func_0x000104f65f78();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (param_1 == 3) {
        func_0x000104f66230();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104f65e94;
    }
  }
  else {
    if (param_1 < 7) {
      func_0x000104f662a8();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104f65e94;
    }
    if (param_1 == 7) {
      func_0x000104f66110();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104f65e94;
    }
    if (param_1 != 8) {
      if (param_1 == 9) {
        func_0x000104f662f0();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104f65e94;
    }
  }
  func_0x000104f661b8();
  _objc_retainAutoreleasedReturnValue();
LAB_104f65e94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f65f78; end: 104f6637f;  */

void FUN_104f65f78(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbd0f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbd0f8,
                      &PTR____CFConstantStringClassReference_110dbd118,0);
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



/* Entry: 104f66380; end: 104f663f3; -[SCGrapheneMerlinOnboardingMetric2 init] */

undefined1 * FUN_104f66380(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e53c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f663f4; end: 104f66623;  */

char * FUN_104f663f4(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  uVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar9 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_104f66624;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar5;
  uVar10 = uVar9;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar10 = uVar9;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_104f66854;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  uVar9 = uVar10;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11085e208);
    pcStack_1c0 = acStack_1d8;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    uVar9 = uVar10;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  ppcVar6 = &pcStack_220;
  pcStack_1e8 = FUN_104f66a84;
  puStack_210 = puVar14;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar8;
  pcStack_1f8 = pcVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(uVar9);
  _objc_retain(param_5);
  puStack_218 = PTR_PTR_1126e53d0;
  pcStack_220 = pcVar5;
  _objc_msgSendSuper2(&pcStack_220,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    pcVar1 = pcVar3;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)ppcVar6 + 8);
    *(char **)((long)ppcVar6 + 8) = pcVar1;
    _objc_release(uVar10);
    uVar10 = uVar9;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)((long)ppcVar6 + 0x10);
    *(undefined8 *)((long)ppcVar6 + 0x10) = uVar10;
    _objc_release(uVar11);
    uVar10 = param_5;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)((long)ppcVar6 + 0x18);
    *(undefined8 *)((long)ppcVar6 + 0x18) = uVar10;
    _objc_release(uVar11);
  }
  _objc_release(param_5);
  _objc_release(uVar9);
  _objc_release(pcVar3);
  return (char *)ppcVar6;
}



/* Entry: 104f66624; end: 104f66853;  */

char * FUN_104f66624(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar12 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_104f66854;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar5;
  uVar7 = uVar8;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar12 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar6 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11085e208);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar10 = 0;
    puVar12 = auStack_118;
    uVar7 = uVar8;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_180;
  pcStack_148 = FUN_104f66a84;
  puStack_170 = puVar12;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(uVar7);
  _objc_retain(param_5);
  puStack_178 = PTR_PTR_1126e53d0;
  pcStack_180 = pcVar3;
  _objc_msgSendSuper2(&pcStack_180,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = pcVar6;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar1;
    _objc_release(uVar8);
    uVar8 = uVar7;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined8 *)((long)ppcVar4 + 0x10) = uVar8;
    _objc_release(uVar9);
    uVar8 = param_5;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = uVar8;
    _objc_release(uVar9);
  }
  _objc_release(param_5);
  _objc_release(uVar7);
  _objc_release(pcVar6);
  return (char *)ppcVar4;
}



/* Entry: 104f66854; end: 104f66a83;  */

char * FUN_104f66854(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar10 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11085e208);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar8 = 0;
    puVar10 = auStack_78;
    uVar5 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_e0;
  pcStack_a8 = FUN_104f66a84;
  puStack_d0 = puVar10;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  puStack_d8 = PTR_PTR_1126e53d0;
  pcStack_e0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar2 = pcVar1;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar2;
    _objc_release(uVar6);
    uVar6 = uVar5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined8 *)((long)ppcVar4 + 0x10) = uVar6;
    _objc_release(uVar7);
    uVar6 = param_5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = uVar6;
    _objc_release(uVar7);
  }
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 104f66a84; end: 104f66b5b; -[SCMerlinOnboardingTextWithLinksModel initWithText:linkText:linkUrls:] */

undefined1 *
FUN_104f66a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e53d0;
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



/* Entry: 104f66b5c; end: 104f66b7f; -[SCMerlinOnboardingTextWithLinksModel copyWithZone:] */

undefined8 FUN_104f66b5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f66b80; end: 104f66bff; -[SCMerlinOnboardingTextWithLinksModel hash] */

undefined8 * FUN_104f66b80(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_104f66c98:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104f66ca4;
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
            goto LAB_104f66ca4;
          }
          goto LAB_104f66c98;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104f66ca4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104f66c00; end: 104f66cbf; -[SCMerlinOnboardingTextWithLinksModel isEqual:] */

long FUN_104f66c00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f66c98:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f66ca4;
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
            goto LAB_104f66ca4;
          }
          goto LAB_104f66c98;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f66ca4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f66cc0; end: 104f66cc7; -[SCMerlinOnboardingTextWithLinksModel text] */

undefined8 FUN_104f66cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f66cc8; end: 104f66ccf; -[SCMerlinOnboardingTextWithLinksModel linkText] */

undefined8 FUN_104f66cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f66cd0; end: 104f66cd7; -[SCMerlinOnboardingTextWithLinksModel linkUrls] */

undefined8 FUN_104f66cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f66cd8; end: 104f66d13; -[SCMerlinOnboardingTextWithLinksModel .cxx_destruct] */

void FUN_104f66cd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f66d14; end: 104f66def; -[SCChatMediaMessageReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_104f66d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b2b98;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0c72c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf43280(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11085e2d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b2ba0;
  _objc_alloc(PTR_PTR_1126b2ba0);
  func_0x00010c003fc0();
  func_0x00010c17b740(puVar1,param_2,puVar4);
  puVar5 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f66df0; end: 104f66df7;  */

void FUN_104f66df0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b2bf8;
    _objc_opt_new(PTR_PTR_1126b2bf8);
    lVar1 = param_2;
    func_0x00010bf4cce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 == 0) {
      func_0x00010c1b6b40(puVar2);
    }
    else {
      lVar3 = param_2;
      func_0x00010c086560(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar2);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 == 0) {
      func_0x00010c1b64a0(puVar2);
    }
    else {
      lVar3 = param_2;
      func_0x00010c085300(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64a0(puVar2);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b2c00;
    _objc_alloc(PTR_PTR_1126b2c00);
    lVar1 = param_2;
    func_0x00010c0c5180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047ac0(puVar4);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f66df8; end: 104f66e27; -[SCChatMediaMessageReportingPlugin identifier] */

void FUN_104f66df8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e5f9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e5f9d8);
  return;
}



/* Entry: 104f66e28; end: 104f66e2f; -[SCChatMediaMessageReportingPlugin isReportableForMessage:] */

undefined8 FUN_104f66e28(void)

{
  return 1;
}



/* Entry: 104f66e30; end: 104f66ea3; -[SCChatMediaMessageReportingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f66e30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_112717ddc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101d00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ba8;
  _objc_opt_new(PTR_PTR_1126b2ba8);
  func_0x00010c125b60(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f66ea4; end: 104f66eb3; -[SCChatMediaMessageReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f66ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717ddc);
  return;
}



/* Entry: 104f66eb4; end: 104f6701b; -[SCSnapMessageReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_104f66eb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126b2b98;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0cb340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar3;
  func_0x00010c0bc380(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  FUN_104f67640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar6 = lVar4;
    func_0x00010c0bc340(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d80(lVar5,param_2,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    puVar9 = PTR_PTR_1126b2bb0;
    _objc_alloc(PTR_PTR_1126b2bb0);
    func_0x00010c002b20();
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c203860(puVar1,param_2,puVar9);
  puVar8 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104f6701c; end: 104f6704b; -[SCSnapMessageReportingPlugin identifier] */

void FUN_104f6701c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e5f9f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e5f9f8);
  return;
}



/* Entry: 104f6704c; end: 104f67053; -[SCSnapMessageReportingPlugin isReportableForMessage:] */

undefined8 FUN_104f6704c(void)

{
  return 1;
}



/* Entry: 104f67054; end: 104f670c7; -[SCSnapMessageReportingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f67054(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_112717de0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101d00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2bb8;
  _objc_opt_new(PTR_PTR_1126b2bb8);
  func_0x00010c125b60(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f670c8; end: 104f670d7; -[SCSnapMessageReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f670c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717de0);
  return;
}



/* Entry: 104f670d8; end: 104f67107; -[SCStoryReplyMessageReportingPlugin identifier] */

void FUN_104f670d8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e5fa78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e5fa78);
  return;
}



/* Entry: 104f67108; end: 104f67247; -[SCStoryReplyMessageReportingPlugin reportedChatMessageReplyToContentsForMessage:] */

void FUN_104f67108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b2bc0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c131d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_104f67640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c25ae40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08f740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b2bc8;
  _objc_alloc(PTR_PTR_1126b2bc8);
  uVar2 = param_3;
  func_0x00010c25ad80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c037ec0(puVar5,param_2,uVar2,uVar3);
  _objc_release(uVar2);
  func_0x00010c20d8c0(puVar1,param_2,puVar5);
  puVar6 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104f67248; end: 104f672bb; -[SCStoryReplyMessageReportingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f67248(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_112717de4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101d00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2bd0;
  _objc_opt_new(PTR_PTR_1126b2bd0);
  func_0x00010c125b60(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f672bc; end: 104f672cb; -[SCStoryReplyMessageReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f672bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717de4);
  return;
}



/* Entry: 104f672cc; end: 104f67383; -[SCTextMessageReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_104f672cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2b98;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b2bd8;
  _objc_alloc(PTR_PTR_1126b2bd8);
  func_0x00010c002b20();
  func_0x00010c212f20(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f67384; end: 104f673b3; -[SCTextMessageReportingPlugin identifier] */

void FUN_104f67384(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e5f9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e5f9b8);
  return;
}



/* Entry: 104f673b4; end: 104f673bb; -[SCTextMessageReportingPlugin isReportableForMessage:] */

undefined8 FUN_104f673b4(void)

{
  return 1;
}



/* Entry: 104f673bc; end: 104f6742f; -[SCTextMessageReportingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f673bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_112717de8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101d00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2be0;
  _objc_opt_new(PTR_PTR_1126b2be0);
  func_0x00010c125b60(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f67430; end: 104f6743f; -[SCTextMessageReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f67430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717de8);
  return;
}



/* Entry: 104f67440; end: 104f67583; -[SCTinySnapMessageReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_104f67440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b2b98;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_104f67640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c271140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b2be8;
  _objc_alloc(PTR_PTR_1126b2be8);
  func_0x00010c0290e0();
  func_0x00010c216220(puVar1,param_2,puVar7);
  puVar8 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104f67584; end: 104f675b3; -[SCTinySnapMessageReportingPlugin identifier] */

void FUN_104f67584(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e5fa38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e5fa38);
  return;
}



/* Entry: 104f675b4; end: 104f675bb; -[SCTinySnapMessageReportingPlugin isReportableForMessage:] */

undefined8 FUN_104f675b4(void)

{
  return 1;
}



/* Entry: 104f675bc; end: 104f6762f; -[SCTinySnapMessageReportingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f675bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_112717dec;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101d00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2bf0;
  _objc_opt_new(PTR_PTR_1126b2bf0);
  func_0x00010c125b60(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f67630; end: 104f6763f; -[SCTinySnapMessageReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f67630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717dec);
  return;
}



/* Entry: 104f67640; end: 104f6798b;  */

void FUN_104f67640(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b2bf8;
    _objc_opt_new(PTR_PTR_1126b2bf8);
    lVar1 = param_1;
    func_0x00010bf4cce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 == 0) {
      func_0x00010c1b6b40(puVar2,param_2,0);
    }
    else {
      lVar3 = param_1;
      func_0x00010c086560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 == 0) {
      func_0x00010c1b64a0(puVar2,param_2,0);
    }
    else {
      lVar3 = param_1;
      func_0x00010c085300(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64a0(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b2c00;
    _objc_alloc(PTR_PTR_1126b2c00);
    lVar1 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047ac0(puVar4,param_2,lVar1,puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f6798c; end: 104f67a97; -[SCFriendUnifiedProfileOurConnectionSectionPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f6798c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_112717df0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf36440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar5 = (long)_DAT_112717df4;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c07ee20();
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    lVar1 = param_1;
    func_0x00010bdf2f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f67a98; end: 104f67b83; -[SCFriendUnifiedProfileOurConnectionSectionPluginEntryPoint _createSectionProvider] */

void FUN_104f67a98(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f67b84; end: 104f67bc3;  */

void FUN_104f67b84(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f67bc4; end: 104f67d8f; -[SCFriendUnifiedProfileOurConnectionSectionPluginEntryPoint _createSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f67bc4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  FUN_104f68490();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b1100;
  _objc_alloc();
  func_0x00010c043040();
  puVar4 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f122d8;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b2c08;
  _objc_alloc(PTR_PTR_1126b2c08);
  lVar1 = param_1 + _DAT_112717df4;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112717df8;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048fc0(puVar5,param_2,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar1);
  func_0x00010c1f9240(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar2 + _DAT_112717df8);
  _objc_destroyWeak(lVar2 + _DAT_112717df0);
  _objc_destroyWeak(lVar2 + _DAT_112717dfc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar2 + _DAT_112717df4);
  return;
}



/* Entry: 104f67d90; end: 104f67ddf; -[SCFriendUnifiedProfileOurConnectionSectionPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f67d90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717df8);
  _objc_destroyWeak(param_1 + _DAT_112717df0);
  _objc_destroyWeak(param_1 + _DAT_112717dfc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717df4);
  return;
}



/* Entry: 104f67de0; end: 104f67e9f; -[SCOurConnectionSectionDataProvider initWithSnapchatter:resourceDownloader:] */

undefined1 *
FUN_104f67de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e53d8;
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
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f67ea0; end: 104f67eab; +[SCOurConnectionSectionDataProvider announcerIdentifier] */

undefined ** FUN_104f67ea0(void)

{
  return &PTR____CFConstantStringClassReference_110dbd6f8;
}



/* Entry: 104f67eac; end: 104f67eb3; -[SCOurConnectionSectionDataProvider addListener:] */

void FUN_104f67eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104f67eb4; end: 104f67ebb; -[SCOurConnectionSectionDataProvider removeListener:] */

void FUN_104f67eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104f67ebc; end: 104f67ec3; -[SCOurConnectionSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_104f67ebc(void)

{
  return 1;
}



/* Entry: 104f67ec4; end: 104f67f8b; -[SCOurConnectionSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104f67ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f67f8c;
  puStack_48 = &UNK_11085e2f8;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f67f8c; end: 104f67fcb;  */

void FUN_104f67f8c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde7360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f67fcc; end: 104f6804b; -[SCOurConnectionSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104f67fcc(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104f68178;
    puStack_90 = &UNK_110845ae0;
    puVar5 = auStack_80;
    _objc_copyWeak(auStack_88,puVar5);
    ppuVar2 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dbd678;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_70 = ppuVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_88);
    puVar4 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde4d40();
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f6804c; end: 104f68177; -[SCOurConnectionSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_104f6804c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104f68178;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dbd678;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde4d40();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104f68178; end: 104f681bf;  */

void FUN_104f68178(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f681c0; end: 104f6820b; -[SCOurConnectionSectionDataProvider setSectionDataModel:] */

void FUN_104f681c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6820c; end: 104f6827b; -[SCOurConnectionSectionDataProvider _configureCell:] */

void FUN_104f6820c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aeaa0;
  _objc_opt_class(PTR_PTR_1126aeaa0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1eccc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f6827c; end: 104f683cf; -[SCOurConnectionSectionDataProvider _containerCellViewModel] */

void FUN_104f6827c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1;
  func_0x000104f684a8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108f62f68();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf85d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108f634a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8,param_2,&PTR____CFConstantStringClassReference_110dbd6b8,
                      &PTR____CFConstantStringClassReference_110dbd6d8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2c10;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x000108f62cd0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053700(puVar6,param_2,lVar2,uVar4,puVar5,0,0,0,0,0,0,puVar7,
                      &PTR____CFConstantStringClassReference_110dbd698,0);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104f683d0; end: 104f683e7; -[SCOurConnectionSectionDataProvider dataProviderDelegate] */

void FUN_104f683d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f683e8; end: 104f683f3; -[SCOurConnectionSectionDataProvider setDataProviderDelegate:] */

void FUN_104f683e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104f683f4; end: 104f683fb; -[SCOurConnectionSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104f683f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f683fc; end: 104f6842b; -[SCOurConnectionSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104f683fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f6842c; end: 104f68433; -[SCOurConnectionSectionDataProvider sectionDataModel] */

undefined8 FUN_104f6842c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f68434; end: 104f6848f; -[SCOurConnectionSectionDataProvider .cxx_destruct] */

void FUN_104f68434(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f68490; end: 104f684bf;  */

void FUN_104f68490(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbd718;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbd718,
                      &PTR____CFConstantStringClassReference_110dbd738,0);
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



/* Entry: 104f684c0; end: 104f6866b; -[SCNFMOnboardingAlertScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f684c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)_DAT_112717e18;
  puVar1 = (undefined *)(param_1 + lVar8);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010901d778();
    puVar1 = PTR_PTR_1126b2c18;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = puVar2;
      func_0x00010c294420(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = puVar2;
      func_0x00010bf85d80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1120(puVar1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126b2c20;
    _objc_alloc();
    lVar4 = param_1 + _DAT_112717e1c;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar7);
    lVar9 = lVar7;
    func_0x00010bfddd20();
    func_0x00010c063a40(puVar3,param_2,lVar5,param_1,puVar1,lVar9);
    lVar9 = (long)_DAT_112717e20;
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar3;
    _objc_release(uVar6);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar8 = param_1 + lVar8;
    _objc_loadWeakRetained();
    lVar4 = lVar8;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112717e24;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar8);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar9));
    func_0x00010bedbfc0(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f6866c; end: 104f686c7; -[SCNFMOnboardingAlertScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f6866c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_112717e24),param_2,0);
  puStack_28 = PTR_PTR_1126e53e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f686c8; end: 104f68853; -[SCNFMOnboardingAlertScopeEntryPoint _updateNFMOnboardingStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f686c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar6 = (long)_DAT_112717e28;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c23f980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b29c0;
  _objc_alloc();
  lVar1 = lVar4;
  func_0x00010c2939e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ef20(puVar5,param_2,lVar1,1,1);
  _objc_release(lVar1);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar1 = lVar6;
  func_0x00010c23f960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104f68854;
  puStack_60 = &UNK_11085d650;
  lStack_58 = param_1;
  puStack_50 = puVar5;
  lStack_48 = lVar4;
  _objc_retain(lVar4);
  _objc_retain(puVar5);
  func_0x00010c28a000(lVar2,param_2,puVar5,&puStack_78);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lStack_48);
  _objc_release(puStack_50);
  _objc_release(lVar4);
  _objc_release(puVar5);
  return;
}



/* Entry: 104f68854; end: 104f68923;  */

void FUN_104f68854(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c07e0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 104f68924; end: 104f6892b;  */

void FUN_104f68924(void)

{
  return;
}



/* Entry: 104f6892c; end: 104f6899f; -[SCNFMOnboardingAlertScopeEntryPoint didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f6892c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112717e18;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74fc0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f689a0; end: 104f689eb; -[SCNFMOnboardingAlertScopeEntryPoint didSelectSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f689a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112717e18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7af80();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f689ec; end: 104f68a77; -[SCNFMOnboardingAlertScopeEntryPoint didOpenChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f689ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112717e18;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf741c0(lVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f68a78; end: 104f68adb; -[SCNFMOnboardingAlertScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f68a78(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717e1c);
  _objc_destroyWeak(param_1 + _DAT_112717e28);
  _objc_destroyWeak(param_1 + _DAT_112717e18);
  _objc_storeStrong(param_1 + _DAT_112717e24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717e20,0);
  return;
}



/* Entry: 104f68adc; end: 104f68b7f; -[SCNFMOnboardingPromptTrayViewController initWithTrayView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104f68adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e53e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112717e2c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar3));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f68b80; end: 104f68e4f; -[SCNFMOnboardingPromptTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f68b80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126e53e8;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112717e2c;
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  uStack_88 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar17);
  uStack_80 = uVar9;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  uStack_78 = uVar13;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar3;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 104f68e50; end: 104f68e57; -[SCNFMOnboardingPromptTrayViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_104f68e50(void)

{
  return 1;
}



/* Entry: 104f68e58; end: 104f68e6b; -[SCNFMOnboardingPromptTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f68e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717e2c,0);
  return;
}



/* Entry: 104f68e6c; end: 104f69023; -[SCNFMOnboardingPromptViewController initWithvaldiRuntimeProvider:delegate:nonFriendDisplayName:hasUnreadMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104f68e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e53f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1c8b80(puVar1);
    lVar5 = (long)_DAT_112717e30;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112717e34),param_4);
    lVar5 = (long)_DAT_112717e38;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112717e3c) = param_6;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdf50c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112717e40);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112717e40) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b2c28;
    _objc_alloc();
    func_0x00010c0555c0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112717e44);
    *(undefined **)((long)puVar1 + (long)_DAT_112717e44) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    lVar5 = (long)_DAT_112717e48;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar4;
    _objc_release(uVar2);
    func_0x00010c219e20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c167420(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c219c20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c219d60(*(undefined8 *)((long)puVar1 + lVar5));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


