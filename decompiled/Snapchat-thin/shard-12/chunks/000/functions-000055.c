/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cbe55c; end: 108cbe757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbe55c(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_108cbe5ec;
  uVar2 = param_2;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  if (uVar4 == 0) {
    uVar4 = param_2;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010befc240();
    if ((uVar5 & 1) != 0) {
      lVar10 = *(long *)(param_1 + _DAT_11277a418);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto joined_r0x000108cbe654;
    }
    uVar5 = param_2;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010befc200();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_2;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010befc300();
      if ((uVar7 & 1) == 0) {
        uVar7 = param_2;
        func_0x00010c131e40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c08fa60();
        if ((uVar9 == 0) && (uVar9 = param_2, func_0x00010c06d080(), (int)uVar9 == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = *(long *)(param_1 + _DAT_11277a418) != 0;
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
      else {
        bVar1 = *(long *)(param_1 + _DAT_11277a418) != 0;
      }
      _objc_release(uVar6);
    }
    else {
      bVar1 = *(long *)(param_1 + _DAT_11277a418) != 0;
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (!bVar1) goto LAB_108cbe5ec;
  }
  else {
    lVar10 = *(long *)(param_1 + _DAT_11277a418);
    _objc_release(uVar3);
    _objc_release(uVar2);
joined_r0x000108cbe654:
    if (lVar10 == 0) goto LAB_108cbe5ec;
  }
  func_0x00010be8d800(param_1);
LAB_108cbe5ec:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cbe758; end: 108cbe78b;  */

void FUN_108cbe758(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be86ba0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cbe78c; end: 108cbe8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbe78c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (uVar1 = param_2, func_0x00010c242400(), uVar1 == 8)) &&
     (uVar1 = param_2, func_0x00010c078260(), (uVar1 & 1) == 0)) {
    lVar5 = (long)_DAT_11277a3b0;
    func_0x000108f4a3a0(*(undefined8 *)(param_1 + lVar5));
    uVar1 = param_2;
    func_0x00010c07de60();
    uVar2 = param_2;
    func_0x00010c083340();
    if (((int)uVar2 != 0) && ((uVar1 & 1) == 0)) {
      func_0x00010bf1f440(*(undefined8 *)(param_1 + lVar5));
    }
    func_0x00010c202080(param_2);
    lVar3 = *(long *)(param_1 + lVar5);
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c2085c0(param_2);
    }
    else {
      lVar4 = lVar3;
      func_0x00010c296d80(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c2085c0(param_2);
      _objc_release(lVar4);
    }
    _objc_release(lVar5);
    func_0x00010be94d20(param_1);
    func_0x00010c208d80(*(undefined8 *)(param_1 + _DAT_11277a414));
    func_0x00010be86ba0(param_1);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cbe8f8; end: 108cbebab; -[SCPreviewView showHintLabelAtPosition:withText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbe8f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  lVar6 = (long)_DAT_11277a41c;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 != 0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(lVar1);
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar6));
  }
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar6),param_2,4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,param_4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf34860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  lVar1 = param_1;
  if (param_3 == 1) {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf348e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
LAB_108cbea94:
    func_0x00010bf348e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) goto LAB_108cbeadc;
    lVar5 = (long)_DAT_11277a404;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    if (*(long *)(param_1 + lVar5) != 0) {
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)(param_1 + lVar5);
      goto LAB_108cbea94;
    }
    func_0x00010c274200(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf493c0(0x4049000000000000,uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uVar4);
LAB_108cbeadc:
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108cbebac;
  puStack_60 = &UNK_110842e18;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108cbebc4;
  puStack_88 = &UNK_110841f20;
  lStack_80 = param_1;
  lStack_58 = param_1;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_78,
                      &puStack_a0);
  _objc_release(param_4);
  return;
}



/* Entry: 108cbebac; end: 108cbebc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbebac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a41c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108cbebc4; end: 108cbec5b;  */

void FUN_108cbebc4(long param_1,int param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108cbec5c;
    puStack_20 = &UNK_110842e18;
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108cbec74;
    puStack_48 = &UNK_110841f20;
    uStack_18 = uStack_40;
    func_0x00010bf03440(0x3fd3333333333333,0x4000000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
                        param_2,0,&puStack_38,&puStack_60);
  }
  return;
}



/* Entry: 108cbec5c; end: 108cbec73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbec5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a41c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108cbec74; end: 108cbecb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbec74(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = (long)_DAT_11277a41c;
    func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108cbecb8; end: 108cbed0b; -[SCPreviewView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbecb8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_11277a420) != 0) {
    _dispatch_block_cancel();
  }
  puStack_28 = PTR_PTR_1126fe2c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108cbed0c; end: 108cbed3b; -[SCPreviewView ngsBottomActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbed0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a414);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cbed3c; end: 108cbeeb7; -[SCPreviewView sendButtonFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cbed3c(double param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  lVar5 = param_2;
  func_0x00010c235440();
  puVar1 = PTR_PTR_1126dba10;
  if ((int)lVar5 != 0) {
    lVar5 = (long)_DAT_11277a424;
    uVar3 = *(ulong *)(param_2 + lVar5);
    _objc_retain(uVar3);
    _objc_opt_class(puVar1);
    uVar2 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    _objc_release(uVar3);
    if (((uVar2 & 1) != 0) && (uVar3 != 0)) {
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
      return param_1;
    }
  }
  lVar5 = param_2 + _DAT_11277a38c;
  _objc_loadWeakRetained();
  func_0x00010c1124e0();
  _objc_release(lVar5);
  puVar1 = PTR_PTR_1126dba18;
  dVar6 = 80.0;
  uVar4 = *(ulong *)(param_2 + _DAT_11277a424);
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
  uVar3 = uVar2;
  func_0x00010c07dfa0();
  dVar7 = 74.0;
  if ((int)uVar3 != 0) {
    func_0x00010c15b760(uVar2);
    dVar7 = dVar6;
  }
  lVar5 = (long)_DAT_11277a3f0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar5));
  _CGRectGetMaxX();
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar5));
  _CGRectGetMaxY();
  _objc_release(uVar2);
  return dVar6 - dVar7;
}



/* Entry: 108cbeeb8; end: 108cbefeb; -[SCPreviewView toolbarFrameWithBottomBarContainView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108cbeeb8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  
  lVar1 = (long)_DAT_11277a3f0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  dVar8 = param_3;
  func_0x00010c273b40(*(undefined8 *)(param_5 + _DAT_11277a3fc));
  uVar7 = 0xc038000000000000;
  dVar4 = (param_3 - param_1) + -24.0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetMinY();
  uVar2 = *(undefined8 *)(param_5 + lVar1);
  dVar5 = dVar4;
  func_0x00010bf20c00(uVar2);
  func_0x00010bf51460(uVar2,param_6,param_5);
  uVar3 = *(undefined8 *)(param_5 + _DAT_11277a410);
  dVar6 = dVar5;
  uVar2 = uVar7;
  dVar9 = dVar8;
  uVar10 = param_4;
  func_0x00010bf20c00(uVar3);
  func_0x00010bf51460(uVar3,param_6,param_5);
  _CGRectGetMinY(dVar5,uVar7,dVar8,param_4);
  _CGRectGetMinY(dVar6,uVar2,dVar9,uVar10);
  func_0x00010bdc9640(ABS(dVar5 - dVar6),dVar4,param_5);
  return 0x4038000000000000;
}



/* Entry: 108cbefec; end: 108cbf13b; -[SCPreviewView toolbarFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108cbefec(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_11277a3f0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c273b40(*(undefined8 *)(param_5 + _DAT_11277a3fc));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  _CGRectGetMinY();
  lVar3 = param_5 + _DAT_11277a38c;
  dVar5 = param_1;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c1124a0();
  _objc_release(lVar3);
  if ((int)lVar1 == 0) {
    lVar3 = param_5;
    func_0x00010c235440();
    if ((int)lVar3 != 0) {
      func_0x00010be63d00(param_5);
      func_0x00010bf51460(param_5,param_6,*(undefined8 *)(param_5 + lVar4));
      _CGRectGetMinY();
      param_4 = dVar5 - param_1;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
      _CGRectGetMaxY();
      if (dVar5 - param_1 <= param_4) {
        param_4 = dVar5 - param_1;
      }
      goto LAB_108cbf0ec;
    }
    if (*(long *)(param_5 + _DAT_11277a424) == 0) {
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
      goto LAB_108cbf0ec;
    }
    func_0x00010bfb68e0();
  }
  else {
    func_0x00010c229580();
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    lVar3 = (long)_DAT_11277a428;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
    func_0x00010bf513e0(uVar2,param_6,*(undefined8 *)(param_5 + lVar3));
  }
  _CGRectGetMinY();
  param_4 = dVar5 - param_1;
LAB_108cbf0ec:
  func_0x00010bdc9640(param_4,param_1,param_5);
  return 0x4038000000000000;
}



/* Entry: 108cbf13c; end: 108cbf343; -[SCPreviewView _adjustedToolbarHeightWithInitialheight:yValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cbf13c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = param_5 + _DAT_11277a42c;
  dVar9 = param_1;
  dVar10 = param_2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar7 = (long)_DAT_11277a430;
    lVar1 = param_5 + lVar7;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      return param_1;
    }
    lVar2 = param_5 + lVar7;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c074c20();
    if ((int)lVar3 != 0) {
      _objc_release(lVar2);
      _objc_release(lVar1);
      return param_1;
    }
    lVar3 = param_5 + lVar7;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_5 + _DAT_11277a410);
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == lVar8) {
      return param_1;
    }
    uVar5 = *(undefined8 *)(param_5 + _DAT_11277a3d4);
    func_0x00010c087020();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0813a0();
    _objc_release(uVar5);
    lVar1 = param_5 + lVar7;
    _objc_loadWeakRetained(lVar1);
    if ((int)uVar6 != 0) {
      func_0x00010c0ed1a0();
      dVar10 = dVar10 - param_2;
      _objc_release(lVar1);
      goto LAB_108cbf19c;
    }
    func_0x00010bfb68e0();
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_5 + _DAT_11277a3fc);
    func_0x00010c29bf00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    param_5 = param_5 + lVar7;
    _objc_loadWeakRetained(param_5);
    lVar1 = param_5;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(dVar9,dVar10,param_3,param_4,uVar6,param_6,lVar1);
    _objc_release(lVar1);
    _objc_release(param_5);
    _objc_release(uVar6);
  }
  else {
    func_0x00010bf16dc0(param_5);
  }
  dVar10 = dVar10 - param_2;
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
LAB_108cbf19c:
  if (dVar10 <= param_1) {
    param_1 = dVar10;
  }
  return param_1;
}



/* Entry: 108cbf344; end: 108cbf48b; -[SCPreviewView bottomLeftButtonFrameAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cbf344(long param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_11277a38c;
  lVar3 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar3;
  func_0x00010c1124a0();
  _objc_release(lVar3);
  if ((int)lVar2 == 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained();
    func_0x00010c1124e0();
    _objc_release(lVar4);
  }
  else {
    func_0x00010be85a20(param_1);
    func_0x00010be5e7a0();
    func_0x00010be85120(param_1);
    func_0x00010be85140(param_1);
  }
  dVar5 = (double)param_3;
  dVar1 = dVar5 * 52.0;
  lVar3 = (long)_DAT_11277a3f0;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  _CGRectGetMinX();
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  _CGRectGetMaxY();
  return dVar1 + 6.0 + dVar5;
}



/* Entry: 108cbf48c; end: 108cbf55b; -[SCPreviewView multiSnapViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108cbf48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_5 + _DAT_11277a438;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  func_0x00010c106b60(lVar1);
  func_0x00010becbdc0(param_5,param_6,lVar1);
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010c26e720(param_5);
  func_0x00010c26e720(param_5);
  _CGRectOffset(param_1,param_2,param_3,param_4,uVar2,uVar3);
  _objc_release(lVar1);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 108cbf55c; end: 108cbf62b; -[SCPreviewView batchCaptureViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108cbf55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_5 + _DAT_11277a42c;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  func_0x00010c106b60(lVar1);
  func_0x00010becbdc0(param_5,param_6,lVar1);
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010c26e720(param_5);
  func_0x00010c26e720(param_5);
  _CGRectOffset(param_1,param_2,param_3,param_4,uVar2,uVar3);
  _objc_release(lVar1);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 108cbf62c; end: 108cbf6fb; -[SCPreviewView timelineThumbnailsViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108cbf62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_5 + _DAT_11277a43c;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  func_0x00010c106b60(lVar1);
  func_0x00010becbdc0(param_5,param_6,lVar1);
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010c26e720(param_5);
  func_0x00010c26e720(param_5);
  _CGRectOffset(param_1,param_2,param_3,param_4,uVar2,uVar3);
  _objc_release(lVar1);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 108cbf6fc; end: 108cbf81f; -[SCPreviewView directorThumbnailsViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbf6fc(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar1 = param_3;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMinX();
  lVar2 = param_3;
  dVar9 = param_1;
  func_0x00010bfe5d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMaxY();
  lVar5 = (long)_DAT_11277a440;
  lVar3 = param_3 + lVar5;
  dVar6 = dVar9;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c106b60();
  dVar9 = dVar9 - dVar6;
  lVar4 = param_3;
  func_0x00010bfe5d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  lVar5 = param_3 + lVar5;
  dVar7 = dVar6;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c106b60();
  dVar8 = dVar7;
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c26e720(param_3);
  func_0x00010c26e720(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectOffset_1103475f0)(param_1,dVar9,dVar6,dVar7,dVar8,param_2);
  return;
}



/* Entry: 108cbf820; end: 108cbf8a7; -[SCPreviewView creativeToolsDurationViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cbf820(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2 + _DAT_11277a444;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  func_0x00010c106b60(lVar1);
  func_0x00010becbdc0(param_2,param_3,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 108cbf8a8; end: 108cbf92f; -[SCPreviewView videoPlaybackControlsViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cbf8a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2 + _DAT_11277a448;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  func_0x00010c106b60(lVar1);
  func_0x00010becbdc0(param_2,param_3,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 108cbf930; end: 108cbf9c3; -[SCPreviewView _rightGradientFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cbf930(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11277a3e0));
  _CGRectGetMaxX();
  dVar1 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11277a3f0));
  _CGRectGetMaxX();
  if (dVar1 <= param_1) {
    param_1 = dVar1;
  }
  func_0x00010bfb68e0(param_2);
  _CGRectGetMinY();
  func_0x00010bfb68e0(param_2);
  _CGRectGetHeight();
  return param_1 + -65.0;
}



/* Entry: 108cbf9c4; end: 108cbfa5f; -[SCPreviewView bottomGradientFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cbf9c4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_loadWeakRetained();
  _objc_release();
  lVar1 = (long)_DAT_11277a3f0;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetMinX();
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetMaxY();
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetWidth();
  return param_1;
}



/* Entry: 108cbfa60; end: 108cbfc7f; -[SCPreviewView _thumbnailsViewFrameForController:preferredHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cbfa60(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  iVar2 = (int)param_3 + _DAT_11277a394;
  _objc_loadWeakRetained();
  iVar1 = iVar2;
  func_0x00010c070a20();
  _objc_release();
  if (iVar1 == 0) {
    lVar3 = param_3;
    func_0x00010c235440();
    if ((int)lVar3 == 0) {
      func_0x00010bf201e0(param_3,param_4,0);
      _CGRectGetMinY();
      dVar6 = 0.0;
      dVar5 = param_1;
      if (param_5 == 0) {
        lVar3 = param_3;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c07ba00();
        dVar5 = 23.0;
        param_2 = 8.0;
        dVar6 = 8.0;
        if ((int)lVar4 == 0) {
          dVar6 = 23.0;
        }
        _objc_release(lVar3);
      }
      lVar3 = param_3;
      func_0x00010c15b700();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar4 = param_3;
        func_0x00010c15b700(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (param_2 < param_1 - dVar6) {
          lVar3 = param_3;
          func_0x00010c15b700(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0();
          dVar5 = -10.0;
          _objc_release(lVar3);
        }
      }
    }
    else {
      lVar3 = param_3;
      func_0x00010bfe5d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51200(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
      _objc_release(lVar3);
      dVar5 = -40.0;
    }
  }
  else {
    func_0x000107c30a6c();
    if (iVar2 == 0) {
      func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_11277a3f0));
      _CGRectGetHeight();
      dVar5 = param_1;
    }
    else {
      func_0x00010be63d00(param_3);
      _CGRectGetMinY();
      dVar5 = param_1;
    }
  }
  lVar3 = param_3;
  func_0x00010bfe5d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMinX();
  func_0x00010bfe5d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_3);
  _objc_release(lVar3);
  return dVar5;
}



/* Entry: 108cbfc80; end: 108cbfcff; -[SCPreviewView addButtonToBottomLeftButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbfc80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c235440();
  if ((int)lVar1 == 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11277a3f0),param_2,param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11277a400),param_2,param_3);
  }
  else {
    func_0x00010bef6ac0(*(undefined8 *)(param_1 + _DAT_11277a414),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cbfd00; end: 108cbfd43; -[SCPreviewView _addBorderOverlayView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbfd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010befbb60(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a3ec);
  *(undefined8 *)(param_1 + _DAT_11277a3ec) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbfd44; end: 108cbffef; -[SCPreviewView _addIconsContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbfd44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010befbb60(param_1,param_2,param_3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar16 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_11277a3f0;
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  lStack_88 = lVar4;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf493a0(lVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  lStack_80 = lVar8;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bf493a0(lVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11277a3e0);
  lStack_78 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar15;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(uVar17);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar16);
  lVar16 = *(long *)(param_1 + lVar19);
  *(undefined8 *)(param_1 + lVar19) = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar18);
  func_0x00010befbb60(lVar16,param_2,puVar18);
  uVar17 = *(undefined8 *)(lVar16 + _DAT_11277a3e0);
  *(undefined **)(lVar16 + _DAT_11277a3e0) = puVar18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar17);
  return;
}



/* Entry: 108cbfff0; end: 108cc0033; -[SCPreviewView _addContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbfff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010befbb60(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a3e0);
  *(undefined8 *)(param_1 + _DAT_11277a3e0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc0034; end: 108cc00af; -[SCPreviewView _addToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc0034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277a3f0);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a3fc);
  *(undefined8 *)(param_1 + _DAT_11277a3fc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc00b0; end: 108cc00df; -[SCPreviewView shareButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc00b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a44c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cc00e0; end: 108cc0127; -[SCPreviewView layoutSubviews] */

void FUN_108cc00e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe2c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010befd920(param_1);
  return;
}



/* Entry: 108cc0128; end: 108cc022f; -[SCPreviewView finishBottomViewComponentsSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc0128(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + _DAT_11277a410);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c1cbe20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a410),PTR_s_setUserInteractionEnabled__112665468);
  return;
}



/* Entry: 108cc0230; end: 108cc023f; -[SCPreviewView setBottomBarContainViewUserInteractionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc0230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a410),PTR_s_setUserInteractionEnabled__112665468);
  return;
}



/* Entry: 108cc0240; end: 108cc0417; -[SCPreviewView layoutBottomComponents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc0240(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_11277a398;
  lVar2 = *(long *)(param_5 + lVar6);
  func_0x00010bf529e0();
  lVar4 = 0;
  if (lVar2 != 0) {
    func_0x00010bf20c00(param_5);
    dVar10 = 0.0;
    lVar6 = *(long *)(param_5 + lVar6);
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    if (lVar2 == 0) {
      dVar11 = 0.0;
    }
    else {
      dVar11 = 0.0;
      do {
        puVar1 = PTR_s_viewSpacing_1126852c0;
        lVar8 = 0;
        do {
          dVar9 = dVar10;
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(lVar6);
            dVar9 = dVar10;
          }
          uVar7 = *(ulong *)(lVar8 * 8);
          uVar3 = uVar7;
          _objc_opt_respondsToSelector(uVar7,puVar1);
          if ((uVar3 & 1) != 0) {
            func_0x00010c29e260(uVar7);
            dVar11 = dVar11 - dVar9;
          }
          func_0x00010c106b60(uVar7);
          func_0x00010bf44580(uVar7);
          _objc_retainAutoreleasedReturnValue();
          dVar10 = 0.0;
          param_4 = dVar9;
          func_0x00010c19f0e0(0,dVar11,param_3,dVar9);
          func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_11277a410));
          dVar11 = dVar11 + dVar9;
          _objc_release(uVar7);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar6;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar6);
    func_0x00010bf20c00(param_5);
    lVar4 = *(long *)(param_5 + _DAT_11277a410);
    func_0x00010c19f0e0(0,param_4 - dVar11,param_3,dVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bf97e80(*(undefined8 *)(lVar4 + _DAT_11277a400));
    return;
  }
  return;
}



/* Entry: 108cc0418; end: 108cc0477; -[SCPreviewView _layoutBottomLeftButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc0418(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108cc0478;
  puStack_20 = &UNK_110914e68;
  lStack_18 = param_1;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + _DAT_11277a400),param_2,&puStack_38);
  return;
}



/* Entry: 108cc0478; end: 108cc04cf;  */

void FUN_108cc0478(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf201e0(uVar2);
  func_0x00010c11cb00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cc04d0; end: 108cc087b; -[SCPreviewView adjustLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc04d0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fe2c8;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010be48e40(param_5);
  func_0x00010bedbfe0(param_5);
  func_0x00010c08ca40(param_5);
  lVar3 = (long)_DAT_11277a3fc;
  lVar1 = *(long *)(param_5 + lVar3);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar4 = (long)_DAT_11277a3f0;
    lVar1 = *(long *)(param_5 + lVar4);
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_5 + lVar3);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      param_3 = param_1;
      _objc_release(uVar2);
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277a3e0));
      func_0x00010bf51460(param_5);
      _CGRectGetMaxX();
      dVar5 = param_3;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
      _CGRectGetWidth();
      if (dVar5 <= param_3) {
        param_3 = dVar5;
      }
      param_3 = param_3 - param_1;
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      uVar2 = *(undefined8 *)(param_5 + lVar3);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3);
      _objc_release(uVar2);
    }
  }
  lVar4 = (long)_DAT_11277a398;
  lVar1 = *(long *)(param_5 + lVar4);
  func_0x00010bf529e0();
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  if (lVar1 == 0) {
    func_0x00010c2739a0(param_5);
  }
  else {
    func_0x00010c2739c0(param_5);
  }
  _CGRectGetHeight();
  func_0x00010c287840(uVar2);
  if (*(long *)(param_5 + _DAT_11277a428) != 0) {
    func_0x00010bdce960(param_5);
  }
  lVar3 = (long)_DAT_11277a438;
  lVar1 = param_5 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0d2620(param_5);
    lVar3 = param_5 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  lVar3 = (long)_DAT_11277a42c;
  lVar1 = param_5 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf16dc0(param_5);
    lVar3 = param_5 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  func_0x00010be974c0(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277a3f4));
  func_0x00010bf20140(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277a3f8));
  lVar1 = param_5 + _DAT_11277a394;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c070a20();
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = *(long *)(param_5 + lVar4);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      func_0x00010be63d00(param_5);
      dVar5 = param_1;
      dVar6 = param_3;
      dVar7 = param_4;
      func_0x00010bf7f860(param_5);
      if (0.0 < dVar7) {
        lVar1 = param_5 + _DAT_11277a440;
        _objc_loadWeakRetained(lVar1);
        lVar3 = lVar1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51460(dVar5,param_2,dVar6,dVar7);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar1);
        func_0x00010c19f0e0(param_1,param_2 - param_4,param_3,param_4,
                            *(undefined8 *)(param_5 + _DAT_11277a414));
      }
    }
  }
  return;
}



/* Entry: 108cc087c; end: 108cc0a0b; -[SCPreviewView _updateNGSBottomActionBarLayout] */

/* WARNING: Possible PIC construction at 0x000108cc09d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cc09d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc087c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11277a414;
  if (*(long *)(param_1 + lVar6) != 0) {
    uVar1 = param_1 + _DAT_11277a394;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c070a20();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar5 = (long)_DAT_11277a450;
    if (*(long *)(param_1 + lVar5) != 0) {
      lVar3 = *(long *)(param_1 + lVar6);
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + lVar5);
      _objc_release();
      if (lVar3 == lVar7) {
        func_0x000107c2bd38();
        func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11277a3e0));
        _CGRectGetMaxY();
        func_0x00010be85140(param_1);
        func_0x00010bf20c00(param_1);
        func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar5));
        _CGRectGetMinY();
        func_0x00010bf20c00(param_1);
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        goto code_r0x00010c19f0e0;
      }
    }
    lVar5 = *(long *)(param_1 + lVar6);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == param_1) {
      func_0x00010be63d00(param_1);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
code_r0x00010c19f0e0:
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setFrame__112645658);
      return;
    }
  }
  return;
}



/* Entry: 108cc0a0c; end: 108cc0a5b; -[SCPreviewView _pvc_mediaAreaInsets] */

/* WARNING: Possible PIC construction at 0x000108cc0a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cc0a38) */
/* WARNING: Removing unreachable block (ram,0x00010c149020) */

void FUN_108cc0a0c(void)

{
  func_0x00010c072be0();
                    /* WARNING: Could not recover jumptable at 0x00010c11cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIViewController_1126af898,PTR_s_pvc_mediaAreaInsets_112624cd0);
  return;
}



/* Entry: 108cc0a5c; end: 108cc0a9b; -[SCPreviewView _pv_safeAreaInsets] */

void FUN_108cc0a5c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  if ((int)puVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c148fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9e78,PTR_s_safeAreaInsets_11262fe10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c14d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIScreen_1126aea10,PTR_s_sc_safeAreaInsets_112631098);
  return;
}



/* Entry: 108cc0a9c; end: 108cc0baf; -[SCPreviewView _sendConfirmationFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cc0a9c(double param_1,double param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  func_0x00010be85120();
  iVar1 = (int)*(undefined8 *)(param_3 + _DAT_11277a428);
  func_0x00010c11e820();
  if (iVar1 == 0) {
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x00010bf20c00(param_3);
    _CGRectGetMinX();
    param_1 = param_2 + param_1;
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
  }
  else {
    lVar2 = (long)_DAT_11277a3e0;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar2));
    _CGRectGetMinX();
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar2));
    _CGRectGetWidth();
  }
  func_0x00010be9ed40(param_3);
  func_0x00010bf20c00(param_3);
  _CGRectGetMaxY();
  lVar2 = param_3;
  func_0x00010be430c0();
  if ((int)lVar2 != 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_11277a3e0));
    _CGRectGetMaxY();
  }
  return param_1;
}



/* Entry: 108cc0bb0; end: 108cc0bdb; -[SCPreviewView _sendConfirmationHeight] */

undefined8 FUN_108cc0bb0(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be5e7a0();
  uVar1 = 0x4052800000000000;
  if (param_1 == 0) {
    uVar1 = 0x404e000000000000;
  }
  return uVar1;
}



/* Entry: 108cc0bdc; end: 108cc0c57; -[SCPreviewView _replyActionBarPositionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc0bdc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = (long)_DAT_11277a454;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    func_0x00010beedfe0(PTR_PTR_1126dba20,param_2,*(undefined8 *)(param_1 + _DAT_11277a3b0));
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 108cc0c58; end: 108cc0d3b; -[SCPreviewView _isQuickSendActionBarInLetterbox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cc0c58(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = (long)_DAT_11277a3e0;
  if (*(long *)(param_4 + lVar3) != 0) {
    lVar1 = param_4 + _DAT_11277a38c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c1124a0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_4;
      func_0x00010c279540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c292ac0();
      _objc_release(lVar1);
      if (lVar2 != 1) {
        func_0x00010bf20c00(param_4);
        _CGRectGetMaxY();
        dVar4 = param_1;
        func_0x00010c148fc0(param_4);
        func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar3));
        _CGRectGetMaxY();
        dVar5 = (param_1 - param_3) - dVar4;
        func_0x00010be9ed40(param_4);
        if (dVar4 <= dVar5) {
          func_0x00010be8ef80(param_4);
          return param_4 != 0;
        }
      }
    }
  }
  return false;
}



/* Entry: 108cc0d3c; end: 108cc0dd3; -[SCPreviewView _sendConfirmationExtendedTapZoneInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc0d3c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be430c0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    func_0x00010bf20c00(param_1);
    _CGRectGetMaxY();
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + (long)_DAT_11277a428));
    _CGRectGetMaxY();
    func_0x00010be8ef80();
    uVar2 = 0xc03b000000000000;
    if (param_1 != 2) {
      uVar2 = 0x8000000000000000;
    }
  }
  return uVar2;
}



/* Entry: 108cc0dd4; end: 108cc0e27; -[SCPreviewView _applySendConfirmationViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc0dd4(long param_1)

{
  long lVar1;
  
  func_0x00010be9ed20();
  lVar1 = (long)_DAT_11277a428;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c18e200(*(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8,
                      *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8),
                      *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10),
                      *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18),
                      *(undefined8 *)(param_1 + lVar1));
  func_0x00010be9ed00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c199270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setExtendedTapZoneInsets__112643eb8);
  return;
}



/* Entry: 108cc0e28; end: 108cc0e4b; -[SCPreviewView quickSendLetterboxContentDownShift] */

undefined8 FUN_108cc0e28(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be430c0();
  uVar1 = 0x403f000000000000;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108cc0e4c; end: 108cc0ec7; -[SCPreviewView _quickSendBottomContentLift] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cc0e4c(double param_1,ulong param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010c11e860();
  dVar3 = 54.0 - param_1;
  uVar1 = param_2;
  func_0x00010be430c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010be9ed20(param_2);
    _CGRectGetMaxY();
    dVar2 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + (long)_DAT_11277a3e0));
    _CGRectGetMaxY();
    param_1 = param_1 - dVar2;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    dVar3 = dVar3 - param_1;
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
  }
  return dVar3;
}



/* Entry: 108cc0ec8; end: 108cc102b; -[SCPreviewView _ngsActionBarFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cc0ec8(undefined8 param_1,undefined8 param_2,double param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  
  lVar4 = (long)_DAT_11277a394;
  lVar1 = param_4 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c070a20();
  _objc_release(lVar1);
  func_0x00010bfb68e0(param_4);
  dVar5 = (double)NEON_fminnm(param_3,0x4090000000000000);
  if ((int)lVar2 == 0) {
    dVar5 = param_3;
  }
  func_0x00010bfb68e0(param_4);
  dVar6 = dVar5 * 0.5;
  dVar8 = param_3 * 0.5 - dVar6;
  uVar3 = param_4;
  func_0x00010c0786e0();
  if ((uVar3 & 1) == 0) {
    dVar6 = 8.0;
    uVar7 = 0x4048000000000000;
  }
  else {
    func_0x00010bf20c00(param_4);
    _CGRectGetMaxY();
    func_0x00010be85140(param_4);
    dVar6 = dVar6 - param_3;
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar7 = 0x4048000000000000;
    _CGRectOffset(dVar8,dVar6,dVar5,0x4048000000000000,0,-48.0 - param_3);
  }
  lVar4 = param_4 + lVar4;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010c070a20();
  _objc_release(lVar4);
  if ((int)lVar1 != 0) {
    _CGRectInset(dVar8,dVar6,dVar5,uVar7,0,0xc010000000000000);
  }
  return dVar8;
}



/* Entry: 108cc102c; end: 108cc106b; -[SCPreviewView _mediaFrameWillEncroachBottomSafeArea] */

bool FUN_108cc102c(long param_1)

{
  long lVar1;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfe4380();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 108cc106c; end: 108cc10f7; -[SCPreviewView traitCollectionDidChange:] */

void FUN_108cc106c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fe2c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed83e0(param_1);
  uVar1 = param_1;
  func_0x00010bf1fbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010bedb440(param_1);
  return;
}



/* Entry: 108cc10f8; end: 108cc1127; -[SCPreviewView sendConfirmationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc10f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a428);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cc1128; end: 108cc144f; -[SCPreviewView setupSendConfirmationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc1128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  lVar8 = (long)_DAT_11277a428;
  if (*(long *)(param_5 + lVar8) == 0) {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    _objc_initWeak(auStack_88,param_5);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108cc1450;
    puStack_98 = &UNK_110ac18f8;
    puVar3 = auStack_90;
    _objc_copyWeak(puVar3,auStack_88);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be62620(param_5);
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar4);
    _objc_release(puVar2);
    lVar10 = (long)_DAT_11277a390;
    iVar9 = (int)*(undefined8 *)(param_5 + lVar10);
    func_0x00010be7fc00(param_5);
    func_0x00010c2a6940();
    if (iVar9 != 0) {
      lVar12 = param_5 + _DAT_11277a394;
      _objc_loadWeakRetained(lVar12);
      _objc_copyWeak(auStack_b8,auStack_88);
      _objc_retain(puVar4);
      func_0x00010befa300(lVar12);
      _objc_release(lVar12);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_b8);
    }
    uVar11 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010be9ed20(param_5);
    lVar12 = (long)_DAT_11277a38c;
    lVar10 = param_5 + lVar12;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c1124e0();
    uVar5 = param_5 + _DAT_11277a394;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010c078580();
    if ((uVar6 & 1) == 0) {
      lVar12 = param_5 + lVar12;
      _objc_loadWeakRetained(lVar12);
      func_0x00010c1124c0();
    }
    func_0x00010be7fc00(param_5);
    func_0x00010bf554c0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar8);
    *(undefined8 *)(param_5 + lVar8) = uVar11;
    _objc_release(uVar7);
    if ((uVar6 & 1) == 0) {
      _objc_release(lVar12);
    }
    _objc_release(uVar5);
    _objc_release(lVar10);
    func_0x00010bdce960(param_5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108cc1450; end: 108cc1527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc1450(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      puVar1 = PTR_PTR_1126dba28;
      _objc_alloc();
      lVar2 = param_1 + _DAT_11277a394;
      _objc_loadWeakRetained(lVar2);
      func_0x00010be7fc00(param_1);
      func_0x00010c041520();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277a458);
      *(undefined **)(param_1 + _DAT_11277a458) = puVar1;
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cc1528; end: 108cc159f;  */

void FUN_108cc1528(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010be62620(lVar1);
    func_0x00010c0df6e0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cc15a0; end: 108cc16db; -[SCPreviewView setupHintLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc15a0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x000108ede8b8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c14a0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286de0();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c259240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dba30;
  _objc_opt_class(PTR_PTR_1126dba30);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  _objc_release(uVar4);
  if ((uVar3 & 1) != 0) {
    uVar4 = param_1;
    func_0x00010c259240(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x000108ede918();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47180(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  uVar4 = *(ulong *)(param_1 + (long)_DAT_11277a3ac);
  func_0x00010c2350c0();
  if ((uVar4 & 1) == 0) {
    func_0x000108ede8e8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108edeac8();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c15b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47180();
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc16dc; end: 108cc174f; -[SCPreviewView setTransitionalImageIfNecessary:isCropped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc16dc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_11277a3ac);
    func_0x00010c0eb1e0();
    if ((uVar1 & 1) != 0) goto LAB_108cc173c;
  }
  func_0x00010c27ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_1);
LAB_108cc173c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cc1750; end: 108cc18ab; -[SCPreviewView disableUserInteractionOfSubviews] */

/* WARNING: Possible PIC construction at 0x000108cc1790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cc1794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc1750(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_11277a45c;
  lVar2 = *(long *)(param_1 + lVar8);
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar3;
    _objc_release(uVar6);
    lVar4 = param_1;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar7 = *(undefined8 *)(lVar9 * 8);
        uVar6 = uVar7;
        func_0x00010c082800();
        if ((int)uVar6 != 0) {
          func_0x00010befa120(*(undefined8 *)(param_1 + lVar8));
          func_0x00010c21e900(uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    lVar2 = (long)_DAT_11277a45c;
    if (*(long *)(lVar4 + lVar2) == 0) {
      return;
    }
    func_0x00010bf97e80();
    lVar2 = *(long *)(lVar4 + lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 108cc18ac; end: 108cc18f3; -[SCPreviewView enableUserInteractionOfManuallyDisabledSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc18ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a45c;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 != 0) {
    func_0x00010bf97e80(lVar1,param_2,&PTR___NSConcreteGlobalBlock_110ac1928);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_removeAllObjects_112628590);
    return;
  }
  return;
}



/* Entry: 108cc18f4; end: 108cc18ff;  */

void FUN_108cc18f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setUserInteractionEnabled__112665468,1);
  return;
}



/* Entry: 108cc1900; end: 108cc1a23; -[SCPreviewView _togglePreviewUIHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc1900(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (((lVar2 == 3) || (lVar2 = param_3, func_0x00010c252440(), lVar2 == 4)) ||
     (lVar2 = param_3, func_0x00010c252440(), lVar2 == 5)) {
    lVar4 = (long)_DAT_11277a460;
    bVar1 = (*(byte *)(param_1 + lVar4) ^ 0xff) & 1;
    *(byte *)(param_1 + lVar4) = bVar1;
    func_0x00010c161860(param_1,param_2,bVar1,0);
    lVar2 = param_1 + _DAT_11277a438;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11277a42c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a3f0),param_2,
                        *(undefined1 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cc1a24; end: 108cc1a87; -[SCPreviewView isUserInteractionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_108cc1a24(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  
  lVar1 = param_1 + _DAT_11277a38c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c230280();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(param_1 + _DAT_11277a464);
  }
  return bVar3 & 1;
}



/* Entry: 108cc1a88; end: 108cc1a97; -[SCPreviewView setUserInteractionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc1a88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277a464) = param_3;
  return;
}



/* Entry: 108cc1a98; end: 108cc1d13; -[SCPreviewView setTopContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108cc1a98(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = param_3;
  _objc_retain(param_3);
  lVar25 = (long)_DAT_11277a40c;
  if (*(long *)(param_1 + lVar25) != 0) {
    lVar24 = (long)_DAT_11277a468;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar24));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar24);
    *(undefined **)(param_1 + lVar24) = param_3;
    _objc_release(uVar1);
    puVar21 = (undefined *)0x0;
    if (*(long *)(param_1 + lVar24) != 0) {
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar25));
      uVar22 = *(undefined8 *)(param_1 + lVar25);
      uVar2 = *(undefined8 *)(param_1 + lVar24);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar25);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf493a0(uVar2,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar24);
      uStack_88 = uVar1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar25);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar4;
      func_0x00010bf493a0(uVar4,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar24);
      uStack_80 = uVar18;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar25);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar6;
      func_0x00010bf493a0(uVar6,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar24);
      uStack_78 = uVar23;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar25);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf493a0(uVar8,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar11;
      func_0x00010bef79e0(uVar22);
      _objc_release(puVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar23);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar18);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar21);
  lVar25 = (long)_DAT_11277a46c;
  if (*(long *)(param_3 + lVar25) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_3 + lVar25);
    *(undefined8 *)(param_3 + lVar25) = 0;
    _objc_release(uVar1);
  }
  if (((puVar21 != (undefined *)0x0) &&
      (lVar24 = (long)_DAT_11277a404, *(long *)(param_3 + lVar24) != 0)) &&
     (lVar26 = (long)_DAT_11277a3f0, *(long *)(param_3 + lVar26) != 0)) {
    lVar27 = (long)_DAT_11277a40c;
    if (*(long *)(param_3 + lVar27) != 0) {
      puVar11 = puVar21;
      func_0x00010c08c0e0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4033000000000000);
      _objc_release(puVar11);
      puVar11 = puVar21;
      func_0x00010c08c0e0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar11);
      func_0x00010befbb60(*(undefined8 *)(param_3 + lVar26),param_2,puVar21);
      func_0x00010c219b60(puVar21,param_2,0);
      uVar23 = *(undefined8 *)(param_3 + lVar26);
      puVar11 = puVar21;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_3 + lVar27);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf493a0(puVar11,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar21;
      puStack_148 = puVar12;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf49420(0x4043000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar21;
      puStack_140 = puVar14;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bf49420(0x4043000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar21;
      puStack_138 = puVar16;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_3 + lVar24);
      func_0x00010bf34860(uVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      func_0x00010bf493a0(puVar17,param_2,uVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_130 = puVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_148,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef79e0(uVar23,param_2,puVar20);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(uVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(uVar1);
      _objc_release(puVar11);
      _objc_retain(puVar21);
      uVar1 = *(undefined8 *)(param_3 + lVar25);
      *(undefined **)(param_3 + lVar25) = puVar21;
      _objc_release(uVar1);
    }
  }
  _objc_release(puVar21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return puVar21;
  }
  ___stack_chk_fail();
  puVar21 = puVar21 + _DAT_11277a38c;
  _objc_loadWeakRetained(puVar21);
  puVar11 = puVar21;
  func_0x00010c112500();
  _objc_release(puVar21);
  return puVar11;
}



/* Entry: 108cc1d14; end: 108cc1fdf; -[SCPreviewView setTopLeftCornerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108cc1d14(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar12 = (long)_DAT_11277a46c;
  if (*(long *)(param_1 + lVar12) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar12);
    *(undefined8 *)(param_1 + lVar12) = 0;
    _objc_release(uVar1);
  }
  if (((param_3 != 0) && (lVar10 = (long)_DAT_11277a404, *(long *)(param_1 + lVar10) != 0)) &&
     (lVar11 = (long)_DAT_11277a3f0, *(long *)(param_1 + lVar11) != 0)) {
    lVar13 = (long)_DAT_11277a40c;
    if (*(long *)(param_1 + lVar13) != 0) {
      lVar2 = param_3;
      func_0x00010c08c0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4033000000000000);
      _objc_release(lVar2);
      lVar2 = param_3;
      func_0x00010c08c0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(lVar2);
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar11),param_2,param_3);
      func_0x00010c219b60(param_3,param_2,0);
      uVar9 = *(undefined8 *)(param_1 + lVar11);
      lVar11 = param_3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bf493a0(lVar11,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      lStack_98 = lVar13;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf49420(0x4043000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      lStack_90 = lVar3;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf49420(0x4043000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      lStack_88 = lVar5;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bf34860(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar6;
      func_0x00010bf493a0(lVar6,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_80 = lVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef79e0(uVar9,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(lVar10);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar13);
      _objc_release(uVar1);
      _objc_release(lVar11);
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + lVar12);
      *(long *)(param_1 + lVar12) = param_3;
      _objc_release(uVar1);
    }
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_3;
  }
  ___stack_chk_fail();
  param_3 = param_3 + _DAT_11277a38c;
  _objc_loadWeakRetained(param_3);
  lVar12 = param_3;
  func_0x00010c112500();
  _objc_release(param_3);
  return lVar12;
}



/* Entry: 108cc1fe0; end: 108cc201f; -[SCPreviewView shouldUseNGSBottomActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108cc1fe0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11277a38c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c112500();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108cc2020; end: 108cc2197; -[SCPreviewView contentAreaFrameExcludingBottomBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108cc2020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_5;
  func_0x00010c235440();
  if (((int)lVar1 == 0) || (lVar1 = param_5, func_0x00010c0786e0(), (int)lVar1 == 0)) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277a3e0));
  }
  else {
    func_0x00010be63d00(param_5);
    lVar1 = *(long *)(param_5 + _DAT_11277a398);
    uVar4 = param_1;
    uVar5 = param_2;
    uVar6 = param_3;
    uVar7 = param_4;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = (long)_DAT_11277a3e0;
      uVar2 = uVar4;
    }
    else {
      lVar1 = (long)_DAT_11277a410;
      uVar2 = *(undefined8 *)(param_5 + lVar1);
      func_0x00010c261580(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_5 + lVar1);
      func_0x00010bfb68e0(uVar3);
      lVar1 = (long)_DAT_11277a3e0;
      func_0x00010bf51460(uVar2,param_6,*(undefined8 *)(param_5 + lVar1));
      uVar2 = uVar4;
      _objc_release(uVar3);
      param_1 = uVar4;
      param_2 = uVar5;
      param_3 = uVar6;
      param_4 = uVar7;
    }
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
    _CGRectGetMinX();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
    _CGRectGetMinY();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
    _CGRectGetWidth();
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    param_1 = uVar2;
  }
  return param_1;
}



/* Entry: 108cc2198; end: 108cc21e7; -[SCPreviewView _mediaLeavesNoRoomForFooter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cc2198(long param_1)

{
  double in_d3;
  double dVar1;
  
  func_0x00010bfb68e0();
  dVar1 = in_d3;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11277a3e0));
  return in_d3 - dVar1 < 48.0;
}



/* Entry: 108cc21e8; end: 108cc2213; -[SCPreviewView isNGSBarStyleDarkTranslucent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108cc21e8(ulong param_1)

{
  if (*(long *)(param_1 + (long)_DAT_11277a414) != 0) {
    return (ulong)(*(long *)(param_1 + (long)_DAT_11277a450) == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be5e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaLeavesNoRoomForFooter_1125753d0);
  return param_1;
}



/* Entry: 108cc2214; end: 108cc227f; -[SCPreviewView _bottomButtonsConfigFromCurrentConfiguration] */

ulong FUN_108cc2214(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = param_1;
  func_0x00010be62620();
  uVar1 = 0x14;
  if (iVar3 == 0) {
    uVar1 = 0x10;
  }
  iVar3 = param_1;
  func_0x00010be62640();
  uVar2 = uVar1 | 2;
  if (iVar3 == 0) {
    uVar2 = uVar1;
  }
  iVar3 = param_1;
  func_0x00010be62680();
  uVar1 = uVar2 | 8;
  if (iVar3 == 0) {
    uVar1 = uVar2;
  }
  func_0x00010be62660();
  uVar2 = uVar1 | 0x20;
  if (param_1 == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108cc2280; end: 108cc23a3; -[SCPreviewView _recalculateButtomButtonsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc2280(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277a414;
  if ((*(long *)(param_1 + lVar5) != 0) && (lVar1 = param_1, func_0x00010c235440(), (int)lVar1 != 0)
     ) {
    lVar1 = param_1;
    func_0x00010bdd5460();
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010bf254a0();
    if (lVar2 != lVar1) {
      func_0x00010c174840(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c22a7c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277a44c);
      *(undefined8 *)(param_1 + _DAT_11277a44c) = uVar3;
      _objc_release(uVar4);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c259240();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277a418);
      *(undefined8 *)(param_1 + _DAT_11277a418) = uVar3;
      _objc_release(uVar4);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c24ae20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277a470);
      *(undefined8 *)(param_1 + _DAT_11277a470) = uVar3;
      _objc_release(uVar4);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c15b700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277a424);
      *(undefined8 *)(param_1 + _DAT_11277a424) = uVar3;
      _objc_release(uVar4);
      param_1 = param_1 + _DAT_11277a38c;
      _objc_loadWeakRetained(param_1);
      func_0x00010c112420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 108cc23a4; end: 108cc29cf; -[SCPreviewView _setupNGSBottomButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc23a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
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
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uStack_178;
  undefined4 uStack_104;
  
  uVar2 = param_5;
  func_0x00010bdd5460();
  uVar3 = param_5;
  func_0x00010c0786e0();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + (long)_DAT_11277a3f8),param_6,1);
  }
  func_0x00010be94d20();
  puVar4 = PTR_PTR_1126dba38;
  _objc_alloc();
  func_0x00010be63d00(param_5);
  uVar3 = param_5 + (long)_DAT_11277a38c;
  _objc_loadWeakRetained();
  uVar5 = uVar3;
  func_0x00010c1124e0();
  lVar31 = (long)_DAT_11277a394;
  uVar6 = param_5 + lVar31;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  func_0x00010c070a20();
  uVar8 = param_5 + lVar31;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010c07e940();
  if ((uVar9 & 1) == 0) {
    uStack_178 = param_5 + lVar31;
    _objc_loadWeakRetained();
    lVar30 = uStack_178;
    func_0x00010c070a20();
    uStack_104 = (uint)lVar30 ^ 1;
  }
  else {
    uStack_104 = 0;
  }
  uVar10 = param_5 + lVar31;
  _objc_loadWeakRetained();
  uVar11 = uVar10;
  func_0x00010c07e920();
  uVar23 = *(undefined8 *)(param_5 + (long)_DAT_11277a39c);
  uVar12 = param_5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf1c060();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c1123e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c112460();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_5 + (long)_DAT_11277a3a0);
  uVar27 = *(undefined8 *)(param_5 + (long)_DAT_11277a3a4);
  uVar25 = *(undefined8 *)(param_5 + (long)_DAT_11277a3a8);
  uVar18 = uVar17;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11277a3ac;
  uVar26 = *(undefined8 *)(param_5 + lVar22);
  uVar29 = *(undefined8 *)(param_5 + (long)_DAT_11277a3b0);
  lVar30 = param_5 + lVar31;
  _objc_loadWeakRetained();
  lVar19 = lVar30;
  func_0x00010c070a20();
  uVar35 = 0x4010000000000000;
  if ((int)lVar19 == 0) {
    uVar35 = 0;
  }
  uVar28 = *(undefined8 *)(param_5 + (long)_DAT_11277a3b8);
  uVar33 = *(undefined8 *)(param_5 + (long)_DAT_11277a3bc);
  lVar19 = param_5 + lVar31;
  _objc_loadWeakRetained();
  lVar34 = lVar19;
  func_0x00010bf014e0();
  uVar20 = param_5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258de0();
  func_0x00010c0140a0(param_1,param_2,param_3,param_4,uVar35,puVar4,param_6,uVar2,!bVar1,
                      uVar5 & 0xffffffff,uVar7 & 0xffffffff,uStack_104,uVar11 & 0xffffffff,uVar23,
                      uVar13,uVar15,uVar17,uVar24,uVar27,uVar25,uVar18,uVar26,uVar29,uVar28,uVar33,
                      (char)lVar34);
  lVar34 = (long)_DAT_11277a414;
  uVar23 = *(undefined8 *)(param_5 + lVar34);
  *(undefined **)(param_5 + lVar34) = puVar4;
  _objc_release(uVar23);
  _objc_release(uVar20);
  _objc_release(lVar19);
  _objc_release(lVar30);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar10);
  if ((uVar9 & 1) == 0) {
    _objc_release(uStack_178);
  }
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar2 = param_5;
  func_0x00010be5e8c0();
  if (((uVar2 & 1) == 0) && (uVar2 = param_5, func_0x00010c235440(), (int)uVar2 != 0)) {
    func_0x00010beab600(param_5);
    lVar30 = (long)_DAT_11277a450;
    func_0x00010c066f80(param_5,param_6,*(undefined8 *)(param_5 + lVar30),
                        *(undefined8 *)(param_5 + (long)_DAT_11277a3f0));
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar30),param_6,*(undefined8 *)(param_5 + lVar34))
    ;
    func_0x00010befa120(*(undefined8 *)(param_5 + (long)_DAT_11277a398),param_6,
                        *(undefined8 *)(param_5 + lVar30));
  }
  else {
    func_0x00010c066f80(param_5,param_6,*(undefined8 *)(param_5 + lVar34),
                        *(undefined8 *)(param_5 + (long)_DAT_11277a3f0));
  }
  lVar30 = *(long *)(param_5 + lVar34);
  func_0x00010c14a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar30 != 0) {
    uVar23 = *(undefined8 *)(param_5 + lVar34);
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = (long)_DAT_11277a474;
    uVar24 = *(undefined8 *)(param_5 + lVar32);
    *(undefined8 *)(param_5 + lVar32) = uVar23;
    _objc_release(uVar24);
    lVar30 = param_5 + lVar31;
    _objc_loadWeakRetained();
    lVar19 = lVar30;
    func_0x00010c123d20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar19 == 0) {
      lVar19 = param_5 + lVar31;
      _objc_loadWeakRetained();
      lVar21 = lVar19;
      func_0x00010bfbbbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar19);
      _objc_release(lVar30);
      if (lVar21 != 0) goto LAB_108cc2808;
    }
    else {
      _objc_release();
      _objc_release(lVar30);
LAB_108cc2808:
      func_0x00010c195460(*(undefined8 *)(param_5 + lVar32),param_6,0);
    }
    puVar4 = PTR_PTR_1126dba28;
    _objc_alloc();
    uVar23 = *(undefined8 *)(param_5 + lVar32);
    uVar24 = *(undefined8 *)(param_5 + lVar22);
    lVar30 = param_5 + lVar31;
    _objc_loadWeakRetained(lVar30);
    uVar25 = *(undefined8 *)(param_5 + (long)_DAT_11277a3d0);
    uVar2 = param_5;
    func_0x00010be7fc00(param_5);
    func_0x00010c041520(puVar4,param_6,uVar23,uVar24,lVar30,uVar25,uVar2);
    uVar23 = *(undefined8 *)(param_5 + (long)_DAT_11277a458);
    *(undefined **)(param_5 + (long)_DAT_11277a458) = puVar4;
    _objc_release(uVar23);
    _objc_release(lVar30);
  }
  lVar30 = param_5 + lVar31;
  _objc_loadWeakRetained();
  lVar22 = lVar30;
  func_0x00010c123d20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar22 == 0) {
    lVar31 = param_5 + lVar31;
    _objc_loadWeakRetained();
    lVar22 = lVar31;
    func_0x00010bfbbbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar31);
    _objc_release(lVar30);
    if (lVar22 == 0) goto LAB_108cc2910;
  }
  else {
    _objc_release();
    _objc_release(lVar30);
  }
  uVar23 = *(undefined8 *)(param_5 + lVar34);
  func_0x00010c15b700(uVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar23);
LAB_108cc2910:
  uVar23 = *(undefined8 *)(param_5 + lVar34);
  func_0x00010c22a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_5 + (long)_DAT_11277a44c);
  *(undefined8 *)(param_5 + (long)_DAT_11277a44c) = uVar23;
  _objc_release(uVar24);
  uVar23 = *(undefined8 *)(param_5 + lVar34);
  func_0x00010c259240();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_5 + (long)_DAT_11277a418);
  *(undefined8 *)(param_5 + (long)_DAT_11277a418) = uVar23;
  _objc_release(uVar24);
  uVar23 = *(undefined8 *)(param_5 + lVar34);
  func_0x00010c24ae20();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_5 + (long)_DAT_11277a470);
  *(undefined8 *)(param_5 + (long)_DAT_11277a470) = uVar23;
  _objc_release(uVar24);
  uVar23 = *(undefined8 *)(param_5 + lVar34);
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_5 + (long)_DAT_11277a424);
  *(undefined8 *)(param_5 + (long)_DAT_11277a424) = uVar23;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar24);
  return;
}



/* Entry: 108cc29d0; end: 108cc2a07; -[SCPreviewView _shouldShowCapriFooterView] */

ulong FUN_108cc29d0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c0786e0();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c235450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldUseNGSBottomActionBar_11266af38);
  return param_1;
}



/* Entry: 108cc2a08; end: 108cc2cdf; -[SCPreviewView _setupCapriFooterView] */

/* WARNING: Possible PIC construction at 0x000108cc2c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cc2c24) */
/* WARNING: Removing unreachable block (ram,0x000108cc2cdc) */
/* WARNING: Removing unreachable block (ram,0x000108cc2cb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc2a08(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277a3e0));
  _CGRectGetMaxY();
  dVar8 = param_1;
  func_0x000107c2bd38();
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  puVar1 = PTR_PTR_1126dba40;
  _objc_alloc();
  func_0x00010bfb68e0(param_5);
  func_0x00010bfb68e0(param_5);
  func_0x00010c013de0(0,param_1 + dVar8,param_3,param_4 - (param_1 + dVar8));
  lVar7 = (long)_DAT_11277a450;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  *(undefined **)(param_5 + lVar7) = puVar1;
  _objc_release(uVar6);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc(PTR_PTR_1126b1198);
  func_0x00010c013de0(param_3 + -65.0,0,0x4050400000000000,0);
  func_0x00010c16d4a0();
  func_0x00010c21e900(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0,0x3fe0000000000000);
  _objc_release(puVar2);
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar7));
                    /* WARNING: Could not recover jumptable at 0x00010bed83f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updateFooterBackground_112593aa0);
  return;
}



/* Entry: 108cc2ce0; end: 108cc2d1f; -[SCPreviewView setNavBarTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc2ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a478);
  *(undefined8 *)(param_1 + _DAT_11277a478) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed83f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFooterBackground_112593aa0);
  return;
}



/* Entry: 108cc2d20; end: 108cc2d5f; -[SCPreviewView setCustomThemeBackgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc2d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a47c);
  *(undefined8 *)(param_1 + _DAT_11277a47c) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed3b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBackgroundImage_112592868);
  return;
}



/* Entry: 108cc2d60; end: 108cc303b; -[SCPreviewView _updateBackgroundImage] */

/* WARNING: Possible PIC construction at 0x000108cc2ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cc3000) */
/* WARNING: Removing unreachable block (ram,0x000108cc3038) */
/* WARNING: Removing unreachable block (ram,0x000108cc3048) */
/* WARNING: Removing unreachable block (ram,0x000108cc3018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc2d60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar15 = (long)_DAT_11277a480;
  if ((2 < lRam00000001138466f0) && (*(long *)(param_1 + lVar15) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar1;
    _objc_release(uVar14);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
    func_0x00010befbb60(param_1);
    func_0x00010c15cda0(param_1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar14);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar15));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar15),PTR_s_setHidden__1126479f8,lRam00000001138466f0 < 3);
  return;
}



/* Entry: 108cc303c; end: 108cc305b; -[SCPreviewView setCustomThemeBackgroundImageHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc303c(long param_1,undefined8 param_2,undefined4 param_3)

{
  if (lRam00000001138466f0 < 3) {
    param_3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a480),PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 108cc305c; end: 108cc342f; -[SCPreviewView _updateFooterBackground] */

/* WARNING: Possible PIC construction at 0x000108cc32ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cc32f0) */
/* WARNING: Removing unreachable block (ram,0x000108cc33c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc305c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  if ((lRam00000001138466f0 < 3) ||
     (lVar16 = (long)_DAT_11277a450, *(long *)(param_1 + lVar16) == 0)) {
    lVar1 = *(long *)(param_1 + _DAT_11277a484);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      ___stack_chk_fail();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = (long)_DAT_11277a484;
      func_0x00010c16e440(*(undefined8 *)(*(long *)(lVar1 + 0x20) + lVar16));
      _objc_release(puVar2);
      func_0x00010c1a9f00(*(undefined8 *)(*(long *)(lVar1 + 0x20) + lVar16));
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (0,*(undefined8 *)(*(long *)(lVar1 + 0x20) + (long)_DAT_11277a488),
                 PTR_s_setOpacity__112652d18);
      return;
    }
    uVar15 = 1;
  }
  else {
    lVar17 = (long)_DAT_11277a484;
    lVar1 = *(long *)(param_1 + lVar17);
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar16));
      func_0x00010c013de0();
      uVar15 = *(undefined8 *)(param_1 + lVar17);
      *(undefined **)(param_1 + lVar17) = puVar2;
      _objc_release(uVar15);
      func_0x00010c182220(*(undefined8 *)(param_1 + lVar17));
      func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar17));
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16));
      func_0x00010c15cda0(*(undefined8 *)(param_1 + lVar16));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c2793a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010bf1ff80(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + lVar17);
    }
    uVar15 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,uVar15);
  return;
}



/* Entry: 108cc3430; end: 108cc3513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc3430(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11277a484;
  func_0x00010c16e440(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  _objc_release(puVar1);
  func_0x00010c1a9f00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a488),
             PTR_s_setOpacity__112652d18);
  return;
}



/* Entry: 108cc3514; end: 108cc37b7;  */

/* WARNING: Possible PIC construction at 0x000108cc3744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cc3748) */
/* WARNING: Removing unreachable block (ram,0x000108cc37b4) */
/* WARNING: Removing unreachable block (ram,0x000108cc37e4) */
/* WARNING: Removing unreachable block (ram,0x000108cc3794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc3514(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar6 = (long)_DAT_11277a488;
  if (*(long *)(lVar4 + lVar6) == 0) {
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
    *(undefined **)(*(long *)(param_1 + 0x20) + lVar6) = puVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a484);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f40();
    _objc_release(uVar5);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  func_0x00010bf20c00(*(undefined8 *)(lVar4 + _DAT_11277a450));
  func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      _objc_retainAutorelease(*(undefined8 *)(lVar7 * 8));
      func_0x00010bdc0fe0();
      func_0x00010befa120(puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010c17eb60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  func_0x00010c24fec0(param_2);
  func_0x00010c209760(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  func_0x00010bf95080(param_2);
  func_0x00010c196020(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  lVar4 = param_2;
  func_0x00010c09f9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  _objc_release(lVar4);
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6),PTR_s_setOpacity__112652d18);
  return;
}



/* Entry: 108cc37b8; end: 108cc3837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc37b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = (long)_DAT_11277a484;
  func_0x00010c1a9f00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  _objc_release(param_2);
  func_0x00010c16e440(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a488),
             PTR_s_setOpacity__112652d18);
  return;
}



/* Entry: 108cc3838; end: 108cc3cd3; -[SCPreviewView _setupNonNGSBottomButtons] */

/* WARNING: Possible PIC construction at 0x000108cc39f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108cc3b4c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc3838(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  func_0x00010c229560();
  lVar9 = param_5;
  func_0x00010be62620();
  if ((int)lVar9 != 0) {
    uVar6 = *(ulong *)(param_5 + _DAT_11277a390);
    lVar9 = param_5 + _DAT_11277a38c;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c1124a0();
    func_0x00010c2a6940();
    _objc_release(lVar9);
    if ((uVar6 & 1) == 0) {
      puVar3 = PTR_PTR_1126dba48;
      _objc_alloc();
      func_0x000107c308a4(0x404a000000000000,0x404c000000000000);
      func_0x00010c013de0();
      lVar8 = (long)_DAT_11277a474;
      uVar5 = *(undefined8 *)(param_5 + lVar8);
      *(undefined **)(param_5 + lVar8) = puVar3;
      _objc_release(uVar5);
      lVar7 = (long)_DAT_11277a394;
      lVar9 = param_5 + lVar7;
      _objc_loadWeakRetained();
      lVar1 = lVar9;
      func_0x00010c123d20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar1 = param_5 + lVar7;
        _objc_loadWeakRetained();
        lVar2 = lVar1;
        func_0x00010bfbbbe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar1);
        _objc_release(lVar9);
        if (lVar2 != 0) goto LAB_108cc3954;
      }
      else {
        _objc_release();
        _objc_release(lVar9);
LAB_108cc3954:
        func_0x00010c195460(*(undefined8 *)(param_5 + lVar8));
      }
      func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_11277a3f0));
      puVar3 = PTR_PTR_1126dba28;
      _objc_alloc();
      lVar7 = param_5 + lVar7;
      _objc_loadWeakRetained(lVar7);
      func_0x00010be7fc00(param_5);
      func_0x00010c041520();
      uVar5 = *(undefined8 *)(param_5 + _DAT_11277a458);
      *(undefined **)(param_5 + _DAT_11277a458) = puVar3;
      _objc_release(uVar5);
      _objc_release(lVar7);
      uVar5 = *(undefined8 *)(param_5 + _DAT_11277a400);
      uVar4 = *(undefined8 *)(param_5 + lVar8);
      goto code_r0x00010befa120;
    }
  }
  lVar9 = param_5;
  func_0x00010be62640();
  if ((int)lVar9 == 0) {
    lVar9 = param_5;
    func_0x00010be62680();
    if ((int)lVar9 == 0) {
      return;
    }
    puVar3 = PTR_PTR_1126dba30;
    _objc_alloc();
    dVar10 = 52.0;
    dVar11 = 56.0;
    func_0x000107c308a4(0x404a000000000000,0x404c000000000000);
    func_0x00010c013de0();
    lVar9 = (long)_DAT_11277a418;
    uVar5 = *(undefined8 *)(param_5 + lVar9);
    *(undefined **)(param_5 + lVar9) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar9));
    _objc_release(puVar3);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    uVar5 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010bfe6ac0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    uVar4 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010bfe6ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1aa420((param_3 - dVar10) * 0.5,(param_4 - dVar11) * 0.5,
                        *(undefined8 *)(param_5 + lVar9));
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010c160fc0(uVar5);
    func_0x000108ede630();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_5 + lVar9));
    _objc_release(uVar5);
    func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_11277a3f0));
    uVar5 = *(undefined8 *)(param_5 + _DAT_11277a400);
    uVar4 = *(undefined8 *)(param_5 + lVar9);
  }
  else {
    puVar3 = PTR_PTR_1126dba30;
    _objc_alloc();
    dVar10 = 52.0;
    dVar11 = 56.0;
    func_0x000107c308a4(0x404a000000000000,0x404c000000000000);
    func_0x00010c013de0();
    lVar9 = (long)_DAT_11277a44c;
    uVar5 = *(undefined8 *)(param_5 + lVar9);
    *(undefined **)(param_5 + lVar9) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar9));
    _objc_release(puVar3);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    uVar5 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010bfe6ac0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    uVar4 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010bfe6ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1aa420((param_3 - dVar10) * 0.5,(param_4 - dVar11) * 0.5,
                        *(undefined8 *)(param_5 + lVar9));
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010c160fc0(uVar5);
    func_0x000108ede900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_5 + lVar9));
    _objc_release(uVar5);
    func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_11277a3f0));
    uVar5 = *(undefined8 *)(param_5 + _DAT_11277a400);
    uVar4 = *(undefined8 *)(param_5 + lVar9);
  }
code_r0x00010befa120:
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_addObject__11259c1f0,uVar4);
  return;
}



/* Entry: 108cc3cd4; end: 108cc3d13; -[SCPreviewView _previewActionBarScopeMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108cc3cd4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_11277a38c;
  _objc_loadWeakRetained(uVar1);
  uVar2 = uVar1;
  func_0x00010c1124a0();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 108cc3d14; end: 108cc3e0f; -[SCPreviewView _needToShowSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108cc3d14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_11277a394;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c299be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar4 = param_1 + lVar8;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c233600();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) == 0) {
      uVar4 = param_1 + lVar8;
      _objc_loadWeakRetained();
      uVar5 = uVar4;
      func_0x00010c07e920();
      if ((uVar5 & 1) == 0) {
        param_1 = param_1 + lVar8;
        _objc_loadWeakRetained(param_1);
        lVar1 = param_1;
        func_0x00010c14bf20();
        uVar7 = (uint)lVar1 ^ 1;
        _objc_release(param_1);
      }
      else {
        uVar7 = 0;
      }
      _objc_release(uVar4);
      return uVar7;
    }
  }
  return 1;
}



/* Entry: 108cc3e10; end: 108cc3edb; -[SCPreviewView _needToShowStoryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108cc3e10(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  uVar1 = param_1;
  func_0x00010be62660();
  if ((uVar1 & 1) == 0) {
    lVar7 = (long)_DAT_11277a394;
    uVar1 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c070a20();
    if ((uVar2 & 1) != 0) {
      uVar6 = 0;
LAB_108cc3e58:
      _objc_release(uVar1);
      return uVar6;
    }
    uVar2 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c078580();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      lVar4 = param_1 + lVar7;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c243400();
      _objc_release(lVar4);
      if (lVar5 != 0x1d) {
        uVar1 = param_1 + lVar7;
        _objc_loadWeakRetained(uVar1);
        uVar2 = uVar1;
        func_0x00010c07eb40();
        uVar6 = (uint)uVar2 ^ 1;
        goto LAB_108cc3e58;
      }
    }
  }
  return 0;
}



/* Entry: 108cc3edc; end: 108cc40c7; -[SCPreviewView _needToShowSpotlightButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cc3edc(double param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(param_2 + (long)_DAT_11277a3b0);
  func_0x000107c2aa44(uVar1,*(undefined8 *)(param_2 + (long)_DAT_11277a3b4));
  if ((int)uVar1 != 0) {
    lVar9 = (long)_DAT_11277a394;
    uVar2 = param_2 + lVar9;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c23a220();
    _objc_release(uVar2);
    if (((uVar3 & 1) != 0) || (uVar2 = param_2, func_0x00010bebb100(), (uVar2 & 1) != 0)) {
      return true;
    }
    uVar2 = param_2 + lVar9;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c07e920();
    if ((uVar3 & 1) != 0) {
      lVar4 = param_2 + lVar9;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c0c6c20();
      if (lVar5 == 1) {
        lVar5 = param_2 + lVar9;
        _objc_loadWeakRetained();
        lVar10 = lVar5;
        func_0x00010c070a20();
        if ((int)lVar10 == 0) {
          lVar10 = (long)_DAT_11277a3dc;
          uVar6 = *(undefined8 *)(param_2 + lVar10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar6;
          func_0x00010c2343a0();
          _objc_release(uVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(uVar2);
          if ((int)uVar1 == 0) {
            return false;
          }
          lVar4 = param_2 + lVar9;
          _objc_loadWeakRetained(lVar4);
          lVar5 = lVar4;
          func_0x00010c29ae80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c299d80();
          if (param_1 <= 0.0) {
            _objc_release(lVar5);
            _objc_release(lVar4);
            return true;
          }
          lVar9 = param_2 + lVar9;
          _objc_loadWeakRetained(lVar9);
          lVar7 = lVar9;
          func_0x00010c29ae80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c299d80();
          lVar8 = *(long *)(param_2 + lVar10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar8;
          func_0x00010c111d00();
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar9);
          _objc_release(lVar5);
          _objc_release(lVar4);
          return (double)lVar10 < param_1;
        }
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
    }
    _objc_release(uVar2);
  }
  return false;
}



/* Entry: 108cc40c8; end: 108cc41ef; -[SCPreviewView _needToShowShareButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108cc40c8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_11277a394;
  uVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  uVar7 = uVar1;
  func_0x00010c070a20();
  if ((uVar7 & 1) == 0) {
    lVar2 = param_1 + lVar8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c078580();
    if ((int)lVar3 == 0) {
      lVar3 = param_1 + lVar8;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c299be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uVar1);
      if (lVar5 != 0) {
        return 0;
      }
      uVar1 = param_1 + lVar8;
      _objc_loadWeakRetained();
      uVar7 = uVar1;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c233600();
      _objc_release(uVar7);
      _objc_release(uVar1);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      uVar1 = param_1 + lVar8;
      _objc_loadWeakRetained(uVar1);
      uVar7 = uVar1;
      func_0x00010c07e920();
      goto LAB_108cc4120;
    }
    _objc_release(lVar2);
  }
  uVar7 = 0;
LAB_108cc4120:
  _objc_release(uVar1);
  return uVar7;
}



/* Entry: 108cc41f0; end: 108cc42a3; -[SCPreviewView _showSpotlightButtonSuggestedByLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108cc41f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277a394;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c083340();
  if ((int)lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = param_1 + lVar5;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c07de40();
    if ((uVar3 & 1) == 0) {
      param_1 = param_1 + lVar5;
      _objc_loadWeakRetained(param_1);
      lVar5 = param_1;
      func_0x00010c09a760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c0971e0();
      _objc_release(lVar5);
      _objc_release(param_1);
    }
    else {
      lVar4 = 0;
    }
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 108cc42a4; end: 108cc43e3; -[SCPreviewView _resolveSpotlightStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108cc42a4(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_11277a394;
  uVar2 = param_1 + lVar10;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c078260();
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c242400();
    if (lVar5 == 8) {
      _objc_release(lVar4);
      goto LAB_108cc42f8;
    }
    uVar3 = param_1 + lVar10;
    _objc_loadWeakRetained();
    uVar6 = uVar3;
    func_0x00010c07e920();
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_release(uVar2);
    if ((uVar6 & 1) == 0) {
      lVar10 = (long)_DAT_11277a3b0;
      uVar7 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bf1f440(uVar7,param_2,&PTR____CFConstantStringClassReference_110ef1678,0,0);
      iVar9 = (int)uVar7;
      uVar7 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bf1f440(uVar7,param_2,&PTR____CFConstantStringClassReference_110ef1698,0,0);
      uVar1 = (uint)uVar7 ^ 1;
      goto LAB_108cc434c;
    }
  }
  else {
LAB_108cc42f8:
    _objc_release(uVar2);
  }
  uVar2 = param_1 + lVar10;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c23a220();
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1;
    func_0x00010bebb100();
    iVar9 = (int)lVar4;
  }
  else {
    iVar9 = 1;
  }
  _objc_release(uVar2);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c24ae40();
  uVar1 = (uint)lVar10;
  _objc_release(param_1);
LAB_108cc434c:
  uVar8 = 0x100;
  if (iVar9 == 0) {
    uVar8 = 0;
  }
  return uVar8 | uVar1;
}



/* Entry: 108cc43e4; end: 108cc454b; -[SCPreviewView setupSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc43e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_11277a424;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar1 = PTR_PTR_1126dba18;
    _objc_alloc();
    func_0x00010c15b720(param_1);
    func_0x00010c013de0();
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar4);
    func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_1 + lVar8));
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c160fc0(uVar4,param_2,&PTR____CFConstantStringClassReference_110eafed8);
    func_0x000108edee88();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar8),param_2,uVar4);
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11277a394;
    lVar2 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c123d20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = param_1 + lVar6;
      _objc_loadWeakRetained();
      lVar3 = lVar6;
      func_0x00010bfbbbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      _objc_release(lVar2);
      if (lVar3 == 0) goto LAB_108cc44f8;
    }
    else {
      _objc_release();
      _objc_release(lVar2);
    }
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar8),param_2,0);
  }
LAB_108cc44f8:
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277a3f0);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277a3fc);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f80(uVar5,param_2,uVar7,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108cc454c; end: 108cc45d3; -[SCPreviewView _removeNGSBottomButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc454c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a424;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277a414;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a44c);
  *(undefined8 *)(param_1 + _DAT_11277a44c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a418);
  *(undefined8 *)(param_1 + _DAT_11277a418) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a470);
  *(undefined8 *)(param_1 + _DAT_11277a470) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc45d4; end: 108cc4617; -[SCPreviewView removeSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc45d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a424;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108cc4618; end: 108cc4697; -[SCPreviewView setSendButtonIsInactive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc4618(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126dba10;
  uVar4 = *(ulong *)(param_1 + _DAT_11277a424);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    func_0x00010c1b1d40(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc4698; end: 108cc471b; -[SCPreviewView _removeStoryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc4698(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010c235440();
  if ((int)lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_11277a414);
    uVar1 = uVar3;
    func_0x00010bf254a0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c174850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar3,PTR_s_setButtonConfig__11263ac30,uVar1 & 0xfffffffffffffff7);
    return;
  }
  lVar4 = (long)_DAT_11277a418;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_11277a400));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108cc471c; end: 108cc479f; -[SCPreviewView _removeSpotlightButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc471c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010c235440();
  if ((int)lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_11277a414);
    uVar1 = uVar3;
    func_0x00010bf254a0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c174850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar3,PTR_s_setButtonConfig__11263ac30,uVar1 & 0xffffffffffffffdf);
    return;
  }
  lVar4 = (long)_DAT_11277a470;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_11277a400));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108cc47a0; end: 108cc485b; -[SCPreviewView actionButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc47a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_1;
  func_0x00010c1105c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c14c720(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_11277a404));
  func_0x00010c14c720(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_11277a408));
  func_0x00010c14c720(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_11277a3fc));
  func_0x00010c14c720(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_11277a418));
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108cc485c; end: 108cc4987; -[SCPreviewView previewButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc485c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  func_0x00010c14c720(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277a424));
  lVar2 = param_1 + _DAT_11277a38c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c1124a0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    func_0x00010c14c720(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277a428));
  }
  lVar2 = param_1;
  func_0x00010c235440();
  if ((int)lVar2 != 0) {
    func_0x00010c14c720(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277a414));
  }
  func_0x00010c14c720(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277a450));
  lVar2 = param_1 + _DAT_11277a430;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c14c720(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c14c720(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277a468));
  func_0x00010c14c720(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277a46c));
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108cc4988; end: 108cc49f7; -[SCPreviewView setPreviewButtonsHidden:] */

void FUN_108cc4988(undefined8 param_1)

{
  func_0x00010c1105c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cc49f8; end: 108cc4a03;  */

void FUN_108cc49f8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setHidden__1126479f8,*(undefined1 *)(param_1 + 0x20));
  return;
}


