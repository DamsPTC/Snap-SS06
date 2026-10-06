/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071a5918; end: 1071a599b; -[SCStickerPickerMenuView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071a5918(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if ((*(long *)(param_1 + _DAT_112764c1c) == 0) && (param_3 == *(long *)(param_1 + _DAT_112764cbc))
     ) {
    lVar1 = 1;
  }
  else {
    param_1 = param_1 + _DAT_112764cd4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c254a40();
    _objc_release(param_1);
  }
  return lVar1;
}



/* Entry: 1071a599c; end: 1071a60e7; -[SCStickerPickerMenuView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a599c(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,undefined *param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar5 = param_7;
  if (param_7 != *(long *)(param_5 + _DAT_112764cbc)) {
    func_0x00010bf6e0c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1071a60a8;
  }
  lVar10 = (long)_DAT_112764cd4;
  uVar1 = param_5 + lVar10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
LAB_1071a5c18:
    lVar9 = param_5 + lVar10;
    _objc_loadWeakRetained();
    func_0x00010c262b60();
    _objc_release(lVar9);
    func_0x00010bf6e0c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21dfa0();
    lVar8 = (long)_DAT_112764c1c;
    func_0x00010c207200(lVar5);
    func_0x00010c186860(lVar5);
    func_0x00010c1a0600(lVar5);
    lVar9 = param_5;
    func_0x00010bf6b020(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db6c0(lVar5);
    _objc_release(lVar9);
    func_0x00010c1668c0(lVar5);
    func_0x00010c1ef000(lVar5);
    func_0x00010c185a00(lVar5);
    func_0x00010c1705c0(lVar5);
    uVar6 = *(undefined8 *)(param_5 + _DAT_112764c88);
    func_0x00010bfe63a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfdc0(lVar5);
    _objc_release(uVar6);
    func_0x00010c16db80(lVar5);
    lVar9 = param_5 + lVar10;
    _objc_loadWeakRetained();
    func_0x00010c1554e0(param_8);
    lVar3 = lVar9;
    func_0x00010c254a40();
    _objc_release(lVar9);
    _objc_retain(param_8);
    puVar7 = param_8;
    if (*(long *)(param_5 + lVar8) == 0) {
      uVar6 = 0;
      if (1 < lVar3) {
        func_0x00010c1554e0(0,param_8);
        func_0x00010bf33640(param_5);
        lVar9 = param_5;
        func_0x00010c089de0(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar9;
        func_0x00010c0e00e0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(lVar3);
        _objc_release(puVar7);
        _objc_release(lVar9);
        puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010c1554e0(param_8);
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_8);
        uVar6 = 0x404d800000000000;
      }
      func_0x00010c173600(uVar6,lVar5);
    }
    lVar9 = param_5 + lVar10;
    _objc_loadWeakRetained(lVar9);
    lVar3 = lVar9;
    func_0x00010c254aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar10 = param_5 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar9 = lVar10;
    func_0x00010c08d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = param_5;
    func_0x00010c0849a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b61e0(lVar5);
    _objc_release(lVar10);
    func_0x00010c0deba0(lVar9);
    func_0x00010c20ab00(lVar5);
    func_0x00010c18b5e0(lVar5);
    lVar10 = param_5 + _DAT_112764c5c;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c171360(lVar5);
    _objc_release(lVar10);
    func_0x00010c160fc0(lVar5);
    if ((*(ulong *)(param_5 + lVar8) & 0xfffffffffffffffd) == 1) {
      if (*(double *)(param_5 + _DAT_112764c40) != -1.0) {
        func_0x00010c284620(lVar5);
      }
      func_0x00010c152840(lVar5);
    }
    lVar8 = (long)_DAT_112764c44;
    lVar10 = *(long *)(param_5 + lVar8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 != 0) {
      uVar6 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c182380(lVar5);
      _objc_release(uVar6);
    }
    _objc_release(lVar9);
    _objc_release(lVar3);
  }
  else {
    lVar9 = param_5 + lVar10;
    _objc_loadWeakRetained();
    lVar8 = (long)_DAT_112764c1c;
    lVar3 = lVar9;
    func_0x00010c254a80();
    _objc_release(lVar9);
    _objc_release(uVar1);
    if ((int)lVar3 == 0) goto LAB_1071a5c18;
    func_0x00010bf6e0c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7520();
    _objc_release(lVar3);
    _objc_release(lVar9);
    uVar1 = param_5 + lVar10;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar9 = lVar5;
      func_0x00010bf4dce0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      uVar6 = param_3;
      dVar12 = param_4;
      _objc_release(lVar9);
      if ((*(ulong *)(param_5 + lVar8) & 0xfffffffffffffffd) == 1) {
        lVar9 = (long)_DAT_112764c40;
        dVar13 = *(double *)(param_5 + lVar9);
        if (dVar13 != -1.0) {
          lVar3 = lVar5;
          func_0x00010bf4dce0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          lVar8 = lVar5;
          func_0x00010bf4dce0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          dVar11 = *(double *)(param_5 + lVar9);
          param_4 = *(double *)(param_5 + _DAT_112764c10);
          func_0x00010c2739e0(param_4,PTR_PTR_1126d4eb0);
          param_4 = (dVar12 - dVar11) - param_4;
          param_1 = 0;
          _objc_release(lVar8);
          _objc_release(lVar3);
          param_3 = uVar6;
          param_2 = dVar13;
        }
      }
      puVar4 = (undefined *)(param_5 + lVar10);
      _objc_loadWeakRetained(puVar4);
      puVar7 = puVar4;
      func_0x00010c254a20(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    func_0x00010c16d4a0(puVar7);
    lVar10 = lVar5;
    func_0x00010bf4dce0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar10);
  }
  _objc_release(puVar7);
LAB_1071a60a8:
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1071a60e8; end: 1071a65ef; -[SCStickerPickerMenuView collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a60e8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = param_5;
  func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110ef2c38);
  lVar4 = param_4;
  if ((int)uVar3 == 0) {
    uVar3 = param_5;
    func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110ef2c18);
    if ((int)uVar3 != 0) {
      func_0x00010bf6e120(param_4,param_3,&PTR____CFConstantStringClassReference_110ef2c18,
                          &PTR____CFConstantStringClassReference_110ea12d8,param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      lVar5 = (long)_DAT_112764cf4;
      param_1 = param_1 - *(double *)(param_2 + lVar5);
      dVar6 = param_1 * 0.5;
      func_0x00010bf20c00(lVar4);
      _CGRectGetHeight();
      func_0x00010c1aace0(dVar6,(param_1 - *(double *)(param_2 + lVar5)) * 0.5,lVar4);
      lVar1 = param_2 + _DAT_112764cd4;
      _objc_loadWeakRetained(lVar1);
      uVar3 = param_6;
      func_0x00010c1554e0(param_6);
      lVar5 = lVar1;
      func_0x00010c254ac0(lVar1,param_3,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar5;
      func_0x00010bf33400(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde5b40(0x3fd3333333333333,param_2,param_3,lVar4,lVar1,0);
      _objc_release(lVar1);
      func_0x00010c1af000(lVar4,param_3,1);
      lVar1 = lVar5;
      func_0x00010c27dd80(lVar5);
      func_0x00010bddbf80(param_2,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(lVar4,param_3,param_2);
      goto LAB_1071a6360;
    }
    uVar3 = param_5;
    func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110ef2c78);
    if ((int)uVar3 != 0) {
      func_0x00010bf6e120(param_4,param_3,&PTR____CFConstantStringClassReference_110ef2c78,
                          &PTR____CFConstantStringClassReference_110ea12d8,param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      lVar5 = (long)_DAT_112764cf4;
      param_1 = param_1 - *(double *)(param_2 + lVar5);
      dVar6 = param_1 * 0.5;
      func_0x00010bf20c00(lVar4);
      _CGRectGetHeight();
      func_0x00010c1aace0(dVar6,(param_1 - *(double *)(param_2 + lVar5)) * 0.5,lVar4);
      lVar1 = param_2 + _DAT_112764cd4;
      _objc_loadWeakRetained(lVar1);
      lVar5 = lVar1;
      func_0x00010c254aa0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1071a61e4;
    }
    uVar3 = param_5;
    func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110ef2c58);
    if ((int)uVar3 != 0) {
      func_0x00010bf6e120(param_4,param_3,&PTR____CFConstantStringClassReference_110ef2c58,
                          &PTR____CFConstantStringClassReference_110ea12d8,param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      lVar5 = (long)_DAT_112764cf4;
      param_1 = param_1 - *(double *)(param_2 + lVar5);
      dVar6 = param_1 * 0.5;
      func_0x00010bf20c00(lVar4);
      _CGRectGetHeight();
      func_0x00010c1aace0(dVar6,(param_1 - *(double *)(param_2 + lVar5)) * 0.5,lVar4);
      lVar1 = param_2 + _DAT_112764cd4;
      _objc_loadWeakRetained(lVar1);
      lVar5 = lVar1;
      func_0x00010c254aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar5;
      func_0x00010bf33400(lVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0;
      goto LAB_1071a621c;
    }
    uVar3 = param_5;
    func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110ef2c98);
    if ((int)uVar3 == 0) {
      lVar4 = 0;
      goto LAB_1071a636c;
    }
    func_0x00010bf6e120(param_4,param_3,&PTR____CFConstantStringClassReference_110ef2c98,
                        &PTR____CFConstantStringClassReference_110ea1318,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d4eb0;
    func_0x00010c273960(PTR_PTR_1126d4eb0,param_3,*(undefined8 *)(param_2 + _DAT_112764c1c));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(lVar4,param_3,puVar2);
    _objc_release(puVar2);
    func_0x00010bf20c00(lVar4);
    _CGRectGetHeight();
    lVar5 = lVar4;
    func_0x00010c08c0e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1 * 0.5);
  }
  else {
    func_0x00010bf6e120(param_4,param_3,&PTR____CFConstantStringClassReference_110ef2c38,
                        &PTR____CFConstantStringClassReference_110ea12d8,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    lVar5 = (long)_DAT_112764cf4;
    param_1 = param_1 - *(double *)(param_2 + lVar5);
    dVar6 = param_1 * 0.5;
    func_0x00010bf20c00(lVar4);
    _CGRectGetHeight();
    func_0x00010c1aace0(dVar6,(param_1 - *(double *)(param_2 + lVar5)) * 0.5,lVar4);
    lVar1 = param_2 + _DAT_112764cd4;
    _objc_loadWeakRetained(lVar1);
    uVar3 = param_6;
    func_0x00010c1554e0(param_6);
    lVar5 = lVar1;
    func_0x00010c254ac0(lVar1,param_3,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
LAB_1071a61e4:
    _objc_release(lVar1);
    lVar1 = lVar5;
    func_0x00010bf33400(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
LAB_1071a621c:
    func_0x00010bde5b40(0x3fd3333333333333,param_2,param_3,lVar4,lVar1,uVar3);
    param_2 = lVar1;
LAB_1071a6360:
    _objc_release(param_2);
  }
  _objc_release(lVar5);
LAB_1071a636c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1071a65f0; end: 1071a67cb; -[SCStickerPickerMenuView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a65f0(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_7);
  lVar4 = (long)_DAT_112764cbc;
  if ((param_7 == *(long *)(param_5 + lVar4)) && ((*(byte *)(param_5 + _DAT_112764d44) & 1) == 0)) {
    func_0x00010bf4cdc0();
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
    lVar1 = *(long *)(param_5 + lVar4);
    dVar9 = param_3 * 0.5;
    func_0x00010bfed040(param_1 + dVar9,param_2 + param_4 * 0.5);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 1.0;
    lVar4 = lVar1;
    if (*(long *)(param_5 + _DAT_112764c1c) == 0) {
      dVar7 = param_1;
      _fmod(param_1,param_3);
      dVar8 = dVar7 - dVar9;
      if (dVar7 <= dVar9) {
        dVar8 = dVar9 - dVar7;
      }
      dVar8 = dVar8 / dVar9;
      lVar6 = (long)_DAT_112764d1c;
      lVar2 = *(long *)(param_5 + lVar6);
      func_0x00010c1554e0();
      lVar3 = lVar1;
      func_0x00010c1554e0();
      if (lVar2 == lVar3) {
        lVar4 = *(long *)(param_5 + lVar6);
        _objc_retain(lVar4);
        _objc_release(lVar1);
      }
    }
    param_1 = param_1 / param_3;
    func_0x00010c1fb1a0(param_1,dVar8,param_5,param_6,lVar4);
    func_0x00010bf4cdc0(param_7);
    dVar8 = param_1;
    func_0x00010bf20c00(param_7);
    _CGRectGetWidth();
    param_1 = param_1 / dVar8;
    func_0x00010bf4d5e0(param_7);
    dVar9 = dVar8;
    func_0x00010bf20c00(param_7);
    _CGRectGetWidth();
    dVar8 = (double)((long)(dVar8 / dVar9) + -1);
    if (param_1 <= dVar8) {
      dVar8 = param_1;
    }
    lVar1 = (long)_DAT_112764d00;
    func_0x00010c152120(*(undefined8 *)(param_5 + lVar1));
    if (dVar8 != param_1) {
      func_0x00010c1f7c00(dVar8,*(undefined8 *)(param_5 + lVar1));
      func_0x00010c069fe0(*(undefined8 *)(param_5 + lVar1));
      uVar5 = *(undefined8 *)(param_5 + _DAT_112764d04);
      func_0x00010c159800(*(undefined8 *)(param_5 + lVar1));
      func_0x00010c1521c0(uVar5,param_6,0);
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1071a67cc; end: 1071a683b; -[SCStickerPickerMenuView scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a67cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != *(long *)(param_1 + _DAT_112764cbc)) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764d1c);
  lVar1 = param_1;
  func_0x00010be9e120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd740(param_1,param_2,uVar2,lVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071a683c; end: 1071a68bb; -[SCStickerPickerMenuView scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a683c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((param_4 & 1) == 0) && (param_3 == *(long *)(param_1 + _DAT_112764cbc))) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112764d1c);
    lVar1 = param_1;
    func_0x00010be9e120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfd620(param_1,param_2,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1071a68bc; end: 1071a6987; -[SCStickerPickerMenuView scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a68bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112764d1c;
  lVar2 = *(long *)(param_1 + lVar3);
  if ((lVar2 != 0) && (param_3 == *(long *)(param_1 + _DAT_112764cbc))) {
    lVar1 = param_1;
    func_0x00010be9e120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfd620(param_1,param_2,lVar2,lVar1);
    _objc_release(lVar1);
    lVar2 = param_1;
    func_0x00010be9e120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdde660(param_1,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010bed6120(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    func_0x00010be590a0(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a6988; end: 1071a69cf; -[SCStickerPickerMenuView setSelectedIndex:] */

void FUN_1071a6988(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1554e0(param_3);
  func_0x00010c1fb1a0((double)lVar1,0x3ff0000000000000,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a69d0; end: 1071a6c6b; -[SCStickerPickerMenuView setSelectedIndex:highlightedIndex:selectionPercentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a69d0(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_4);
  lVar12 = (long)_DAT_112764d1c;
  uVar10 = *(ulong *)(param_2 + lVar12);
  _objc_retain(uVar10);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar12);
  *(ulong *)(param_2 + lVar12) = param_4;
  _objc_release(uVar1);
  lVar11 = param_2 + (long)_DAT_112764cd4;
  _objc_loadWeakRetained();
  lVar2 = lVar11;
  func_0x00010c262b60();
  *(long *)(param_2 + (long)_DAT_112764cfc) = lVar2;
  _objc_release(lVar11);
  func_0x00010be590a0(param_2,param_3,param_4);
  if (*(long *)(param_2 + (long)_DAT_112764c1c) == 0) {
    uVar3 = param_2;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c1554e0(param_4);
    uVar5 = uVar3;
    func_0x00010c254ac0(uVar3,param_3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar5;
    func_0x00010c27dd80();
    uVar4 = param_4;
    func_0x00010c0840e0(param_4);
    uVar6 = uVar10;
    func_0x00010c1554e0();
    uVar7 = param_4;
    func_0x00010c1554e0();
    if (uVar6 != uVar7) {
      uVar6 = param_2;
      func_0x00010c089de0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0e00e0(uVar6,param_3,puVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c067fc0();
      _objc_release(uVar7);
      _objc_release(puVar8);
      _objc_release(uVar6);
      puVar8 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      uVar6 = param_4;
      func_0x00010c1554e0(param_4);
      func_0x00010bfed020(puVar8,param_3,uVar4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_2 + lVar12);
      *(undefined **)(param_2 + lVar12) = puVar8;
      _objc_release(uVar1);
    }
    uVar6 = uVar10;
    func_0x00010c071ae0(uVar10,param_3,param_4);
    lVar11 = (long)_DAT_112764cf0;
    if ((uVar6 & 1) == 0) {
      func_0x00010c1fb160(*(undefined8 *)(param_2 + lVar11),param_3,param_4);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      func_0x00010c089de0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4,param_3,puVar8,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar4);
      _objc_release(puVar8);
    }
    func_0x00010c20fd60(param_1,*(undefined8 *)(param_2 + lVar11));
    _objc_release(uVar5);
  }
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071a6c6c; end: 1071a6cdb; -[SCStickerPickerMenuView categoryTypeForIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071a6c6c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112764cd4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c254ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1071a6cdc; end: 1071a6e67; -[SCStickerPickerMenuView _saveCategoryContentOffsetY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a6cdc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112764cbc;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(ulong *)(param_1 + lVar9);
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d4ff8;
      _objc_opt_class(PTR_PTR_1126d4ff8);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((uVar6 & 1) != 0) {
        func_0x00010bf4ce00(uVar4);
        func_0x00010c0df720(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112764c44));
        _objc_release(puVar5);
      }
      _objc_release(uVar4);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(lVar2 + _DAT_112764d1c);
  _objc_retain(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1071a6e68; end: 1071a6e97; -[SCStickerPickerMenuView selectedCategoryIndexPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a6e68(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764d1c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071a6e98; end: 1071a7273; -[SCStickerPickerMenuView openAtCategory:sticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a6e98(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c254b20(*(undefined8 *)(param_1 + _DAT_112764d14));
  func_0x00010c1395e0(*(undefined8 *)(param_1 + _DAT_112764c94));
  uVar5 = *(undefined8 *)(param_1 + _DAT_112764c18);
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c2545e0(PTR_PTR_1126b19f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7ac0(uVar5);
  _objc_release(puVar1);
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c1554e0();
    lVar6 = (long)_DAT_112764cd4;
    lVar7 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar2 = lVar7;
    func_0x00010c0df480();
    if ((long)puVar1 < lVar2) {
      puVar1 = param_3;
      func_0x00010c0840e0();
      lVar6 = param_1 + lVar6;
      _objc_loadWeakRetained();
      func_0x00010c1554e0(param_3);
      lVar2 = lVar6;
      func_0x00010c254a40();
      _objc_release(lVar6);
      _objc_release(lVar7);
      if ((long)puVar1 < lVar2) goto LAB_1071a7034;
    }
    else {
      _objc_release(lVar7);
    }
  }
  lVar7 = (long)_DAT_112764d20;
  uVar3 = param_1 + lVar7;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bfeccc0();
    _objc_release(lVar7);
  }
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_3 = puVar1;
LAB_1071a7034:
  lVar7 = (long)_DAT_112764c1c;
  if (*(long *)(param_1 + lVar7) == 0) {
    lVar6 = param_1;
    func_0x00010bde9dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112764cf0);
    func_0x00010c262bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1525a0();
    _objc_release(uVar5);
    func_0x00010c078c00();
    func_0x00010be85100(param_1);
    func_0x00010c1a41c0(param_1);
    func_0x00010c1cbe20(param_1);
    _objc_release(lVar6);
  }
  else {
    lVar6 = (long)_DAT_112764d1c;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = param_3;
    _objc_release(uVar5);
    lVar6 = param_1 + _DAT_112764cd4;
    _objc_loadWeakRetained();
    lVar2 = lVar6;
    func_0x00010c262b60();
    *(long *)(param_1 + _DAT_112764cfc) = lVar2;
    _objc_release(lVar6);
    func_0x00010c1525a0(*(undefined8 *)(param_1 + _DAT_112764d04));
  }
  func_0x00010c1525a0(*(undefined8 *)(param_1 + _DAT_112764cbc));
  func_0x00010bed6120(param_1);
  func_0x00010be590a0(param_1);
  func_0x00010c1a7f60(param_1);
  func_0x00010c1b3000(param_1);
  if (*(long *)(param_1 + lVar7) == 0) {
    lVar7 = param_1 + _DAT_112764d20;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c0e9e00();
    _objc_release(lVar7);
    func_0x00010bedeea0(param_1);
  }
  if ((param_4 != 0) && (param_3 != (undefined *)0x0)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112764c44));
  }
  if (((*(char *)(param_1 + _DAT_112764d48) == '\x01') ||
      (puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0, func_0x00010c078c00(),
      ((ulong)puVar1 & 1) == 0)) &&
     ((puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0, func_0x00010c078c00(), (int)puVar1 == 0 ||
      (*(char *)(param_1 + _DAT_112764cdc) == '\x01')))) {
    func_0x00010be85100(param_1);
  }
  func_0x00010c193b00(*(undefined8 *)(param_1 + _DAT_112764ce8));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a7274; end: 1071a737f; -[SCStickerPickerMenuView openSuperCategoryIfAvailableWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a7274(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112764cd4;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c254b00();
  _objc_release(lVar2);
  if ((int)lVar1 != 0) {
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    lVar1 = lVar2;
    func_0x00010bfaf4e0();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + _DAT_112764d1c);
    if ((lVar2 == 0) || (func_0x00010c1554e0(), lVar2 != lVar1)) {
      lVar4 = param_1 + lVar4;
      _objc_loadWeakRetained();
      lVar2 = lVar4;
      func_0x00010c254a40();
      _objc_release(lVar4);
      if (0 < lVar2) {
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e8ee0(param_1,param_2,puVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 1071a7380; end: 1071a73af; -[SCStickerPickerMenuView prepareToAnimateViewsInIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a7380(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112764d4c) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112764d4c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bee2950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x407f400000000000,param_1,PTR_s__updateTranslationForDismissalAn_1125963f8,0);
  return;
}



/* Entry: 1071a73b0; end: 1071a73bb; -[SCStickerPickerMenuView animateViewsInWithCompletion:] */

void FUN_1071a73b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd3333333333333,param_1,PTR_s_animateViewsInWithDuration_compl_11259e678);
  return;
}



/* Entry: 1071a73bc; end: 1071a749f; -[SCStickerPickerMenuView animateViewsInWithDuration:completion:] */

void FUN_1071a73bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010c1a7f60(param_2,param_3,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1071a74a0;
  puStack_50 = &UNK_110842e18;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1071a74b4;
  puStack_78 = &UNK_110842508;
  uStack_70 = param_4;
  uStack_48 = param_2;
  _objc_retain(param_4);
  func_0x00010bf03460(param_1,0,0x3feb333333333333,0,puVar1,param_3,2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(param_4);
  return;
}



/* Entry: 1071a74a0; end: 1071a74c7;  */

void FUN_1071a74a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,0,*(undefined8 *)(param_1 + 0x20),
             PTR_s__updateTranslationForDismissalAn_1125963f8,0);
  return;
}



/* Entry: 1071a74c8; end: 1071a751f; -[SCStickerPickerMenuView _animateViewsOut] */

void FUN_1071a74c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1071a7520;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03360(0x3fd3333333333333,param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1071a7520; end: 1071a757f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a7520(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764d4c;
  func_0x00010c1a7f60(*(long *)(param_1 + 0x20),param_2,
                      (*(byte *)(*(long *)(param_1 + 0x20) + lVar2) ^ 0xff) & 1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (((*(byte *)(lVar1 + lVar2) & 1) == 0) && (*(long *)(lVar1 + _DAT_112764c1c) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 1071a7580; end: 1071a7657; -[SCStickerPickerMenuView animateViewsOutWithDuration:completion:] */

void FUN_1071a7580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1071a7658;
  puStack_50 = &UNK_110842e18;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1071a7670;
  puStack_78 = &UNK_110842508;
  uStack_70 = param_4;
  uStack_48 = param_2;
  _objc_retain(param_4);
  func_0x00010bf03460(param_1,0,0x3feccccccccccccd,0,puVar1,param_3,0,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(param_4);
  return;
}



/* Entry: 1071a7658; end: 1071a7683;  */

void FUN_1071a7658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x407f400000000000,*(undefined8 *)(param_1 + 0x20),
             PTR_s__updateTranslationForDismissalAn_1125963f8,0);
  return;
}



/* Entry: 1071a7684; end: 1071a77a7; -[SCStickerPickerMenuView willDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a7684(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + _DAT_112764cbc);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      puVar4 = PTR_PTR_1126d4ff8;
      _objc_opt_class(PTR_PTR_1126d4ff8);
      uVar5 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      if ((uVar5 & 1) != 0) {
        func_0x00010c2a5f80(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bde1750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1071a77a8; end: 1071a77bb; -[SCStickerPickerMenuView close] */

void FUN_1071a77a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__closeWithShouldClearSearchBar_s_112555f70,0,0,0,0);
  return;
}



/* Entry: 1071a77bc; end: 1071a77c3; -[SCStickerPickerMenuView closeWithShouldClearSearchBar:shouldAnimate:withStickerPicked:] */

void FUN_1071a77bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeWithShouldClearSearchBar_s_112555f70);
  return;
}



/* Entry: 1071a77c4; end: 1071a7c0b; -[SCStickerPickerMenuView _closeWithShouldClearSearchBar:shouldAnimate:withStickerPicked:shouldHandleTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a77c4(long param_1,undefined8 param_2,uint param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  double dVar27;
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
  func_0x00010be59ca0();
  func_0x00010be8d5c0(param_1);
  uVar20 = *(undefined8 *)(param_1 + _DAT_112764c18);
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c2545e0(PTR_PTR_1126b19f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ba20(uVar20);
  _objc_release(puVar3);
  if (param_5 == 0) {
    lVar18 = param_1 + _DAT_112764cd4;
    _objc_loadWeakRetained(lVar18);
    func_0x00010c254b00();
    _objc_release(lVar18);
    lVar18 = (long)_DAT_112764d14;
    uVar16 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf60380(param_1);
    func_0x00010c254b80();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112764d18);
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar4;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0ae0(uVar16);
    _objc_release(uVar20);
    _objc_release(uVar4);
  }
  else {
    lVar18 = (long)_DAT_112764d14;
  }
  func_0x00010c2547c0(*(undefined8 *)(param_1 + lVar18));
  lVar18 = (long)_DAT_112764cbc;
  uVar5 = *(ulong *)(param_1 + lVar18);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (uVar13 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bfecfa0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_6 != 0) {
    if (param_4 == 0) {
      func_0x00010c1a7f60(param_1);
      if (*(long *)(param_1 + _DAT_112764c1c) == 0) {
        func_0x00010c12c960(param_1);
      }
    }
    else {
      func_0x00010bdcb400();
    }
  }
  *(undefined1 *)(param_1 + _DAT_112764d4c) = 0;
  func_0x00010c1b3000(param_1);
  puVar3 = PTR_PTR_1126d4ff8;
  _objc_opt_class(PTR_PTR_1126d4ff8);
  uVar5 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar3);
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar5 & 1) == 0) {
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca420;
  }
  else {
    func_0x00010bf4ce00(uVar13);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar22 = param_1 + _DAT_112764d20;
  _objc_loadWeakRetained(lVar22);
  lVar24 = (long)_DAT_112764c2c;
  lVar25 = (long)_DAT_112764c30;
  lVar19 = (long)_DAT_112764c34;
  func_0x00010bf3e000();
  _objc_release(lVar22);
  if (param_3 != 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112764ce8));
    *(undefined1 *)(param_1 + _DAT_112764d48) = 0;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if ((((ulong)puVar3 & 1) != 0) || (*(char *)(param_1 + _DAT_112764cdc) == '\x01')) {
    func_0x00010be85100(param_1);
  }
  lVar22 = (long)_DAT_112764ce8;
  if ((param_3 & 1) == 0) {
    uVar2 = (undefined1)*(undefined8 *)(param_1 + lVar22);
    func_0x00010c071280();
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + _DAT_112764d48) = uVar2;
  func_0x00010c193b00(*(undefined8 *)(param_1 + lVar22));
  *(undefined8 *)(param_1 + lVar24) = 0;
  *(undefined8 *)(param_1 + lVar25) = 0;
  *(undefined8 *)(param_1 + lVar19) = 0;
  dVar26 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar22 = *(long *)(param_1 + lVar18);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  iVar14 = (int)&uStack_130;
  lVar18 = lVar22;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar24 = *plStack_120;
    do {
      lVar25 = 0;
      do {
        if (*plStack_120 != lVar24) {
          _objc_enumerationMutation(lVar22);
        }
        uVar23 = *(ulong *)(lStack_128 + lVar25 * 8);
        puVar3 = PTR_PTR_1126d4ff8;
        _objc_opt_class(PTR_PTR_1126d4ff8);
        uVar5 = uVar23;
        _objc_opt_isKindOfClass(uVar23,puVar3);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf3d9e0(uVar23);
        }
        lVar25 = lVar25 + 1;
      } while (lVar18 != lVar25);
      iVar14 = (int)&uStack_130;
      lVar18 = lVar22;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lVar22);
  _objc_release(ppuVar6);
  _objc_release(uVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = (long)_DAT_112764cb0;
  uVar20 = *(undefined8 *)(uVar13 + lVar22);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (iVar14 == 0) {
    func_0x00010c214e40(0,uVar20);
    _objc_release(uVar20);
    uVar13 = *(ulong *)(uVar13 + lVar22);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar13;
    func_0x00010c207c40(0x3f800000);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar13);
      return;
    }
  }
  else {
    func_0x00010c26f540(uVar20);
    _objc_release(uVar20);
    uVar20 = *(undefined8 *)(uVar13 + lVar22);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207c40(0x3f800000);
    _objc_release(uVar20);
    uVar20 = *(undefined8 *)(uVar13 + lVar22);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214e40(0);
    _objc_release(uVar20);
    uVar20 = *(undefined8 *)(uVar13 + lVar22);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    dVar27 = 0.0;
    func_0x00010c16fd40(0);
    _objc_release(uVar20);
    uVar20 = *(undefined8 *)(uVar13 + lVar22);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010bf514c0(uVar20);
    _objc_release(uVar20);
    uVar20 = *(undefined8 *)(uVar13 + lVar22);
    func_0x00010c08c0e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16fd40(dVar27 - dVar26);
    _objc_release(uVar20);
    lVar24 = *(long *)(uVar13 + lVar22);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar24;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar24);
    lVar24 = lVar19;
    func_0x00010bf52a60();
    lVar25 = lRam0000000000000000;
    while (lVar24 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar25) {
          _objc_enumerationMutation(lVar19);
        }
        lVar21 = *(long *)(lVar15 * 8);
        lVar7 = lVar21;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf03d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = lVar8;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar17 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar8);
            }
            lVar9 = lVar21;
            func_0x00010c08c0e0(lVar21);
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar21;
            func_0x00010c08c0e0(lVar21);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010c10f4e0();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar11;
            func_0x00010c296f80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220240(lVar9);
            _objc_release(lVar12);
            _objc_release(lVar11);
            _objc_release(lVar10);
            _objc_release(lVar9);
            lVar17 = lVar17 + 1;
          } while (lVar7 != lVar17);
          lVar7 = lVar8;
          func_0x00010bf52a60();
        }
        _objc_release(lVar8);
        func_0x00010c08c0e0(lVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12aaa0();
        _objc_release(lVar21);
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar24);
      lVar24 = lVar19;
      func_0x00010bf52a60();
    }
    _objc_release(lVar19);
    puVar3 = PTR_PTR_1126d4eb0;
    uVar5 = uVar13;
    func_0x00010c279540(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20(*(undefined8 *)(uVar13 + lVar22));
    _objc_release(puVar3);
    _objc_release(uVar5);
    uVar5 = uVar13;
    func_0x00010bdd2220(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(uVar13 + lVar22));
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010bf03400(0x3ff0000000000000,PTR__OBJC_CLASS___UIView_1126aec20);
  uVar20 = *(undefined8 *)(uVar5 + (long)_DAT_112764cb0);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c40(0);
  _objc_release(uVar20);
  return;
}



/* Entry: 1071a7c0c; end: 1071a8097; -[SCStickerPickerMenuView _removeBlurAnimationAndFreezeLayerTree:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a7c0c(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112764cb0;
  lVar1 = *(long *)(param_2 + lVar11);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c214e40(0,lVar1);
    _objc_release(lVar1);
    lVar3 = *(long *)(param_2 + lVar11);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010c207c40(0x3f800000);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  else {
    func_0x00010c26f540(lVar1);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207c40(0x3f800000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214e40(0);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    dVar12 = 0.0;
    func_0x00010c16fd40(0);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010bf514c0(uVar2,param_3,0);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16fd40(dVar12 - param_1);
    _objc_release(uVar2);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    lVar3 = *(long *)(param_2 + lVar11);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    lStack_230 = lVar11;
    lStack_228 = param_2;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lStack_220 = lVar1;
    func_0x00010bf52a60(lVar1,param_3,&uStack_1c0,auStack_100,0x10);
    lStack_210 = lVar1;
    if (lVar1 != 0) {
      lStack_218 = *plStack_1b0;
      do {
        lVar1 = 0;
        do {
          if (*plStack_1b0 != lStack_218) {
            _objc_enumerationMutation(lStack_220);
          }
          lVar3 = *(long *)(lStack_1b8 + lVar1 * 8);
          lStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          lVar11 = lVar3;
          lStack_208 = lVar1;
          func_0x00010c08c0e0();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar11;
          func_0x00010bf03d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          lVar11 = lVar1;
          func_0x00010bf52a60(lVar1,param_3,&uStack_200,auStack_180,0x10);
          if (lVar11 != 0) {
            lVar10 = *plStack_1f0;
            do {
              lVar9 = 0;
              do {
                if (*plStack_1f0 != lVar10) {
                  _objc_enumerationMutation(lVar1);
                }
                uVar2 = *(undefined8 *)(lStack_1f8 + lVar9 * 8);
                lVar4 = lVar3;
                func_0x00010c08c0e0(lVar3);
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar3;
                func_0x00010c08c0e0(lVar3);
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x00010c10f4e0();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010c296f80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c220240(lVar4,param_3,lVar7,uVar2);
                _objc_release(lVar7);
                _objc_release(lVar6);
                _objc_release(lVar5);
                _objc_release(lVar4);
                lVar9 = lVar9 + 1;
              } while (lVar11 != lVar9);
              lVar11 = lVar1;
              func_0x00010bf52a60(lVar1,param_3,&uStack_200,auStack_180,0x10);
            } while (lVar11 != 0);
          }
          _objc_release(lVar1);
          func_0x00010c08c0e0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12aaa0();
          _objc_release(lVar3);
          lVar1 = lStack_208 + 1;
        } while (lVar1 != lStack_210);
        lVar1 = lStack_220;
        func_0x00010bf52a60(lStack_220,param_3,&uStack_1c0,auStack_100,0x10);
        lStack_210 = lVar1;
      } while (lVar1 != 0);
    }
    _objc_release(lStack_220);
    lVar11 = lStack_228;
    puVar8 = PTR_PTR_1126d4eb0;
    uVar2 = *(undefined8 *)(lStack_228 + _DAT_112764c1c);
    lVar3 = lStack_228;
    func_0x00010c279540(lStack_228);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e760(puVar8,param_3,uVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_230;
    func_0x00010c193d20(*(undefined8 *)(lVar11 + lStack_230),param_3,puVar8);
    _objc_release(puVar8);
    _objc_release(lVar3);
    lVar3 = lVar11;
    func_0x00010bdd2220(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(lVar11 + lVar1),param_3,lVar3);
    lVar11 = lVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_1071a8098;
  puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_270 = 0xc2000000;
  pcStack_268 = FUN_1071a812c;
  puStack_260 = &UNK_110842e18;
  lStack_258 = lVar11;
  lStack_250 = lVar1;
  lStack_248 = lVar3;
  puStack_240 = &stack0xfffffffffffffff0;
  func_0x00010bf03400(0x3ff0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_278);
  uVar2 = *(undefined8 *)(lVar11 + _DAT_112764cb0);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c40(0);
  _objc_release(uVar2);
  return;
}



/* Entry: 1071a8098; end: 1071a812b; -[SCStickerPickerMenuView _beginBlurAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a8098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1071a812c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03400(0x3ff0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764cb0);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c40(0);
  _objc_release(uVar1);
  return;
}



/* Entry: 1071a812c; end: 1071a8143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a812c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c193d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cb0),
             PTR_s_setEffect__112642968,0);
  return;
}



/* Entry: 1071a8144; end: 1071a8343; -[SCStickerPickerMenuView _panVertical:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a8144(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_5);
  func_0x00010c27adc0(param_5);
  dVar7 = 200.0;
  dVar8 = (1.0 - 1.0 / ((param_2 * 0.35) / 200.0 + 1.0)) * 200.0;
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5);
  _objc_release(lVar1);
  dVar6 = 50.0;
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 1) {
    func_0x00010bdd3200(param_3);
  }
  else {
    lVar1 = param_5;
    func_0x00010c252440();
    if ((lVar1 == 3) || (lVar1 = param_5, func_0x00010c252440(), lVar1 == 4)) {
      func_0x00010be8b820(param_3);
      if (50.0 < dVar8 && 0.0 <= dVar7) {
        uVar2 = param_3 + _DAT_112764d20;
        _objc_loadWeakRetained();
        uVar3 = uVar2;
        _objc_opt_respondsToSelector();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          puVar4 = PTR_PTR_1126affa8;
          func_0x00010c22bc20(PTR_PTR_1126affa8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f8760();
          _objc_release(puVar4);
          func_0x00010bf6b020(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3ddc0();
          _objc_release(param_3);
        }
      }
      else {
        func_0x00010bf03320(param_3);
      }
    }
    else {
      func_0x00010bf20c00(param_3);
      _CGRectGetHeight();
      param_2 = param_2 / dVar6;
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      dVar6 = 1.0;
      if (param_2 <= 1.0) {
        dVar6 = param_2;
      }
      uVar5 = *(undefined8 *)(param_3 + _DAT_112764cb0);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214e40(dVar6);
      _objc_release(uVar5);
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
      func_0x00010bee2940(0x3ff0000000000000,dVar8,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1071a8344; end: 1071a85cb; -[SCStickerPickerMenuView _pan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a8344(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_5);
  lVar4 = *(long *)(param_3 + _DAT_112764c1c);
  if (lVar4 < 2) {
    if (lVar4 == 0) {
      func_0x00010be6fe40(param_3);
      goto LAB_1071a85a8;
    }
    if (lVar4 != 1) goto LAB_1071a85a8;
  }
  else {
    if (lVar4 == 2) {
      func_0x00010c27adc0(param_5);
      dVar5 = param_2;
      func_0x00010c297a00(param_5);
      lVar4 = param_5;
      func_0x00010c252440();
      if (lVar4 == 2) {
        if (param_2 <= 0.0) {
          func_0x00010bee2960(0,param_3);
          uVar3 = *(undefined8 *)(param_3 + _DAT_112764cb0);
          dVar5 = 1.0;
        }
        else {
          func_0x00010bf20c00(param_3);
          _CGRectGetHeight();
          func_0x00010bee2960(param_2 / param_1,param_3);
          dVar5 = 1.0 - param_2 / param_1;
          uVar3 = *(undefined8 *)(param_3 + _DAT_112764cb0);
        }
        func_0x00010c1677c0(dVar5,uVar3);
      }
      else {
        lVar4 = param_5;
        func_0x00010c252440();
        if ((lVar4 == 3) || (lVar4 = param_5, func_0x00010c252440(), lVar4 == 4)) {
          func_0x00010bfb68e0(param_3);
          _CGRectGetHeight();
          if ((param_2 / param_1 < 0.3) || (dVar5 < 0.0)) {
            func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
          }
          else {
            func_0x00010c21e900(param_3);
            func_0x00010c1b3000(param_3);
            func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
          }
        }
      }
      goto LAB_1071a85a8;
    }
    if (lVar4 != 3) goto LAB_1071a85a8;
  }
  lVar4 = (long)_DAT_112764d20;
  uVar1 = param_3 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_3 = param_3 + lVar4;
    _objc_loadWeakRetained(param_3);
    func_0x00010bf78220();
    _objc_release(param_3);
  }
LAB_1071a85a8:
  _objc_release(param_5);
  return;
}



/* Entry: 1071a85cc; end: 1071a869f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a85cc(long param_1)

{
  func_0x00010bee2960(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cb0),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1071a86a0; end: 1071a8a3b; -[SCStickerPickerMenuView _updateTranslationForDismissalAnimationWithAlpha:translation:isDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a86a0(double param_1,double param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  uint param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar6 = (long)_DAT_112764ce4;
  dVar8 = param_1;
  dVar10 = param_2;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar6));
  dVar9 = param_2 + 58.0;
  if (param_6 == 0) {
    dVar9 = 58.0;
  }
  dVar11 = dVar8;
  _CGRectGetHeight();
  if (dVar11 <= 58.0) {
    dVar11 = 58.0;
  }
  func_0x00010c19f0e0(dVar8,dVar10,param_3,dVar11,*(undefined8 *)(param_4 + lVar6));
  lVar5 = (long)_DAT_112764c1c;
  if (*(long *)(param_4 + lVar5) == 0) {
    lVar7 = (long)_DAT_112764cf0;
    uVar1 = *(undefined8 *)(param_4 + lVar7);
    func_0x00010c262bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar1);
    if (dVar9 <= 58.0) {
      dVar9 = 58.0;
    }
    uVar1 = *(undefined8 *)(param_4 + lVar7);
    func_0x00010c262bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar8,dVar9,param_3,dVar11);
    _objc_release(uVar1);
    lVar7 = (long)_DAT_112764cb8;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar7));
    dVar10 = dVar8;
    func_0x00010becd4e0(param_4);
    dVar9 = param_2 + dVar10;
    if (param_6 == 0) {
      dVar9 = dVar10;
    }
    if (dVar9 <= dVar10) {
      dVar9 = dVar10;
    }
    func_0x00010c19f0e0(dVar8,dVar9,param_3,dVar11,*(undefined8 *)(param_4 + lVar7));
  }
  _CGAffineTransformMakeTranslation(&uStack_c0,0,param_2);
  lVar7 = (long)_DAT_112764cbc;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  func_0x00010c219960(*(undefined8 *)(param_4 + lVar7));
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_4 + lVar6));
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_4 + lVar7));
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_4 + _DAT_112764d04));
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_4 + _DAT_112764d0c));
  lVar6 = param_4;
  func_0x00010bdd2220(param_1,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112764cb0;
  func_0x00010c16e440(*(undefined8 *)(param_4 + lVar7));
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126d4eb0;
  if (*(long *)(param_4 + lVar5) == 0) {
    lVar6 = (long)_DAT_112764cf0;
    uVar1 = *(undefined8 *)(param_4 + lVar6);
    func_0x00010c262bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
    _objc_release(uVar1);
    func_0x00010c1677c0(param_1,*(undefined8 *)(param_4 + _DAT_112764cb8));
    _CGAffineTransformMakeTranslation(&uStack_120,0,param_2);
    uVar1 = *(undefined8 *)(param_4 + lVar6);
    func_0x00010c262bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uStack_118;
    uStack_f0 = uStack_120;
    uStack_d8 = uStack_108;
    uStack_e0 = uStack_110;
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    func_0x00010c219960();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126d4eb0;
  }
  PTR_PTR_1126d4eb0 = puVar2;
  if ((param_6 & 1) == 0) {
    if (param_1 == 1.0) {
      lVar6 = param_4;
      func_0x00010c279540(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1e760(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193d20(*(undefined8 *)(param_4 + lVar7));
      _objc_release(puVar2);
      _objc_release(lVar6);
    }
    else {
      func_0x00010c193d20(*(undefined8 *)(param_4 + lVar7));
    }
  }
  uVar3 = param_4 + _DAT_112764d20;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    func_0x00010bf6b020(param_4);
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_2 * 0.5;
    if (param_6 == 0) {
      param_2 = 0.0;
    }
    func_0x00010bf7e700(param_1,param_2);
    _objc_release(param_4);
  }
  return;
}



/* Entry: 1071a8a3c; end: 1071a8ba3; -[SCStickerPickerMenuView _updateTranslationForDismissalAnimationWithPercentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a8a3c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  
  dVar2 = param_1;
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGAffineTransformMakeTranslation(&uStack_70,0,param_1 * dVar2);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  dStack_80 = dStack_50;
  func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_112764cbc),param_3,&uStack_a0);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  _CGAffineTransformMakeTranslation(&uStack_d0,0,param_1 * dStack_50);
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  dStack_80 = dStack_b0;
  func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_112764cc8),param_3,&uStack_a0);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  _CGAffineTransformMakeTranslation(&uStack_100,0,param_1 * dStack_b0);
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  dStack_80 = dStack_e0;
  func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_112764ce0),param_3,&uStack_a0);
  lVar1 = (long)_DAT_112764d04;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetHeight();
  _CGAffineTransformMakeTranslation(&uStack_130,0,param_1 * dStack_e0);
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  uStack_78 = uStack_108;
  dStack_80 = dStack_110;
  func_0x00010c219960(*(undefined8 *)(param_2 + lVar1),param_3,&uStack_a0);
  lVar1 = (long)_DAT_112764d0c;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetHeight();
  _CGAffineTransformMakeTranslation(&uStack_160,0,param_1 * dStack_110);
  uStack_98 = uStack_158;
  uStack_a0 = uStack_160;
  uStack_88 = uStack_148;
  uStack_90 = uStack_150;
  uStack_78 = uStack_138;
  dStack_80 = (double)uStack_140;
  func_0x00010c219960(*(undefined8 *)(param_2 + lVar1),param_3,&uStack_a0);
  return;
}



/* Entry: 1071a8ba4; end: 1071a8d6b; -[SCStickerPickerMenuView _didTapOnIconsCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a8ba4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = (long)_DAT_112764d04;
  uVar5 = *(ulong *)(param_2 + lVar8);
  func_0x00010c09ef00(param_4,param_3,uVar5);
  func_0x00010bfed040();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar5 != 0) &&
     (uVar1 = uVar5, func_0x00010c071ae0(uVar5,param_3,*(undefined8 *)(param_2 + _DAT_112764d1c)),
     (uVar1 & 1) == 0)) {
    func_0x00010be59ca0(param_2);
    func_0x00010c1fb160(param_2,param_3,uVar5);
    lVar6 = (long)_DAT_112764d44;
    *(undefined1 *)(param_2 + lVar6) = 1;
    func_0x00010c1525a0(*(undefined8 *)(param_2 + _DAT_112764cbc),param_3,uVar5,0x10,0);
    *(undefined1 *)(param_2 + lVar6) = 0;
    puVar2 = PTR_PTR_1126d5010;
    _objc_alloc();
    uVar11 = *(undefined8 *)(param_2 + _DAT_112764cf8);
    func_0x00010c25e8c0(PTR_PTR_1126d4eb0,param_3,*(undefined8 *)(param_2 + _DAT_112764c1c));
    func_0x00010c01b0a0(uVar11,param_1,*(undefined8 *)(param_2 + _DAT_112764c10));
    lVar6 = (long)_DAT_112764d00;
    uVar11 = *(undefined8 *)(param_2 + lVar6);
    *(undefined **)(param_2 + lVar6) = puVar2;
    _objc_release(uVar11);
    uVar1 = uVar5;
    func_0x00010c1554e0();
    if ((long)uVar1 < 1) {
      lVar9 = 0;
    }
    else {
      lVar7 = 0;
      lVar9 = 0;
      lVar10 = (long)_DAT_112764cd4;
      do {
        lVar3 = param_2 + lVar10;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010c254a40();
        lVar9 = lVar4 + lVar9;
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
        uVar1 = uVar5;
        func_0x00010c1554e0();
      } while (lVar7 < (long)uVar1);
    }
    uVar1 = uVar5;
    func_0x00010c0840e0(uVar5);
    func_0x00010c1f7c00((double)(long)(uVar1 + lVar9),*(undefined8 *)(param_2 + lVar6));
    func_0x00010c17e7c0(*(undefined8 *)(param_2 + lVar8),param_3,*(undefined8 *)(param_2 + lVar6),1,
                        0);
    func_0x00010bed6120(param_2,param_3,uVar5);
    func_0x00010be590a0(param_2,param_3,uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1071a8d6c; end: 1071a8f87; -[SCStickerPickerMenuView _updateAndSelectStickerCategoryCellWithSubCategory:withCurrentSelectedCategoryIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a8d6c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010bec5b80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (((param_3 != 0) && (uVar2 != 0)) &&
     (uVar3 = uVar2, func_0x00010c071ae0(uVar2,param_2,param_4), (uVar3 & 1) == 0)) {
    func_0x00010c1fb160(param_1,param_2,uVar2);
    lVar9 = (long)_DAT_112764d44;
    *(undefined1 *)(param_1 + lVar9) = 1;
    uVar3 = param_1;
    func_0x00010bdf7240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112764cd4;
    lVar4 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c254aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_1 + lVar7;
    _objc_loadWeakRetained();
    lVar8 = lVar4;
    func_0x00010c262b60();
    _objc_release(lVar4);
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    lVar4 = lVar7;
    func_0x00010c08d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar4;
    func_0x00010c0deba0(lVar4,param_2,lVar8);
    func_0x00010c20ab00(uVar3,param_2,lVar5,lVar8,0,*(long *)(param_1 + (long)_DAT_112764c1c) == 0,
                        lVar7,*(undefined8 *)(param_1 + (long)_DAT_112764c14),param_1,
                        *(undefined8 *)(param_1 + (long)_DAT_112764c7c),
                        *(undefined8 *)(param_1 + (long)_DAT_112764c48));
    ppuVar1 = &PTR_PTR_110aca5c8;
    if (lVar8 != 0xc) {
      ppuVar1 = &PTR_PTR_110aca5c0;
    }
    func_0x00010c160fc0(uVar3,param_2,*ppuVar1);
    lVar8 = (long)_DAT_112764c44;
    lVar7 = *(long *)(param_1 + lVar8);
    func_0x00010c0e00e0(lVar7,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0e00e0(uVar6,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c182380(uVar3);
      _objc_release(uVar6);
    }
    *(undefined1 *)(param_1 + lVar9) = 0;
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071a8f88; end: 1071a9037; -[SCStickerPickerMenuView _logStickerCategoryViewedAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a8f88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    lVar4 = (long)_DAT_112764cd4;
    _objc_retain(param_3);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = param_3;
    func_0x00010c1554e0(param_3);
    lVar2 = lVar4;
    func_0x00010c254ac0(lVar4,param_2,param_1,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112764d14);
    lVar4 = lVar2;
    func_0x00010c27dd80(lVar2);
    func_0x00010c29e320(uVar3,param_2,param_3,lVar4);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1071a9038; end: 1071a9173; -[SCStickerPickerMenuView _updateContextBasedOnCategory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9038(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112764cd4;
  _objc_loadWeakRetained();
  uVar4 = param_3;
  func_0x00010c1554e0(param_3);
  lVar2 = lVar1;
  func_0x00010c254ac0(lVar1,param_2,param_1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be8d5c0(param_1);
  lVar1 = lVar2;
  func_0x00010c27dd80();
  if (lVar1 == 4) {
    lVar1 = lVar2;
    func_0x00010c253a60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c142240(param_3);
    lVar3 = lVar1;
    func_0x00010c0dfd40(lVar1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010c254560(lVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar5 = (long)_DAT_112764d50;
      _objc_retain(lVar1);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(long *)(param_1 + lVar5) = lVar1;
      _objc_release(uVar4);
      func_0x00010bef7ac0(*(undefined8 *)(param_1 + _DAT_112764c18),param_2,
                          *(undefined8 *)(param_1 + lVar5));
    }
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a9174; end: 1071a91c3; -[SCStickerPickerMenuView _removeStickerPackContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9174(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764d50;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12ba20(*(undefined8 *)(param_1 + _DAT_112764c18));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1071a91c4; end: 1071a9357; -[SCStickerPickerMenuView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1071a91c4(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  if (((uVar4 & 1) != 0) && (func_0x00010c297a00(param_5), 0.0 < param_2)) {
    func_0x00010c09ef00(param_5);
    uVar4 = param_3;
    uVar5 = param_1;
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _CGRectContainsPoint(0,0,uVar5,0x4056000000000000,param_1,param_2);
    if (((uVar4 & 1) == 0) && (*(char *)(param_3 + (long)_DAT_112764d4c) == '\x01')) {
      lVar6 = (long)_DAT_112764cc8;
      lVar3 = *(long *)(param_3 + lVar6);
      if ((lVar3 == 0) || (*(long *)(param_3 + (long)_DAT_112764d24) != 3)) {
        lVar6 = (long)_DAT_112764ce0;
        lVar3 = *(long *)(param_3 + lVar6);
        if ((lVar3 != 0) && (*(long *)(param_3 + (long)_DAT_112764d24) == 1)) goto LAB_1071a92b4;
        lVar6 = *(long *)(param_3 + (long)_DAT_112764cbc);
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010bf529e0();
        _objc_release(lVar6);
        if (lVar3 != 1) goto LAB_1071a9334;
        func_0x00010bdf7240();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c06c7a0();
        _objc_release(param_3);
        if ((int)uVar4 == 0) goto LAB_1071a9334;
LAB_1071a932c:
        uVar5 = 1;
        goto LAB_1071a9338;
      }
LAB_1071a92b4:
      iVar1 = (int)lVar3;
      func_0x00010c06c7a0();
      if (iVar1 != 0) {
        uVar4 = *(ulong *)(param_3 + lVar6);
        func_0x00010bf2d980();
        if ((uVar4 & 1) == 0) goto LAB_1071a932c;
      }
    }
  }
LAB_1071a9334:
  uVar5 = 0;
LAB_1071a9338:
  _objc_release(param_5);
  return uVar5;
}



/* Entry: 1071a9358; end: 1071a9417; -[SCStickerPickerMenuView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1071a9358(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + _DAT_112764c1c) == 0) && (param_3 == *(long *)(param_1 + _DAT_112764d10))
     ) {
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      goto LAB_1071a93f4;
    }
  }
  uVar3 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = uVar3 != *(ulong *)(param_1 + _DAT_112764cbc);
  _objc_release();
LAB_1071a93f4:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1071a9418; end: 1071a947b; -[SCStickerPickerMenuView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8
FUN_1071a9418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bdf7240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06ebc0();
  _objc_release(param_4);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1071a947c; end: 1071a9737; -[SCStickerPickerMenuView updateVisibleStickerCategoryCellCollectionViewAnimated:topMargin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a947c(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_2 + _DAT_112764c40) = param_1;
  lVar2 = *(long *)(param_2 + _DAT_112764cbc);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      puVar4 = PTR_PTR_1126d4ff8;
      _objc_opt_class(PTR_PTR_1126d4ff8);
      uVar5 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar4);
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar9;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        uVar5 = uVar9;
        func_0x00010bf4dce0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010bf4dce0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010c2739e0(PTR_PTR_1126d4eb0);
        _objc_release(uVar9);
        _objc_release(uVar5);
        puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
        if (param_4 == 0) {
          func_0x00010c19f0e0(0,param_1,uVar7);
        }
        else {
          _objc_retain(uVar7);
          func_0x00010bf03440(0x3fc3333340000000,0,puVar4);
          _objc_release(uVar7);
        }
        _objc_release(uVar7);
      }
      else {
        func_0x00010c284620(param_1,uVar9);
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c19f0e0(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),
                      *(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40),
                      *(undefined8 *)(lVar2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1071a9738; end: 1071a9767;  */

void FUN_1071a9738(long param_1)

{
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1071a9768; end: 1071a98cb; -[SCStickerPickerMenuView resetStickerScrollPositionsToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9768(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112764c44));
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar2 = *(long *)(param_1 + _DAT_112764cbc);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = PTR_PTR_1126d4ff8;
        uVar8 = *(ulong *)(lStack_118 + lVar10 * 8);
        _objc_retain(uVar8);
        _objc_opt_class(puVar4);
        uVar5 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar4);
        uVar1 = uVar8;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar8);
        if (uVar1 != 0) {
          func_0x00010c152840(uVar8);
        }
        _objc_release(uVar1);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar2;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  func_0x00010c0d9840(*(undefined8 *)(lVar2 + _DAT_112764c28));
  uVar6 = *(undefined8 *)(lVar2 + _DAT_112764d3c);
  *(undefined8 **)(lVar2 + _DAT_112764d3c) = puVar7;
  _objc_release(uVar6);
  func_0x00010bdf7240(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1071a98cc; end: 1071a993f; -[SCStickerPickerMenuView updateChatExplicitSearchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a98cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112764c28),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764d3c);
  *(undefined8 *)(param_1 + _DAT_112764d3c) = param_3;
  _objc_release(uVar1);
  func_0x00010bdf7240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071a9940; end: 1071a99c7; -[SCStickerPickerMenuView _currentStickerPickerCategoryCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9940(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112764cbc);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d4ff8;
  _objc_opt_class(PTR_PTR_1126d4ff8);
  uVar1 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(uVar2);
    uVar1 = uVar2;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071a99c8; end: 1071a9acb; -[SCStickerPickerMenuView _selectedStickerPickerCategoryCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a99c8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112764d1c;
  if (*(long *)(param_1 + _DAT_112764c1c) == 0) {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c0840e0();
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if (0 < lVar2) {
      uVar1 = *(ulong *)(param_1 + _DAT_112764cbc);
      func_0x00010c1554e0(*(undefined8 *)(param_1 + lVar5));
      func_0x00010bfed020(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      goto LAB_1071a9a80;
    }
  }
  uVar1 = *(ulong *)(param_1 + _DAT_112764cbc);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
LAB_1071a9a80:
  puVar3 = PTR_PTR_1126d4ff8;
  _objc_opt_class(PTR_PTR_1126d4ff8);
  uVar4 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(uVar1);
    uVar4 = uVar1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1071a9acc; end: 1071a9b17; -[SCStickerPickerMenuView _startStickerSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if ((*(ulong *)(param_1 + _DAT_112764c1c) & 0xfffffffffffffffd) == 0) {
    func_0x00010bebf940(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a9b18; end: 1071a9bd3; -[SCStickerPickerMenuView _updateSearchSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9b18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112764c90;
  func_0x00010c28c720(*(undefined8 *)(param_1 + lVar4),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  lVar2 = param_1;
  func_0x00010be19240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca450);
  }
  puVar3 = PTR_PTR_1126d4e70;
  _objc_alloc(PTR_PTR_1126d4e70);
  func_0x00010c04f980();
  func_0x00010c28c520(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071a9bd4; end: 1071a9c9b; -[SCStickerPickerMenuView _startCTPStickerSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9bd4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112764cd8);
  *(undefined8 *)(param_1 + (long)_DAT_112764cd8) = 0;
  _objc_release(uVar1);
  func_0x00010c28ade0(*(undefined8 *)(param_1 + (long)_DAT_112764ca0));
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2549c0();
    _objc_release(uVar2);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + (long)_DAT_112764c24));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a9c9c; end: 1071a9d6b; -[SCStickerPickerMenuView _handleCTPStickerSearchResults:] */

void FUN_1071a9c9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  lVar2 = param_3;
  if (lVar1 < 6) {
    if (lVar1 != 3) {
      if (lVar1 == 4) {
        func_0x00010be26b60(param_1,param_2,param_3);
      }
      goto LAB_1071a9d58;
    }
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be26b40(param_1,param_2,lVar2);
  }
  else {
    if (lVar1 == 6) {
      func_0x00010be26ae0(param_1,param_2,param_3);
      goto LAB_1071a9d58;
    }
    if (lVar1 != 7) goto LAB_1071a9d58;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be26b00(param_1,param_2,lVar2);
  }
  _objc_release(lVar2);
LAB_1071a9d58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a9d6c; end: 1071a9dcf; -[SCStickerPickerMenuView _handleCTPStickerSearching:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112764c20));
  if ((int)uVar1 != 0) {
    func_0x00010be85100(param_1,param_2,2);
    func_0x00010c0aee00(*(undefined8 *)(param_1 + _DAT_112764c98),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a9dd0; end: 1071a9e4b; -[SCStickerPickerMenuView _handleCTPStrategyCompleteWithStateWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764c98);
  func_0x00010c11d080(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aee80(uVar2,param_2,0,param_3,puVar1,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071a9e4c; end: 1071aa107; -[SCStickerPickerMenuView _handleCTPStickerSearchCompleteWithStateWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071a9e4c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_3;
  func_0x00010c13cf20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar2);
      }
      uVar11 = *(undefined8 *)(lVar10 * 8);
      uVar9 = uVar11;
      func_0x00010c084fc0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010be165c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      lVar5 = lVar4;
      func_0x00010bf529e0();
      if (lVar5 != 0) {
        puVar6 = PTR_PTR_1126bec00;
        _objc_alloc(PTR_PTR_1126bec00);
        func_0x00010c1554e0(uVar11);
        func_0x00010c2480a0(uVar11);
        func_0x00010c042d40(puVar6);
        func_0x00010befa120(puVar1);
        _objc_release(puVar6);
      }
      _objc_release(lVar4);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126d4ed0;
  _objc_alloc(PTR_PTR_1126d4ed0);
  lVar3 = param_3;
  func_0x00010c11d080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0849a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa5e0(puVar6);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf66180();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112764d54);
  *(long *)(param_1 + _DAT_112764d54) = lVar3;
  _objc_release(uVar9);
  lVar3 = param_3;
  func_0x00010c11d080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ae80(param_1);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be85110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1071aa108; end: 1071aa10f; -[SCStickerPickerMenuView _handleCTPStickerSearchError:] */

void FUN_1071aa108(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__putSearchUIIntoState__11257ede0,5);
  return;
}



/* Entry: 1071aa110; end: 1071aa13f; -[SCStickerPickerMenuView stickerSearchDebugHTML] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aa110(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764d54);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071aa140; end: 1071aa1fb; -[SCStickerPickerMenuView _avatarIdForSearch] */

void FUN_1071aa140(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x000108e07010();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf12ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1071aa1fc; end: 1071aa2c3; -[SCStickerPickerMenuView _friendAvatarIdForSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aa1fc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = *(ulong *)(param_1 + (long)_DAT_112764c4c);
    func_0x00010c088c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfb9820();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071aa2c4; end: 1071aa3f7; -[SCStickerPickerMenuView _startForYouResults] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aa2c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_1 + _DAT_112764c1c) == 0) && ((*(byte *)(param_1 + _DAT_112764d58) & 1) == 0)
     ) {
    *(undefined1 *)(param_1 + _DAT_112764d58) = 1;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112764c80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c111de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112764d5c);
    *(undefined8 *)(param_1 + _DAT_112764d5c) = uVar1;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1071aa3f8; end: 1071aa4e3;  */

void FUN_1071aa3f8(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1071aa4e4;
  puStack_50 = &UNK_110842c58;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1071aa4e4; end: 1071aa5df;  */

void FUN_1071aa4e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bde9120();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1071aa5e0;
    puStack_60 = &UNK_110848218;
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(lVar2);
    lStack_58 = lVar2;
    _objc_retain(param_2);
    uStack_50 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_78);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1071aa5e0; end: 1071aa6d7;  */

void FUN_1071aa5e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfb1920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2480a0();
  func_0x00010be29f00(lVar2,param_2,uVar1,uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1071aa6d8; end: 1071aa70b;  */

void FUN_1071aa6d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071aa70c; end: 1071aa987; -[SCStickerPickerMenuView _convertForYouSectionsToSCStickers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aa70c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_200;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar8 = &uStack_1b0;
  puVar9 = auStack_f0;
  lStack_200 = param_3;
  func_0x00010bf52a60();
  if (lStack_200 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar11 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar12 = *plStack_1e0;
          do {
            lVar14 = 0;
            do {
              if (*plStack_1e0 != lVar12) {
                _objc_enumerationMutation(lVar2);
              }
              lVar13 = *(long *)(lStack_1e8 + lVar14 * 8);
              lVar4 = lVar13;
              func_0x00010c06c000();
              if ((int)lVar4 == 0) {
LAB_1071aa85c:
                lVar4 = param_1;
                func_0x00010c0849a0(param_1);
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar4;
                func_0x00010c10f580();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar4);
                func_0x00010c2721e0(lVar13,param_2,lVar5);
                _objc_retainAutoreleasedReturnValue();
                if (lVar13 != 0) {
                  func_0x00010befa120(puVar1,param_2,lVar13);
                }
                _objc_release(lVar13);
                _objc_release(lVar5);
              }
              else {
                lVar4 = param_1 + _DAT_112764cd4;
                _objc_loadWeakRetained();
                lVar5 = lVar4;
                func_0x00010c2633e0();
                _objc_release(lVar4);
                if ((int)lVar5 != 0) goto LAB_1071aa85c;
              }
              lVar14 = lVar14 + 1;
            } while (lVar3 != lVar14);
            lVar3 = lVar2;
            func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lStack_200);
      puVar8 = &uStack_1b0;
      puVar9 = auStack_f0;
      lStack_200 = param_3;
      func_0x00010bf52a60();
    } while (lStack_200 != 0);
  }
  _objc_release(param_3);
  puVar6 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  *(undefined1 *)(param_3 + _DAT_112764d58) = 0;
  if (*(long *)(param_3 + _DAT_112764d30) != 0) {
    lVar10 = param_3;
    func_0x00010be18760();
    if (((puVar8 == (undefined8 *)0x0) ||
        (puVar7 = puVar8, func_0x00010bf529e0(), puVar7 == (undefined8 *)0x0)) ||
       (lVar10 == 0x7fffffffffffffff)) {
      func_0x00010be8c220(param_3);
    }
    else {
      func_0x00010bedd9c0(param_3,param_2,lVar10,puVar8,puVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 1071aa988; end: 1071aaa23; -[SCStickerPickerMenuView _handleForYouStickersLoaded:columnCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aa988(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112764d58) = 0;
  if (*(long *)(param_1 + _DAT_112764d30) != 0) {
    lVar1 = param_1;
    func_0x00010be18760();
    if (((param_3 == 0) || (lVar2 = param_3, func_0x00010bf529e0(), lVar2 == 0)) ||
       (lVar1 == 0x7fffffffffffffff)) {
      func_0x00010be8c220(param_1);
    }
    else {
      func_0x00010bedd9c0(param_1,param_2,lVar1,param_3,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071aaa24; end: 1071aaba3; -[SCStickerPickerMenuView _startCTPGiphyTrending] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aaa24(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + _DAT_112764cd4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2633e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    if ((*(char *)(param_1 + _DAT_112764c70) == '\x01') &&
       ((*(byte *)(param_1 + _DAT_112764d60) & 1) == 0)) {
      *(undefined1 *)(param_1 + _DAT_112764d60) = 1;
      uVar3 = *(undefined8 *)(param_1 + _DAT_112764c84);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1355e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_initWeak(auStack_38,param_1);
      _objc_retain();
      _objc_release(param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      uVar3 = uVar4;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + _DAT_112764d64);
      *(undefined8 *)(param_1 + _DAT_112764d64) = uVar3;
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      _objc_release(uVar4);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeGiphyTrendingFromPreType_112580a88);
  return;
}



/* Entry: 1071aaba4; end: 1071aac8f;  */

void FUN_1071aaba4(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1071aac90;
  puStack_50 = &UNK_110991120;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1071aac90; end: 1071aadb7;  */

void FUN_1071aac90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x1071aad50;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_release(uStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1071aadb8; end: 1071aae63;  */

void FUN_1071aadb8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1071aae30;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1071aae64; end: 1071aaf03; -[SCStickerPickerMenuView _handleCTPGiphyTrendingLoaded:columnCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aae64(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112764d60) = 0;
  if (*(long *)(param_1 + _DAT_112764d30) != 0) {
    lVar1 = param_1;
    func_0x00010be24040();
    if (((param_3 == 0) || (lVar2 = param_3, func_0x00010bf529e0(), lVar2 == 0)) ||
       (lVar1 == 0x7fffffffffffffff)) {
      func_0x00010be8c3a0(param_1);
    }
    else {
      func_0x00010bedd9c0(param_1,param_2,lVar1,param_3,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071aaf04; end: 1071ab043; -[SCStickerPickerMenuView _updatePreTypeSearchResultsSection:stickers:columnCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aaf04(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126baa60;
  _objc_opt_class(PTR_PTR_1126baa60);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126d4ed0;
  uVar4 = *(ulong *)(param_1 + _DAT_112764d30);
  if ((uVar2 & 1) == 0) {
    func_0x00010befba00(uVar4);
  }
  else {
    _objc_retain(uVar4);
    _objc_opt_class(puVar1);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    uVar2 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    func_0x00010bef73c0(uVar2);
    _objc_release(uVar2);
  }
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071ab044; end: 1071ab05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ab044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764ce0),
             PTR_s_updateStickersInSection_columnCo_112680338,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1071ab060; end: 1071ab0bf; -[SCStickerPickerMenuView _removeGiphyTrendingFromPreType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ab060(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764d30;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar1 = param_1;
    func_0x00010be24040();
                    /* WARNING: Could not recover jumptable at 0x00010be8d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__removeResultsFromPreTypeSection_112580df8,1,
               *(undefined8 *)(param_1 + _DAT_112764ce0),*(undefined8 *)(param_1 + lVar2),1,lVar1);
    return;
  }
  return;
}



/* Entry: 1071ab0c0; end: 1071ab11b; -[SCStickerPickerMenuView _removeForYouFromPreType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ab0c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764d30;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar1 = param_1;
    func_0x00010be18760();
                    /* WARNING: Could not recover jumptable at 0x00010be8d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__removeResultsFromPreTypeSection_112580df8,0,
               *(undefined8 *)(param_1 + _DAT_112764ce0),*(undefined8 *)(param_1 + lVar2),1,lVar1);
    return;
  }
  return;
}



/* Entry: 1071ab11c; end: 1071ab217; -[SCStickerPickerMenuView _removeResultsFromPreTypeSection:activeCategoryCell:currentActiveStickerCategory:giphyTrending:sectionIndex:] */

void FUN_1071ab11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6,long param_7)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_7 != 0x7fffffffffffffff) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1071ab218;
    puStack_68 = &UNK_110844fe0;
    uStack_50 = param_3;
    _objc_retain(param_5);
    lStack_60 = param_5;
    lStack_48 = param_7;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010c0f8600(param_4,param_2,&puStack_80);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
  }
  if (((param_6 & 1) == 0) && (lVar1 = param_5, func_0x00010c1558c0(), lVar1 < 1)) {
    func_0x00010be85100(param_1,param_2,4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1071ab218; end: 1071ab277;  */

void FUN_1071ab218(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x30) == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c12c9e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x38));
    iVar1 = (int)uVar2;
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c12c780(uVar2,param_2,*(undefined8 *)(param_1 + 0x38));
    iVar1 = (int)uVar2;
  }
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeSection__1126292c8,
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1071ab278; end: 1071ab2e3; -[SCStickerPickerMenuView _forYouStickerCategoryIndex:] */

undefined8 FUN_1071ab278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4fa0;
  _objc_retain(param_3);
  func_0x00010bfb48c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c156080(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1071ab2e4; end: 1071ab3e3; -[SCStickerPickerMenuView _giphyStickerCategoryIndex:giphyTrending:] */

undefined * FUN_1071ab2e4(undefined8 param_1,undefined8 param_2,undefined *param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126d4ed0;
  _objc_opt_class(PTR_PTR_1126d4ed0);
  puVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  if (((ulong)puVar1 & 1) != 0) {
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010c0df2e0();
    if (0 < (long)puVar4) {
      puVar4 = (undefined *)0x0;
      puVar1 = (undefined *)0x200;
      if (param_4 == 0) {
        puVar1 = (undefined *)0x10;
      }
      do {
        puVar2 = param_3;
        func_0x00010c155500();
        puVar3 = param_3;
        if (puVar2 == puVar1) goto LAB_1071ab3b8;
        puVar4 = puVar4 + 1;
        puVar2 = param_3;
        func_0x00010c0df2e0();
      } while ((long)puVar4 < (long)puVar2);
    }
    _objc_release(param_3);
  }
  puVar3 = PTR_PTR_1126d4fa0;
  if ((param_4 & 1) == 0) {
    func_0x00010bfccb40(PTR_PTR_1126d4fa0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfccbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_3;
  func_0x00010c156080(param_3);
LAB_1071ab3b8:
  _objc_release(puVar3);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1071ab3e4; end: 1071ab427; -[SCStickerPickerMenuView _stopStickerSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ab3e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764d68;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1071ab428; end: 1071ab617; -[SCStickerPickerMenuView _queryKeywordsFromPrefixMatchedQueries:searchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ab428(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
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
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(ulong *)(lStack_128 + lVar14 * 8);
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126d5020;
        func_0x00010bf38620(PTR_PTR_1126d5020,param_2,uVar4);
        if ((int)puVar5 != 0) {
          uVar6 = uVar4;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_1 + _DAT_112764c20);
          func_0x00010c0b5ac0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c0720c0(uVar6,param_2,uVar7);
          _objc_release(uVar7);
          _objc_release(uVar6);
          if ((uVar8 & 1) == 0) {
            func_0x00010befa120(puVar2,param_2,uVar4);
          }
        }
        _objc_release(uVar4);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  func_0x00010bf529e0();
  puVar13 = (undefined *)0x0;
  puVar5 = puVar2;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar13);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3 + _DAT_112764cd4;
  _objc_loadWeakRetained();
  lVar15 = lVar3;
  func_0x00010c2633e0();
  if ((int)lVar15 == 0) {
    _objc_release(lVar3);
LAB_1071ab698:
    puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR___NSConcreteGlobalBlock_110991170);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
  }
  else {
    bVar1 = *(byte *)(param_3 + _DAT_112764c70);
    _objc_release(lVar3);
    if ((bVar1 & 1) == 0) goto LAB_1071ab698;
  }
  puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR___NSConcreteGlobalBlock_110991190);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_2,puVar9);
  if (*(long *)(param_3 + _DAT_112764c1c) == 2) {
    puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR___NSConcreteGlobalBlock_1109911b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
  }
  puVar5 = puVar2;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
LAB_1071ab79c:
    _objc_retain(puVar13);
    puVar5 = puVar13;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar13;
    func_0x00010c0d3c80();
    func_0x00010bfae5e0();
    puVar5 = puVar11;
    func_0x00010bf529e0();
    puVar12 = puVar13;
    func_0x00010bf529e0();
    if (puVar5 == puVar12) {
      _objc_release(puVar11);
      _objc_release(puVar10);
      goto LAB_1071ab79c;
    }
    puVar5 = puVar11;
    func_0x00010bf51e00(puVar11);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar13);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1071ab618; end: 1071ab7f7; -[SCStickerPickerMenuView _filteredSearchResultsFromCTPItemResults:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ab618(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112764cd4;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c2633e0();
  if ((int)lVar4 == 0) {
    _objc_release(lVar3);
LAB_1071ab698:
    puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR___NSConcreteGlobalBlock_110991170);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
  }
  else {
    bVar1 = *(byte *)(param_1 + _DAT_112764c70);
    _objc_release(lVar3);
    if ((bVar1 & 1) == 0) goto LAB_1071ab698;
  }
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR___NSConcreteGlobalBlock_110991190);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_2,puVar5);
  if (*(long *)(param_1 + _DAT_112764c1c) == 2) {
    puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR___NSConcreteGlobalBlock_1109911b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar6);
    _objc_release(puVar6);
  }
  puVar6 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0d3c80();
    func_0x00010bfae5e0();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    lVar7 = param_3;
    func_0x00010bf529e0();
    if (lVar4 != lVar7) {
      lVar4 = lVar3;
      func_0x00010bf51e00(lVar3);
      _objc_release(lVar3);
      _objc_release(puVar6);
      goto LAB_1071ab7c8;
    }
    _objc_release(lVar3);
    _objc_release(puVar6);
  }
  _objc_retain(param_3);
  lVar4 = param_3;
LAB_1071ab7c8:
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1071ab7f8; end: 1071ab853;  */

uint FUN_1071ab7f8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c06c000(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1071ab854; end: 1071ab8d3; -[SCStickerPickerMenuView _handleIntermixedStickerSearchResult:searchText:] */

void FUN_1071ab854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb2700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30de0(param_1,param_2,param_3,uVar1,PTR____NSArray0__struct_11034ab48,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071ab8d4; end: 1071aba33; -[SCStickerPickerMenuView _handleStickerIntermixedCategory:flatResults:prefixMatchedQuerys:searchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ab8d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764c74);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071aba34; end: 1071aba6b;  */

void FUN_1071aba34(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be858a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071aba6c; end: 1071abcff; -[SCStickerPickerMenuView _queuedHandleStickerIntermixedCategory:flatResults:prefixMatchedQueries:searchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aba6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = (long)_DAT_112764c20;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      lVar2 = param_1;
      func_0x00010be853a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x1071abbc4;
      puStack_70 = &UNK_1108475b0;
      lStack_68 = param_1;
      _objc_retain(param_3);
      uStack_60 = param_3;
      lStack_58 = lVar2;
      _objc_retain(param_4);
      uStack_50 = param_4;
      _objc_retain(param_6);
      uStack_48 = param_6;
      _objc_retain(lVar2);
      func_0x000100162d98("APPSTORE",&puStack_88);
      _objc_release(uStack_48);
      _objc_release(uStack_50);
      _objc_release(lStack_58);
      _objc_release(uStack_60);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071abd00; end: 1071abd57; -[SCStickerPickerMenuView _putSearchUIIntoState:] */

void FUN_1071abd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1071abd58;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_40);
  return;
}



/* Entry: 1071abd58; end: 1071ac6a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071abd58(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  puVar7 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x28);
  *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764d24) = lVar9;
  if (lVar9 < 3) {
    if (lVar9 == 0) {
      lVar9 = (long)_DAT_112764ce0;
      func_0x00010bf75820(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cc8));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cc4));
      lVar13 = (long)_DAT_112764cbc;
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar13));
      lVar9 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar9 + _DAT_112764c1c) == 0) {
        uVar1 = *(ulong *)(lVar9 + lVar13);
        func_0x00010c29fc60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        puVar6 = PTR_PTR_1126d4ff8;
        _objc_retain(uVar3);
        _objc_opt_class(puVar6);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar6);
        uVar1 = uVar3;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar3);
        if (uVar1 != 0) {
          func_0x00010c262b40(uVar3);
          func_0x000108d12f1c();
          lVar9 = (long)_DAT_112764d14;
          func_0x00010c153880(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          plStack_1a0 = (long *)0x0;
          uVar4 = uVar3;
          func_0x00010c2a00a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf52a60();
          if (uVar5 != 0) {
            lVar13 = *plStack_1a0;
            do {
              uVar15 = 0;
              do {
                if (*plStack_1a0 != lVar13) {
                  _objc_enumerationMutation(uVar4);
                }
                func_0x00010bf7b960(0xbff0000000000000,
                                    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
                uVar15 = uVar15 + 1;
              } while (uVar5 != uVar15);
              uVar5 = uVar4;
              func_0x00010bf52a60();
            } while (uVar5 != 0);
          }
          _objc_release(uVar4);
        }
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cf0);
        func_0x00010c262bc0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
        _objc_release(uVar2);
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cb8));
        puVar7 = (undefined8 *)0x0;
        func_0x00010c1a41c0(*(undefined8 *)(param_1 + 0x20));
        _objc_release(uVar1);
        _objc_release(uVar3);
      }
      else {
        func_0x00010c1a7f60(*(undefined8 *)(lVar9 + _DAT_112764d0c));
        puVar7 = (undefined8 *)0x0;
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764d04));
      }
      uVar11 = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764d38) = 0;
    }
    else if (lVar9 == 1) {
      puVar7 = (undefined8 *)param_3;
      if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cdc) == '\x01') {
        lVar9 = (long)_DAT_112764cc8;
        func_0x00010bf75820(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764ce0));
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
        func_0x00010c2558c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cd0));
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764ccc));
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cbc));
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cc4));
        lVar9 = *(long *)(param_1 + 0x20);
        if (*(long *)(lVar9 + _DAT_112764c1c) == 0) {
          func_0x00010c153880(*(undefined8 *)(lVar9 + _DAT_112764d14));
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cf0);
          func_0x00010c262bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7f60();
          _objc_release(uVar2);
          func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cb8));
          puVar7 = (undefined8 *)0x1;
          func_0x00010c1a41c0(*(undefined8 *)(param_1 + 0x20));
        }
        else {
          func_0x00010c1a7f60(*(undefined8 *)(lVar9 + _DAT_112764d04));
          puVar7 = (undefined8 *)0x1;
          func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764d0c));
        }
      }
      uVar11 = 0;
    }
    else {
      if (lVar9 != 2) goto LAB_1071ac668;
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764ce0),param_2,
                          1);
      lVar13 = (long)_DAT_112764cc8;
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar13));
      lVar9 = (long)_DAT_112764cd0;
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar9);
      func_0x00010c06c0e0();
      if ((uVar1 & 1) == 0) {
        func_0x00010c24dbc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
      }
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764ccc));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cbc));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cc4));
      if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764c1c) != 0) {
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764d0c);
        goto LAB_1071ac018;
      }
      func_0x00010c1a41c0();
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cf0);
      func_0x00010c262bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 1;
      func_0x00010c1a7f60();
      _objc_release(uVar2);
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cb8));
      puVar7 = (undefined8 *)0x1;
      func_0x00010c1b0800(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar13));
    }
  }
  else {
    if (lVar9 == 3) {
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764ce0),param_2,
                          1);
      lVar13 = (long)_DAT_112764cc8;
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar13));
      func_0x00010c2558c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cd0));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764ccc));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cbc));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cc4));
      lVar9 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar9 + _DAT_112764c1c) == 0) {
        lVar10 = (long)_DAT_112764d14;
        func_0x00010c153880(*(undefined8 *)(lVar9 + lVar10));
        func_0x00010c2294c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10));
        func_0x00010c1a41c0(*(undefined8 *)(param_1 + 0x20));
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cf0);
        func_0x00010c262bc0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
        _objc_release(uVar2);
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cb8));
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        lVar10 = (long)_DAT_112764d40;
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10);
        *(undefined **)(*(long *)(param_1 + 0x20) + lVar10) = puVar6;
        _objc_release(uVar2);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        lVar13 = *(long *)(*(long *)(param_1 + 0x20) + lVar13);
        func_0x00010c29fe20();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar13;
        func_0x00010bf52a60();
        if (lVar9 != 0) {
          lVar14 = *plStack_1e0;
          do {
            lVar16 = 0;
            do {
              if (*plStack_1e0 != lVar14) {
                _objc_enumerationMutation(lVar13);
              }
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10));
              _objc_release(puVar6);
              lVar16 = lVar16 + 1;
            } while (lVar9 != lVar16);
            lVar9 = lVar13;
            puVar7 = &uStack_1f0;
            func_0x00010bf52a60();
          } while (lVar9 != 0);
        }
        _objc_release(lVar13);
        uVar11 = 1;
        goto LAB_1071ac658;
      }
      uVar2 = *(undefined8 *)(lVar9 + _DAT_112764d0c);
LAB_1071ac018:
      func_0x00010c1a7f60(uVar2);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764d04);
    }
    else {
      if (lVar9 == 4) {
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764ce0),
                            param_2,1);
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cc8));
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cd0);
        func_0x00010c2558c0();
        func_0x000109201a60();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar9 != 5) goto LAB_1071ac668;
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764ce0),
                            param_2,1);
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cc8));
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cd0);
        func_0x00010c2558c0();
        func_0x000109201b20();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar9 = (long)_DAT_112764ccc;
      func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
      _objc_release(uVar2);
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cbc));
      func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cc4));
      if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764c1c) == 0) {
        func_0x00010c1a41c0();
        piVar12 = (int *)&DAT_112764cb8;
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764cf0);
        func_0x00010c262bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
        _objc_release(uVar2);
      }
      else {
        piVar12 = (int *)&DAT_112764d04;
        func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764d0c));
      }
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)*piVar12);
    }
    uVar11 = 1;
    puVar7 = (undefined8 *)0x1;
    func_0x00010c1a7f60(uVar2);
  }
LAB_1071ac658:
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764d34) = uVar11;
  param_3 = (undefined1 *)puVar7;
LAB_1071ac668:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  param_3 = param_3 + -1;
  ppuVar8 = &PTR____CFConstantStringClassReference_110ea1398;
  if ((param_3 < (undefined1 *)0xc) && ((0xf1bU >> (ulong)((uint)param_3 & 0x1f) & 1) != 0)) {
    ppuVar8 = *(undefined ***)(&PTR_PTR_110991200)[(long)param_3];
    _objc_retain(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 1071ac6a4; end: 1071ac6f7; -[SCStickerPickerMenuView _categoryIconCellAccessibilityIdentifierFromIndexPath:] */

void FUN_1071ac6a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  uVar1 = param_3 - 1;
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea1398;
  if ((uVar1 < 0xc) && ((0xf1bU >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
    ppuVar2 = *(undefined ***)(&PTR_PTR_110991200)[uVar1];
    _objc_retain(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1071ac6f8; end: 1071ac9e3; -[SCStickerPickerMenuView _addStickerPickerDebuggingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ac6f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_alloc_init();
  lVar13 = (long)_DAT_112764d6c;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar12);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13),param_2,0);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar13),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar13),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar13),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar13));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_88 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(lVar13);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(lVar14);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c1d0120();
  func_0x00010bef9040(param_1,param_2,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar11 = *(undefined8 *)(puVar1 + _DAT_112764c50);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf660a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar10,param_2,uVar12);
  _objc_release(uVar12);
  _objc_release(uVar11);
  lVar14 = (long)_DAT_112764d6c;
  func_0x00010c212f20(*(undefined8 *)(puVar1 + lVar14),param_2,puVar10);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar14),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1071ac9e4; end: 1071aca9f; -[SCStickerPickerMenuView _viewWasDoubleTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ac9e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764c50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf660a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112764d6c;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071acaa0; end: 1071acaaf; -[SCStickerPickerMenuView isOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1071acaa0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112764c08);
}



/* Entry: 1071acab0; end: 1071acabf; -[SCStickerPickerMenuView setIsOpen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071acab0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112764c08) = param_3;
  return;
}



/* Entry: 1071acac0; end: 1071acaf3; -[SCStickerPickerMenuView _correctIndexForSuperIcon:] */

void FUN_1071acac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010c1554e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bfed030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_indexPathForItem_inSection__1125d8dd0,param_3,0);
  return;
}



/* Entry: 1071acaf4; end: 1071acb47; -[SCStickerPickerMenuView _subIconIndexToCategoryIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071acaf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010c0840e0(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764d1c);
  func_0x00010c1554e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfed030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_indexPathForItem_inSection__1125d8dd0,param_3,uVar2);
  return;
}



/* Entry: 1071acb48; end: 1071acb7b; -[SCStickerPickerMenuView _categoryIndexToSubIconIndex:] */

void FUN_1071acb48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010c0840e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bfed030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_indexPathForItem_inSection__1125d8dd0,param_3,0);
  return;
}



/* Entry: 1071acb7c; end: 1071acc63; -[SCStickerPickerMenuView setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071acb7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112764cd4;
  _objc_storeWeak(param_1 + lVar4,param_3);
  lVar5 = (long)_DAT_112764c1c;
  uVar2 = *(ulong *)(param_1 + lVar5);
  if ((uVar2 & 0xfffffffffffffffd) == 0) {
    func_0x00010bedf100(param_1);
    uVar2 = *(ulong *)(param_1 + lVar5);
  }
  if (uVar2 == 0) {
    func_0x00010c189840(*(undefined8 *)(param_1 + _DAT_112764cf0));
  }
  else {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bfaf4e0();
    _objc_release(lVar4);
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112764d1c);
    *(undefined **)(param_1 + _DAT_112764d1c) = puVar1;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071acc64; end: 1071accfb; -[SCStickerPickerMenuView didSelectSuperIconAtIndex:] */

/* WARNING: Possible PIC construction at 0x0001071acca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001071acca4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071acc64(long param_1)

{
  if (*(long *)(param_1 + _DAT_112764c1c) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d8bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764cbc),PTR_s_setPagingEnabled__112653d20,0);
  return;
}



/* Entry: 1071accfc; end: 1071acd8f; -[SCStickerPickerMenuView _logTimeToDisplayMetricsForCurrentStickerPickerCategoryCell] */

void FUN_1071accfc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf7240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26fa60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97ce0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}


