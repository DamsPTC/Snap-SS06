/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084c5e84; end: 1084c5ec3; -[SCAdResponse isSponsoredSnapInventory] */

bool FUN_1084c5e84(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bef4240();
  if (lVar2 == 0x16) {
    bVar1 = true;
  }
  else {
    func_0x00010bef4240(param_1);
    bVar1 = param_1 == 0xf;
  }
  return bVar1;
}



/* Entry: 1084c5ec4; end: 1084c5ef7; -[SCAdResponse isSponsoredSnapWithGenericProfile] */

void FUN_1084c5ec4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07f280();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0745d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isGenericProfile_1125fab80);
    return;
  }
  return;
}



/* Entry: 1084c5ef8; end: 1084c5f4f; -[SCAdResponse isSponsoredSnapWithGenericIcon] */

bool FUN_1084c5ef8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c07f280();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf20fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfc0f20();
    bVar1 = lVar2 != 0;
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 1084c5f50; end: 1084c5fb3; -[SCAdResponse creatorName] */

void FUN_1084c5f50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084c5fb4; end: 1084c6017; -[SCAdResponse creatorProfileLogoUrl] */

void FUN_1084c5fb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5b640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c116960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084c6018; end: 1084c60e7; -[SCAdResponse isEligibleToAppendCidForExbWithSnapIndex:collectionItemIndex:] */

long FUN_1084c6018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010bef52e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0716a0(param_1,param_2,param_4);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1084c60e8; end: 1084c617b;  */

void FUN_1084c60e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c115e60();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084c617c; end: 1084c620b;  */

void FUN_1084c617c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110a4f110);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084c620c; end: 1084c620f;  */

void FUN_1084c620c(void)

{
  return;
}



/* Entry: 1084c6210; end: 1084c659b;  */

void FUN_1084c6210(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain();
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        puVar10 = *(undefined **)(lVar12 * 8);
        puVar2 = puVar10;
        func_0x00010c242040();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf20540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = puVar3;
        func_0x00010bef60a0();
        if (puVar2 == (undefined *)0x9) {
          puVar2 = puVar3;
          func_0x00010bef59c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar2 != (undefined *)0x0) {
            func_0x00010bf5ac40();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar10;
            func_0x00010c0720c0();
            _objc_release(puVar10);
            if (((ulong)puVar2 & 1) != 0) {
              puVar2 = puVar3;
              func_0x00010bef59c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              goto LAB_1084c6384;
            }
          }
        }
        _objc_release(puVar3);
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar2 = (undefined *)0x0;
  }
LAB_1084c6384:
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar9 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar9);
        }
        lVar11 = *(long *)(lVar13 * 8);
        lVar5 = lVar11;
        func_0x00010c130960();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0c6e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar6);
        _objc_release(lVar5);
        if (lVar7 != 0) {
          func_0x00010c130960(lVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar11;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c0c6e00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar11);
        }
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_retain(lVar8);
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010bf5ac40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084c659c; end: 1084c663f;  */

void FUN_1084c659c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084c6640; end: 1084c66bb;  */

void FUN_1084c6640(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf446e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1084c66bc; end: 1084c6a47;  */

void FUN_1084c66bc(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar11 = param_2;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf51900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (puVar5 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    _objc_retain(puVar5);
    puVar6 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar6 == (undefined *)0x0) {
      uVar12 = 0;
    }
    else {
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar5);
          }
          uVar7 = *(ulong *)((long)puVar13 * 8);
          func_0x00010bf51940();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf44740();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar8;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar12;
          func_0x00010c0720c0();
          _objc_release(uVar12);
          if ((uVar9 & 1) != 0) {
            uVar12 = uVar8;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            _objc_release(uVar7);
            goto LAB_1084c6898;
          }
          _objc_release(uVar8);
          _objc_release(uVar7);
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
        puVar6 = puVar5;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
      uVar12 = 0;
    }
LAB_1084c6898:
    _objc_release(puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar11);
  uVar8 = uVar12;
  func_0x00010c08fa60();
  if (uVar8 != 0) {
    func_0x00010befa120(puVar2);
  }
  puVar11 = param_2;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf3fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  _objc_release(puVar11);
  if (puVar4 != (undefined *)0x0) {
    puVar11 = param_2;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000100504554();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar11);
    puVar11 = puVar6;
    func_0x00010bf529e0();
    if (puVar11 != (undefined *)0x0) {
      func_0x00010befa160(puVar2);
    }
    _objc_release(puVar6);
  }
  puVar11 = puVar2;
  func_0x00010bf529e0();
  if (puVar11 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = puVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar12);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x000100504554();
    _objc_release(param_2);
    puVar11 = puVar2;
    func_0x00010bf529e0();
    if (puVar11 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar2;
      func_0x00010bf446e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1084c6a48; end: 1084c6ac3;  */

void FUN_1084c6a48(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf446e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1084c6ac4; end: 1084c6bf3;  */

void FUN_1084c6ac4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c2a4740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010c0bf600(lVar2);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar3;
      func_0x00010bf446e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084c6bf4; end: 1084c6dcf;  */

bool FUN_1084c6bf4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar1 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      bVar10 = false;
      goto LAB_1084c6d94;
    }
  }
  else {
    _objc_retain(param_2);
    lVar2 = param_2;
  }
  lVar1 = lVar2;
  func_0x00010bef60a0();
  lVar3 = lVar2;
  func_0x00010bef60a0(lVar2);
  lVar4 = lVar2;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf3fc80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf68c60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bef60a0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010c242040(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf3fc80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf68c60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bef60a0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010bef60a0();
  bVar10 = (lVar1 == 1 || lVar3 == 6) || lVar4 == 10 && (lVar8 == 1 || lVar9 == 6);
  _objc_release(lVar2);
LAB_1084c6d94:
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar10;
}



/* Entry: 1084c6dd0; end: 1084c6e9b;  */

void FUN_1084c6dd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084c6e9c; end: 1084c6f7b;  */

undefined8 FUN_1084c6e9c(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 == 0) {
    uVar3 = 0;
    if (param_4 != 0) {
      uVar3 = 0xc;
    }
    uVar1 = 5;
    if (param_3 == 0) {
      uVar1 = uVar3;
    }
    uVar3 = 4;
    if (param_2 == 0) {
      uVar3 = uVar1;
    }
  }
  else {
    lVar2 = param_1;
    func_0x00010c0f6d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010c2a3520();
      uVar3 = 9;
      if (lVar2 != 3) {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 0xe;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1084c6f7c; end: 1084c72b3;  */

ulong FUN_1084c6f7c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef60a0();
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar6 = 1;
  switch(uVar2) {
  case 0:
    break;
  case 1:
    uVar6 = 4;
    break;
  default:
    uVar6 = 0;
    break;
  case 3:
    uVar5 = param_2;
    func_0x00010c2a3d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c2a3520();
    uVar6 = 9;
    if (uVar1 != 3) {
      uVar6 = 3;
    }
    goto code_r0x0001084c72a4;
  case 6:
    uVar6 = 5;
    break;
  case 9:
    uVar6 = 7;
    break;
  case 10:
    uVar6 = param_2;
    func_0x00010c242040(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf68c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar6);
    uVar1 = uVar5;
    func_0x00010c2a4760(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf054e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf67c00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c23aec0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    FUN_1084c6e9c(uVar1,uVar2,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    goto code_r0x0001084c72a4;
  case 0xd:
    uVar6 = 6;
    break;
  case 0xe:
    uVar6 = 8;
    break;
  case 0xf:
    uVar6 = 10;
    break;
  case 0x10:
    uVar6 = 0xb;
    break;
  case 0x11:
    uVar6 = 0xc;
    break;
  case 0x13:
    uVar6 = 0xd;
    break;
  case 0x14:
    uVar6 = param_2;
    func_0x00010bef5620();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bf66880();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c253c20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c253c40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar6);
    if (uVar5 != 4) {
      uVar6 = 1;
      break;
    }
    uVar6 = param_2;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1293e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c084160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar6);
    uVar1 = uVar5;
    func_0x00010c2a4760();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf67c00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    FUN_1084c6e9c(uVar1,0,uVar2,0);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
code_r0x0001084c72a4:
    _objc_release(uVar5);
    break;
  case 0x15:
    uVar6 = 0xe;
  }
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 1084c72b4; end: 1084c72df;  */

long FUN_1084c72b4(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 - 1U < 0x16) {
    lVar1 = (ulong)(param_1 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 1084c72e0; end: 1084c73b7;  */

void FUN_1084c72e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf72080(puVar1,param_2,&uStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110edec78,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar3 = puVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf5ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)0x0) {
      _objc_retain(puVar3);
      puVar2 = puVar3;
    }
    else {
      func_0x00010bf5ac40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc4098);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084c73b8; end: 1084c747b; -[SCAdSnap uniqueIdentifier] */

void FUN_1084c73b8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  else {
    func_0x00010bf5ac40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc4098);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084c747c; end: 1084c75f7; -[SCAdSnap defaultExbModeEnabled] */

bool FUN_1084c747c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef60a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 10) {
    func_0x00010c242040(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf68c60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a4760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf39760();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf9a920();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    if (lVar3 != 3) {
      return false;
    }
    func_0x00010c242040(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf39760();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf9a920();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar6 == 1;
}



/* Entry: 1084c75f8; end: 1084c767f; -[SCAdSnap adMediaDurationMs] */

undefined * FUN_1084c75f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c4bc0();
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c067fc0();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 1084c7680; end: 1084c77e3; -[SCAdSnap hasCidMetadata] */

bool FUN_1084c7680(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef60a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 10) {
    func_0x00010c242040(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf68c60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a4760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf39760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
  }
  else {
    if (lVar3 != 3) {
      return false;
    }
    func_0x00010c242040(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf39760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar5 != 0;
}



/* Entry: 1084c77e4; end: 1084c7817; -[SCAdSnap hasAttachment] */

bool FUN_1084c77e4(long param_1)

{
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1084c7818; end: 1084c785b; -[SCAdSnap topSnap] */

void FUN_1084c7818(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084c785c; end: 1084c789f; -[SCAdSnap bottomSnap] */

void FUN_1084c785c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084c78a0; end: 1084c793f; -[SCAdSnap collectionAdType] */

long FUN_1084c78a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bef60a0();
  if (lVar2 == 10) {
    func_0x00010bf20500();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf68c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    if (lVar1 == 0) {
      lVar2 = 0x17;
    }
    else {
      lVar2 = lVar1;
      func_0x00010bef60a0(lVar1);
    }
    _objc_release(lVar1);
  }
  else {
    lVar2 = 0x17;
  }
  return lVar2;
}



/* Entry: 1084c7940; end: 1084c7947; -[SCAdSnap webViewAttachment] */

void FUN_1084c7940(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_webViewAttachmentAtItemIndex__112686980,0);
  return;
}



/* Entry: 1084c7948; end: 1084c794f; -[SCAdSnap appInstall] */

void FUN_1084c7948(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf05530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appInstallAtItemIndex__11259eef0,0);
  return;
}



/* Entry: 1084c7950; end: 1084c7957; -[SCAdSnap deepLink] */

void FUN_1084c7950(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf67c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deepLinkAtItemIndex__1125b78b8,0);
  return;
}



/* Entry: 1084c7958; end: 1084c7c1f; -[SCAdSnap opensPublicProfile] */

bool FUN_1084c7958(undefined *param_1,undefined8 param_2)

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
  
  puVar2 = param_1;
  func_0x00010bef60a0();
  if (puVar2 != (undefined *)0x6) {
    return false;
  }
  puVar2 = PTR_PTR_1126b8ca8;
  func_0x00010c0f0160();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
LAB_1084c79bc:
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    puVar3 = PTR_PTR_1126b8ca8;
    func_0x00010c0f0160();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) goto LAB_1084c79bc;
  }
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    bVar1 = false;
    goto LAB_1084c7bf8;
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c0720c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd3c78);
  puVar8 = puVar7;
  if (((int)puVar4 == 0) ||
     (puVar4 = puVar6,
     func_0x00010c0720c0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e04f78),
     (int)puVar4 == 0)) {
    puVar4 = puVar5;
    func_0x00010c0720c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
    if (((int)puVar4 != 0) &&
       (((puVar4 = puVar6,
         func_0x00010c0720c0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e59198),
         ((ulong)puVar4 & 1) != 0 ||
         (puVar4 = puVar6,
         func_0x00010c0720c0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e61198),
         (int)puVar4 != 0)) && (puVar4 = puVar7, func_0x00010bf529e0(), puVar4 == (undefined *)0x3))
       )) {
      func_0x00010c0dfd40(puVar7,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c0720c0();
      if ((int)puVar9 == 0) {
        bVar1 = false;
      }
      else {
        puVar9 = puVar7;
        func_0x00010c0dfd40(puVar7,param_2,2);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c08fa60();
        bVar1 = puVar10 != (undefined *)0x0;
        _objc_release(puVar9);
      }
      _objc_release(puVar4);
      goto LAB_1084c7bd0;
    }
LAB_1084c7bb4:
    bVar1 = false;
  }
  else {
    puVar4 = puVar7;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x2) goto LAB_1084c7bb4;
    func_0x00010c0dfd40(puVar7,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c08fa60();
    bVar1 = puVar4 != (undefined *)0x0;
LAB_1084c7bd0:
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
LAB_1084c7bf8:
  _objc_release(puVar3);
  return bVar1;
}



/* Entry: 1084c7c20; end: 1084c7cb7; -[SCAdSnap playableInfo] */

void FUN_1084c7c20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fec20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010bf67c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0fec20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1084c7cb8; end: 1084c7df7; -[SCAdSnap appTitle] */

void FUN_1084c7cb8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf06520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf06520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x00010bf20500(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf68c60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf06520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(param_1);
    }
    else {
      _objc_retain(lVar4);
      lVar8 = lVar4;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar8 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1084c7df8; end: 1084c7f37; -[SCAdSnap productPageId] */

void FUN_1084c7df8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c116120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c116120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x00010bf20500(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf68c60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c116120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(param_1);
    }
    else {
      _objc_retain(lVar4);
      lVar8 = lVar4;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar8 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1084c7f38; end: 1084c7f3f; -[SCAdSnap webViewAttachmentAtItemIndex:] */

void FUN_1084c7f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a3d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_webViewAttachmentAtItemIndex_adC_112686988,param_3,0);
  return;
}



/* Entry: 1084c7f40; end: 1084c80f3; -[SCAdSnap webViewAttachmentAtItemIndex:adConfigProviderV2:] */

void FUN_1084c7f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bef60a0();
  _objc_release(lVar4);
  lVar4 = 0;
  if (lVar1 < 0x14) {
    if (lVar1 == 3) {
LAB_1084c7fdc:
      func_0x00010bf20500(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c2a4740();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar1 != 10) goto LAB_1084c8008;
      func_0x00010bde1ce0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c2a4760();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (lVar1 != 0x14) {
      if (lVar1 != 0x15) goto LAB_1084c8008;
      goto LAB_1084c7fdc;
    }
    lVar4 = param_1;
    func_0x00010bef5620();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf66880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c253c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c253c40();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar3 != 4) {
      lVar4 = 0;
      goto LAB_1084c8008;
    }
    func_0x00010bf20500();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1293e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar1;
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      func_0x00010c084160(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c2a4760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
LAB_1084c8008:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1084c80f4; end: 1084c817b; -[SCAdSnap retargetPromptInfo] */

void FUN_1084c80f4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8cf0;
  func_0x00010c13df00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010c2a3d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c13dee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084c817c; end: 1084c8183; -[SCAdSnap appInstallAtItemIndex:] */

void FUN_1084c817c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf05550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appInstallAtItemIndex_adConfigPr_11259eef8,param_3,0);
  return;
}



/* Entry: 1084c8184; end: 1084c823f; -[SCAdSnap appInstallAtItemIndex:adConfigProviderV2:] */

void FUN_1084c8184(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bef60a0();
  _objc_release(lVar2);
  if (lVar1 == 10) {
    func_0x00010bde1ce0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 != 1) {
      lVar2 = 0;
      goto LAB_1084c8224;
    }
    func_0x00010bf20500(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_1;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
LAB_1084c8224:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1084c8240; end: 1084c8247; -[SCAdSnap deepLinkAtItemIndex:] */

void FUN_1084c8240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf67c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_deepLinkAtItemIndex_adConfigProv_1125b78c0,param_3,0);
  return;
}



/* Entry: 1084c8248; end: 1084c83d7; -[SCAdSnap deepLinkAtItemIndex:adConfigProviderV2:] */

void FUN_1084c8248(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bef60a0();
  _objc_release(lVar1);
  if (lVar4 == 0x14) {
    lVar1 = param_1;
    func_0x00010bef5620();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf66880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c253c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c253c40();
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
    if (lVar3 != 4) {
LAB_1084c83ac:
      lVar4 = 0;
      goto LAB_1084c83b0;
    }
    func_0x00010bf20500();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1293e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c084160(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
  }
  else {
    if (lVar4 == 10) {
      func_0x00010bde1ce0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar4 != 6) goto LAB_1084c83ac;
      func_0x00010bf20500(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = param_1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
  }
  _objc_release(lVar1);
LAB_1084c83b0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1084c83d8; end: 1084c83df; -[SCAdSnap showcaseAttachmentAtItemIndex:] */

void FUN_1084c83d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23af10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showcaseAttachmentAtItemIndex_ad_11266c5e8,param_3,0);
  return;
}



/* Entry: 1084c83e0; end: 1084c85df; -[SCAdSnap showcaseAttachmentAtItemIndex:adConfigProviderV2:] */

void FUN_1084c83e0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bef60a0();
  _objc_release(puVar1);
  if (puVar5 == (undefined *)0xa) {
    puVar1 = param_1;
    func_0x00010bde1ce0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c23aec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = param_1;
      func_0x00010bde1ce0(param_1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c23aec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar5 = PTR_PTR_1126d9d80;
      _objc_alloc(PTR_PTR_1126d9d80);
      puVar1 = puVar2;
      func_0x00010bf289a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c23b140(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf67c60(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3d80(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffaf00(puVar5,param_2,puVar1,puVar3,puVar4,param_1);
      _objc_release(param_1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release(puVar2);
      param_1 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar5);
      param_1 = puVar5;
    }
  }
  else {
    if (puVar5 != (undefined *)0x11) {
      puVar5 = (undefined *)0x0;
      goto LAB_1084c85b0;
    }
    func_0x00010bf20500(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c23aea0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
LAB_1084c85b0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1084c85e0; end: 1084c8643; -[SCAdSnap enableExternalBrowser] */

bool FUN_1084c85e0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bfd54c0();
  if (((int)lVar2 == 0) || (lVar2 = param_1, func_0x00010bf69500(), (int)lVar2 != 0)) {
    func_0x00010c2a3d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c2a3520();
    bVar1 = lVar2 == 3;
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1084c8644; end: 1084c8777; -[SCAdSnap isRedirectExternalBrowser] */

bool FUN_1084c8644(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bef60a0();
  if (lVar4 == 3) {
    lVar4 = param_1;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = param_1;
    func_0x00010bef60a0();
    lVar2 = param_1;
    if (lVar4 == 0x14) {
      func_0x00010c1293e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = param_1;
      func_0x00010bef60a0();
      if (lVar4 != 10) {
        lVar4 = 0;
        goto LAB_1084c8718;
      }
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf68c60();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = lVar3;
    func_0x00010c2a4760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
LAB_1084c8718:
  lVar2 = lVar4;
  func_0x00010bf39760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf39720();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar4;
    func_0x00010c2a3520(lVar4);
    bVar1 = lVar3 == 3;
  }
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1084c8778; end: 1084c88f7; -[SCAdSnap externalBrowserUrlWithAdConfigProvider:adConfigProviderV2:adResponse:applicationPreferences:itemIndex:] */

void FUN_1084c8778(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_1;
  func_0x00010c2a3d80(param_1,param_2,param_7,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126ca688;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar1;
    func_0x00010c28f340(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ac40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf01000(puVar1);
    func_0x00010c0f0020(puVar3,param_2,puVar4,param_1,param_5,param_6,param_3,puVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = puVar1;
      func_0x00010c28f340(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084c88f8; end: 1084c9be7; -[SCAdSnap attachmentDataModelWithAdResponse:adConfigProvider:adConfigProviderV2:applicationPreferences:itemIndex:attachmentCallbacks:skImpressionSource:deepLinkFallbackCallbacks:broadcastViewLocation:tapAttachmentSource:] */

void FUN_1084c88f8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = param_1;
  func_0x00010bfd4380();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1084c9b84;
  }
  uVar2 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bdc78;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0(param_1);
  func_0x00010bef4240(param_3);
  func_0x00010bef27a0();
  func_0x00010bff1740();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126d9d88;
  func_0x00010c06e520();
  puVar7 = param_1;
  func_0x00010bef60a0();
  puVar8 = PTR_PTR_1126b8ca0;
  puVar1 = PTR_PTR_1126af5d0;
  puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((long)puVar7 < 0xd) {
    puVar10 = param_1;
    puVar11 = param_8;
    if ((long)puVar7 < 6) {
      if (puVar7 == (undefined *)0x1) {
LAB_1084c8d64:
        puVar8 = param_1;
        func_0x00010bf05540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010bef3880(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_8;
        func_0x00010bf05580(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdccae0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(uVar2);
        puVar1 = param_1;
      }
      else {
        if (puVar7 != (undefined *)0x3) {
LAB_1084c91d8:
          func_0x00010bef60a0(param_1);
          func_0x00010c25d240();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef54e0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          goto LAB_1084c9484;
        }
        if (((ulong)puVar6 & 1) == 0) {
          func_0x00010bf902a0();
        }
        puVar8 = param_1;
        func_0x00010bf9dec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3dc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3520();
code_r0x0001084c9568:
        puVar1 = puVar10;
        func_0x00010c067c00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar10;
        func_0x00010bf96040();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_8;
        func_0x00010c067be0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar10;
        func_0x00010c116a00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar10;
        func_0x00010bf39760();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar7;
        func_0x00010bf397a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0fcb00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07dde0();
        puVar14 = puVar10;
        func_0x00010bf8ba60();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar10;
        func_0x00010c257fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar10;
        func_0x00010c118380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf91b40();
        func_0x00010beeac80(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(uVar2);
        _objc_release(puVar13);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar12);
        _objc_release(puVar9);
        _objc_release(puVar1);
        _objc_release(puVar11);
        _objc_release(puVar10);
        puVar1 = param_1;
      }
    }
    else if (puVar7 == (undefined *)0x6) {
      puVar1 = param_1;
      func_0x00010bf20500();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126af5d0;
      if (puVar8 == (undefined *)0x0) {
        puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = param_8;
        func_0x00010bf67ca0(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdf8d80(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
      }
      _objc_release(puVar9);
    }
    else {
      if (puVar7 != (undefined *)0xa) goto LAB_1084c91d8;
      puVar1 = param_1;
      func_0x00010bf3fca0();
      if (puVar1 == (undefined *)0x3) {
        if (((ulong)puVar6 & 1) == 0) {
          func_0x00010bf902a0();
        }
        puVar8 = param_1;
        func_0x00010bf9dec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3dc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3520();
        goto code_r0x0001084c9568;
      }
      puVar1 = param_1;
      func_0x00010bf3fca0();
      if (puVar1 == (undefined *)0x1) goto LAB_1084c8d64;
      puVar8 = param_1;
      func_0x00010bf3fca0();
      puVar1 = PTR_PTR_1126af5d0;
      if (puVar8 == (undefined *)0x6) {
        puVar8 = param_1;
        func_0x00010bf67c60(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_8;
        func_0x00010bf67ca0(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdf8d80(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = param_1;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  else if ((long)puVar7 < 0x10) {
    if (puVar7 != (undefined *)0xd) {
      if (puVar7 != (undefined *)0xe) goto LAB_1084c91d8;
      func_0x00010bf20500();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      func_0x00010bef5a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      if (puVar8 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126d9d98;
        _objc_alloc(PTR_PTR_1126d9d98);
        puVar1 = puVar8;
        func_0x00010c0faf60(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar8;
        func_0x00010c0cb960(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_8;
        func_0x00010bef5a20(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d520(puVar9);
        _objc_release(puVar6);
        _objc_release(puVar12);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126af5d0;
        puVar12 = PTR_PTR_1126bdc88;
        func_0x00010bef5a60(PTR_PTR_1126bdc88);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1084c91b0;
      }
LAB_1084c94b4:
      puVar1 = PTR_PTR_1126af5d0;
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
LAB_1084c94dc:
      _objc_release(puVar9);
      goto LAB_1084c9b70;
    }
    func_0x00010bf20500();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bef5940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar1 = PTR_PTR_1126af5d0;
    if (puVar8 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR_PTR_1126b8ca8;
      func_0x00010c0effc0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c08fa60();
      if (puVar9 == (undefined *)0x0) {
LAB_1084c9064:
        puVar9 = puVar8;
        func_0x00010c0faf60(puVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = PTR_PTR_1126b8ca8;
        func_0x00010c0effc0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 == (undefined *)0x0) goto LAB_1084c9064;
      }
      _objc_release(puVar1);
      puVar12 = PTR_PTR_1126d9da0;
      _objc_alloc(PTR_PTR_1126d9da0);
      puVar1 = param_8;
      func_0x00010bef5960(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c035960(puVar12);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126af5d0;
      puVar6 = PTR_PTR_1126bdc88;
      func_0x00010bef59a0(PTR_PTR_1126bdc88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar12);
    }
LAB_1084c9484:
    _objc_release(puVar9);
  }
  else {
    if (puVar7 == (undefined *)0x10) {
      puVar1 = param_1;
      func_0x00010bf20500();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010c08dba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = param_1;
      func_0x00010bf20500();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c08dbc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (param_12 != 0) {
        func_0x00010c067fc0();
      }
      puVar1 = PTR_PTR_1126af5d0;
      if (puVar8 == (undefined *)0x0) {
        puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar12 = PTR_PTR_1126d9da8;
        _objc_alloc(PTR_PTR_1126d9da8);
        puVar1 = param_1;
        func_0x00010bf20f80(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010bf20ee0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c274920(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_1;
        func_0x00010c265100();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = param_8;
        func_0x00010c08db60(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c022000(puVar12);
        _objc_release(puVar10);
        _objc_release(puVar7);
        _objc_release(param_1);
        _objc_release(puVar6);
        _objc_release(puVar1);
        puVar6 = PTR_PTR_1126bdc88;
        func_0x00010c08db80(PTR_PTR_1126bdc88);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      _objc_release(puVar12);
      _objc_release(puVar9);
      goto LAB_1084c9b70;
    }
    if (puVar7 == (undefined *)0x13) {
      func_0x00010bf20500();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      func_0x00010c263ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      if (puVar8 == (undefined *)0x0) goto LAB_1084c94b4;
      puVar9 = PTR_PTR_1126d9d90;
      _objc_alloc(PTR_PTR_1126d9d90);
      puVar1 = param_8;
      func_0x00010c263f00(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04fa00(puVar9);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126af5d0;
      puVar12 = PTR_PTR_1126bdc88;
      func_0x00010c264020(PTR_PTR_1126bdc88);
      _objc_retainAutoreleasedReturnValue();
LAB_1084c91b0:
      func_0x00010c2619e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      goto LAB_1084c94dc;
    }
    if (puVar7 != (undefined *)0x14) goto LAB_1084c91d8;
    puVar1 = param_1;
    func_0x00010bef5620();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf66880();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c253c20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010c253c40();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126af5d0;
    if (puVar12 != (undefined *)0x4) {
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1084c9b70;
    }
    puVar1 = param_1;
    func_0x00010bf20500();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c1293e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126af5d0;
    if (puVar8 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = param_1;
      func_0x00010c2a3d80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_8;
      if (puVar9 == (undefined *)0x0) {
LAB_1084c97cc:
        puVar1 = puVar8;
        func_0x00010c084160();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126af5d0;
        if (puVar6 == (undefined *)0x0) {
          puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar1,puVar12,puVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf67ca0(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdf8d80(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = param_1;
        }
      }
      else {
        puVar1 = puVar9;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar1 == (undefined *)0x0) goto LAB_1084c97cc;
        if (((ulong)puVar6 & 1) == 0) {
          func_0x00010bf902a0();
        }
        puVar6 = param_1;
        func_0x00010bf9dec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3dc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3520();
        puVar1 = puVar9;
        func_0x00010c067c00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        func_0x00010bf96040();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = param_8;
        func_0x00010c067be0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar9;
        func_0x00010c116a00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar9;
        func_0x00010bf39760();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf397a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0fcb00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07dde0();
        puVar15 = puVar9;
        func_0x00010bf8ba60();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar9;
        func_0x00010c257fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar9;
        func_0x00010c118380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf91b40();
        func_0x00010beeac80(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(uVar2);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar7);
        _objc_release(puVar1);
        puVar1 = param_1;
      }
      _objc_release(puVar12);
      _objc_release(puVar6);
    }
    _objc_release(puVar9);
  }
LAB_1084c9b70:
  _objc_release(puVar8);
  _objc_release(puVar3);
LAB_1084c9b84:
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084c9be8; end: 1084c9c33; -[SCAdSnap hasCommercePdpAttachment] */

bool FUN_1084c9be8(long param_1)

{
  long lVar1;
  
  func_0x00010c2a3d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f6d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1084c9c34; end: 1084c9c8f; -[SCAdSnap shouldOptoutInfoCard] */

bool FUN_1084c9c34(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c253e00();
  if (lVar3 == 2) {
    func_0x00010bef4240(param_1);
    bVar1 = param_1 != 6;
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1084c9c90; end: 1084c9d23; -[SCAdSnap collectionItemTotalCount] */

long FUN_1084c9c90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf3fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c084fc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  lVar4 = lVar1;
  func_0x00010bf68c60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar3 = lVar3 + 1;
  }
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 1084c9d24; end: 1084c9e03; -[SCAdSnap composerTopSnap] */

void FUN_1084c9d24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf451a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bdd18;
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c274920(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf451a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    func_0x00010c0f40e0(puVar3,param_2,lVar2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_38;
    _objc_release(lVar2);
    _objc_release(param_1);
    puVar4 = puVar3;
    if (lVar1 != 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084c9e04; end: 1084c9ecb; -[SCAdSnap oneTapAttachmentOpenEligible] */

long FUN_1084c9e04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf451a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfd9aa0();
  if ((int)lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bf451a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e8920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      return 0;
    }
    func_0x00010bf451a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e8920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e8380();
    _objc_release(lVar1);
    lVar1 = param_1;
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 1084c9ecc; end: 1084c9fc3; -[SCAdSnap oneTapAttachmentOpenTimeThresholdMs] */

void FUN_1084c9ecc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf451a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0e8920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf451a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e8920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfd9a80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    if ((int)lVar4 == 0) {
      lVar5 = 0;
      goto LAB_1084c9fac;
    }
    func_0x00010bf451a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e8920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0e83a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
  }
  _objc_release(lVar1);
LAB_1084c9fac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1084c9fc4; end: 1084cadd7; -[SCAdSnap dpaItemViewModels] */

void FUN_1084c9fc4(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined4 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  long lStack_2e8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf451a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lVar5 = param_1;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2e8 = lVar5;
    func_0x00010bf52a60();
    if (lStack_2e8 != 0) {
      lVar18 = *plStack_220;
      do {
        lVar19 = 0;
        do {
          if (*plStack_220 != lVar18) {
            _objc_enumerationMutation(lVar5);
          }
          lVar20 = *(long *)(lStack_228 + lVar19 * 8);
          puVar21 = PTR_PTR_1126d9db0;
          _objc_opt_new();
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          lStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          plStack_260 = (long *)0x0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          lVar7 = lVar20;
          func_0x00010c0c4040();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf52a60();
          if (lVar8 != 0) {
            lVar26 = *plStack_260;
            do {
              lVar27 = 0;
              do {
                if (*plStack_260 != lVar26) {
                  _objc_enumerationMutation(lVar7);
                }
                puVar29 = *(undefined **)(lStack_268 + lVar27 * 8);
                _objc_retain(puVar29);
                puVar24 = puVar29;
                func_0x00010c0c59c0();
                puVar11 = puVar29;
                puVar9 = puVar29;
                puVar10 = puVar29;
                if ((int)puVar24 == 1) {
                  _objc_retain(puVar29);
                  func_0x00010bfe6ac0();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar9 == (undefined *)0x0) {
LAB_1084ca630:
                    puVar22 = (undefined *)0x0;
                  }
                  else {
                    func_0x00010bfe6ac0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar24 = puVar10;
                    func_0x00010c12fc80();
                    _objc_retainAutoreleasedReturnValue();
                    puVar22 = puVar24;
                    func_0x00010c0c5820();
                    if (puVar22 == (undefined *)0x0) {
LAB_1084ca638:
                      puVar22 = (undefined *)0x0;
                      goto LAB_1084ca64c;
                    }
                    func_0x00010bfe6ac0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar22 = puVar11;
                    func_0x00010bfde800();
                    if ((int)puVar22 == 0) {
LAB_1084ca640:
                      puVar22 = (undefined *)0x0;
                      goto LAB_1084ca644;
                    }
                    puVar22 = puVar29;
                    func_0x00010bfe6ac0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = puVar22;
                    func_0x00010bfd7ba0();
                    _objc_release(puVar22);
                    _objc_release(puVar11);
                    _objc_release(puVar24);
                    _objc_release(puVar10);
                    _objc_release(puVar9);
                    if ((int)puVar12 != 0) {
                      puVar22 = PTR_PTR_1126d9dd8;
                      _objc_opt_new();
                      func_0x00010c1c5440();
                      puVar11 = puVar29;
                      func_0x00010bfe6ac0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar24 = puVar11;
                      func_0x00010c12fc80();
                      _objc_retainAutoreleasedReturnValue();
                      puVar10 = puVar24;
                      func_0x00010c0c5800();
                      _objc_retainAutoreleasedReturnValue();
                      puVar9 = puVar10;
                      func_0x00010bfb1920();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar10);
                      _objc_release(puVar24);
                      _objc_release(puVar11);
                      puVar11 = puVar9;
                      func_0x00010c0c57e0();
                      if ((int)puVar11 == 4) {
                        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
                        puVar24 = puVar9;
                        func_0x00010c0c5340(puVar9);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c008340(puVar11,param_2,puVar24,4);
                        func_0x00010c1c55a0(puVar22,param_2,puVar11);
                        _objc_release(puVar11);
                        _objc_release(puVar24);
                      }
                      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      puVar24 = puVar29;
                      func_0x00010bfe6ac0(puVar29);
                      _objc_retainAutoreleasedReturnValue();
                      puVar10 = puVar24;
                      func_0x00010c2a5040();
                      _objc_retainAutoreleasedReturnValue();
                      puVar12 = puVar10;
                      func_0x00010c296d80();
                      func_0x00010c0df760(puVar11,param_2,puVar12);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2256c0(puVar22,param_2,puVar11);
                      _objc_release(puVar11);
                      _objc_release(puVar10);
                      _objc_release(puVar24);
                      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      puVar24 = puVar29;
                      func_0x00010bfe6ac0(puVar29);
                      _objc_retainAutoreleasedReturnValue();
                      puVar10 = puVar24;
                      func_0x00010bfe0640();
                      _objc_retainAutoreleasedReturnValue();
                      puVar12 = puVar10;
                      func_0x00010c296d80();
                      func_0x00010c0df760(puVar11,param_2,puVar12);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1a7d00(puVar22,param_2,puVar11);
                      _objc_release(puVar11);
                      _objc_release(puVar10);
                      _objc_release(puVar24);
                      puVar10 = puVar29;
                      func_0x00010bfe6ac0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar24 = puVar10;
                      func_0x00010bf13d40();
                      _objc_retainAutoreleasedReturnValue();
                      puVar11 = puVar24;
                      func_0x00010c296d80();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c160c20(puVar22,param_2,puVar11);
                      goto LAB_1084ca644;
                    }
LAB_1084ca6a0:
                    puVar22 = (undefined *)0x0;
                  }
LAB_1084ca668:
                  _objc_release(puVar29);
                  _objc_release(puVar29);
                  if (puVar22 != (undefined *)0x0) {
                    func_0x00010befa120(puVar6,param_2,puVar22);
                    puVar29 = puVar22;
                    goto LAB_1084ca68c;
                  }
                }
                else {
                  if ((int)puVar24 == 2) {
                    _objc_retain(puVar29);
                    func_0x00010c299160();
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar9 == (undefined *)0x0) goto LAB_1084ca630;
                    func_0x00010c299160();
                    _objc_retainAutoreleasedReturnValue();
                    puVar24 = puVar10;
                    func_0x00010c12fc80();
                    _objc_retainAutoreleasedReturnValue();
                    puVar22 = puVar24;
                    func_0x00010c0c5820();
                    if (puVar22 == (undefined *)0x0) goto LAB_1084ca638;
                    func_0x00010c299160();
                    _objc_retainAutoreleasedReturnValue();
                    puVar22 = puVar11;
                    func_0x00010bfde800();
                    if ((int)puVar22 == 0) goto LAB_1084ca640;
                    puVar22 = puVar29;
                    func_0x00010c299160();
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = puVar22;
                    func_0x00010bfd7ba0();
                    _objc_release(puVar22);
                    _objc_release(puVar11);
                    _objc_release(puVar24);
                    _objc_release(puVar10);
                    _objc_release(puVar9);
                    if ((int)puVar12 == 0) goto LAB_1084ca6a0;
                    puVar22 = PTR_PTR_1126d9dd8;
                    _objc_opt_new();
                    func_0x00010c1c5440();
                    puVar11 = puVar29;
                    func_0x00010c299160();
                    _objc_retainAutoreleasedReturnValue();
                    puVar24 = puVar11;
                    func_0x00010c12fc80();
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar24;
                    func_0x00010c0c5800();
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar10;
                    func_0x00010bfb1920();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar10);
                    _objc_release(puVar24);
                    _objc_release(puVar11);
                    puVar11 = puVar9;
                    func_0x00010c0c57e0();
                    if ((int)puVar11 == 4) {
                      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
                      puVar24 = puVar9;
                      func_0x00010c0c5340(puVar9);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c008340(puVar11,param_2,puVar24,4);
                      func_0x00010c1c55a0(puVar22,param_2,puVar11);
                      _objc_release(puVar11);
                      _objc_release(puVar24);
                    }
                    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    puVar24 = puVar29;
                    func_0x00010c299160(puVar29);
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar24;
                    func_0x00010c2a5040();
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = puVar10;
                    func_0x00010c296d80();
                    func_0x00010c0df760(puVar11,param_2,puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2256c0(puVar22,param_2,puVar11);
                    _objc_release(puVar11);
                    _objc_release(puVar10);
                    _objc_release(puVar24);
                    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    puVar10 = puVar29;
                    func_0x00010c299160();
                    _objc_retainAutoreleasedReturnValue();
                    puVar24 = puVar10;
                    func_0x00010bfe0640();
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = puVar24;
                    func_0x00010c296d80();
                    func_0x00010c0df760(puVar11,param_2,puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1a7d00(puVar22,param_2,puVar11);
LAB_1084ca644:
                    _objc_release(puVar11);
LAB_1084ca64c:
                    _objc_release(puVar24);
                    _objc_release(puVar10);
                    _objc_release(puVar9);
                    goto LAB_1084ca668;
                  }
LAB_1084ca68c:
                  _objc_release(puVar29);
                }
                lVar27 = lVar27 + 1;
              } while (lVar8 != lVar27);
              lVar8 = lVar7;
              func_0x00010bf52a60(lVar7,param_2,&uStack_270,auStack_170,0x10);
            } while (lVar8 != 0);
          }
          _objc_release(lVar7);
          puVar11 = puVar6;
          func_0x00010bf529e0();
          if (puVar11 != (undefined *)0x0) {
            func_0x00010c1c4020(puVar21);
            lVar7 = lVar20;
            func_0x00010c2711a0(lVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c216240(puVar21,param_2,lVar7);
            _objc_release(lVar7);
            lVar7 = lVar20;
            func_0x00010c260dc0(lVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20f6c0(puVar21,param_2,lVar7);
            _objc_release(lVar7);
            lVar7 = lVar20;
            func_0x00010c112a80(lVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e2880(puVar21,param_2,lVar7);
            _objc_release(lVar7);
            lVar7 = lVar20;
            func_0x00010c149440(lVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1f5280(puVar21,param_2,lVar7);
            _objc_release(lVar7);
            puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            lVar7 = lVar20;
            func_0x00010c0f7da0(lVar20);
            func_0x00010c0df760(puVar11,param_2,lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1da660(puVar21,param_2,puVar11);
            _objc_release(puVar11);
            lVar7 = lVar20;
            func_0x00010bf40c40(lVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e3b00(puVar21,param_2,lVar7);
            _objc_release(lVar7);
            lVar7 = lVar20;
            func_0x00010c115e60(lVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e3bc0(puVar21,param_2,lVar7);
            _objc_release(lVar7);
            lVar7 = lVar20;
            FUN_1084cadd8(lVar20);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            lStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_298 = 0;
            plStack_2a0 = (long *)0x0;
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            lVar8 = lVar20;
            func_0x00010bf44b80();
            _objc_retainAutoreleasedReturnValue();
            lVar26 = lVar8;
            func_0x00010bf52a60();
            if (lVar26 != 0) {
              lVar27 = *plStack_2a0;
              do {
                lVar28 = 0;
                do {
                  if (*plStack_2a0 != lVar27) {
                    _objc_enumerationMutation(lVar8);
                  }
                  uVar23 = *(undefined8 *)(lStack_2a8 + lVar28 * 8);
                  _objc_retain(uVar23);
                  _objc_retain(lVar7);
                  uVar13 = uVar23;
                  func_0x00010bfd9da0();
                  if ((int)uVar13 == 0) {
                    puVar24 = (undefined *)0x0;
                  }
                  else {
                    uVar13 = uVar23;
                    func_0x00010c0ef4a0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar24 = PTR_PTR_1126d9de8;
                    _objc_alloc();
                    uVar14 = uVar13;
                    func_0x00010c0efc20();
                    iVar2 = (int)uVar14;
                    if (2 < iVar2 - 1U) {
                      iVar2 = 0;
                    }
                    uVar14 = uVar23;
                    func_0x00010c104260();
                    uVar25 = 0;
                    uVar1 = (int)uVar14 - 1;
                    if (uVar1 < 9) {
                      uVar25 = *(undefined4 *)(&UNK_10df31068 + (ulong)uVar1 * 4);
                    }
                    uVar14 = uVar23;
                    func_0x00010bf14460();
                    iVar3 = (int)uVar14;
                    if (3 < iVar3 - 1U) {
                      iVar3 = 0;
                    }
                    func_0x00010c055ee0(puVar24,param_2,iVar2,uVar25,iVar3);
                    uVar14 = uVar23;
                    func_0x00010bfd47a0();
                    if ((int)uVar14 != 0) {
                      uVar14 = uVar23;
                      func_0x00010bf13e00();
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010c296d80();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c16e440(puVar24,param_2,uVar15);
                      _objc_release(uVar15);
                      _objc_release(uVar14);
                    }
                    uVar14 = uVar23;
                    func_0x00010bfd9f40();
                    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    if ((int)uVar14 != 0) {
                      uVar14 = uVar23;
                      func_0x00010c0f0ba0(uVar23);
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010c296d80();
                      func_0x00010c0df760(puVar9,param_2,uVar15);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d7e40(puVar24,param_2,puVar9);
                      _objc_release(puVar9);
                      _objc_release(uVar14);
                    }
                    uVar14 = uVar23;
                    func_0x00010bfd8e80();
                    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    if ((int)uVar14 != 0) {
                      uVar14 = uVar23;
                      func_0x00010c0c3200(uVar23);
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010c296d80();
                      func_0x00010c0df760(puVar9,param_2,uVar15);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1c39c0(puVar24,param_2,puVar9);
                      _objc_release(puVar9);
                      _objc_release(uVar14);
                    }
                    uVar14 = uVar23;
                    func_0x00010bfd8e60();
                    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    if ((int)uVar14 != 0) {
                      uVar14 = uVar23;
                      func_0x00010c0c2340(uVar23);
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010c296d80();
                      func_0x00010c0df760(puVar9,param_2,uVar15);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1c32e0(puVar24,param_2,puVar9);
                      _objc_release(puVar9);
                      _objc_release(uVar14);
                    }
                    uVar14 = uVar13;
                    func_0x00010c0efc20();
                    if ((int)uVar14 == 1) {
                      uVar14 = uVar13;
                      func_0x00010bfe83a0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010bfe8f00();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1aabc0(puVar24,param_2,uVar15);
                      _objc_release(uVar15);
                      _objc_release(uVar14);
                    }
                    func_0x00010c1e7740(puVar24,param_2,lVar7);
                    uVar14 = uVar13;
                    func_0x00010c0efc20();
                    if ((int)uVar14 == 2) {
                      uVar14 = uVar13;
                      func_0x00010c11fec0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010bfdd420();
                      if ((int)uVar15 != 0) {
                        uVar15 = uVar14;
                        func_0x00010c26b9c0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar16 = uVar15;
                        func_0x00010c296d80();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c213180(puVar24,param_2,uVar16);
                        _objc_release(uVar16);
                        _objc_release(uVar15);
                      }
                      _objc_release(uVar14);
                    }
                    uVar14 = uVar13;
                    func_0x00010c0efc20();
                    if ((int)uVar14 == 3) {
                      uVar14 = uVar13;
                      func_0x00010c26c500();
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010bfdd3e0();
                      if ((int)uVar15 != 0) {
                        uVar15 = uVar14;
                        func_0x00010c26b700();
                        _objc_retainAutoreleasedReturnValue();
                        uVar16 = uVar15;
                        func_0x00010c296d80();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c212f20(puVar24,param_2,uVar16);
                        _objc_release(uVar16);
                        _objc_release(uVar15);
                      }
                      uVar15 = uVar14;
                      func_0x00010bfdd420();
                      if ((int)uVar15 != 0) {
                        uVar15 = uVar14;
                        func_0x00010c26b9c0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar16 = uVar15;
                        func_0x00010c296d80();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c213180(puVar24,param_2,uVar16);
                        _objc_release(uVar16);
                        _objc_release(uVar15);
                      }
                      _objc_release(uVar14);
                    }
                    _objc_release(uVar13);
                  }
                  _objc_release(lVar7);
                  _objc_release(uVar23);
                  if (puVar24 != (undefined *)0x0) {
                    func_0x00010befa120(puVar11,param_2,puVar24);
                  }
                  _objc_release(puVar24);
                  lVar28 = lVar28 + 1;
                } while (lVar26 != lVar28);
                lVar26 = lVar8;
                func_0x00010bf52a60(lVar8,param_2,&uStack_2b0,auStack_1f0,0x10);
              } while (lVar26 != 0);
            }
            _objc_release(lVar8);
            func_0x00010c1b6160(puVar21,param_2,puVar11);
            func_0x00010c261140();
            uVar1 = (int)lVar20 - 1;
            ppuVar17 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfb20;
            if (uVar1 < 3) {
              ppuVar17 = (undefined **)(&PTR_PTR_110a4f200)[uVar1];
            }
            func_0x00010c20eec0(puVar21,param_2,ppuVar17);
            func_0x00010c1e7760(puVar21,param_2,lVar7);
            func_0x00010befa120(puVar4,param_2,puVar21);
            _objc_release(puVar11);
            _objc_release(lVar7);
          }
          _objc_release(puVar6);
          _objc_release(puVar21);
          lVar19 = lVar19 + 1;
        } while (lVar19 != lStack_2e8);
        lStack_2e8 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_230,auStack_f0,0x10);
      } while (lStack_2e8 != 0);
    }
    _objc_release(lVar5);
    puVar21 = puVar4;
    func_0x00010bf529e0();
    if (puVar21 == (undefined *)0x0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar4);
      puVar21 = puVar4;
    }
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    lVar5 = param_1;
    func_0x00010bfdae80();
    if ((int)lVar5 == 0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      lVar5 = param_1;
      func_0x00010c11fea0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR_PTR_1126d9de0;
      _objc_opt_new(PTR_PTR_1126d9de0);
      lVar18 = lVar5;
      func_0x00010bfdc9c0();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar18 != 0) {
        lVar18 = lVar5;
        func_0x00010c24d920(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df740(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c209360(puVar21,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(lVar18);
      }
      lVar18 = lVar5;
      func_0x00010bfdae60();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar18 != 0) {
        lVar18 = lVar5;
        func_0x00010c11fe20(lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar18;
        func_0x00010c296d80();
        func_0x00010c0df7c0(puVar4,param_2,lVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cf2a0(puVar21,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(lVar18);
      }
      _objc_release(lVar5);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 1084cadd8; end: 1084caf0b;  */

void FUN_1084cadd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfdae80();
  if ((int)uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c11fea0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d9de0;
    _objc_opt_new(PTR_PTR_1126d9de0);
    uVar2 = uVar1;
    func_0x00010bfdc9c0();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar2 != 0) {
      uVar2 = uVar1;
      func_0x00010c24d920(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      func_0x00010c0df740(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209360(puVar5,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010bfdae60();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar2 != 0) {
      uVar2 = uVar1;
      func_0x00010c11fe20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c296d80();
      func_0x00010c0df7c0(puVar3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cf2a0(puVar5,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1084caf0c; end: 1084cb0e3; -[SCAdSnap dpaDecorationInfo] */

void FUN_1084caf0c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf89480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lStack_58 = 0;
    puVar3 = PTR_PTR_1126d9db8;
    func_0x00010c0f40e0(PTR_PTR_1126d9db8,param_2,lVar2,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
    if (lStack_58 == 0) {
      puVar8 = PTR_PTR_1126d9dc0;
      _objc_opt_new(PTR_PTR_1126d9dc0);
      puVar4 = puVar3;
      func_0x00010c2397e0();
      if ((int)puVar4 != 0) {
        func_0x00010bf451a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        FUN_1084cadd8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b6220(puVar8,param_2,lVar6);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar1);
        _objc_release(param_1);
      }
      puVar4 = puVar3;
      func_0x00010bfdcee0();
      if ((int)puVar4 != 0) {
        puVar4 = puVar3;
        func_0x00010c260dc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20f6c0(puVar8,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar4);
      }
      puVar4 = puVar3;
      func_0x00010bfd4840();
      if ((int)puVar4 != 0) {
        puVar4 = puVar3;
        func_0x00010bf15560(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16ede0(puVar8,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar4);
      }
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1084cb0e4; end: 1084cb4e3; -[SCAdSnap _webviewAttachmentWithUrl:webViewCallbacks:adCommonConfig:attachmentPresentation:instantPage:engagementStreamMetadata:instantPageCallbacks:profileIconUrl:cidParams:pixelId:isShopPayUser:dynamicScriptConfig:storefrontToken:promotionInfo:enableSkoverlay:] */

void FUN_1084cb0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined *param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_90;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  uStack_90 = PTR_PTR_1126c5530;
  if (param_7 == 0) {
    _objc_retain(param_12);
    _objc_retain(param_8);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c059ee0();
    _objc_release(param_12);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126af5d0;
    puVar1 = PTR_PTR_1126bdc88;
    func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,uStack_90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_12);
    _objc_retain(param_8);
    _objc_retain(param_5);
    _objc_retain(param_3);
    puVar2 = param_11;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      uStack_90 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_new();
    }
    else {
      _objc_retain(param_11);
      uStack_90 = param_11;
    }
    puVar1 = PTR_PTR_1126d9dc8;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d9dd0;
    func_0x00010bf64b40(PTR_PTR_1126d9dd0,param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20f80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_8;
    func_0x00010bf96060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_8;
    func_0x00010bf96060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    uVar6 = uVar5;
    func_0x00010bf45f80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c000160(puVar1,param_2,param_5,puVar2,param_1,param_10,uVar4,uVar6,param_9,uStack_90
                        ,param_12,param_13);
    _objc_release(param_12);
    _objc_release(param_5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126af5d0;
    puVar8 = PTR_PTR_1126bdc88;
    func_0x00010c067ca0(PTR_PTR_1126bdc88,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar2,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  _objc_release(puVar1);
  _objc_release(uStack_90);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084cb4e4; end: 1084cb747; -[SCAdSnap _appInstallAttachmentWithAppInstall:adConfigProvider:adNetworkAttribution:callbacks:skanImpressionSource:adCommonConfig:backgroundExitBehavior:] */

void FUN_1084cb4e4(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010c0f0060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf05300();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c067fc0();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar4 = PTR_PTR_1126af5d0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010c067fc0();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar4 = PTR_PTR_1126af5d0;
  }
  PTR__OBJC_CLASS___NSError_1126ae858 = puVar2;
  PTR_PTR_1126af5d0 = puVar4;
  if (puVar3 == (undefined *)0x0) {
    func_0x00010bef54e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110ededf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_3;
    func_0x00010c116120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdccb00(param_1,param_2,puVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126bdc70;
    _objc_alloc(PTR_PTR_1126bdc70);
    func_0x00010bff33e0();
    puVar4 = PTR_PTR_1126af5d0;
    puVar3 = PTR_PTR_1126bdc88;
    func_0x00010bf05740(PTR_PTR_1126bdc88,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084cb748; end: 1084cbd7b; -[SCAdSnap _deepLinkAttachmentWithDeepLink:callbacks:adCommonConfig:adConfigProvider:deepLinkFallbackCallbacks:adResponse:skImpressionSource:isChatFeedAttachmentSource:] */

void FUN_1084cb748(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010c0f0160();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
LAB_1084cb80c:
    puVar2 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b8ca8;
    func_0x00010c0f0160();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) goto LAB_1084cb80c;
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca690;
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = param_1;
  func_0x00010bef60a0(param_1);
  puVar7 = param_1;
  func_0x00010bf20500(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_8;
  func_0x00010c15ed20(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5ac0(puVar1,param_2,puVar2,puVar3,puVar7,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar7);
  puVar1 = param_3;
  func_0x00010bf67dc0();
  puVar3 = PTR_PTR_1126c54f0;
  puVar7 = (undefined *)0x0;
  if ((param_10 & puVar1 == (undefined *)0x3) != 0) {
    puVar1 = (undefined *)0x1;
  }
  if ((long)puVar1 < 2) {
    if (puVar1 == (undefined *)0x0) {
      puVar7 = param_6;
      func_0x00010bf68900();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010c1504a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      func_0x00010bf4b900(puVar7,param_2,puVar1);
      _objc_release(puVar1);
      puVar3 = PTR_PTR_1126c54f0;
      puVar1 = PTR_PTR_1126af5d0;
      if ((int)puVar6 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110edee38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        goto LAB_1084cbc78;
      }
      puVar6 = PTR_PTR_1126c5530;
      _objc_alloc(PTR_PTR_1126c5530);
      puVar1 = param_7;
      func_0x00010c2a3dc0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059ee0(puVar6,param_2,puVar5,0,0,puVar1,param_5,0,0,0);
      func_0x00010c2a4560(puVar3,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar7;
LAB_1084cbb1c:
      _objc_release(puVar6);
      _objc_release(puVar1);
      goto LAB_1084cbbf4;
    }
    if (puVar1 == (undefined *)0x1) {
      puVar7 = PTR_PTR_1126c5530;
      _objc_alloc(PTR_PTR_1126c5530);
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      param_1 = param_3;
      func_0x00010bf68360(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar1,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_7;
      func_0x00010c2a3dc0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059ee0(puVar7,param_2,puVar1,0,0,puVar6,param_5,0,0,0);
      func_0x00010c2a4560(puVar3,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      goto LAB_1084cbb1c;
    }
  }
  else {
    if (puVar1 == (undefined *)0x3) {
      puVar7 = PTR_PTR_1126c5530;
      _objc_alloc(PTR_PTR_1126c5530);
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      param_1 = param_3;
      func_0x00010bf68360(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar1,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_7;
      func_0x00010c2a3dc0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059ee0(puVar7,param_2,puVar1,1,0,puVar6,param_5,0,0,0);
      func_0x00010c2a4560(puVar3,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    else {
      if (puVar1 != (undefined *)0x2) goto LAB_1084cbbfc;
      uVar4 = param_8;
      func_0x00010bef3880(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf8de0(param_1,param_2,param_3,param_6,uVar4,param_7,param_9,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar1 = PTR_PTR_1126af5d0;
      if (param_1 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bef54e0(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110edee18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1084cbc78;
      }
      puVar3 = PTR_PTR_1126c54f0;
      func_0x00010bf05740(PTR_PTR_1126c54f0,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_1084cbbf4:
    _objc_release(param_1);
    puVar7 = puVar3;
  }
LAB_1084cbbfc:
  puVar3 = PTR_PTR_1126bdc88;
  puVar1 = PTR_PTR_1126c54e8;
  _objc_alloc(PTR_PTR_1126c54e8);
  func_0x00010c059e00();
  func_0x00010bf683a0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_1084cbc78:
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084cbd7c; end: 1084cbf53; -[SCAdSnap _deepLinkFallbackToAppInstallWithDeepLink:adConfigProvider:adNetworkAttribution:deepLinkFallbackCallbacks:skImpressionSource:adCommonConfig:] */

void FUN_1084cbd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf05300(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0de9e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c116120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdccb00(param_1,param_2,uVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126bdc70;
    _objc_alloc(PTR_PTR_1126bdc70);
    puVar4 = puVar3;
    func_0x00010c067fc0(puVar3);
    uVar2 = param_6;
    func_0x00010bf05580(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff33e0(puVar5,param_2,puVar4,param_1,param_5,uVar2,param_7,param_8,0);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1084cbf54; end: 1084cc207; -[SCAdSnap _collectionItemAtIndex:] */

void FUN_1084cbf54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_1084cc000:
    func_0x00010c242040(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf68c60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
  }
  else {
    uVar1 = param_3;
    func_0x00010c067fc0();
    uVar2 = param_1;
    func_0x00010bf3fd80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    uVar9 = param_3;
    func_0x00010c067fc0();
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c067fc0();
    uVar4 = param_1;
    func_0x00010bf3fd80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067fc0();
    _objc_release(uVar4);
    if (uVar2 == uVar5) goto LAB_1084cc000;
    uVar9 = uVar9 - ((long)uVar3 < (long)uVar1);
    if ((long)uVar9 < 0) {
LAB_1084cc1f0:
      uVar9 = 0;
      goto LAB_1084cc05c;
    }
    uVar1 = param_1;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    if (uVar9 < uVar5) {
      uVar9 = param_1;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar9);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar8 == 0) goto LAB_1084cc1f0;
      func_0x00010c242040(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar1 = param_1;
    }
    else {
      _objc_release(uVar4);
      uVar9 = 0;
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_1084cc05c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 1084cc208; end: 1084cc2bf; -[SCAdSnap collectionDefaultAttachmentIndex] */

void FUN_1084cc208(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar3 = param_1;
  func_0x00010bef60a0();
  if (ppuVar3 == (undefined **)0xa) {
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf68cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(ppuVar3);
    _objc_release(param_1);
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfb08;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    ppuVar3 = (undefined **)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1084cc2c0; end: 1084cc343; -[SCAdSnap _appInstallCustomProductPageIdWithProductPageId:adConfigProvider:] */

void FUN_1084cc2c0(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010bf8fdc0();
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b8ca8;
    func_0x00010c0f0140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    puVar3 = param_3;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar1;
    }
    _objc_retain(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084cc344; end: 1084cc42f; -[SCAdSnap isInstantPageEnabled] */

bool FUN_1084cc344(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_1;
  func_0x00010bf3ff00();
  if (lVar3 == 0) {
    func_0x00010c2a3d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c067c00();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    _objc_release();
    _objc_release(param_1);
  }
  else {
    lVar7 = 0;
    do {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c2a3d60(param_1,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c067c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      _objc_release(puVar4);
      bVar1 = lVar6 == 0;
      bVar2 = lVar3 + -1 != lVar7;
      lVar7 = lVar7 + 1;
    } while (bVar1 && bVar2);
  }
  return !bVar1;
}



/* Entry: 1084cc430; end: 1084cc53f; -[SCAdSnap hasShopifyStorefrontToken] */

bool FUN_1084cc430(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = param_1;
  func_0x00010bf3ff00();
  if (lVar2 == 0) {
    func_0x00010c2a3d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c257fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    lVar7 = 0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c2a3d60(param_1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c257fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(puVar3);
      bVar1 = lVar2 + -1 != lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar6 == 0 && bVar1);
  }
  return lVar6 != 0;
}



/* Entry: 1084cc540; end: 1084cc5a7; -[SCAdSnap isShopPayUser] */

long FUN_1084cc540(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf3ff00();
  if (lVar1 == 0) {
    func_0x00010c2a3d40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2a3d60(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfb08);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_1;
  func_0x00010c07dde0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1084cc5a8; end: 1084cc63b; -[SCAdSnap isEligibleToAppendCidForExbHoppingWithCollectionItemIndex:] */

undefined * FUN_1084cc5a8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    func_0x00010c2a3d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf8f440();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3d60(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf8f440();
    _objc_release(param_1);
    param_1 = puVar1;
  }
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1084cc63c; end: 1084cc6b3; -[SCAdSnap isMultiSegment] */

bool FUN_1084cc63c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d1fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d1fe0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3 == 1;
}



/* Entry: 1084cc6b4; end: 1084cc79f; -[SCAdSnap isMultiSegmentVerticalEndCard] */

bool FUN_1084cc6b4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = param_1;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d1fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d1fe0();
  if (lVar5 == 2) {
    func_0x00010bef5620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf66880();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf94380();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf94480();
    bVar1 = lVar7 != 0;
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1084cc7a0; end: 1084cc7df; -[SCAdSnap isSpotlightSourced] */

bool FUN_1084cc7a0(long param_1)

{
  long lVar1;
  
  func_0x00010c0ed080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1084cc7e0; end: 1084cc87f; -[SCAdSnap organicSpotlightCompositeStoryId] */

void FUN_1084cc7e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010c07f5c0();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c0ed080();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bdc1b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ea2cd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084cc880; end: 1084cc8b3; -[SCAdSnap isMediaDpa] */

void FUN_1084cc880(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c071100();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c077810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMediaComposer_1125fb810);
    return;
  }
  return;
}



/* Entry: 1084cc8b4; end: 1084cc913; -[SCAdSnap isMediaComposer] */

bool FUN_1084cc8b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6c20();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 3;
}



/* Entry: 1084cc914; end: 1084cc9c3; -[SCAdSnap isTopSnapMediaStreaming] */

bool FUN_1084cc914(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010c130960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0c6c20();
  bVar1 = false;
  if ((lVar4 == 2) && (lVar3 != 0)) {
    lVar4 = lVar3;
    func_0x00010c130980(lVar3);
    bVar1 = lVar4 == 0;
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 1084cc9c4; end: 1084ccb03;  */

undefined8
FUN_1084cc9c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b9250;
  if (param_4 != 0) {
    func_0x00010bef60a0(param_1);
    func_0x00010bef4240(param_1);
    func_0x00010c0da220(puVar1);
    puVar1 = PTR_PTR_1126b9250;
    func_0x00010c07f680();
    if ((int)puVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c294f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar5 = 0;
      if (lVar2 == 0) goto LAB_1084ccab8;
      lVar2 = param_1;
      func_0x00010bfd4380();
      if ((int)lVar2 != 0) {
        lVar2 = param_4;
        func_0x00010c116c00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar4 == 0) {
          uVar5 = param_5;
          func_0x00010c0ec0c0(param_5);
          goto LAB_1084ccab8;
        }
      }
    }
  }
  uVar5 = 0;
LAB_1084ccab8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 1084ccb04; end: 1084ccbc7; -[SCAdsComposerTopSnap templateType] */

undefined8 FUN_1084ccb04(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf89420();
  uVar2 = 0;
  switch(puVar1) {
  case (undefined *)0x0:
                    /* WARNING: Could not recover jumptable at 0x00010c26b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_templateOneOfCase_112678658);
    return param_1;
  case (undefined *)0x2:
    uVar2 = 2;
    break;
  case (undefined *)0x3:
    uVar2 = 3;
    break;
  case (undefined *)0x4:
    uVar2 = 4;
    break;
  case (undefined *)0x5:
    uVar2 = 5;
    break;
  case (undefined *)0x6:
    uVar2 = 6;
    break;
  case (undefined *)0x7:
    uVar2 = 7;
    break;
  case (undefined *)0x8:
    uVar2 = 8;
    break;
  case (undefined *)0x9:
    uVar2 = 9;
    break;
  case (undefined *)0xa:
    uVar2 = 10;
    break;
  case (undefined *)0xb:
    uVar2 = 0xb;
    break;
  case (undefined *)0xc:
    uVar2 = 0xc;
    break;
  case (undefined *)0xd:
    uVar2 = 0xd;
    break;
  case (undefined *)0xe:
    uVar2 = 0x11;
  }
  return uVar2;
}



/* Entry: 1084ccbc8; end: 1084ccbff; -[SCAdsComposerTopSnap templateTypeAsString] */

undefined ** FUN_1084ccbc8(int param_1)

{
  undefined **ppuVar1;
  
  func_0x00010c26b160();
  if (param_1 - 2U < 0x10) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a4f218)[param_1 - 2U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e86f78;
  }
  return ppuVar1;
}



/* Entry: 1084ccc00; end: 1084ccc4b; -[SCAdsComposerTopSnap backgroundTypeAsString] */

undefined ** FUN_1084ccc00(int param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010bf141e0();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e86f78;
  if (param_1 == 0xe) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110edf038;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110edf018;
  if (param_1 != 0xf) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110edf058;
  if (param_1 != 0x16) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1084ccc4c; end: 1084ccc57; +[SCAdLeadGenerationView componentPath] */

undefined ** FUN_1084ccc4c(void)

{
  return &PTR____CFConstantStringClassReference_110edf078;
}



/* Entry: 1084ccc58; end: 1084ccc8b; -[SCAdLeadGenerationView initWithViewModel:componentContext:runtime:] */

void FUN_1084ccc58(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fca80;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1084ccc8c; end: 1084cccdb; -[SCAdLeadGenerationView setViewModel:] */

void FUN_1084ccc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084cccdc; end: 1084ccd1f; -[SCAdLeadGenerationView viewModel] */

void FUN_1084cccdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084ccd20; end: 1084ccd43; +[SCCPhoneVerifier valdiMarshallableObjectDescriptor] */

void FUN_1084ccd20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a4f298;
  param_1[1] = &PTR_DAT_110a4f2f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1084ccd44; end: 1084cce43; -[SCAdLeadGenerationContext initWithOnClickHeaderDismiss:validatePhoneNumber:submitLeads:openUrl:] */

undefined8 *
FUN_1084ccd44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_48 = PTR_PTR_1126fca88;
  uStack_50 = param_1;
  FUN_1084ccfbc();
  puVar4 = &uStack_50;
  _objc_msgSendSuper2(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1084cce44; end: 1084cce6b; +[SCAdLeadGenerationContext valdiMarshallableObjectDescriptor] */

void FUN_1084cce44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a4f358;
  param_1[1] = &PTR_DAT_110a4f4d8;
  param_1[2] = &PTR_s_ob_v_110a4f328;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1084cce6c; end: 1084cce93;  */

undefined8 FUN_1084cce6c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 1084cce94; end: 1084ccf13;  */

void FUN_1084cce94(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1084ccf8c;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1084ccf14; end: 1084ccf6b; -[SCAdLeadGenerationViewModel initWithItemModels:brandName:headline:advertiserDescription:privacyPolicyUrl:] */

void FUN_1084ccf14(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fca90;
  uStack_20 = param_1;
  FUN_1084ccfbc(param_1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_msgSendSuper2(&uStack_20);
  return;
}



/* Entry: 1084ccf6c; end: 1084ccf8b; +[SCAdLeadGenerationViewModel valdiMarshallableObjectDescriptor] */

void FUN_1084ccf6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a4f530;
  param_1[1] = &PTR_DAT_110a4f740;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1084ccf8c; end: 1084ccfbb;  */

void FUN_1084ccf8c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1084ccfbc; end: 1084ccfd3;  */

void FUN_1084ccfbc(void)

{
  return;
}



/* Entry: 1084ccfd4; end: 1084ccfdb; -[SCCPhoneVerificationPhoneVerificationMethod__Enum init] */

void FUN_1084ccfd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 1084ccfdc; end: 1084ccfe3; -[SCCPhoneVerificationPhoneVerificationUseCase__Enum init] */

void FUN_1084ccfdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 1084ccfe4; end: 1084ccfeb; -[SCCPhoneVerificationSendCodeResultKind__Enum init] */

void FUN_1084ccfe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 1084ccfec; end: 1084ccff3; -[SCCPhoneVerificationVerifyCodeResultKind__Enum init] */

void FUN_1084ccfec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 1084ccff4; end: 1084cd017; -[SCCPhoneVerificationReportExitRequest initWithE164PhoneNumber:useCase:] */

void FUN_1084ccff4(void)

{
  func_0x0001084cd14c(PTR_PTR_1126fca98);
  return;
}



/* Entry: 1084cd018; end: 1084cd02b; +[SCCPhoneVerificationReportExitRequest valdiMarshallableObjectDescriptor] */

void FUN_1084cd018(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a4f778;
  param_1[1] = &PTR_DAT_110a4f7c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1084cd02c; end: 1084cd067; -[SCCPhoneVerificationSendCodeRequest initWithNationalPhoneNumber:countryIso:method:useCase:] */

void FUN_1084cd02c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fcaa0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}


