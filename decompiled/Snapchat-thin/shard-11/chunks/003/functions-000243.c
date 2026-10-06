/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10846d990; end: 10846da83;  */

void FUN_10846d990(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110e610f8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 3) {
    puVar3 = PTR_PTR_1126b1080;
    _objc_alloc_init(PTR_PTR_1126b1080);
    lVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067ec0();
    func_0x00010c1843a0(puVar3,param_2,lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar3,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b4ca0();
    func_0x00010c220e20(puVar3,param_2,lVar2);
    _objc_release(lVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10846da84; end: 10846dcb3;  */

void FUN_10846da84(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c0de8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1);
  _objc_release(puVar2);
  func_0x00010c1ec220(puVar1);
  uVar3 = param_1;
  FUN_10846d990(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1805c0(puVar1);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x000108f13840(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c17cd40(puVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0dd8;
  _objc_opt_new(PTR_PTR_1126c0dd8);
  puVar4 = puVar1;
  func_0x00010bf454e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805c0(puVar2);
  _objc_release(puVar4);
  if (param_6 == 0) {
    lVar5 = param_2;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      puVar4 = PTR_PTR_1126d9760;
      _objc_opt_new(PTR_PTR_1126d9760);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204720(puVar4);
      _objc_release(puVar6);
      puVar6 = puVar4;
      func_0x00010c2414e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar6);
      func_0x00010c2054a0(puVar2);
      _objc_release(puVar4);
    }
  }
  else {
    func_0x00010c197f60(puVar2);
  }
  if (param_3 != 0) {
    puVar4 = puVar2;
    func_0x00010c23cda0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1edc00();
    _objc_release(puVar4);
  }
  func_0x00010c1ebdc0(puVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10846dcb4; end: 10846df3f;  */

void FUN_10846dcb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5c48;
  _objc_opt_new();
  puVar3 = puVar2;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2);
  _objc_release(puVar3);
  func_0x00010c1d64a0(puVar2);
  uVar12 = param_2;
  lVar8 = param_3;
  func_0x000108f13840(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar2);
  _objc_release(uVar12);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar9 = auStack_f0;
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  iVar10 = (int)param_6;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar12 = *(undefined8 *)(lVar11 * 8);
      puVar5 = PTR_PTR_1126c0dd8;
      _objc_opt_new();
      FUN_10846d990(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1805c0(puVar5);
      _objc_release(uVar12);
      puVar6 = PTR_PTR_1126d5c50;
      _objc_opt_new();
      func_0x00010c19b200();
      func_0x00010c196c60(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    puVar9 = auStack_f0;
    lVar4 = param_1;
    func_0x00010bf52a60();
    iVar10 = (int)param_6;
  }
  _objc_release(param_1);
  puVar5 = puVar3;
  func_0x00010c1ebde0(puVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(lVar8);
    puVar2 = PTR_PTR_1126d5c48;
    _objc_retain(puVar9);
    _objc_retain(puVar5);
    _objc_retain(param_1);
    _objc_opt_new(puVar2);
    puVar3 = puVar2;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    func_0x00010c1ec1a0(puVar2);
    _objc_release(puVar3);
    func_0x00010c1d64a0(puVar2);
    puVar3 = puVar5;
    func_0x000108f13840(puVar5,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar5);
    func_0x00010c17cd40(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0dd8;
    _objc_opt_new(PTR_PTR_1126c0dd8);
    lVar4 = param_1;
    FUN_10846d990(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1805c0(puVar3);
    _objc_release(lVar4);
    puVar5 = PTR_PTR_1126d5c50;
    _objc_opt_new(PTR_PTR_1126d5c50);
    func_0x00010c19b200();
    func_0x00010c196c60(puVar3);
    if (iVar10 == 0) {
      lVar4 = lVar8;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        puVar6 = PTR_PTR_1126d9760;
        _objc_opt_new(PTR_PTR_1126d9760);
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c204720(puVar6);
        _objc_release(puVar7);
        puVar7 = puVar6;
        func_0x00010c2414e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar7);
        func_0x00010c2054a0(puVar3);
        _objc_release(puVar6);
      }
    }
    else {
      func_0x00010c197f60(puVar3);
    }
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebde0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010c1359c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10846df40; end: 10846e1bf;  */

void FUN_10846df40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d5c48;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d64a0(puVar1);
  uVar3 = param_3;
  func_0x000108f13840(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c17cd40(puVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0dd8;
  _objc_opt_new(PTR_PTR_1126c0dd8);
  uVar3 = param_1;
  FUN_10846d990(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1805c0(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126d5c50;
  _objc_opt_new(PTR_PTR_1126d5c50);
  func_0x00010c19b200();
  func_0x00010c196c60(puVar2);
  if (param_6 == 0) {
    lVar5 = param_2;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      puVar6 = PTR_PTR_1126d9760;
      _objc_opt_new(PTR_PTR_1126d9760);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204720(puVar6);
      _objc_release(puVar7);
      puVar7 = puVar6;
      func_0x00010c2414e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar7);
      func_0x00010c2054a0(puVar2);
      _objc_release(puVar6);
    }
  }
  else {
    func_0x00010c197f60(puVar2);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebde0(puVar1);
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010c1359c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10846e1c0; end: 10846e297;  */

void FUN_10846e1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c244e80(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10846e298; end: 10846e2e7;  */

void FUN_10846e298(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110a4a0f0,
                      &PTR___NSConcreteGlobalBlock_110a4a110);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10846e2e8; end: 10846e2ef;  */

void FUN_10846e2e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10846e2f0; end: 10846e317;  */

void FUN_10846e2f0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10846e318; end: 10846e4c7;  */

void FUN_10846e318(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if ((param_1 == (undefined *)0x0) ||
     (puVar5 = param_1, func_0x00010c13b980(), puVar5 == (undefined *)0x0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar1 = param_1;
    func_0x00010c13b960();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(puVar1);
          }
          uVar6 = *(ulong *)(lStack_128 + (long)puVar8 * 8);
          uVar3 = uVar6;
          func_0x00010c252d60();
          if (((int)uVar3 == 1) && (uVar3 = uVar6, func_0x00010bfdcc60(), (int)uVar3 != 0)) {
            uVar3 = uVar6;
            func_0x00010c2592e0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010bfd58a0();
            if ((uVar4 & 1) == 0) {
              func_0x00010bf454e0(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1805c0(uVar3,param_2,uVar6);
              _objc_release(uVar6);
            }
            func_0x00010befa120(puVar5,param_2,uVar3);
            _objc_release(uVar3);
          }
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    if ((param_1 == (undefined *)0x0) ||
       (puVar5 = param_1, func_0x00010c13b980(), puVar5 == (undefined *)0x0)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = param_1;
      func_0x00010c13b960();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar1;
      func_0x00010c252d60();
      if (((int)puVar5 == 1) && (puVar5 = puVar1, func_0x00010bfdcc60(), (int)puVar5 != 0)) {
        puVar5 = puVar1;
        func_0x00010c2592e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010bfd58a0();
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = puVar1;
          func_0x00010bf454e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1805c0(puVar5,param_2,puVar2);
          _objc_release(puVar2);
        }
      }
      else {
        puVar5 = (undefined *)0x0;
      }
      _objc_release(puVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10846e4c8; end: 10846e647;  */

void FUN_10846e4c8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (uVar3 = param_1, func_0x00010c13b980(), uVar3 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c13b960();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c252d60();
    if (((int)uVar3 == 1) && (uVar3 = uVar1, func_0x00010bfdcc60(), (int)uVar3 != 0)) {
      uVar3 = uVar1;
      func_0x00010c2592e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bfd58a0();
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar1;
        func_0x00010bf454e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1805c0(uVar3,param_2,uVar2);
        _objc_release(uVar2);
      }
    }
    else {
      uVar3 = 0;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10846e648; end: 10846e73f;  */

void FUN_10846e648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10846e740; end: 10846e82b;  */

void FUN_10846e740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126c0dd0;
  _objc_alloc(PTR_PTR_1126c0dd0);
  puVar2 = PTR_PTR_1126c0dc8;
  func_0x00010bf09ec0(*(undefined8 *)(param_1 + 0x38),PTR_PTR_1126c0dc8,param_2,
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ffe0(puVar1,param_2,puVar2,uVar3,*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (*(ulong *)(param_1 + 0x48) <= uVar4) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dfd40(uVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(uVar3);
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x28),param_2,0);
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
  func_0x00010c150080(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10846e82c; end: 10846eaf7;  */

void FUN_10846e82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_11);
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_16);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_6);
  func_0x00010bfa5340(param_1);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_16);
  _objc_release(param_11);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_6);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_6);
  return;
}



/* Entry: 10846eaf8; end: 10846eb67;  */

void FUN_10846eaf8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10846dcb4(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010c1d64a0(uVar1);
  }
  _objc_retain(0);
  func_0x00010c21ab00(uVar1);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10846eb68; end: 10846f157;  */

void FUN_10846eb68(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 unaff_x28;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_220;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  FUN_108471400(param_3,*(undefined8 *)(param_1 + 0x20));
  lVar13 = param_3;
  FUN_10846e318();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x10846eee4;
  puStack_148 = &UNK_110a4a160;
  _objc_retain(param_2);
  lStack_1a8 = param_2;
  lStack_140 = param_2;
  _objc_retain(puVar11);
  puStack_1b0 = puVar11;
  puStack_138 = puVar11;
  _objc_retain(lVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  lStack_130 = lVar13;
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  uStack_128 = uVar14;
  _objc_retain(uVar15);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  uStack_120 = uVar15;
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = uVar14;
  _objc_retain(uVar15);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  uStack_110 = uVar15;
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  uStack_108 = uVar14;
  _objc_retain(uVar15);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uStack_f8 = uVar15;
  _objc_retain(uVar14);
  ppuVar1 = &puStack_160;
  uStack_100 = uVar14;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined8 *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  _objc_retain(lVar13);
  lVar12 = lVar13;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    puVar11 = (undefined *)*puStack_190;
    do {
      param_2 = 0;
      do {
        if ((undefined *)*puStack_190 != puVar11) {
          _objc_enumerationMutation(lVar13);
        }
        uVar14 = *(undefined8 *)(lStack_198 + param_2 * 8);
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = uVar14;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(unaff_x28);
        _objc_release(uVar14);
        param_2 = param_2 + 1;
      } while (lVar12 != param_2);
      lVar12 = lVar13;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar13);
  puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057ea0();
  _objc_release();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar7 = PTR____NSDictionary0__struct_11034ab58;
    (*(code *)ppuVar1[2])(ppuVar1);
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = (undefined *)0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    FUN_10846e1c0(puVar2,puVar4,ppuVar1,*(undefined8 *)(param_1 + 0x58));
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(lStack_130);
  _objc_release(puStack_138);
  _objc_release(lStack_140);
  _objc_release(lVar13);
  _objc_release(puStack_1b0);
  _objc_release(param_3);
  lVar12 = lStack_1a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_1b8 = 0x10846eee4;
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_210 = unaff_x28;
  puStack_208 = puVar3;
  puStack_200 = puVar4;
  puStack_1f8 = puVar2;
  ppuStack_1f0 = ppuVar1;
  lStack_1e8 = param_1;
  lStack_1e0 = lVar13;
  puStack_1d8 = puVar11;
  lStack_1d0 = param_3;
  lStack_1c8 = param_2;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar11 = PTR_PTR_1126b0ef8;
  _objc_alloc();
  func_0x00010c03ef40();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lVar8 = *(long *)(lVar12 + 0x30);
  _objc_retain(lVar8);
  lVar13 = lVar8;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar9 = *plStack_2d0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_2d0 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        uVar16 = *(undefined8 *)(lStack_2d8 + lVar10 * 8);
        uVar5 = *(undefined8 *)(lVar12 + 0x38);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf12ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(lVar12 + 0x40);
        uVar15 = *(undefined8 *)(lVar12 + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        FUN_108482f84(uVar16,puVar11,0,uVar6,0,uVar14,puVar7,0,0,uVar15,
                      *(undefined8 *)(lVar12 + 0x50),*(undefined8 *)(lVar12 + 0x58));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        _objc_release(uVar6);
        _objc_release(uVar5);
        func_0x00010befa120(puVar2);
        _objc_release(uVar16);
        lVar10 = lVar10 + 1;
      } while (lVar13 != lVar10);
      lVar13 = lVar8;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(lVar8);
  lVar13 = *(long *)(lVar12 + 0x68);
  if ((lVar13 != 0) && (lVar12 = *(long *)(lVar12 + 0x60), lVar12 != 0)) {
    puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_308 = 0xc2000000;
    pcStack_300 = FUN_10846f158;
    puStack_2f8 = &UNK_11084aaa8;
    _objc_retain(lVar13);
    lStack_2e8 = lVar13;
    _objc_retain(puVar2);
    puStack_2f0 = puVar2;
    func_0x000107c27d8c(lVar12,&puStack_310);
    _objc_release(puStack_2f0);
    _objc_release(lStack_2e8);
  }
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010846f168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar7 + 0x28) + 0x10))
            (*(long *)(puVar7 + 0x28),*(undefined8 *)(puVar7 + 0x20),0);
  return;
}



/* Entry: 10846f158; end: 10846f16b;  */

void FUN_10846f158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010846f168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10846f16c; end: 10846f3f7;  */

void FUN_10846f16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_11);
  _objc_retain();
  _objc_retain(param_15);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_6);
  func_0x00010bfa5340(param_1);
  _objc_release(param_12);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_11);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_6);
  _objc_release(param_12);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_6);
  return;
}



/* Entry: 10846f3f8; end: 10846f46f;  */

void FUN_10846f3f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10846df40(uVar1,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),0);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010c1d64a0(uVar1);
  }
  _objc_retain(0);
  func_0x00010c21ab00(uVar1);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10846f470; end: 10846f7fb;  */

void FUN_10846f470(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_10846e4c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    lVar8 = *(long *)(param_1 + 0x58);
    if ((lVar8 == 0) || (lVar5 = *(long *)(param_1 + 0x20), lVar5 == 0)) goto LAB_10846f7a0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10846f7fc;
    puStack_90 = &UNK_11084aaa8;
    _objc_retain(lVar8);
    lStack_80 = lVar8;
    _objc_retain(param_4);
    uStack_88 = param_4;
    func_0x000107c27d8c(lVar5,&puStack_a8);
    _objc_release(uStack_88);
    lVar8 = lStack_80;
  }
  else {
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_10846f810;
    puStack_100 = &UNK_110a4a160;
    _objc_retain(param_2);
    lStack_f8 = param_2;
    _objc_retain(puVar1);
    puStack_f0 = puVar1;
    _objc_retain(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lStack_e8 = lVar2;
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uStack_e0 = uVar6;
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uStack_d8 = uVar7;
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uStack_d0 = uVar6;
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uStack_c8 = uVar7;
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    uStack_c0 = uVar6;
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uStack_b0 = uVar7;
    _objc_retain(uVar6);
    ppuVar3 = &puStack_118;
    uStack_b8 = uVar6;
    _objc_retainBlock();
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc();
    lVar8 = lVar2;
    func_0x00010bf454e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ea0();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar8);
    if (puVar4 == (undefined *)0x0) {
      (*(code *)ppuVar3[2])(ppuVar3,PTR____NSDictionary0__struct_11034ab58);
    }
    else {
      lVar8 = lVar2;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_78 = lVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0x15;
      _dispatch_get_global_queue(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_10846e1c0(puVar4,uVar6,ppuVar3,*(undefined8 *)(param_1 + 0x50));
      _objc_release(uVar6);
      _objc_release(puVar4);
      _objc_release(lVar5);
      _objc_release(lVar8);
    }
    _objc_release(ppuVar3);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(lStack_e8);
    _objc_release(puStack_f0);
    lVar8 = lStack_f8;
  }
  _objc_release(lVar8);
LAB_10846f7a0:
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010846f80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),0,*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 10846f7fc; end: 10846f80f;  */

void FUN_10846f7fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010846f80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10846f810; end: 10846f99f;  */

void FUN_10846f810(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126b0ef8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  func_0x00010c03ef40();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_108482f84(uVar6,puVar2,0,uVar4,0,uVar1,param_2,0,0,uVar5,*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar8 = *(long *)(param_1 + 0x68);
  if ((lVar8 != 0) && (lVar7 = *(long *)(param_1 + 0x60), lVar7 != 0)) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10846f9a0;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(lVar8);
    lStack_58 = lVar8;
    _objc_retain(uVar6);
    uStack_60 = uVar6;
    func_0x000107c27d8c(lVar7,&puStack_80);
    _objc_release(uStack_60);
    _objc_release(lStack_58);
  }
  _objc_release(uVar6);
  _objc_release(puVar2);
  return;
}



/* Entry: 10846f9a0; end: 10846f9b3;  */

void FUN_10846f9a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010846f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10846f9b4; end: 10846fc27;  */

void FUN_10846f9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_6);
  func_0x00010bfaa9e0(param_1);
  _objc_release(param_13);
  _objc_release(param_16);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_6);
  _objc_release(param_13);
  _objc_release(param_16);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_6);
  return;
}



/* Entry: 10846fc28; end: 10846fc87;  */

void FUN_10846fc28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10846da84(uVar1,0,*(undefined1 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010c21ab00(uVar1);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10846fc88; end: 108470043;  */

void FUN_10846fc88(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2592e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar8 = *(long *)(param_1 + 0x58);
    if ((lVar8 == 0) || (lVar5 = *(long *)(param_1 + 0x20), lVar5 == 0)) goto LAB_10846ffe0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108470044;
    puStack_90 = &UNK_11084aaa8;
    _objc_retain(lVar8);
    lStack_80 = lVar8;
    _objc_retain(param_4);
    uStack_88 = param_4;
    func_0x000107c27d8c(lVar5,&puStack_a8);
    _objc_release(uStack_88);
    lVar8 = lStack_80;
  }
  else {
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10847005c;
    puStack_108 = &UNK_110a4a220;
    _objc_retain(param_2);
    lStack_100 = param_2;
    _objc_retain(puVar1);
    puStack_f8 = puVar1;
    _objc_retain(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lStack_f0 = lVar2;
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uStack_e8 = uVar6;
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uStack_e0 = uVar7;
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uStack_d8 = uVar6;
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uStack_d0 = uVar7;
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    uStack_c8 = uVar6;
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uStack_b0 = uVar7;
    _objc_retain(uVar6);
    uStack_c0 = uVar6;
    _objc_retain(param_3);
    ppuVar3 = &puStack_120;
    lStack_b8 = param_3;
    _objc_retainBlock();
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc();
    lVar8 = lVar2;
    func_0x00010bf454e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ea0();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar8);
    if (puVar4 == (undefined *)0x0) {
      (*(code *)ppuVar3[2])(ppuVar3,PTR____NSDictionary0__struct_11034ab58);
    }
    else {
      lVar8 = lVar2;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_78 = lVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0x15;
      _dispatch_get_global_queue(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_10846e1c0(puVar4,uVar6,ppuVar3,*(undefined8 *)(param_1 + 0x50));
      _objc_release(uVar6);
      _objc_release(puVar4);
      _objc_release(lVar5);
      _objc_release(lVar8);
    }
    _objc_release(ppuVar3);
    _objc_release(lStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_b0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(lStack_f0);
    _objc_release(puStack_f8);
    lVar8 = lStack_100;
  }
  _objc_release(lVar8);
LAB_10846ffe0:
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108470058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),0,0,*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 108470044; end: 10847005b;  */

void FUN_108470044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108470058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10847005c; end: 108470203;  */

void FUN_10847005c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126b0ef8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03ef40();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_108482f84(uVar5,puVar1,0,uVar3,0,uVar6,param_2,0,0,uVar4,*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar8 = *(long *)(param_1 + 0x70);
  if ((lVar8 != 0) && (lVar7 = *(long *)(param_1 + 0x60), lVar7 != 0)) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108470204;
    puStack_70 = &UNK_11084a9e8;
    _objc_retain(lVar8);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    lStack_58 = lVar8;
    _objc_retain(uVar6);
    uStack_68 = uVar6;
    _objc_retain(uVar5);
    uStack_60 = uVar5;
    func_0x000107c27d8c(lVar7,&puStack_88);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(lStack_58);
  }
  _objc_release(uVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 108470204; end: 10847021b;  */

void FUN_108470204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108470218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10847021c; end: 108470d87;  */

void FUN_10847021c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  double dVar20;
  long lStack_428;
  long lStack_420;
  int iStack_3e4;
  long lStack_3d8;
  ulong uStack_3d0;
  long lStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  long lStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  code *pcStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  ulong uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_238 = &uStack_240;
  uStack_240 = 0;
  uStack_230 = 0x3032000000;
  pcStack_228 = FUN_108470d88;
  uStack_220 = 0x108470d98;
  uStack_218 = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  _objc_retain(param_1);
  lStack_428 = param_1;
  func_0x00010bf52a60();
  if (lStack_428 != 0) {
    lVar16 = *plStack_270;
    do {
      lStack_420 = 0;
      do {
        if (*plStack_270 != lVar16) {
          _objc_enumerationMutation(param_1);
        }
        lVar4 = *(long *)(lStack_278 + lStack_420 * 8);
        dVar20 = 0.0;
        lStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2a8 = 0;
        plStack_2b0 = (long *)0x0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        func_0x00010c0ece40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf32220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        lStack_3d8 = lVar5;
        func_0x00010bf52a60();
        if (lStack_3d8 != 0) {
          lVar4 = *plStack_2b0;
          do {
            lStack_3c8 = 0;
            do {
              if (*plStack_2b0 != lVar4) {
                _objc_enumerationMutation(lVar5);
              }
              uVar18 = *(ulong *)(lStack_2b8 + lStack_3c8 * 8);
              uVar6 = uVar18;
              func_0x00010bf31ee0();
              if ((int)uVar6 == 3) {
                uVar6 = uVar18;
                func_0x00010c11b540();
                _objc_retainAutoreleasedReturnValue();
                uVar19 = uVar6;
                func_0x00010c2387e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(uVar6);
                if (uVar19 != 0) {
                  uVar6 = param_3;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar19 = uVar6;
                  func_0x00010c07aa60();
                  _objc_release(uVar6);
                  if ((uVar19 & 1) == 0) {
                    uVar6 = uVar18;
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = uVar6;
                    func_0x00010c2a2900();
                    _objc_retainAutoreleasedReturnValue();
                    uStack_3d0 = uVar19;
                    func_0x00010c08abc0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar19);
                    _objc_release(uVar6);
                    uVar6 = uVar18;
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = uVar6;
                    func_0x00010c2a2900();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c242a00();
                    _objc_release(uVar19);
                    _objc_release(uVar6);
                    dVar20 = 0.0;
                    uStack_2d8 = 0;
                    uStack_2e0 = 0;
                    uStack_2c8 = 0;
                    uStack_2d0 = 0;
                    lStack_2f8 = 0;
                    uStack_300 = 0;
                    uStack_2e8 = 0;
                    plStack_2f0 = (long *)0x0;
                    uVar6 = uVar18;
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = uVar6;
                    func_0x00010c245680();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar19;
                    func_0x00010c2456a0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar19);
                    _objc_release(uVar6);
                    uVar6 = uVar10;
                    func_0x00010bf52a60();
                    if (uVar6 != 0) {
                      lVar8 = *plStack_2f0;
                      do {
                        uVar19 = 0;
                        do {
                          if (*plStack_2f0 != lVar8) {
                            _objc_enumerationMutation(uVar10);
                          }
                          lVar9 = *(long *)(lStack_2f8 + uVar19 * 8);
                          lVar11 = lVar9;
                          func_0x00010c26e920();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          if (lVar11 != 0) {
                            func_0x00010c26e920();
                            _objc_retainAutoreleasedReturnValue();
                            lVar8 = lVar9;
                            func_0x00010c117720();
                            iStack_3e4 = (int)lVar8;
                            goto LAB_108470850;
                          }
                          uVar19 = uVar19 + 1;
                        } while (uVar6 != uVar19);
                        uVar6 = uVar10;
                        func_0x00010bf52a60();
                      } while (uVar6 != 0);
                    }
                    iStack_3e4 = 0;
LAB_108470858:
                    _objc_release(uVar10);
                  }
                  else {
                    uVar6 = uVar18;
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = uVar6;
                    func_0x00010c2a2900();
                    _objc_retainAutoreleasedReturnValue();
                    uStack_3d0 = uVar19;
                    func_0x00010c25e5c0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar19);
                    _objc_release(uVar6);
                    uVar6 = uVar18;
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = uVar6;
                    func_0x00010c2a2900();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c25e600();
                    _objc_release(uVar19);
                    _objc_release(uVar6);
                    uVar6 = uVar18;
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = uVar6;
                    func_0x00010c2a2900();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar19;
                    func_0x00010bf08ca0();
                    iStack_3e4 = (int)uVar10;
                    _objc_release(uVar19);
                    _objc_release(uVar6);
                    uVar6 = uVar18;
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = uVar6;
                    func_0x00010c2a2900();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar19;
                    func_0x00010bf3d5a0();
                    _objc_release(uVar19);
                    _objc_release(uVar6);
                    uVar6 = uVar18;
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = uVar6;
                    func_0x00010c11ae80();
                    _objc_release(uVar6);
                    uVar6 = uStack_3d0;
                    func_0x00010c08fa60();
                    if ((uVar6 != 0) && (uVar19 <= uVar10 - 1)) {
                      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                      _objc_opt_new();
                      uVar17 = puStack_238[5];
                      puStack_238[5] = puVar7;
                      _objc_release(uVar17);
                      uVar6 = uVar18;
                      func_0x00010c11b540(uVar18);
                      _objc_retainAutoreleasedReturnValue();
                      uVar19 = uVar6;
                      func_0x00010c245680();
                      _objc_retainAutoreleasedReturnValue();
                      uVar10 = uVar19;
                      func_0x00010c2456a0();
                      _objc_retainAutoreleasedReturnValue();
                      puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_328 = 0xc2000000;
                      pcStack_320 = FUN_108470da0;
                      puStack_318 = &UNK_110a4a280;
                      puStack_308 = &uStack_240;
                      _objc_retain(uStack_3d0);
                      uStack_310 = uStack_3d0;
                      func_0x00010bf97e80(uVar10);
                      _objc_release(uVar10);
                      _objc_release(uVar19);
                      _objc_release(uVar6);
                      _objc_release(uStack_310);
                    }
                    lVar8 = puStack_238[5];
                    func_0x00010bf529e0();
                    if (lVar8 != 0) {
                      uVar10 = param_3;
                      func_0x00010c269d40(param_3);
                      _objc_retainAutoreleasedReturnValue();
                      lVar9 = puStack_238[5];
                      func_0x00010bf51e00(lVar9);
                      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
                      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c26f320();
                      dVar20 = (dVar20 + 604800.0) * 1000.0;
                      func_0x00010c066d60(dVar20,uVar10);
                      _objc_release(puVar7);
LAB_108470850:
                      _objc_release(lVar9);
                      goto LAB_108470858;
                    }
                  }
                  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  uVar6 = uVar18;
                  func_0x00010c11b540();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf8c980();
                  func_0x00010c14de00(puVar7);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar6);
                  puVar12 = puVar2;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar12 == (undefined *)0x0) {
                    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                    func_0x00010c1d0640(puVar2);
                    _objc_release(puVar12);
                  }
                  puVar12 = puVar2;
                  func_0x00010c0e00e0(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar18;
                  func_0x00010c11b540(uVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar12);
                  _objc_release(uVar6);
                  _objc_release(puVar12);
                  if (iStack_3e4 == 0) {
                    uVar6 = uStack_3d0;
                    func_0x00010c08fa60();
                    if (uVar6 != 0) goto LAB_108470950;
                    func_0x00010befa120(puVar3);
                  }
                  else {
LAB_108470950:
                    puVar12 = PTR_PTR_1126cc378;
                    _objc_alloc(PTR_PTR_1126cc378);
                    uVar6 = uVar18;
                    func_0x00010bf454e0(uVar18);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c298be0();
                    uVar19 = uVar18;
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar19;
                    func_0x00010c2a2900();
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = uVar10;
                    func_0x00010bf3d5a0();
                    func_0x00010c11b540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar14 = uVar18;
                    func_0x00010c2387e0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar15 = uVar14;
                    func_0x00010c237cc0();
                    _objc_retainAutoreleasedReturnValue();
                    dVar20 = (double)(long)uVar13;
                    func_0x00010c04dd20(puVar12);
                    func_0x00010befa120(puVar1);
                    _objc_release(puVar12);
                    _objc_release(uVar15);
                    _objc_release(uVar14);
                    _objc_release(uVar18);
                    _objc_release(uVar10);
                    _objc_release(uVar19);
                    _objc_release(uVar6);
                  }
                  _objc_release(puVar7);
                  _objc_release(uStack_3d0);
                }
              }
              lStack_3c8 = lStack_3c8 + 1;
            } while (lStack_3c8 != lStack_3d8);
            lStack_3d8 = lVar5;
            func_0x00010bf52a60();
          } while (lStack_3d8 != 0);
        }
        _objc_release(lVar5);
        lStack_420 = lStack_420 + 1;
      } while (lStack_420 != lStack_428);
      lStack_428 = param_1;
      func_0x00010bf52a60();
    } while (lStack_428 != 0);
  }
  lVar16 = param_1;
  _objc_release();
  _dispatch_group_create();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _dispatch_group_enter(lVar16);
  uVar6 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf51e00(puVar1);
  puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_358 = 0xc2000000;
  pcStack_350 = FUN_108470e50;
  puStack_348 = &UNK_110884708;
  _objc_retain(puVar7);
  puStack_340 = puVar7;
  _objc_retain(lVar16);
  lStack_338 = lVar16;
  func_0x00010c288ba0(uVar6);
  _objc_release(puVar12);
  _objc_release(uVar6);
  _dispatch_group_enter(lVar16);
  uVar6 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_390 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_388 = 0xc2000000;
  uStack_380 = 0x108470e7c;
  puStack_378 = &UNK_110884708;
  _objc_retain(puVar7);
  puStack_370 = puVar7;
  _objc_retain(lVar16);
  lStack_368 = lVar16;
  func_0x00010c108ee0(uVar6);
  _objc_release(uVar6);
  uVar17 = param_2;
  func_0x00010c11de00(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_3c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3b8 = 0xc2000000;
  uStack_3b0 = 0x108470ea8;
  puStack_3a8 = &UNK_11084aaa8;
  puStack_3a0 = puVar7;
  uStack_398 = param_4;
  _objc_retain(puVar7);
  _objc_retain(param_4);
  func_0x000100bc0718(lVar16,uVar17,&puStack_3c0);
  _objc_release(uVar17);
  _objc_release(puStack_3a0);
  _objc_release(uStack_398);
  _objc_release(lStack_368);
  _objc_release(puStack_370);
  _objc_release(lStack_338);
  _objc_release(puStack_340);
  _objc_release(puVar7);
  _objc_release(lVar16);
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_240,8);
  _objc_release(uStack_218);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = 8;
  __Block_object_dispose(&uStack_240);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(lVar16 + 0x28) = 0;
  return;
}



/* Entry: 108470d88; end: 108470d9f;  */

void FUN_108470d88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108470da0; end: 108470e4f;  */

void FUN_108470da0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bef60a0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar2 == 0) {
    func_0x00010c241220();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      *param_4 = 1;
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108470e50; end: 108470edf;  */

void FUN_108470e50(long param_1,undefined8 param_2)

{
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108470ee0; end: 1084710af;  */

undefined * FUN_108470ee0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar5 = uVar8;
        func_0x00010c259740(uVar8);
        func_0x00010c0df880(puVar6,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bf4b900(puVar2,param_2,puVar6);
        _objc_release(puVar6);
        if (((ulong)puVar7 & 1) == 0) {
          func_0x00010befa120(puVar3,param_2,uVar8);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(uVar8);
        func_0x00010c0df880(puVar6,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar6);
        _objc_release(puVar6);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(param_1);
  puVar6 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  iVar1 = (int)param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  puVar2 = (undefined *)0x0;
  if (iVar1 - 1U < 8) {
    puVar2 = (undefined *)((ulong)(iVar1 - 1U) + 1);
  }
  return puVar2;
}



/* Entry: 1084710b0; end: 1084710bf;  */

long FUN_1084710b0(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 - 1U < 8) {
    lVar1 = (ulong)(param_1 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 1084710c0; end: 1084713af;  */

void FUN_1084710c0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 == (undefined *)0x0) ||
     (puVar1 = param_1, func_0x00010bf31ee0(), (int)puVar1 != 0x26)) goto LAB_108471260;
  puVar1 = param_1;
  func_0x00010c23cdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2456c0();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x1) goto LAB_108471260;
  puVar1 = param_1;
  func_0x00010c23cdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_retain(puVar3);
  puVar1 = puVar3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf101c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  puVar6 = puVar3;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c27fa00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf101c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08fa60();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar3);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = puVar3;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c27fa00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf101e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (puVar5 != (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar1 = puVar3;
        func_0x00010c0c5340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c27fa00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010bf101e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar2);
        _objc_release(puVar1);
        puVar1 = param_2;
        func_0x00010c269d40(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf51660();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0c5340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c27fa00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16c580();
        _objc_release(puVar5);
        goto LAB_1084711bc;
      }
    }
  }
  else {
LAB_1084711bc:
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
LAB_108471260:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084713b0; end: 1084713ff;  */

void FUN_1084713b0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2592e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1084710c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108471400; end: 1084714ff;  */

void FUN_108471400(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar3 = param_1;
  func_0x00010c13b960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar1 = param_1;
      func_0x00010c13b960(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar2;
      func_0x00010c2592e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_1084710c0();
      _objc_release(uVar1);
      _objc_release(uVar2);
      uVar3 = uVar3 + 1;
      uVar1 = param_1;
      func_0x00010c13b960();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
    } while (uVar3 < uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108471500; end: 10847164b;  */

void FUN_108471500(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar11 = param_1;
  func_0x00010bfd9ca0();
  if ((int)lVar11 != 0) {
    lVar11 = param_1;
    func_0x00010c0ece40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf32220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar11 = lVar12;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar12);
        }
        puVar2 = param_2;
        FUN_1084710c0(*(undefined8 *)(lVar13 * 8));
        lVar13 = lVar13 + 1;
      } while (lVar11 != lVar13);
      lVar11 = lVar12;
      func_0x00010bf52a60();
    }
    _objc_release(lVar12);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  if (param_1 != 0) {
    func_0x00010c258b60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        FUN_108471500(*(undefined8 *)(lVar12 * 8),puVar2);
        lVar12 = lVar12 + 1;
      } while (lVar10 != lVar12);
      lVar10 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar3 = PTR_PTR_1126c0fa8;
  _objc_opt_new(PTR_PTR_1126c0fa8);
  puVar4 = puVar2;
  func_0x00010c25b720();
  puVar7 = puVar2;
  if ((long)puVar4 < 0xb) {
    if (puVar4 == (undefined *)0x2) {
      func_0x00010c259560(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108471954;
    }
    if (puVar4 != (undefined *)0x3) goto LAB_108471ac8;
    func_0x00010c259560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
LAB_108471828:
    puVar7 = puVar4;
    func_0x00010c2923e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c11ab20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620();
LAB_108471ab0:
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    if (puVar4 == (undefined *)0xb) {
      func_0x00010c259560(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
LAB_108471954:
      _objc_release(puVar7);
      puVar7 = puVar4;
      func_0x00010c11af80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11b1e0();
      puVar8 = puVar3;
      func_0x00010c11b560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b60();
      _objc_release(puVar8);
      _objc_release(puVar7);
      func_0x00010bf8c980(puVar4);
      puVar7 = puVar3;
      func_0x00010c11b560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193c40();
      _objc_release(puVar7);
      puVar7 = puVar4;
      func_0x00010c11af80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c11b560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b80();
LAB_108471aa8:
      _objc_release(puVar9);
      goto LAB_108471ab0;
    }
    if (puVar4 == (undefined *)0xd) {
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010afef86c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126c0fb0;
      _objc_opt_new(PTR_PTR_1126c0fb0);
      puVar9 = puVar4;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf5b480();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar9);
      puVar9 = puVar8;
      func_0x00010c08fa60();
      if (puVar9 == (undefined *)0x0) {
        puVar9 = puVar4;
        func_0x00010c292540(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c185c40(puVar7);
        _objc_release(puVar9);
      }
      else {
        func_0x00010c185c40(puVar7);
      }
      puVar5 = puVar4;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x000108f51d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar9 != (undefined *)0x0) {
        puVar5 = puVar9;
        func_0x000108f52050(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1805c0(puVar7);
        _objc_release(puVar5);
      }
      func_0x00010c202be0(puVar3);
      goto LAB_108471aa8;
    }
    if (puVar4 != (undefined *)0xe) goto LAB_108471ac8;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010afefd10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar4 != (undefined *)0x0) goto LAB_108471828;
  }
  _objc_release(puVar4);
LAB_108471ac8:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10847164c; end: 10847175f;  */

void FUN_10847164c(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    func_0x00010c258b60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        FUN_108471500(*(undefined8 *)(lVar11 * 8),param_2);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar3 = PTR_PTR_1126c0fa8;
  _objc_opt_new(PTR_PTR_1126c0fa8);
  puVar4 = param_2;
  func_0x00010c25b720();
  puVar7 = param_2;
  if ((long)puVar4 < 0xb) {
    if (puVar4 == (undefined *)0x2) {
      func_0x00010c259560(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108471954;
    }
    if (puVar4 != (undefined *)0x3) goto LAB_108471ac8;
    func_0x00010c259560(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
LAB_108471828:
    puVar7 = puVar4;
    func_0x00010c2923e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c11ab20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620();
LAB_108471ab0:
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    if (puVar4 == (undefined *)0xb) {
      func_0x00010c259560(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
LAB_108471954:
      _objc_release(puVar7);
      puVar7 = puVar4;
      func_0x00010c11af80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11b1e0();
      puVar8 = puVar3;
      func_0x00010c11b560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b60();
      _objc_release(puVar8);
      _objc_release(puVar7);
      func_0x00010bf8c980(puVar4);
      puVar7 = puVar3;
      func_0x00010c11b560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193c40();
      _objc_release(puVar7);
      puVar7 = puVar4;
      func_0x00010c11af80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c11b560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b80();
LAB_108471aa8:
      _objc_release(puVar9);
      goto LAB_108471ab0;
    }
    if (puVar4 == (undefined *)0xd) {
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010afef86c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126c0fb0;
      _objc_opt_new(PTR_PTR_1126c0fb0);
      puVar9 = puVar4;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf5b480();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar9);
      puVar9 = puVar8;
      func_0x00010c08fa60();
      if (puVar9 == (undefined *)0x0) {
        puVar9 = puVar4;
        func_0x00010c292540(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c185c40(puVar7);
        _objc_release(puVar9);
      }
      else {
        func_0x00010c185c40(puVar7);
      }
      puVar5 = puVar4;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x000108f51d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar9 != (undefined *)0x0) {
        puVar5 = puVar9;
        func_0x000108f52050(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1805c0(puVar7);
        _objc_release(puVar5);
      }
      func_0x00010c202be0(puVar3);
      goto LAB_108471aa8;
    }
    if (puVar4 != (undefined *)0xe) goto LAB_108471ac8;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010afefd10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar4 != (undefined *)0x0) goto LAB_108471828;
  }
  _objc_release(puVar4);
LAB_108471ac8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108471760; end: 108471aeb;  */

void FUN_108471760(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c0fa8;
  _objc_opt_new(PTR_PTR_1126c0fa8);
  puVar2 = param_1;
  func_0x00010c25b720();
  puVar5 = param_1;
  if ((long)puVar2 < 0xb) {
    if (puVar2 == (undefined *)0x2) {
      func_0x00010c259560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108471954;
    }
    if (puVar2 != (undefined *)0x3) goto LAB_108471ac8;
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
LAB_108471828:
    puVar5 = puVar2;
    func_0x00010c2923e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c11ab20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620();
LAB_108471ab0:
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    if (puVar2 == (undefined *)0xb) {
      func_0x00010c259560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
LAB_108471954:
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010c11af80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11b1e0();
      puVar6 = puVar1;
      func_0x00010c11b560(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b60();
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010bf8c980(puVar2);
      puVar5 = puVar1;
      func_0x00010c11b560(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193c40();
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010c11af80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c11b560(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b80();
LAB_108471aa8:
      _objc_release(puVar7);
      goto LAB_108471ab0;
    }
    if (puVar2 == (undefined *)0xd) {
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010afef86c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126c0fb0;
      _objc_opt_new(PTR_PTR_1126c0fb0);
      puVar7 = puVar2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf5b480();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar7);
      puVar7 = puVar6;
      func_0x00010c08fa60();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = puVar2;
        func_0x00010c292540(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c185c40(puVar5,param_2,puVar7);
        _objc_release(puVar7);
      }
      else {
        func_0x00010c185c40(puVar5,param_2,puVar6);
      }
      puVar3 = puVar2;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x000108f51d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar7 != (undefined *)0x0) {
        puVar3 = puVar7;
        func_0x000108f52050(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1805c0(puVar5,param_2,puVar3);
        _objc_release(puVar3);
      }
      func_0x00010c202be0(puVar1,param_2,puVar5);
      goto LAB_108471aa8;
    }
    if (puVar2 != (undefined *)0xe) goto LAB_108471ac8;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010afefd10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) goto LAB_108471828;
  }
  _objc_release(puVar2);
LAB_108471ac8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108471aec; end: 108471b67;  */

undefined * FUN_108471aec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b9a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edd198,
                        &UNK_10df2fd00,&UNK_10df2fd74,5,FUN_108471b68,0);
    do {
      if (puRam000000011372b9a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b9a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b9a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b9a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b9a0;
}



/* Entry: 108471b68; end: 108471b73;  */

bool FUN_108471b68(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108471b74; end: 108471bef;  */

undefined * FUN_108471b74(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b9a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edd1b8,
                        &UNK_10df2fd88,&UNK_10df2fdc8,5,FUN_108471bf0,0);
    do {
      if (puRam000000011372b9a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b9a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b9a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b9a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b9a8;
}



/* Entry: 108471bf0; end: 108471bfb;  */

bool FUN_108471bf0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108471bfc; end: 108471c8b;  */

undefined * FUN_108471bfc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b9b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edd1d8,
                        &UNK_10df2fddc,&UNK_10df2fe28,10,FUN_108471c8c,0,&UNK_10df2fe50);
    do {
      if (puRam000000011372b9b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b9b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b9b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b9b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b9b0;
}



/* Entry: 108471c8c; end: 108471c97;  */

bool FUN_108471c8c(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 108471c98; end: 108471d27;  */

undefined * FUN_108471c98(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b9b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edd1f8,
                        &UNK_10df2fe6a,&UNK_10df2feb4,9,FUN_108471d28,0,&UNK_10df2fed8);
    do {
      if (puRam000000011372b9b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b9b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b9b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b9b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b9b8;
}



/* Entry: 108471d28; end: 108471d33;  */

bool FUN_108471d28(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 108471d34; end: 108471daf;  */

undefined * FUN_108471d34(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b9c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edd218,
                        &UNK_10df2fef2,&UNK_10df2ff14,3,FUN_108471db0,0);
    do {
      if (puRam000000011372b9c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b9c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b9c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b9c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b9c0;
}



/* Entry: 108471db0; end: 108471dbb;  */

bool FUN_108471db0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108471dbc; end: 108471e37;  */

undefined * FUN_108471dbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b9c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edd238,
                        &UNK_10df2ff20,&UNK_10df2ff74,5,FUN_108471e38,0);
    do {
      if (puRam000000011372b9c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b9c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b9c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b9c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b9c8;
}



/* Entry: 108471e38; end: 108471e4f;  */

uint FUN_108471e38(uint param_1)

{
  return (uint)(param_1 < 7) & 0x73U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 108471e50; end: 108471ecb;  */

undefined * FUN_108471e50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b9d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edd258,
                        &UNK_10df2ff88,&UNK_10df2ffac,3,FUN_108471ecc,0);
    do {
      if (puRam000000011372b9d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b9d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b9d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b9d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b9d0;
}



/* Entry: 108471ecc; end: 108471ed7;  */

bool FUN_108471ecc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108471ed8; end: 108471f3f; +[SCSNTFNotificationType descriptor] */

void FUN_108471ed8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b9d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9ed70,
                        &PTR____CFConstantStringClassReference_110edd278,&PTR_DAT_11325c080,0,0,4,
                        0x1c);
    puRam000000011372b9d8 = puVar1;
  }
  return;
}



/* Entry: 108471f40; end: 108471fa7; +[SCSNTFNotificationReason descriptor] */

void FUN_108471f40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b9e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9edc0,
                        &PTR____CFConstantStringClassReference_110edd298,&PTR_DAT_11325c080,0,0,4,
                        0x1c);
    puRam000000011372b9e0 = puVar1;
  }
  return;
}



/* Entry: 108471fa8; end: 10847200f; +[SCSNTFSubscriptionStatus descriptor] */

void FUN_108471fa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b9e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9ee10,
                        &PTR____CFConstantStringClassReference_110edd2b8,&PTR_DAT_11325c080,0,0,4,
                        0x1c);
    puRam000000011372b9e8 = puVar1;
  }
  return;
}



/* Entry: 108472010; end: 108472077; +[SCSNTFNotificationStoryType descriptor] */

void FUN_108472010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b9f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9ee60,
                        &PTR____CFConstantStringClassReference_110edd2d8,&PTR_DAT_11325c080,0,0,4,
                        0x1c);
    puRam000000011372b9f0 = puVar1;
  }
  return;
}



/* Entry: 108472078; end: 1084720df; +[SCSNTFTargetUserInfo descriptor] */

void FUN_108472078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b9f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9eeb0,
                        &PTR____CFConstantStringClassReference_110edd2f8,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c5f8,7,0x40,0x1c);
    puRam000000011372b9f8 = puVar1;
  }
  return;
}



/* Entry: 1084720e0; end: 108472147; +[SCSNTFNotificationRequest descriptor] */

void FUN_1084720e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9ef00,
                        &PTR____CFConstantStringClassReference_110edd318,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c8d8,0x18,0x88,0x1c);
    puRam000000011372ba00 = puVar1;
  }
  return;
}



/* Entry: 108472148; end: 1084721af; +[SCSNTFNotificationResponse descriptor] */

void FUN_108472148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9ef50,
                        &PTR____CFConstantStringClassReference_110edd338,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c1f8,3,0x18,0x1c);
    puRam000000011372ba08 = puVar1;
  }
  return;
}



/* Entry: 1084721b0; end: 108472217; +[SCSNTFNotificationWorkItem descriptor] */

void FUN_1084721b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9efa0,
                        &PTR____CFConstantStringClassReference_110edd358,&PTR_DAT_11325c080,
                        &PTR_s_request_11325c258,3,0x20,0x1c);
    puRam000000011372ba10 = puVar1;
  }
  return;
}



/* Entry: 108472218; end: 10847227f; +[SCSNTFOptInStatus descriptor] */

void FUN_108472218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9eff0,
                        &PTR____CFConstantStringClassReference_110e259f8,&PTR_DAT_11325c080,
                        &PTR_s_userId_11325c478,6,0x28,0x1c);
    puRam000000011372ba18 = puVar1;
  }
  return;
}



/* Entry: 108472280; end: 1084722e7; +[SCSNTFOptInRequest descriptor] */

void FUN_108472280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f040,
                        &PTR____CFConstantStringClassReference_110edd378,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c378,4,0x20,0x1c);
    puRam000000011372ba20 = puVar1;
  }
  return;
}



/* Entry: 1084722e8; end: 10847234f; +[SCSNTFOptInResponse descriptor] */

void FUN_1084722e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f090,
                        &PTR____CFConstantStringClassReference_110edd398,&PTR_DAT_11325c080,
                        &PTR_s_status_11325c0f8,2,0x10,0x1c);
    puRam000000011372ba28 = puVar1;
  }
  return;
}



/* Entry: 108472350; end: 1084723cb; +[SCSNTFOptInResponse_Status descriptor] */

undefined * FUN_108472350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f0e0,
                        &PTR____CFConstantStringClassReference_110e05018,&PTR_DAT_11325c080,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam000000011372ba30 = puVar1;
  }
  return puRam000000011372ba30;
}



/* Entry: 1084723cc; end: 108472447; +[SCSNTFOptInResponse_TooManyOptIns descriptor] */

undefined * FUN_1084723cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f130,
                        &PTR____CFConstantStringClassReference_110edd3b8,&PTR_DAT_11325c080,
                        &PTR_s_limit_11325c138,2,0xc,0x1c);
    func_0x00010c228780();
    puRam000000011372ba38 = puVar1;
  }
  return puRam000000011372ba38;
}



/* Entry: 108472448; end: 1084724e3; +[SCSNTFOptInResponse_ErrorReason descriptor] */

undefined * FUN_108472448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f180,
                        &PTR____CFConstantStringClassReference_110edd3d8,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c098,1,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b9f090);
    puRam000000011372ba40 = puVar1;
  }
  return puRam000000011372ba40;
}



/* Entry: 1084724e4; end: 10847254b; +[SCSNTFGetOptInsRequest descriptor] */

void FUN_1084724e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f1d0,
                        &PTR____CFConstantStringClassReference_110edd3f8,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c2b8,3,0x18,0x1c);
    puRam000000011372ba48 = puVar1;
  }
  return;
}



/* Entry: 10847254c; end: 1084725b3; +[SCSNTFGetOptInsResponse descriptor] */

void FUN_10847254c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f220,
                        &PTR____CFConstantStringClassReference_110edd418,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c318,3,0x20,0x1c);
    puRam000000011372ba50 = puVar1;
  }
  return;
}



/* Entry: 1084725b4; end: 10847261b; +[SCSNTFBatchSendRequest descriptor] */

void FUN_1084725b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f270,
                        &PTR____CFConstantStringClassReference_110edd438,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c0b8,1,0x10,0x1c);
    puRam000000011372ba58 = puVar1;
  }
  return;
}



/* Entry: 10847261c; end: 108472683; +[SCSNTFBatchSendResponse descriptor] */

void FUN_10847261c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f2c0,
                        &PTR____CFConstantStringClassReference_110edd458,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c0d8,1,0x10,0x1c);
    puRam000000011372ba60 = puVar1;
  }
  return;
}



/* Entry: 108472684; end: 1084726eb; +[SCSNTFSendResult descriptor] */

void FUN_108472684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f310,
                        &PTR____CFConstantStringClassReference_110edd478,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c178,2,0x10,0x1c);
    puRam000000011372ba68 = puVar1;
  }
  return;
}



/* Entry: 1084726ec; end: 108472777; +[SCSNTFStoryNotification descriptor] */

undefined * FUN_1084726ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f360,
                        &PTR____CFConstantStringClassReference_110edd498,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c3f8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam000000011372ba70 = puVar1;
  }
  return puRam000000011372ba70;
}



/* Entry: 108472778; end: 1084727df; +[SCSNTFViewAfterDarkFriendStoryNotificationMetadata descriptor] */

void FUN_108472778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f3b0,
                        &PTR____CFConstantStringClassReference_110edd4b8,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c1b8,2,0x10,0x1c);
    puRam000000011372ba78 = puVar1;
  }
  return;
}



/* Entry: 1084727e0; end: 108472847; +[SCSNTFSpotlightThreadedRepliesNotificationMetadata descriptor] */

void FUN_1084727e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f400,
                        &PTR____CFConstantStringClassReference_110edd4d8,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c6d8,0x10,0x78,0x1c);
    puRam000000011372ba80 = puVar1;
  }
  return;
}



/* Entry: 108472848; end: 1084728af; +[SCSNTFStoryViewedNotificationMetadata descriptor] */

void FUN_108472848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f450,
                        &PTR____CFConstantStringClassReference_110edd4f8,&PTR_DAT_11325c080,
                        &PTR_DAT_11325c538,6,0x30,0x1c);
    puRam000000011372ba88 = puVar1;
  }
  return;
}



/* Entry: 1084728b0; end: 108472993; +[RPCStatus descriptor] */

void FUN_1084728b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ba90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f4f0,
                        &PTR____CFConstantStringClassReference_110e05018,&PTR_DAT_11325cbd8,
                        &PTR_s_code_11325cbf0,3,0x18,0x1c);
    puRam000000011372ba90 = puVar1;
  }
  return;
}



/* Entry: 108472994; end: 10847299f;  */

bool FUN_108472994(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084729a0; end: 108472a1b;  */

undefined * FUN_1084729a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372baa0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edd538,
                        &UNK_10df2ffdc,&UNK_10df30008,4,FUN_108472a1c,0);
    do {
      if (puRam000000011372baa0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372baa0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372baa0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372baa0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372baa0;
}



/* Entry: 108472a1c; end: 108472a27;  */

bool FUN_108472a1c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108472a28; end: 108472a8f; +[SCSNTFUserStoryId descriptor] */

void FUN_108472a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372baa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f590,
                        &PTR____CFConstantStringClassReference_110edd558,&PTR_DAT_11325cc60,
                        &PTR_s_userId_11325cc78,1,0x10,0x1c);
    puRam000000011372baa8 = puVar1;
  }
  return;
}



/* Entry: 108472a90; end: 108472af7; +[SCSNTFPublisherStoryId descriptor] */

void FUN_108472a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f5e0,
                        &PTR____CFConstantStringClassReference_110edd578,&PTR_DAT_11325cc60,
                        &PTR_s_publisherId_11325cc98,1,0x10,0x1c);
    puRam000000011372bab0 = puVar1;
  }
  return;
}



/* Entry: 108472af8; end: 108472b5f; +[SCSNTFOurStoryId descriptor] */

void FUN_108472af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f630,
                        &PTR____CFConstantStringClassReference_110edd598,&PTR_DAT_11325cc60,
                        &PTR_s_compositeStoryId_11325ccb8,1,0x10,0x1c);
    puRam000000011372bab8 = puVar1;
  }
  return;
}



/* Entry: 108472b60; end: 108472beb; +[SCSNTFNotificationEntityId descriptor] */

undefined * FUN_108472b60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f680,
                        &PTR____CFConstantStringClassReference_110edd5b8,&PTR_DAT_11325cc60,
                        &PTR_DAT_11325ccd8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam000000011372bac0 = puVar1;
  }
  return puRam000000011372bac0;
}



/* Entry: 108472bec; end: 108472c53; +[SCSNTFOptInState descriptor] */

void FUN_108472bec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f6d0,
                        &PTR____CFConstantStringClassReference_110edd5d8,&PTR_DAT_11325cc60,0,0,4,
                        0x1c);
    puRam000000011372bac8 = puVar1;
  }
  return;
}



/* Entry: 108472c54; end: 108472cbb; +[SCSNTFOptInType descriptor] */

void FUN_108472c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f720,
                        &PTR____CFConstantStringClassReference_110edd5f8,&PTR_DAT_11325cc60,0,0,4,
                        0x1c);
    puRam000000011372bad0 = puVar1;
  }
  return;
}



/* Entry: 108472cbc; end: 108472d23; +[SCSNTFOptInEntity descriptor] */

void FUN_108472cbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f770,
                        &PTR____CFConstantStringClassReference_110edd618,&PTR_DAT_11325cc60,
                        &PTR_s_id_p_11325ce58,4,0x20,0x1c);
    puRam000000011372bad8 = puVar1;
  }
  return;
}



/* Entry: 108472d24; end: 108472daf; +[SCSNTFNotificationRenderingData descriptor] */

undefined * FUN_108472d24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f7c0,
                        &PTR____CFConstantStringClassReference_110edd638,&PTR_DAT_11325cc60,
                        &PTR_DAT_11325cd38,3,0x20,0x1c);
    func_0x00010c229040();
    puRam000000011372bae0 = puVar1;
  }
  return puRam000000011372bae0;
}



/* Entry: 108472db0; end: 108472e2b; +[SCSNTFPublisherStory descriptor] */

undefined * FUN_108472db0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f810,
                        &PTR____CFConstantStringClassReference_110edd658,&PTR_DAT_11325cc60,
                        &PTR_s_iconURL_11325cf78,9,0x38,0x1c);
    func_0x00010c2289e0();
    puRam000000011372bae8 = puVar1;
  }
  return puRam000000011372bae8;
}



/* Entry: 108472e2c; end: 108472ea7; +[SCSNTFPublicUserStory descriptor] */

undefined * FUN_108472e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372baf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f860,
                        &PTR____CFConstantStringClassReference_110eb94f8,&PTR_DAT_11325cc60,
                        &PTR_s_iconURL_11325ced8,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam000000011372baf0 = puVar1;
  }
  return puRam000000011372baf0;
}



/* Entry: 108472ea8; end: 108472f23; +[SCSNTFSingleSnapStory descriptor] */

undefined * FUN_108472ea8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372baf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f8b0,
                        &PTR____CFConstantStringClassReference_110edd678,&PTR_DAT_11325cc60,
                        &PTR_s_iconURL_11325d098,9,0x40,0x1c);
    func_0x00010c2289e0();
    puRam000000011372baf8 = puVar1;
  }
  return puRam000000011372baf8;
}



/* Entry: 108472f24; end: 108472f9f; +[SCSNTFThumbnailInfo descriptor] */

undefined * FUN_108472f24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f900,
                        &PTR____CFConstantStringClassReference_110e8d958,&PTR_DAT_11325cc60,
                        &PTR_s_contentURL_11325cd98,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam000000011372bb00 = puVar1;
  }
  return puRam000000011372bb00;
}



/* Entry: 108472fa0; end: 108473097; +[SCSNTFPublisherSnapMediaInfo descriptor] */

undefined * FUN_108472fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f950,
                        &PTR____CFConstantStringClassReference_110edd698,&PTR_DAT_11325cc60,
                        &PTR_DAT_11325cdf8,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam000000011372bb08 = puVar1;
  }
  return puRam000000011372bb08;
}



/* Entry: 108473098; end: 1084730a3;  */

bool FUN_108473098(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 1084730a4; end: 10847310b; +[PushEligibilityCheckDetail descriptor] */

void FUN_1084730a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9f9f0,
                        &PTR____CFConstantStringClassReference_110edd6d8,&PTR_DAT_11325d1b8,0,0,4,
                        0x1c);
    puRam000000011372bb18 = puVar1;
  }
  return;
}



/* Entry: 10847310c; end: 10847328f;  */

undefined8 FUN_10847310c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    uVar9 = 0;
    if (lVar4 != 0) {
      do {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar3);
          }
          uVar5 = *(ulong *)(lVar10 * 8);
          func_0x00010c23ffa0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c23fe00();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x000108f571b4();
          _objc_release(uVar6);
          _objc_release(uVar5);
          if ((uVar7 & 1) != 0) {
            uVar9 = 1;
            goto LAB_108473238;
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
      uVar9 = 0;
    }
LAB_108473238:
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (lRam000000011372bb28 != -1) {
      func_0x000107c27d9c(0x11372bb28,&PTR___NSConcreteGlobalBlock_110a4a2b8);
    }
    uVar9 = uRam000000011372bb20;
    _objc_retain(uRam000000011372bb20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return uVar9;
  }
  return uVar9;
}



/* Entry: 108473290; end: 1084732e3;  */

void FUN_108473290(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372bb28 != -1) {
    func_0x000107c27d9c(0x11372bb28,&PTR___NSConcreteGlobalBlock_110a4a2b8);
  }
  uVar1 = uRam000000011372bb20;
  _objc_retain(uRam000000011372bb20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084732e4; end: 1084733c3;  */

void FUN_1084732e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar1 = uRam000000011372bb20;
  uRam000000011372bb20 = uVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55d80();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uRam000000011372bb20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ecdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1084733c4; end: 108473993;  */

void FUN_1084733c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126cc718;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c29a460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c29bbe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf358a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bef3160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar7 = param_3;
  func_0x00010c0ec600(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b340(param_3);
  uVar8 = param_3;
  func_0x00010bfe4640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbe4e0();
  _objc_release(param_3);
  func_0x00010c060e80(param_1,puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


