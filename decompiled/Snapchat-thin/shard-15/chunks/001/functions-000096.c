/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b85de70; end: 10b85df17; -[SIGTextField _pillScrollViewWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b85de70(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  
  func_0x00010becb700();
  lVar2 = (long)_DAT_112794df8;
  func_0x00010c0699c0(*(undefined8 *)(param_4 + lVar2));
  dVar3 = param_1;
  func_0x00010be3c200(param_4);
  if (param_3 < param_1 + dVar3) {
    lVar1 = param_4;
    func_0x00010c071280();
    if ((int)lVar1 == 0) {
      dVar3 = param_3 - dVar3;
      if (dVar3 <= 10.0) {
        dVar3 = 10.0;
      }
      uVar4 = NEON_fminnm(param_1,dVar3);
      func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar2));
      param_1 = (double)NEON_fminnm(uVar4,param_3);
    }
    else {
      param_1 = 0.0;
      if (dVar3 < param_3) {
        param_1 = param_3 - dVar3;
      }
    }
  }
  return param_1;
}



/* Entry: 10b85df18; end: 10b85df8f; -[SIGTextField _pillScrollViewFrame] */

double FUN_10b85df18(double param_1,undefined8 param_2,double param_3,long param_4)

{
  double dVar1;
  
  func_0x00010be73d40();
  dVar1 = param_1;
  func_0x00010becb700(param_4);
  func_0x00010bf8d060();
  if (param_4 != 0) {
    dVar1 = (dVar1 + param_3) - param_1;
  }
  return dVar1;
}



/* Entry: 10b85df90; end: 10b85e01b; -[SIGTextField _textFrame] */

double FUN_10b85df90(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010be73d40();
  dVar1 = 0.0;
  dVar2 = 4.0;
  if (param_1 <= 0.0) {
    dVar2 = 0.0;
  }
  func_0x00010becb700(param_2);
  func_0x00010bf8d060();
  dVar2 = dVar2 + param_1 + dVar1;
  if (param_2 != 0) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 10b85e01c; end: 10b85e063; -[SIGTextField rightViewModeShouldUpdateTo:] */

void FUN_10b85e01c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c140e40();
  if (lVar1 == param_3) {
    return;
  }
  func_0x00010c1ee2c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b85e064; end: 10b85e0a3; -[SIGTextField setDesignVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85e064(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112794df0) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112794df0) = param_3;
  func_0x00010bdce020();
                    /* WARNING: Could not recover jumptable at 0x00010beda950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLeadingLabelStyle_1125943f8);
  return;
}



/* Entry: 10b85e0a4; end: 10b85e10f; -[SIGTextField setNormalTextBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85e0a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112794e24;
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    func_0x00010be86b80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b85e110; end: 10b85e19f; -[SIGTextField setLayoutMargins:] */

void FUN_10b85e110(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  func_0x00010c08cec0();
  bVar1 = false;
  if ((param_2 == dVar4) && (bVar1 = false, !NAN(param_1) && !NAN(dVar3))) {
    bVar1 = param_1 == dVar3;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_4) && !NAN(dVar6))) {
    bVar2 = param_4 == dVar6;
  }
  bVar1 = false;
  if ((bVar2) && (bVar1 = false, !NAN(param_3) && !NAN(dVar5))) {
    bVar1 = param_3 == dVar5;
  }
  if (!bVar1) {
    puStack_48 = PTR_PTR_11270b588;
    uStack_50 = param_5;
    _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_setLayoutMargins__11264c108
                       );
    func_0x00010c23d620(param_5);
  }
  return;
}



/* Entry: 10b85e1a0; end: 10b85e243; -[SIGTextField setBounds:] */

void FUN_10b85e1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_5;
  uVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010bf20c00();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar2,uVar3,uVar4,uVar5);
  if ((uVar1 & 1) == 0) {
    puStack_48 = PTR_PTR_11270b588;
    uStack_50 = param_5;
    _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_setBounds__11263a898);
    func_0x00010be86b80(param_5);
  }
  return;
}



/* Entry: 10b85e244; end: 10b85e38f; -[SIGTextField setFrame:] */

void FUN_10b85e244(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_5;
  uVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010bfb68e0();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar2,uVar3,uVar4,uVar5);
  if (((uVar1 & 1) == 0) &&
     (_CGRectEqualToRect(param_1,param_2,param_3,param_4,*(undefined8 *)PTR__CGRectZero_110347608,
                         *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                         *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                         *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18)), (uVar1 & 1) == 0)) {
    puStack_48 = PTR_PTR_11270b588;
    uStack_50 = param_5;
    _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_setFrame__112645658);
    if (((param_1 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff ||
         (param_1 & 0x7fffffffffffffff) == 0) &&
       ((((param_2 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff ||
          (param_2 & 0x7fffffffffffffff) == 0 &&
         ((param_3 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff)) &&
        ((param_4 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff)))) {
      func_0x00010be86b80(param_5);
      func_0x00010c1cbe20(param_5);
    }
  }
  return;
}



/* Entry: 10b85e390; end: 10b85e46b; -[SIGTextField layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85e390(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bfb68e0();
  if (((((param_1 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff ||
         (param_1 & 0x7fffffffffffffff) == 0) &&
       ((param_2 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff ||
        (param_2 & 0x7fffffffffffffff) == 0)) &&
      ((param_3 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff)) &&
     ((param_4 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff)) {
    puStack_28 = PTR_PTR_11270b588;
    lStack_30 = param_5;
    _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
    func_0x00010be86b80(param_5);
    func_0x00010be73d20(param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112794df8));
  }
  return;
}



/* Entry: 10b85e46c; end: 10b85e4d3; -[SIGTextField sizeThatFits:] */

undefined1  [16] FUN_10b85e46c(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_4;
  func_0x00010bee7400();
  dVar2 = 24.0;
  if ((int)uVar1 == 0) {
    dVar2 = 16.0;
  }
  if (param_1 <= dVar2) {
    param_1 = dVar2;
  }
  func_0x00010c08cec0(param_4);
  func_0x00010c08cec0(param_4);
  auVar3._8_8_ = dVar2 + 38.0 + param_3;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b85e4d4; end: 10b85e75f; -[SIGTextField becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85e4d4(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uStack_60;
  undefined *puStack_58;
  
  iVar1 = (int)&uStack_60;
  uVar2 = param_1;
  func_0x00010c073040();
  if ((uVar2 & 1) == 0) {
    puStack_58 = PTR_PTR_11270b588;
    uStack_60 = param_1;
    _objc_msgSendSuper2(&uStack_60,PTR_s_becomeFirstResponder_1125a3810);
    if (iVar1 != 0) {
      puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192d40(0x3fb999999999999a);
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112794dfc);
      uVar2 = param_1;
      func_0x00010c279540(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13afc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c1a1180(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar2);
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112794e00);
      uVar2 = param_1;
      func_0x00010c279540(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13afc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c216920(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar2);
      func_0x00010c16d4c0(puVar3);
      uVar2 = param_1;
      func_0x00010bee7400();
      if ((uVar2 & 1) == 0) {
        lVar6 = (long)_DAT_112794e40;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
        func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c192d40(0x3fb999999999999a);
        uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112794e04);
        uVar2 = param_1;
        func_0x00010c279540(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13afc0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        func_0x00010c1a1180(puVar4);
        _objc_release(uVar5);
        _objc_release(uVar2);
        uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112794e08);
        uVar2 = param_1;
        func_0x00010c279540(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13afc0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        func_0x00010c216920(puVar4);
        _objc_release(uVar5);
        _objc_release(uVar2);
        lVar6 = (long)_DAT_112794e40;
        func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar6));
        _objc_release(puVar4);
      }
      func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar6));
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 10b85e760; end: 10b85ea4b; -[SIGTextField resignFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10b85e760(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uStack_60;
  undefined *puStack_58;
  
  uVar1 = 0;
  puStack_58 = PTR_PTR_11270b588;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_resignFirstResponder_11262c258);
  uVar2 = param_1;
  func_0x00010bee7400();
  uVar6 = (uint)uVar2 | (uint)uVar1;
  if (((uint)uVar2 == 0) || ((uVar1 & 1) == 0)) goto LAB_10b85ea2c;
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_10b85e804:
    puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fb999999999999a);
    uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112794dfc);
    uVar1 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13afc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c216920(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar1);
    uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112794e00);
    uVar1 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13afc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1a1180(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar1);
    func_0x00010c16d4c0(puVar4);
    uVar1 = param_1;
    func_0x00010bee7400();
    if ((uVar1 & 1) == 0) {
      lVar8 = (long)_DAT_112794e40;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192d40(0x3fb999999999999a);
      uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112794e04);
      uVar1 = param_1;
      func_0x00010c279540(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13afc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c216920(puVar5);
      _objc_release(uVar7);
      _objc_release(uVar1);
      uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112794e08);
      uVar1 = param_1;
      func_0x00010c279540(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13afc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c1a1180(puVar5);
      _objc_release(uVar7);
      _objc_release(uVar1);
      lVar8 = (long)_DAT_112794e40;
      func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar8));
      _objc_release(puVar5);
    }
    func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar4);
  }
  else {
    uVar2 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) goto LAB_10b85e804;
  }
  uVar6 = 1;
LAB_10b85ea2c:
  return uVar6 & 1;
}



/* Entry: 10b85ea4c; end: 10b85eac3; -[SIGTextField setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85ea4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setText__1126625f0;
  puStack_38 = PTR_PTR_11270b588;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c28a3c0(*(undefined8 *)(param_1 + _DAT_112794df4));
  _objc_release(param_3);
  return;
}



/* Entry: 10b85eac4; end: 10b85ead7; -[SIGTextField clearButtonRectForBounds:] */

undefined8 FUN_10b85eac4(void)

{
  return *(undefined8 *)PTR__CGRectZero_110347608;
}



/* Entry: 10b85ead8; end: 10b85eb7b; -[SIGTextField leftViewRectForBounds:] */

void FUN_10b85ead8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010bde7ac0();
  uVar1 = param_5;
  func_0x00010be49f60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be64070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,uVar3,uVar4,uVar5,param_1,param_2,param_3,param_4,param_5,
             PTR_s__normalizeRect_forBounds__1125769b8);
  return;
}



/* Entry: 10b85eb7c; end: 10b85ec4b; -[SIGTextField rightViewRectForBounds:] */

void FUN_10b85eb7c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  dVar6 = param_1;
  uVar3 = param_2;
  dVar4 = param_3;
  uVar5 = param_4;
  func_0x00010bde7ac0();
  dVar6 = dVar6 + dVar4;
  uVar1 = param_5;
  func_0x00010be97520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar6 = dVar6 - dVar4;
  uVar2 = param_5;
  func_0x00010be97520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be64070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar6,uVar3,dVar4,uVar5,param_1,param_2,param_3,param_4,param_5,
             PTR_s__normalizeRect_forBounds__1125769b8);
  return;
}



/* Entry: 10b85ec4c; end: 10b85ec4f; -[SIGTextField borderRectForBounds:] */

void FUN_10b85ec4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__borderBounds_112552e40);
  return;
}



/* Entry: 10b85ec50; end: 10b85ecbf; -[SIGTextField placeholderRectForBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85ec50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112794df8);
  func_0x00010c0fbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be743a0(param_1);
  }
  return;
}



/* Entry: 10b85ecc0; end: 10b85ed13; -[SIGTextField textRectForBounds:] */

void FUN_10b85ecc0(undefined8 param_1)

{
  func_0x00010becb620();
                    /* WARNING: Could not recover jumptable at 0x00010be64070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__normalizeRect_forBounds__1125769b8);
  return;
}



/* Entry: 10b85ed14; end: 10b85ed17; -[SIGTextField editingRectForBounds:] */

void FUN_10b85ed14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_textRectForBounds__112678bb8);
  return;
}



/* Entry: 10b85ed18; end: 10b85ed27; -[SIGTextField setClearButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85ed18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794df4),PTR_s_setClearButtonMode__11263cc08);
  return;
}



/* Entry: 10b85ed28; end: 10b85ed37; -[SIGTextField setRightView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85ed28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794df4),PTR_s_setAccessoryView__112635ec0);
  return;
}



/* Entry: 10b85ed38; end: 10b85ee5b; -[SIGTextField setPlaceholder:] */

void FUN_10b85ed38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bee7400();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uStack_58 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c16b680(param_1);
  iVar4 = (int)puVar3;
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10b85ee5c;
  puStack_88 = PTR_PTR_11270b588;
  puStack_90 = puVar1;
  uStack_80 = param_3;
  uStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_90,PTR_s_setAdjustsFontSizeToFitWidth__1126371a8);
  uVar5 = 0;
  if (iVar4 == 0) {
    uVar5 = 0x7fefffffffffffff;
  }
  func_0x00010c1c8240(uVar5,puVar1);
  return;
}



/* Entry: 10b85ee5c; end: 10b85eebb; -[SIGTextField setAdjustsFontSizeToFitWidth:] */

void FUN_10b85ee5c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b588;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setAdjustsFontSizeToFitWidth__1126371a8);
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = 0x7fefffffffffffff;
  }
  func_0x00010c1c8240(uVar1,param_1);
  return;
}



/* Entry: 10b85eebc; end: 10b85eff7; -[SIGTextField deleteBackward] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85eebc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_1;
  func_0x00010c15a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071780();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf193c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c15a1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c24d960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c0e1ce0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar5 == 0) {
      lVar8 = (long)_DAT_112794df8;
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0fbea0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb440(*(undefined8 *)(param_1 + lVar8));
      _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar6);
      return;
    }
  }
  puStack_48 = PTR_PTR_11270b588;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_deleteBackward_11253b4b8);
  return;
}



/* Entry: 10b85eff8; end: 10b85effb; -[SIGTextField textFieldPillScrollView:intrinsicSizeDidChange:] */

void FUN_10b85eff8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b85effc; end: 10b85f03b; -[SIGTextField textFieldPillScrollView:textReceived:] */

void FUN_10b85effc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf179a0(param_1);
  func_0x00010c0670e0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b85f03c; end: 10b85f093; -[SIGTextField textFieldPillScrollView:pillShouldBeDeleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85f03c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112794e44;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c291b80();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b85f094; end: 10b85f097; -[SIGTextField scrollViewDidScroll:] */

void FUN_10b85f094(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b85f098; end: 10b85f10b; -[SIGTextField scrollViewWillBeginDragging:] */

void FUN_10b85f098(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c071280();
  if ((int)uVar1 != 0) {
    func_0x00010bf94800(param_4);
  }
  func_0x00010becb700(param_4);
  func_0x00010c181f80(0,0,0,param_3 + -40.0,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b85f10c; end: 10b85f123; -[SIGTextField scrollViewDidEndDragging:willDecelerate:] */

void FUN_10b85f10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_3,
             PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 10b85f124; end: 10b85f2fb; -[SIGTextField traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85f124(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_11270b588;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_traitCollectionDidChange__11267bf88,param_3);
  func_0x00010bdc0fe0(*(undefined8 *)(param_1 + _DAT_112794e24));
  lVar4 = (long)_DAT_112794e40;
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4));
  lVar1 = param_1;
  func_0x00010bee7400();
  if ((int)lVar1 == 0) goto LAB_10b85f2d8;
  lVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd64c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf98a80();
    if ((int)lVar1 != 0) {
      func_0x00010bdc0fe0(*(undefined8 *)(param_1 + _DAT_112794e10));
      func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar4));
      lVar2 = param_1;
      func_0x00010c071800();
      lVar1 = 0x40;
      if ((int)lVar2 == 0) {
        lVar1 = 0x24;
      }
      func_0x00010bdc0fe0(*(undefined8 *)(param_1 + *(int *)(&DAT_112794df0 + lVar1)));
      func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4));
    }
    lVar1 = param_1;
    func_0x00010c073040();
    if ((int)lVar1 == 0) {
      piVar6 = (int *)&DAT_112794dfc;
      piVar5 = (int *)&DAT_112794e04;
    }
    else {
      lVar1 = param_1;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      piVar6 = (int *)&DAT_112794e00;
      piVar5 = (int *)&DAT_112794e08;
      if (lVar1 != 0) {
        lVar2 = param_1;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0720c0();
        _objc_release(lVar2);
        _objc_release(lVar1);
        if ((int)lVar3 == 0) goto LAB_10b85f2d0;
      }
    }
    func_0x00010bdc0fe0(*(undefined8 *)(param_1 + *piVar6));
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4));
    func_0x00010bdc0fe0(*(undefined8 *)(param_1 + *piVar5));
    func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar4));
  }
LAB_10b85f2d0:
  func_0x00010c1cbe20(param_1);
LAB_10b85f2d8:
  _objc_release(param_3);
  return;
}



/* Entry: 10b85f2fc; end: 10b85f30b; -[SIGTextField normalTextBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85f2fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e24);
}



/* Entry: 10b85f30c; end: 10b85f31b; -[SIGTextField activeTextBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85f30c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e28);
}



/* Entry: 10b85f31c; end: 10b85f327; -[SIGTextField setActiveTextBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85f31c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b85f328; end: 10b85f337; -[SIGTextField errorEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b85f328(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794dec);
}



/* Entry: 10b85f338; end: 10b85f347; -[SIGTextField setErrorEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85f338(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794dec) = param_3;
  return;
}



/* Entry: 10b85f348; end: 10b85f357; -[SIGTextField designVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85f348(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794df0);
}



/* Entry: 10b85f358; end: 10b85f377; -[SIGTextField pillsDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85f358(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794e44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b85f378; end: 10b85f38b; -[SIGTextField setPillsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85f378(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794e44,param_3);
  return;
}



/* Entry: 10b85f38c; end: 10b85f4f7; -[SIGTextField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85f38c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112794e44);
  _objc_storeStrong(param_1 + _DAT_112794e28,0);
  _objc_storeStrong(param_1 + _DAT_112794e24,0);
  _objc_storeStrong(param_1 + _DAT_112794df8,0);
  _objc_storeStrong(param_1 + _DAT_112794df4,0);
  _objc_storeStrong(param_1 + _DAT_112794e3c,0);
  _objc_storeStrong(param_1 + _DAT_112794e20,0);
  _objc_storeStrong(param_1 + _DAT_112794e38,0);
  _objc_storeStrong(param_1 + _DAT_112794e1c,0);
  _objc_storeStrong(param_1 + _DAT_112794e18,0);
  _objc_storeStrong(param_1 + _DAT_112794e10,0);
  _objc_storeStrong(param_1 + _DAT_112794e0c,0);
  _objc_storeStrong(param_1 + _DAT_112794e34,0);
  _objc_storeStrong(param_1 + _DAT_112794e08,0);
  _objc_storeStrong(param_1 + _DAT_112794e04,0);
  _objc_storeStrong(param_1 + _DAT_112794e30,0);
  _objc_storeStrong(param_1 + _DAT_112794e14,0);
  _objc_storeStrong(param_1 + _DAT_112794e2c,0);
  _objc_storeStrong(param_1 + _DAT_112794dfc,0);
  _objc_storeStrong(param_1 + _DAT_112794e00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794e40,0);
  return;
}



/* Entry: 10b85f4f8; end: 10b85f68f; -[SIGTextFieldAnimatedBackgroundLayer actionForKey:] */

void FUN_10b85f4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  plVar5 = &lStack_60;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf098c0();
  if (((ulong)puVar1 & 1) == 0) {
    puStack_48 = PTR_PTR_11270b590;
    plVar5 = &lStack_50;
    lStack_50 = param_1;
  }
  else {
    uVar2 = param_3;
    func_0x00010c071ae0();
    if ((int)uVar2 != 0) {
      lVar3 = param_1;
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        func_0x00010c296f60(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar4);
        param_1 = lVar4;
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      plVar5 = (long *)PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfee1e0(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010c192d40(plVar5);
      func_0x00010c1a1180(plVar5);
      puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
      func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216080(plVar5);
      _objc_release(puVar1);
      _objc_release(param_1);
      goto LAB_10b85f66c;
    }
    puStack_58 = PTR_PTR_11270b590;
    lStack_60 = param_1;
  }
  _objc_msgSendSuper2(plVar5,PTR_s_actionForKey__112599298,param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_10b85f66c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 10b85f690; end: 10b85f70b; +[SIGTextFieldAnimatedBackgroundLayer needsDisplayForKey:] */

undefined1 * FUN_10b85f690(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_11270b598;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_needsDisplayForKey__112548738,param_3);
  }
  else {
    puVar2 = (undefined8 *)0x1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10b85f70c; end: 10b85f7f3; -[SIGTextFieldRightView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b85f70c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b5a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf3ab20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf20c00(puVar1);
    func_0x00010c19f0e0(puVar4);
    func_0x00010c182220(puVar4);
    func_0x00010c1a7f60(puVar4);
    func_0x00010befbb60(puVar1);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794e48);
    *(undefined **)((long)puVar1 + (long)_DAT_112794e48) = puVar4;
    _objc_release(uVar5);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b85f7f4; end: 10b85f83b; -[SIGTextFieldRightView _impliedRightViewMode] */

long FUN_10b85f7f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf3ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearButtonMode_1125ac478);
  return param_1;
}



/* Entry: 10b85f83c; end: 10b85f83f; -[SIGTextFieldRightView _assertValidOptions] */

void FUN_10b85f83c(void)

{
  return;
}



/* Entry: 10b85f840; end: 10b85f977; -[SIGTextFieldRightView updateStateWithText:] */

/* WARNING: Possible PIC construction at 0x00010b85f948: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85f840(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112794e4c;
  _objc_retain(param_3);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  func_0x00010be37b00(param_1);
  func_0x00010c140e60(lVar6);
  _objc_release(lVar6);
  uVar3 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  lVar5 = (long)_DAT_112794e50;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar2);
  lVar6 = *(long *)(param_1 + _DAT_112794e54);
  if (lVar6 < 2) {
    if (lVar6 == 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112794e48);
      uVar4 = 1;
      goto code_r0x00010c1a7f60;
    }
    if (lVar6 != 1) goto LAB_10b85f90c;
    lVar6 = *(long *)(param_1 + lVar5);
    func_0x00010c08fa60(lVar6);
    bVar1 = lVar6 == 0;
  }
  else {
    if (lVar6 != 2) {
      if (lVar6 == 3) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_112794e48);
        uVar4 = 0;
        goto code_r0x00010c1a7f60;
      }
LAB_10b85f90c:
      uVar2 = *(undefined8 *)(param_1 + _DAT_112794e48);
      func_0x00010c074c20(uVar2);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112794e58);
      uVar4 = (uint)uVar2 ^ 1;
      goto code_r0x00010c1a7f60;
    }
    lVar6 = *(long *)(param_1 + lVar5);
    func_0x00010c08fa60(lVar6);
    bVar1 = lVar6 != 0;
  }
  uVar4 = (uint)bVar1;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112794e48);
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setHidden__1126479f8,uVar4);
  return;
}



/* Entry: 10b85f978; end: 10b85fa2f; -[SIGTextFieldRightView setAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85f978(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bdcf740(param_1);
  lVar3 = (long)_DAT_112794e58;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if ((uVar1 != param_3) && (func_0x00010c071ae0(uVar1,param_2,param_3), (uVar1 & 1) == 0)) {
    if (*(long *)(param_1 + lVar3) != 0) {
      func_0x00010c12c960();
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c182220(param_3,param_2,1);
    func_0x00010bf20c00(param_1);
    func_0x00010c19f0e0(param_3);
    func_0x00010befbb60(param_1,param_2,param_3);
    func_0x00010c28a3c0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112794e50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b85fa30; end: 10b85fa6f; -[SIGTextFieldRightView setClearButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85fa30(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bdcf740();
  *(undefined8 *)(param_1 + _DAT_112794e54) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c28a3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateStateWithText__112680318,*(undefined8 *)(param_1 + _DAT_112794e50))
  ;
  return;
}



/* Entry: 10b85fa70; end: 10b85fa7f; -[SIGTextFieldRightView clearButtonMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85fa70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e54);
}



/* Entry: 10b85fa80; end: 10b85fa8f; -[SIGTextFieldRightView clearButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85fa80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e48);
}



/* Entry: 10b85fa90; end: 10b85fa9f; -[SIGTextFieldRightView accessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85fa90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e58);
}



/* Entry: 10b85faa0; end: 10b85fabf; -[SIGTextFieldRightView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85faa0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794e4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b85fac0; end: 10b85fad3; -[SIGTextFieldRightView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85fac0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794e4c,param_3);
  return;
}



/* Entry: 10b85fad4; end: 10b85fb2f; -[SIGTextFieldRightView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85fad4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112794e4c);
  _objc_storeStrong(param_1 + _DAT_112794e58,0);
  _objc_storeStrong(param_1 + _DAT_112794e48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794e50,0);
  return;
}



/* Entry: 10b85fb30; end: 10b85fb33;  */

void FUN_10b85fb30(void)

{
  return;
}



/* Entry: 10b85fb34; end: 10b85fbdb; -[SIGTextFieldPillImplementation initWithText:associatedValue:] */

undefined1 *
FUN_10b85fb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b5a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b85fbdc; end: 10b85fbe3; -[SIGTextFieldPillImplementation hash] */

void FUN_10b85fbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b85fbe4; end: 10b85fd33; -[SIGTextFieldPillImplementation isEqual:] */

long FUN_10b85fbe4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1810;
  _objc_opt_class(PTR_PTR_1126e1810);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_PTR_1126e1810;
  if ((uVar2 & 1) == 0) {
    lVar6 = 0;
    goto LAB_10b85fd10;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar2 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  uVar5 = *(ulong *)(param_1 + 8);
  uVar3 = uVar2;
  func_0x00010c0fbe40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c071ae0();
  if ((int)uVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar6 = lVar7;
    if (lVar7 == 0) {
      uVar5 = uVar2;
      func_0x00010bf0bec0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        goto LAB_10b85fcb0;
      }
      lVar6 = 1;
    }
    else {
LAB_10b85fcb0:
      uVar4 = uVar2;
      func_0x00010bf0bec0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(lVar6);
      _objc_release(uVar4);
      if (lVar7 != 0) goto LAB_10b85fd00;
    }
    _objc_release(uVar5);
  }
LAB_10b85fd00:
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_10b85fd10:
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 10b85fd34; end: 10b85fd57; -[SIGTextFieldPillImplementation copyWithZone:] */

undefined8 FUN_10b85fd34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b85fd58; end: 10b85fd5f; -[SIGTextFieldPillImplementation pillText] */

undefined8 FUN_10b85fd58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b85fd60; end: 10b85fd67; -[SIGTextFieldPillImplementation associatedValue] */

undefined8 FUN_10b85fd60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b85fd68; end: 10b85fd97; -[SIGTextFieldPillImplementation .cxx_destruct] */

void FUN_10b85fd68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b85fd98; end: 10b85fe03;  */

void FUN_10b85fd98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1810;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c051260();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b85fe04; end: 10b860063; -[SIGTextFieldPillScrollView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b85fe04(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_11270b5b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794e64) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794e68);
    *(undefined **)((long)puVar1 + (long)_DAT_112794e68) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794e6c);
    *(undefined **)((long)puVar1 + (long)_DAT_112794e6c) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794e70);
    *(undefined **)((long)puVar1 + (long)_DAT_112794e70) = puVar2;
    _objc_release(uVar8);
    puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar4;
    puStack_68 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = puVar4;
    puStack_60 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar2;
    puStack_58 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar3);
    _objc_release(puVar5);
    func_0x00010c209760(0,0x3fe0000000000000,puVar3);
    func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000,puVar3);
    func_0x00010c1bff00(puVar3);
    puVar7 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar7);
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794e74);
    *(undefined **)((long)puVar1 + (long)_DAT_112794e74) = puVar3;
    _objc_release(uVar8);
    func_0x00010c2026e0(puVar1);
    func_0x00010c2025c0(puVar1);
    param_3 = (undefined8 *)0x0;
    func_0x00010c1738c0(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c07d660();
  if ((int)puVar1 == 0) {
    puVar1 = param_3;
    func_0x00010c0fbcc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb440(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c1fb440(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 10b860064; end: 10b8600db; -[SIGTextFieldPillScrollView _pillViewTapped:] */

void FUN_10b860064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07d660();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0fbcc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb440(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c1fb440(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8600dc; end: 10b860327; -[SIGTextFieldPillScrollView _layoutPillViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8600dc(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar10;
  long unaff_x24;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double unaff_d11;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_5;
  func_0x00010bf8d060();
  lVar1 = *(long *)(param_5 + _DAT_112794e70);
  if (lVar10 == 1) {
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dfe00();
    _objc_retainAutoreleasedReturnValue();
  }
  dVar12 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_6,&uStack_150,auStack_108,0x10);
  if (lVar2 == 0) {
    dVar14 = 0.0;
  }
  else {
    unaff_x24 = *plStack_140;
    dVar14 = 0.0;
    do {
      lVar11 = 0;
      dVar13 = param_4;
      do {
        param_4 = param_2;
        if (*plStack_140 != unaff_x24) {
          _objc_enumerationMutation(lVar1);
          param_4 = param_2;
        }
        unaff_x23 = *(undefined8 *)(lStack_148 + lVar11 * 8);
        func_0x00010c0699c0(unaff_x23);
        unaff_d11 = dVar14 + 8.0;
        if (lVar10 != 1) {
          unaff_d11 = dVar14;
        }
        func_0x00010bf20c00(param_5);
        param_2 = (dVar13 - param_4) * 0.5;
        param_3 = dVar12;
        func_0x00010c19f0e0(unaff_d11,unaff_x23);
        dVar12 = dVar12 + 8.0;
        dVar14 = dVar14 + dVar12;
        lVar11 = lVar11 + 1;
        dVar13 = param_4;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_6,&uStack_150,auStack_108,0x10);
    } while (lVar2 != 0);
    unaff_x22 = 0;
  }
  _objc_release(lVar1);
  func_0x00010bf4d5e0(param_5);
  dVar13 = dVar12;
  func_0x00010bf20c00(param_5);
  if ((dVar12 != dVar14) || (param_2 != param_4)) {
    param_2 = dVar14;
    func_0x00010c1827c0(dVar14,param_4,param_5);
    func_0x00010bf4cdc0(param_5);
    func_0x00010bf20c00(param_5);
    dVar14 = (double)NEON_fminnm(param_2,dVar14 - param_3);
    func_0x00010bf20c00(param_5);
    dVar13 = dVar14;
    func_0x00010c1822e0(dVar14,param_4,param_5);
    lVar10 = param_5 + _DAT_112794e78;
    _objc_loadWeakRetained();
    func_0x00010c0699c0(param_5);
    func_0x00010c26bd60(lVar10,param_6,param_5);
    _objc_release(lVar10);
    func_0x00010c069fa0(param_5);
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    pcStack_158 = FUN_10b860328;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    dStack_1b0 = unaff_d11;
    dStack_1a8 = dVar12;
    dStack_1a0 = param_2;
    dStack_198 = dVar14;
    lStack_190 = unaff_x24;
    uStack_188 = unaff_x23;
    uStack_180 = unaff_x22;
    lStack_178 = lVar10;
    lStack_170 = lVar1;
    lStack_168 = param_5;
    puStack_160 = &stack0xfffffffffffffff0;
    func_0x00010bf4cdc0();
    dVar12 = dVar13;
    func_0x00010bf4d5e0(lVar2);
    dVar14 = dVar12;
    func_0x00010bf4cdc0(lVar2);
    func_0x00010bf20c00(lVar2);
    dVar15 = 1.0;
    if (dVar13 / 20.0 <= 1.0) {
      dVar15 = dVar13 / 20.0;
    }
    dVar14 = ((dVar12 - dVar14) - param_3) / 20.0;
    dVar12 = 1.0;
    if (dVar14 <= 1.0) {
      dVar12 = dVar14;
    }
    lVar10 = (long)_DAT_112794e74;
    func_0x00010bfb68e0(*(undefined8 *)(lVar2 + lVar10));
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar15 * (20.0 / param_3));
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(1.0 - dVar12 * (20.0 / param_3));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_6,1);
    ppuStack_1d8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111861a0;
    ppuStack_1c0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111861b0;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1d0 = puVar3;
    puStack_1c8 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_1d8,4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c1bff00(*(undefined8 *)(lVar2 + lVar10));
    _objc_release(puVar5);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(puVar9);
    lVar10 = (long)_DAT_112794e7c;
    uVar6 = *(ulong *)(puVar3 + lVar10);
    func_0x00010c071ae0(uVar6,param_6,puVar9);
    if ((uVar6 & 1) == 0) {
      lVar1 = (long)_DAT_112794e68;
      if (*(long *)(puVar3 + lVar10) != 0) {
        uVar7 = *(undefined8 *)(puVar3 + lVar1);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c07d660();
        _objc_release(uVar7);
        if ((int)uVar8 != 0) {
          uVar8 = *(undefined8 *)(puVar3 + lVar1);
          func_0x00010c0e00e0(uVar8,param_6,*(undefined8 *)(puVar3 + lVar10));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fadc0();
          _objc_release(uVar8);
        }
      }
      if (puVar9 != (undefined *)0x0) {
        uVar8 = *(undefined8 *)(puVar3 + lVar1);
        func_0x00010c0e00e0(uVar8,param_6,puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fadc0();
        _objc_release(uVar8);
      }
      uVar8 = *(undefined8 *)(puVar3 + lVar1);
      func_0x00010c0e00e0(uVar8,param_6,puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_6,&DAT_10f38e7c0);
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x0) {
        func_0x00010c12d580(uVar8,param_6,puVar3,puVar4);
      }
      else {
        func_0x00010befa220();
      }
      _objc_release(puVar4);
      _objc_retain(puVar9);
      uVar7 = *(undefined8 *)(puVar3 + lVar10);
      *(undefined **)(puVar3 + lVar10) = puVar9;
      _objc_release(uVar7);
      _objc_release(uVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 10b860328; end: 10b8604a7; -[SIGTextFieldPillScrollView _updateFadeMaskLocations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b860328(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf4cdc0();
  dVar10 = param_1;
  func_0x00010bf4d5e0(param_4);
  dVar11 = dVar10;
  func_0x00010bf4cdc0(param_4);
  func_0x00010bf20c00(param_4);
  dVar12 = 1.0;
  if (param_1 / 20.0 <= 1.0) {
    dVar12 = param_1 / 20.0;
  }
  dVar11 = ((dVar10 - dVar11) - param_3) / 20.0;
  dVar10 = 1.0;
  if (dVar11 <= 1.0) {
    dVar10 = dVar11;
  }
  lVar8 = (long)_DAT_112794e74;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar8));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar12 * (20.0 / param_3));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(1.0 - dVar10 * (20.0 / param_3));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_5,1);
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111861a0;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111861b0;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar1;
  puStack_78 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&ppuStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c1bff00(*(undefined8 *)(param_4 + lVar8));
  _objc_release(puVar3);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  lVar8 = (long)_DAT_112794e7c;
  uVar4 = *(ulong *)(puVar1 + lVar8);
  func_0x00010c071ae0(uVar4,param_5,puVar7);
  if ((uVar4 & 1) == 0) {
    lVar9 = (long)_DAT_112794e68;
    if (*(long *)(puVar1 + lVar8) != 0) {
      uVar5 = *(undefined8 *)(puVar1 + lVar9);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c07d660();
      _objc_release(uVar5);
      if ((int)uVar6 != 0) {
        uVar6 = *(undefined8 *)(puVar1 + lVar9);
        func_0x00010c0e00e0(uVar6,param_5,*(undefined8 *)(puVar1 + lVar8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fadc0();
        _objc_release(uVar6);
      }
    }
    if (puVar7 != (undefined *)0x0) {
      uVar6 = *(undefined8 *)(puVar1 + lVar9);
      func_0x00010c0e00e0(uVar6,param_5,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fadc0();
      _objc_release(uVar6);
    }
    uVar6 = *(undefined8 *)(puVar1 + lVar9);
    func_0x00010c0e00e0(uVar6,param_5,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,&DAT_10f38e7c0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      func_0x00010c12d580(uVar6,param_5,puVar1,puVar2);
    }
    else {
      func_0x00010befa220();
    }
    _objc_release(puVar2);
    _objc_retain(puVar7);
    uVar5 = *(undefined8 *)(puVar1 + lVar8);
    *(undefined **)(puVar1 + lVar8) = puVar7;
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10b8604a8; end: 10b860607; -[SIGTextFieldPillScrollView setSelectedPill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8604a8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112794e7c;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    lVar6 = (long)_DAT_112794e68;
    if (*(long *)(param_1 + lVar5) != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c07d660();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(param_1 + lVar5));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fadc0();
        _objc_release(uVar3);
      }
    }
    if (param_3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0e00e0(uVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fadc0();
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f38e7c0);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      func_0x00010c12d580(uVar3,param_2,param_1,puVar4);
    }
    else {
      func_0x00010befa220();
    }
    _objc_release(puVar4);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b860608; end: 10b8606c3; -[SIGTextFieldPillScrollView addPill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b860608(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  double dVar14;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_258 [128];
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_c0;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_4 + _DAT_112794e6c);
  puVar9 = param_6;
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    unaff_x21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = param_6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&puStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = unaff_x21;
    func_0x00010befa8e0(param_4);
    _objc_release(unaff_x21);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10b8606c4;
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  dVar14 = 0.0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puVar6 = &uStack_180;
  puVar10 = puVar9;
  puStack_188 = puVar9;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar11 = *plStack_170;
    do {
      unaff_x22 = PTR_s__pillViewTapped__112548740;
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_170 != lVar11) {
          _objc_enumerationMutation(puStack_188);
        }
        unaff_x23 = *(undefined8 *)(lStack_178 + (long)puVar13 * 8);
        puVar9 = (undefined *)(long)_DAT_112794e6c;
        uVar1 = *(ulong *)(param_6 + (long)puVar9);
        func_0x00010bf4b900(uVar1,param_5,unaff_x23);
        if ((uVar1 & 1) == 0) {
          unaff_x24 = PTR_PTR_1126e1818;
          _objc_alloc();
          func_0x00010c035f60();
          func_0x00010c18c1a0();
          func_0x00010befbd60(unaff_x24,param_5,param_6,unaff_x22,0x40);
          func_0x00010c1d0920(unaff_x24,param_5,param_6);
          func_0x00010befa120(*(undefined8 *)(param_6 + _DAT_112794e70),param_5,unaff_x24);
          func_0x00010befa120(*(undefined8 *)(param_6 + (long)puVar9),param_5,unaff_x23);
          func_0x00010c1d0640(*(undefined8 *)(param_6 + _DAT_112794e68),param_5,unaff_x24,unaff_x23)
          ;
          func_0x00010befbb60(param_6,param_5,unaff_x24);
          _objc_release(unaff_x24);
        }
        puVar13 = puVar13 + 1;
      } while (puVar10 != puVar13);
      puVar6 = &uStack_180;
      puVar10 = puStack_188;
      func_0x00010bf52a60();
      unaff_x21 = (undefined *)0x0;
    } while (puVar10 != (undefined *)0x0);
  }
  func_0x00010be494a0(param_6);
  func_0x00010bf4d5e0(param_6);
  func_0x00010bf20c00(param_6);
  func_0x00010c1822e0(dVar14 - param_3,0,param_6);
  puVar10 = puStack_188;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_2a0;
  pcStack_198 = FUN_10b8608ac;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = unaff_x24;
  uStack_1c8 = unaff_x23;
  puStack_1c0 = unaff_x22;
  puStack_1b8 = unaff_x21;
  puStack_1b0 = param_6;
  puStack_1a8 = puVar9;
  ppuStack_1a0 = &puStack_50;
  if (*(undefined8 **)(puVar10 + _DAT_112794e64) != puVar6) {
    *(undefined8 **)(puVar10 + _DAT_112794e64) = puVar6;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    puVar10 = *(undefined **)(puVar10 + _DAT_112794e70);
    _objc_retain(puVar10);
    puVar9 = puVar10;
    func_0x00010bf52a60(puVar10,param_5,&uStack_2a0,auStack_258,0x10);
    if (puVar9 != (undefined *)0x0) {
      lVar11 = *plStack_290;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_290 != lVar11) {
            _objc_enumerationMutation(puVar10);
          }
          func_0x00010c18c1a0(*(undefined8 *)(lStack_298 + (long)puVar13 * 8),param_5,puVar6);
          puVar13 = puVar13 + 1;
        } while (puVar9 != puVar13);
        puVar9 = puVar10;
        puVar7 = &uStack_2a0;
        func_0x00010bf52a60(puVar10,param_5,&uStack_2a0,auStack_258,0x10);
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release();
    puVar6 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar11 = (long)_DAT_112794e68;
  uVar2 = *(undefined8 *)(puVar10 + lVar11);
  func_0x00010c0e00e0(uVar2,param_5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar10 + lVar11);
  func_0x00010c0e00e0(uVar3,param_5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07d660();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    lVar12 = (long)_DAT_112794e6c;
    uVar1 = *(ulong *)(puVar10 + lVar12);
    func_0x00010bf529e0();
    if (uVar1 < 2) {
      lVar12 = 0;
    }
    else {
      uVar5 = *(ulong *)(puVar10 + lVar12);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      lVar12 = *(long *)(puVar10 + lVar12);
      if ((uVar1 & 1) == 0) {
        lVar8 = lVar12;
        func_0x00010bfecde0(lVar12,param_5,puVar6);
        lVar8 = lVar8 + -1;
      }
      else {
        lVar8 = 1;
      }
      func_0x00010c0dfd40(lVar12,param_5,lVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1fb440(puVar10,param_5,lVar12);
    _objc_release(lVar12);
  }
  func_0x00010c12d3e0(*(undefined8 *)(puVar10 + lVar11),param_5,puVar6);
  func_0x00010c12d360(*(undefined8 *)(puVar10 + _DAT_112794e70),param_5,uVar2);
  func_0x00010c12d360(*(undefined8 *)(puVar10 + _DAT_112794e6c),param_5,puVar6);
  func_0x00010c12c960(uVar2);
  func_0x00010be494a0(puVar10);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10b8606c4; end: 10b8608ab; -[SIGTextFieldPillScrollView addPills:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8606c4(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  long lVar9;
  undefined *unaff_x24;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  dVar12 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar6 = &uStack_140;
  lVar8 = param_6;
  lStack_148 = param_6;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar10 = *plStack_130;
    do {
      unaff_x22 = PTR_s__pillViewTapped__112548740;
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(lStack_148);
        }
        unaff_x23 = *(undefined8 *)(lStack_138 + lVar11 * 8);
        param_6 = (long)_DAT_112794e6c;
        uVar1 = *(ulong *)(param_4 + param_6);
        func_0x00010bf4b900(uVar1,param_5,unaff_x23);
        if ((uVar1 & 1) == 0) {
          unaff_x24 = PTR_PTR_1126e1818;
          _objc_alloc();
          func_0x00010c035f60();
          func_0x00010c18c1a0();
          func_0x00010befbd60(unaff_x24,param_5,param_4,unaff_x22,0x40);
          func_0x00010c1d0920(unaff_x24,param_5,param_4);
          func_0x00010befa120(*(undefined8 *)(param_4 + _DAT_112794e70),param_5,unaff_x24);
          func_0x00010befa120(*(undefined8 *)(param_4 + param_6),param_5,unaff_x23);
          func_0x00010c1d0640(*(undefined8 *)(param_4 + _DAT_112794e68),param_5,unaff_x24,unaff_x23)
          ;
          func_0x00010befbb60(param_4,param_5,unaff_x24);
          _objc_release(unaff_x24);
        }
        lVar11 = lVar11 + 1;
      } while (lVar8 != lVar11);
      puVar6 = &uStack_140;
      lVar8 = lStack_148;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar8 != 0);
  }
  func_0x00010be494a0(param_4);
  func_0x00010bf4d5e0(param_4);
  func_0x00010bf20c00(param_4);
  func_0x00010c1822e0(dVar12 - param_3,0,param_4);
  lVar8 = lStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_260;
  pcStack_158 = FUN_10b8608ac;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = unaff_x24;
  uStack_188 = unaff_x23;
  puStack_180 = unaff_x22;
  uStack_178 = unaff_x21;
  lStack_170 = param_4;
  lStack_168 = param_6;
  puStack_160 = &stack0xfffffffffffffff0;
  if (*(undefined8 **)(lVar8 + _DAT_112794e64) != puVar6) {
    *(undefined8 **)(lVar8 + _DAT_112794e64) = puVar6;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar8 = *(long *)(lVar8 + _DAT_112794e70);
    _objc_retain(lVar8);
    lVar10 = lVar8;
    func_0x00010bf52a60(lVar8,param_5,&uStack_260,auStack_218,0x10);
    if (lVar10 != 0) {
      lVar11 = *plStack_250;
      do {
        lVar9 = 0;
        do {
          if (*plStack_250 != lVar11) {
            _objc_enumerationMutation(lVar8);
          }
          func_0x00010c18c1a0(*(undefined8 *)(lStack_258 + lVar9 * 8),param_5,puVar6);
          lVar9 = lVar9 + 1;
        } while (lVar10 != lVar9);
        lVar10 = lVar8;
        puVar7 = &uStack_260;
        func_0x00010bf52a60(lVar8,param_5,&uStack_260,auStack_218,0x10);
      } while (lVar10 != 0);
    }
    _objc_release();
    puVar6 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar10 = (long)_DAT_112794e68;
  uVar2 = *(undefined8 *)(lVar8 + lVar10);
  func_0x00010c0e00e0(uVar2,param_5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar8 + lVar10);
  func_0x00010c0e00e0(uVar3,param_5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07d660();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    lVar11 = (long)_DAT_112794e6c;
    uVar1 = *(ulong *)(lVar8 + lVar11);
    func_0x00010bf529e0();
    if (uVar1 < 2) {
      lVar11 = 0;
    }
    else {
      uVar5 = *(ulong *)(lVar8 + lVar11);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      lVar11 = *(long *)(lVar8 + lVar11);
      if ((uVar1 & 1) == 0) {
        lVar9 = lVar11;
        func_0x00010bfecde0(lVar11,param_5,puVar6);
        lVar9 = lVar9 + -1;
      }
      else {
        lVar9 = 1;
      }
      func_0x00010c0dfd40(lVar11,param_5,lVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1fb440(lVar8,param_5,lVar11);
    _objc_release(lVar11);
  }
  func_0x00010c12d3e0(*(undefined8 *)(lVar8 + lVar10),param_5,puVar6);
  func_0x00010c12d360(*(undefined8 *)(lVar8 + _DAT_112794e70),param_5,uVar2);
  func_0x00010c12d360(*(undefined8 *)(lVar8 + _DAT_112794e6c),param_5,puVar6);
  func_0x00010c12c960(uVar2);
  func_0x00010be494a0(lVar8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10b8608ac; end: 10b8609c3; -[SIGTextFieldPillScrollView setDesignVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8608ac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(undefined1 **)(param_1 + _DAT_112794e64) != param_3) {
    *(undefined1 **)(param_1 + _DAT_112794e64) = param_3;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    param_1 = *(long *)(param_1 + _DAT_112794e70);
    _objc_retain(param_1);
    lVar9 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar9 != 0) {
      lVar7 = *plStack_100;
      do {
        lVar8 = 0;
        do {
          if (*plStack_100 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010c18c1a0(*(undefined8 *)(lStack_108 + lVar8 * 8),param_2,param_3);
          lVar8 = lVar8 + 1;
        } while (lVar9 != lVar8);
        lVar9 = param_1;
        puVar6 = &uStack_110;
        func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar9 != 0);
    }
    _objc_release();
    param_3 = (undefined1 *)puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar9 = (long)_DAT_112794e68;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d660();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    lVar7 = (long)_DAT_112794e6c;
    uVar4 = *(ulong *)(param_1 + lVar7);
    func_0x00010bf529e0();
    if (uVar4 < 2) {
      lVar7 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + lVar7);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      lVar7 = *(long *)(param_1 + lVar7);
      if ((uVar4 & 1) == 0) {
        lVar8 = lVar7;
        func_0x00010bfecde0(lVar7,param_2,param_3);
        lVar8 = lVar8 + -1;
      }
      else {
        lVar8 = 1;
      }
      func_0x00010c0dfd40(lVar7,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1fb440(param_1,param_2,lVar7);
    _objc_release(lVar7);
  }
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar9),param_2,param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_112794e70),param_2,uVar1);
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_112794e6c),param_2,param_3);
  func_0x00010c12c960(uVar1);
  func_0x00010be494a0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8609c4; end: 10b860b2f; -[SIGTextFieldPillScrollView removePill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8609c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112794e68;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d660();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    lVar8 = (long)_DAT_112794e6c;
    uVar4 = *(ulong *)(param_1 + lVar8);
    func_0x00010bf529e0();
    if (uVar4 < 2) {
      lVar8 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + lVar8);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      lVar8 = *(long *)(param_1 + lVar8);
      if ((uVar4 & 1) == 0) {
        lVar6 = lVar8;
        func_0x00010bfecde0(lVar8,param_2,param_3);
        lVar6 = lVar6 + -1;
      }
      else {
        lVar6 = 1;
      }
      func_0x00010c0dfd40(lVar8,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1fb440(param_1,param_2,lVar8);
    _objc_release(lVar8);
  }
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar7),param_2,param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_112794e70),param_2,uVar1);
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_112794e6c),param_2,param_3);
  func_0x00010c12c960(uVar1);
  func_0x00010be494a0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b860b30; end: 10b860b87; -[SIGTextFieldPillScrollView layoutSubviews] */

void FUN_10b860b30(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b5b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be494a0(param_1);
  func_0x00010be49360(param_1);
  func_0x00010bed7be0(param_1);
  return;
}



/* Entry: 10b860b88; end: 10b860c3b; -[SIGTextFieldPillScrollView _layoutMaskGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b860b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010bf4cdc0(param_4);
  lVar1 = param_4;
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar2 = param_4;
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(param_1,0,param_3,*(undefined8 *)(param_4 + _DAT_112794e74));
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 10b860c3c; end: 10b860c3f; -[SIGTextFieldPillScrollView intrinsicContentSize] */

void FUN_10b860c3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentSize_1125b0f20);
  return;
}



/* Entry: 10b860c40; end: 10b860c87; -[SIGTextFieldPillScrollView setContentOffset:] */

void FUN_10b860c40(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b5b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setContentOffset__11263e2d8);
  func_0x00010bed7be0(param_1);
  return;
}



/* Entry: 10b860c88; end: 10b860d03; -[SIGTextFieldPillScrollView textFieldPillViewShouldBeDeleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b860c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794e78;
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  uVar1 = param_3;
  func_0x00010c0fbcc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26bd80(lVar2,param_2,param_1,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b860d04; end: 10b860d5f; -[SIGTextFieldPillScrollView textFieldPillView:receivedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b860d04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112794e78;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c26bda0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b860d60; end: 10b860e4b; -[SIGTextFieldPillScrollView observeValueForKeyPath:ofObject:change:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b860d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + _DAT_112794e68);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112794e7c);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c071ae0();
  _objc_release(param_4);
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f38e7c0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c071ae0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if (((int)uVar4 != 0) && (uVar1 = uVar3, func_0x00010c07d660(), (uVar1 & 1) == 0)) {
      func_0x00010c1fb440(param_1,param_2,0);
    }
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b860e4c; end: 10b860e6b; -[SIGTextFieldPillScrollView observer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b860e4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794e78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b860e6c; end: 10b860e7f; -[SIGTextFieldPillScrollView setObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b860e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794e78,param_3);
  return;
}



/* Entry: 10b860e80; end: 10b860e8f; -[SIGTextFieldPillScrollView pills] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b860e80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e6c);
}



/* Entry: 10b860e90; end: 10b860e9f; -[SIGTextFieldPillScrollView designVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b860e90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e64);
}



/* Entry: 10b860ea0; end: 10b860eaf; -[SIGTextFieldPillScrollView selectedPill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b860ea0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e7c);
}



/* Entry: 10b860eb0; end: 10b860f2b; -[SIGTextFieldPillScrollView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b860eb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794e7c,0);
  _objc_destroyWeak(param_1 + _DAT_112794e78);
  _objc_storeStrong(param_1 + _DAT_112794e74,0);
  _objc_storeStrong(param_1 + _DAT_112794e68,0);
  _objc_storeStrong(param_1 + _DAT_112794e70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794e6c,0);
  return;
}



/* Entry: 10b860f2c; end: 10b860f37; +[SIGTextFieldPillView layerClass] */

void FUN_10b860f2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 10b860f38; end: 10b8611ef; -[SIGTextFieldPillView initWithPill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b860f38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_a0 = PTR_PTR_11270b5b8;
  uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(uVar10,uVar11,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794e80) = 0;
    puVar2 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794e84);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112794e84) = puVar2;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11);
    lVar9 = (long)_DAT_112794e88;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar10);
    lVar8 = param_3;
    func_0x00010c0fbe40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(lVar8);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c1c3ae0(0x4032000000000000,*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar10;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar6);
    _objc_release(uVar11);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(puVar2);
    _objc_release(uVar7);
    lVar8 = (long)_DAT_112794e8c;
    _objc_retain(param_3);
    uVar10 = *(undefined8 *)((long)puVar1 + lVar8);
    *(long *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar10);
    func_0x00010bec5ae0(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_3 + _DAT_112794e84));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 10b8611f0; end: 10b861257; -[SIGTextFieldPillView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8611f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bf20c00();
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + _DAT_112794e84),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b861258; end: 10b861283; -[SIGTextFieldPillView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b861258(double param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112794e88));
  auVar1._0_8_ = param_1 + 16.0;
  auVar1._8_8_ = 0x403a000000000000;
  return auVar1;
}



/* Entry: 10b861284; end: 10b8612eb; -[SIGTextFieldPillView setSelected:] */

void FUN_10b861284(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b5b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setSelected__11265c598);
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x00010c073040();
    if ((int)uVar1 != 0) {
      func_0x00010c13a0e0(param_1);
    }
  }
  else {
    func_0x00010bf179a0(param_1);
  }
  return;
}



/* Entry: 10b8612ec; end: 10b8612f3; -[SIGTextFieldPillView canBecomeFirstResponder] */

undefined8 FUN_10b8612ec(void)

{
  return 1;
}



/* Entry: 10b8612f4; end: 10b86136b; -[SIGTextFieldPillView becomeFirstResponder] */

undefined8 * FUN_10b8612f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b5b8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_becomeFirstResponder_1125a3810);
  if ((int)puVar1 != 0) {
    puStack_48 = PTR_PTR_11270b5b8;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_setSelected__11265c598,1);
    func_0x00010bec5ae0(param_1);
  }
  return puVar1;
}



/* Entry: 10b86136c; end: 10b861403; -[SIGTextFieldPillView resignFirstResponder] */

undefined8 * FUN_10b86136c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b5b8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_resignFirstResponder_11262c258);
  if ((int)puVar1 != 0) {
    func_0x00010c2a5c20(param_1);
    puStack_48 = PTR_PTR_11270b5b8;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_setSelected__11265c598,0);
    func_0x00010bf73800(param_1);
    func_0x00010bec5ae0(param_1);
  }
  return puVar1;
}



/* Entry: 10b861404; end: 10b86140b; -[SIGTextFieldPillView hasText] */

undefined8 FUN_10b861404(void)

{
  return 1;
}



/* Entry: 10b86140c; end: 10b861467; -[SIGTextFieldPillView insertText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86140c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112794e90;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c26bdc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b861468; end: 10b8614a3; -[SIGTextFieldPillView deleteBackward] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b861468(long param_1)

{
  param_1 = param_1 + _DAT_112794e90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c26bde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b8614a4; end: 10b8614eb; -[SIGTextFieldPillView traitCollectionDidChange:] */

void FUN_10b8614a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b5b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bec5ae0(param_1);
  return;
}



/* Entry: 10b8614ec; end: 10b86150b; -[SIGTextFieldPillView setDesignVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8614ec(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112794e80) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112794e80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bec5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stylize_11258f060);
  return;
}


