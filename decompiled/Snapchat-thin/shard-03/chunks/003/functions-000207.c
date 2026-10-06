/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10270ef40; end: 10270f0fb;  */

undefined8 FUN_10270ef40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  
  lVar1 = 0x656475746974616c;
  func_0x0001027084f8(0x656475746974616c,0xe800000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dc3c();
    if ((int)lVar2 == 5) {
      func_0x000107c4223c(lVar1);
      uVar4 = param_1;
      func_0x000107c61170(lVar1);
      lVar1 = 0x64757469676e6f6c;
      func_0x0001027084f8(0x64757469676e6f6c,0xe900000000000065);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5dc3c();
        if ((int)lVar2 != 5) goto LAB_10270f0a0;
        func_0x000107c4223c(lVar1);
        func_0x000107c61170(lVar1);
        lVar1 = 0x2d73736572646461;
        uVar3 = 0xee00676e69727473;
        func_0x0001027084f8(0x2d73736572646461,0xee00676e69727473);
        if (lVar1 != 0) {
          lVar2 = lVar1;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          func_0x000107c61170(lVar1);
          if (lVar2 != 0) {
            lVar1 = lVar2;
            func_0x000107c5faec();
            func_0x000107c61170(lVar2);
            lVar2 = lVar1;
            func_0x000107c5fb5c(lVar1,uVar3);
            if (0 < lVar2) {
              func_0x000107c5fadc(lVar1,uVar3);
              func_0x000107c6142c(uVar3);
              func_0x000107c474bc(param_1,uVar4);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(param_2);
              return unaff_x20;
            }
            func_0x000107c61170(param_2);
            func_0x000107c6142c(uVar3);
            goto LAB_10270f0b0;
          }
        }
      }
    }
    else {
LAB_10270f0a0:
      func_0x000107c61170(lVar1);
    }
  }
  func_0x000107c61170(param_2);
LAB_10270f0b0:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270f0fc; end: 10270f123; -[SCSelectAddressPinTrigger initWithParameters:] */

void FUN_10270f0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270ef40();
  return;
}



/* Entry: 10270f124; end: 10270f13f;  */

undefined1  [16] FUN_10270f124(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01caa0;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Entry: 10270f140; end: 10270f17b;  */

undefined8 FUN_10270f140(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270f17c; end: 10270f1af; +[SCShareLocationTrigger actionName] */

void FUN_10270f17c(void)

{
  func_0x000107c5fadc(0x6f6c2d6572616873,0xee006e6f69746163);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270f1b0; end: 10270f2cf; -[SCShareLocationTrigger initWithParameters:] */

undefined8 FUN_10270f1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = 0x692d646e65697266;
  uVar3 = 0xe900000000000064;
  func_0x0001027084f8(0x692d646e65697266,0xe900000000000064);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar3);
      if (0 < lVar2) {
        func_0x000107c5fadc(lVar1,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c46a0c(param_1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_3);
        return param_1;
      }
      func_0x000107c61170(param_3);
      func_0x000107c6142c(uVar3);
      goto LAB_10270f288;
    }
  }
  func_0x000107c61170(param_3);
LAB_10270f288:
  uVar3 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar3,0x18,7);
  return 0;
}



/* Entry: 10270f2d0; end: 10270f2f3;  */

undefined1  [16] FUN_10270f2d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee006e6f69746163;
  auVar1._0_8_ = 0x6f6c2d6572616873;
  return auVar1;
}



/* Entry: 10270f2f4; end: 10270f32f;  */

undefined8 FUN_10270f2f4(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270f330; end: 10270f34b;  */

undefined1  [16] FUN_10270f330(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01cad0;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 10270f34c; end: 10270f383;  */

undefined8 FUN_10270f34c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270f384; end: 10270f39f;  */

undefined1  [16] FUN_10270f384(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01cb00;
  auVar1._0_8_ = 0xd000000000000020;
  return auVar1;
}



/* Entry: 10270f3a0; end: 10270f3d7;  */

undefined8 FUN_10270f3a0(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270f3d8; end: 10270f403; +[SCUpdateHomeModelTrigger actionName] */

void FUN_10270f3d8(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f01cb70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270f404; end: 10270f503;  */

undefined8 FUN_10270f404(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  
  lVar1 = 0x676e696c616373;
  func_0x0001027084f8(0x676e696c616373,0xe700000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dc3c();
    if ((int)lVar2 == 5) {
      func_0x000107c4223c(lVar1);
      uVar3 = param_1;
      func_0x000107c61170(lVar1);
      lVar1 = 0x656c676e61;
      func_0x0001027084f8(0x656c676e61,0xe500000000000000);
      if (lVar1 == 0) goto LAB_10270f4c8;
      lVar2 = lVar1;
      func_0x000107c5dc3c();
      if ((int)lVar2 == 5) {
        func_0x000107c4223c(lVar1);
        func_0x000107c61170(lVar1);
        func_0x000107c48488(param_1,uVar3);
        func_0x000107c61170(param_2);
        return unaff_x20;
      }
    }
    func_0x000107c61170(lVar1);
  }
LAB_10270f4c8:
  func_0x000107c61170(param_2);
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270f504; end: 10270f52b; -[SCUpdateHomeModelTrigger initWithParameters:] */

void FUN_10270f504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270f404();
  return;
}



/* Entry: 10270f52c; end: 10270f547;  */

undefined1  [16] FUN_10270f52c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01cb70;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 10270f548; end: 10270f583;  */

undefined8 FUN_10270f548(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c47d5c();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270f584; end: 10270f59f;  */

undefined1  [16] FUN_10270f584(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01cb90;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Entry: 10270f5a0; end: 10270f5d7;  */

undefined8 FUN_10270f5a0(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270f5d8; end: 10270f5f3;  */

undefined1  [16] FUN_10270f5d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01cbb0;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Entry: 10270f5f4; end: 10270f62b;  */

undefined8 FUN_10270f5f4(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270f62c; end: 10270f647;  */

undefined1  [16] FUN_10270f62c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01cbd0;
  auVar1._0_8_ = 0xd00000000000001a;
  return auVar1;
}



/* Entry: 10270f648; end: 10270f67f;  */

undefined8 FUN_10270f648(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 10270f680; end: 10270f6c7;  */

void FUN_10270f680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_10270f6c8(param_1,param_2,param_3);
  return;
}



/* Entry: 10270f6c8; end: 10270f813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10270f6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  int iVar5;
  
  puVar4 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar1 = _DAT_112eba198;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eba1a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eba1a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eba1b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eba1b8) = param_3;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&stack0xffffffffffffffa0,puVar3);
  iVar5 = (int)*(undefined8 *)(puVar4 + _DAT_112eba1b8);
  func_0x000107c61174();
  iVar2 = iVar5;
  func_0x000107c5160c();
  if (iVar2 == 0) {
    iVar2 = iVar5;
    func_0x000107c5d950();
    if ((iVar2 == 0) || (func_0x000107c44d94(), iVar5 != 0)) {
      func_0x00010270f9cc();
    }
    else {
      func_0x000107c58b7c(*(undefined8 *)(puVar4 + _DAT_112eba1b0));
    }
  }
  else {
    FUN_10270f874();
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar4;
}



/* Entry: 10270f814; end: 10270f873; -[SCMapLayerManager initWithMapSdkSession:nativeMapSdk:mapUserPreferences:] */

void FUN_10270f814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  FUN_10270f6c8(param_3,param_4,param_5);
  return;
}



/* Entry: 10270f874; end: 10270fcab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270f874(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_112eba1a0;
  if (*(int *)(unaff_x20 + _DAT_112eba1a0) != 2) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eba1b8);
    uVar3 = uVar4;
    func_0x000107c44d94();
    if ((int)uVar3 != 0) {
      func_0x000107c550b4(*(undefined8 *)(unaff_x20 + _DAT_112eba1a8));
    }
    func_0x000107c58b7c(*(undefined8 *)(unaff_x20 + _DAT_112eba1b0));
    func_0x000107c58b78(uVar4);
    uVar3 = uVar4;
    func_0x000107c550b0(uVar4);
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee70();
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    func_0x000107c4c49c(uVar4);
    func_0x000107c61170(uVar3);
    *(undefined8 *)(unaff_x20 + lVar1) = 2;
    func_0x000103b3929c(0);
    func_0x000107c610f8();
    uVar3 = 2;
    func_0x000103b39118(2);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112eba198));
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 10270fcac; end: 10270fd4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270fcac(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  
  iVar1 = *(int *)(param_1 + _DAT_112fed420);
  if (iVar1 == 0) {
    uVar6 = *(ulong *)(unaff_x20 + _DAT_112eba1b8);
    uVar5 = uVar6;
    func_0x000107c5d950();
    if ((uVar5 & 1) == 0) {
      func_0x000107c4c4fc(uVar6);
    }
    lVar3 = 0;
    func_0x000107c5eea4();
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar2 = _DAT_112eba1a0;
    if (*(int *)(unaff_x20 + _DAT_112eba1a0) != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eba1b8);
      uVar4 = uVar7;
      func_0x000107c5160c();
      if (((int)uVar4 != 0) && (*(int *)(unaff_x20 + lVar2) == 2)) {
        func_0x000107c58b78(uVar7);
        func_0x000107c58b7c(*(undefined8 *)(unaff_x20 + _DAT_112eba1b0));
      }
      uVar4 = uVar7;
      func_0x000107c44d94();
      if (((int)uVar4 != 0) && (*(int *)(unaff_x20 + lVar2) == 1)) {
        func_0x000107c550b0(uVar7);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eba1a8);
        func_0x000107c550b4(uVar4);
      }
      func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee70();
      (**(code **)(lVar8 + 8))
                (&stack0xffffffffffffffb0 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0),lVar3);
      func_0x000107c4c49c(uVar7);
      func_0x000107c61170(uVar4);
      *(undefined8 *)(unaff_x20 + lVar2) = 0;
      func_0x000103b3929c(0);
      func_0x000107c610f8();
      uVar4 = 0;
      func_0x000103b39118(0);
      func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112eba198));
      func_0x000107c61170(uVar4);
    }
    return;
  }
  if (iVar1 == 2) {
    lVar3 = 0;
    func_0x000107c5eea4();
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar2 = _DAT_112eba1a0;
    if (*(int *)(unaff_x20 + _DAT_112eba1a0) != 2) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eba1b8);
      uVar4 = uVar7;
      func_0x000107c44d94();
      if ((int)uVar4 != 0) {
        func_0x000107c550b4(*(undefined8 *)(unaff_x20 + _DAT_112eba1a8));
      }
      func_0x000107c58b7c(*(undefined8 *)(unaff_x20 + _DAT_112eba1b0));
      func_0x000107c58b78(uVar7);
      uVar4 = uVar7;
      func_0x000107c550b0(uVar7);
      func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee70();
      (**(code **)(lVar8 + 8))
                (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      func_0x000107c4c49c(uVar7);
      func_0x000107c61170(uVar4);
      *(undefined8 *)(unaff_x20 + lVar2) = 2;
      func_0x000103b3929c(0);
      func_0x000107c610f8();
      uVar4 = 2;
      func_0x000103b39118(2);
      func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112eba198));
      func_0x000107c61170(uVar4);
    }
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112eba1b8);
  uVar5 = uVar6;
  func_0x000107c5d950();
  if ((uVar5 & 1) == 0) {
    func_0x000107c4c4fc(uVar6);
  }
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = _DAT_112eba1a0;
  if (*(int *)(unaff_x20 + _DAT_112eba1a0) == 1) {
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eba1b8);
  uVar4 = uVar7;
  func_0x000107c5160c();
  if ((int)uVar4 != 0) {
    if (*(int *)(unaff_x20 + lVar2) != 2) goto LAB_10270fa74;
    func_0x000107c58b78(uVar7);
  }
  func_0x000107c58b7c(*(undefined8 *)(unaff_x20 + _DAT_112eba1b0));
LAB_10270fa74:
  func_0x000107c550b0(uVar7);
  func_0x000107c58b78(uVar7);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eba1a8);
  func_0x000107c550b4(uVar4);
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee70();
  (**(code **)(lVar8 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),lVar3);
  func_0x000107c4c49c(uVar7);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(unaff_x20 + lVar2) = 1;
  func_0x000103b3929c(0);
  func_0x000107c610f8();
  uVar4 = 1;
  func_0x000103b39118(1);
  func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112eba198));
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10270fd4c; end: 10270ff4f; -[SCMapLayerManager activateLayer:] */

/* WARNING: Possible PIC construction at 0x00010270fd84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010270fd88) */

void FUN_10270fd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10270fcac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10270ff50; end: 10270ff9f; -[SCMapLayerManager deactivateLayer:] */

/* WARNING: Possible PIC construction at 0x00010270ff88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010270ff8c) */

void FUN_10270ff50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010270fd9c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10270ffa0; end: 10270ffaf; -[SCMapLayerManager activeLayerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270ffa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eba198));
  return;
}



/* Entry: 10270ffb0; end: 10270ffe3;  */

void FUN_10270ffb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10270ffe4; end: 10271003b; -[SCMapLayerManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102710000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102710004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270ffe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba1a8));
  return;
}



/* Entry: 10271003c; end: 10271005b;  */

void FUN_10271003c(void)

{
  func_0x000107c61168(&PTR_PTR_11285cad0);
  return;
}



/* Entry: 10271005c; end: 1027101c3;  */

void FUN_10271005c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eba1e8,&UNK_10dad1d50);
  puVar1 = &UNK_11053ef68;
  func_0x000107c613fc(&UNK_11053ef68,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x102710100,puVar1);
  return;
}



/* Entry: 1027101c4; end: 1027101d3;  */

undefined1  [16] FUN_1027101c4(void)

{
  return ZEXT816(0x11053ef90);
}



/* Entry: 1027101d4; end: 10271020f;  */

void FUN_1027101d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102710210; end: 102710253;  */

void FUN_102710210(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102710ec4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100082720("SecondaryLocationDeviceMapViewPresenterEntryPointProvider",0x39,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102710254; end: 10271031f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102710254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112eba200) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eba210) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112eba1f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eba208) = param_2;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61154(&stack0xffffffffffffffc0,puVar1,0,0);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar2;
}



/* Entry: 102710320; end: 102710393; -[_TtC30SecondaryLocationDeviceMapView40SecondaryLocationDeviceMapViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102710320(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112eba200) = 0;
  *(undefined8 *)(param_1 + _DAT_112eba210) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "SecondaryLocationDeviceMapView/SecondaryLocationDeviceMapViewController.swift"
                      ,0x4d,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102710394);
  (*pcVar1)();
}



/* Entry: 102710394; end: 10271063b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102710394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eba208);
  uVar7 = 0xc05280624dd2f1aa;
  uVar12 = 0x40445b3d07c84b5e;
  if (lVar3 != 0) {
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4077c();
      func_0x000107c61170(lVar3);
      uVar7 = param_2;
      uVar12 = param_1;
    }
  }
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar3);
    uVar9 = 0x4024000000000000;
    func_0x000108d31608(0x4024000000000000,uVar12,param_3,param_4);
    uVar13 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar14 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar4 = 0;
    func_0x000103b354c8(0);
    func_0x000107c610f8();
    uVar10 = 0;
    uVar11 = 0;
    func_0x000103b3520c(uVar12,uVar7,0,0,uVar9,uVar13,uVar14,uVar15);
    puVar5 = &UNK_11053f060;
    func_0x000107c613fc(&UNK_11053f060,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    lVar3 = *(long *)(unaff_x20 + _DAT_112eba1f8);
    if (lVar3 == 0) {
      func_0x000107c61170(uVar4);
      func_0x000107c61574(puVar5);
    }
    else {
      lVar6 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10271063c);
        (*pcVar2)();
      }
      func_0x000107c3ec60();
      func_0x000107c61170(lVar6);
      lVar6 = unaff_x20;
      func_0x000107c5ce94();
      func_0x000107c61180();
      uVar7 = 0;
      FUN_102710c3c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      uStack_a0 = 0x102710c18;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_10134a1dc;
      puStack_a8 = &UNK_11053f078;
      ppuVar8 = &puStack_c0;
      puStack_98 = puVar5;
      func_0x000107c60bc4(ppuVar8);
      puVar1 = puStack_98;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar1);
      func_0x000107c43e04(uVar10,uVar11);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar7);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eba200);
    *(long *)(unaff_x20 + _DAT_112eba200) = lVar3;
    func_0x000107c615e8(uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102710638);
  (*pcVar2)();
}



/* Entry: 10271063c; end: 102710707; -[_TtC30SecondaryLocationDeviceMapView40SecondaryLocationDeviceMapViewController viewDidLoad] */

void FUN_10271063c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3);
  FUN_102710394();
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c482a8(0x3fee1e1e1e1e1e1e,0x3fed9d9d9d9d9d9e,0x3fecdcdcdcdcdcdd,0x3ff0000000000000)
    ;
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102710708);
  (*pcVar1)();
}



/* Entry: 102710708; end: 10271070f; -[_TtC30SecondaryLocationDeviceMapView40SecondaryLocationDeviceMapViewController supportedInterfaceOrientations] */

undefined8 FUN_102710708(void)

{
  return 0x1e;
}



/* Entry: 102710710; end: 102710a4b;  */

void FUN_102710710(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c61174();
    lVar3 = param_3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102710a3c);
      (*pcVar1)();
    }
    func_0x000107c49778();
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    puVar4 = puVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar5 = param_3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102710a40);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar3 + 0x20) = puVar7;
    puVar4 = puVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar5 = param_3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102710a44);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar3 + 0x28) = puVar7;
    puVar4 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar5 = param_3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102710a48);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar3 + 0x30) = puVar7;
    puVar4 = puVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar5 = param_3;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102710a4c);
      (*pcVar1)();
    }
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = lVar5;
    func_0x000107c5ce8c(lVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar8 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar3 + 0x38) = puVar8;
    uVar9 = 0;
    FUN_102710c3c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = lVar3;
    func_0x000107c5fc48(lVar3,uVar9);
    func_0x000107c61574(lVar3);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102710a4c; end: 102710ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102710a4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112eba210;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112eba210);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x1) {
    puVar2 = PTR_PTR_1126af080;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c59a2c();
    func_0x000107c55244(puVar2,param_2,1);
    func_0x000107c5724c(puVar2,param_2,1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    func_0x000107c61174(puVar2);
    FUN_102710bf8(uVar4);
  }
  func_0x000102710c08(puVar3);
  return puVar2;
}



/* Entry: 102710ae4; end: 102710b43; -[_TtC30SecondaryLocationDeviceMapView40SecondaryLocationDeviceMapViewController initWithNibName:bundle:] */

void FUN_102710ae4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SecondaryLocationDeviceMapView.SecondaryLocationDeviceMapViewController",0x47
                      ,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102710b10);
  (*pcVar1)();
}



/* Entry: 102710b44; end: 102710b9b; -[_TtC30SecondaryLocationDeviceMapView40SecondaryLocationDeviceMapViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102710b44(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eba1f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eba200));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eba208));
  if (*(long *)(param_1 + _DAT_112eba210) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102710b9c; end: 102710ba3; -[_TtC30SecondaryLocationDeviceMapView40SecondaryLocationDeviceMapViewController pageViewName] */

undefined8 FUN_102710b9c(void)

{
  return 0x95;
}



/* Entry: 102710ba4; end: 102710bd7; -[_TtC30SecondaryLocationDeviceMapView40SecondaryLocationDeviceMapViewController headerItem] */

void FUN_102710ba4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102710a4c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102710bd8; end: 102710bf7;  */

void FUN_102710bd8(void)

{
  func_0x000107c61168(&PTR_PTR_11285cbb0);
  return;
}



/* Entry: 102710bf8; end: 102710c3b;  */

void FUN_102710bf8(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102710c3c; end: 102710c7b;  */

void FUN_102710c3c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102710c7c; end: 102710c97;  */

void FUN_102710c7c(undefined8 param_1)

{
  func_0x0001000285a8(0x112eba240,&UNK_10dad1e50);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102710cec,param_1);
  return;
}



/* Entry: 102710c98; end: 102710ceb;  */

void FUN_102710c98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000102711d18(0);
  func_0x000107c610f8();
  func_0x000102711c64(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102710cec; end: 102710d0f;  */

void FUN_102710cec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000102711d18(0);
  func_0x000107c610f8();
  func_0x000102711c64(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102710d10; end: 102710d5f;  */

void FUN_102710d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102710d60; end: 102710dab;  */

void FUN_102710d60(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102710ea4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  return;
}



/* Entry: 102710dac; end: 102710db3;  */

void FUN_102710dac(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102710ea4();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102710db4; end: 102710de3;  */

void FUN_102710db4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102710de4; end: 102710e5f; -[_TtC30SecondaryLocationDeviceMapView37SecondaryLocationDeviceMapViewBuilder build:] */

void FUN_102710de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102710e60; end: 102710e83;  */

void FUN_102710e60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102710e84; end: 102710ea3;  */

undefined1  [16] FUN_102710e84(void)

{
  return ZEXT816(0x11053f0b0);
}



/* Entry: 102710ea4; end: 102710ec3;  */

void FUN_102710ea4(void)

{
  func_0x000107c61168(&PTR_PTR_112eba290);
  return;
}



/* Entry: 102710ec4; end: 102710ff3;  */

void FUN_102710ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eba2f0,&UNK_10dad1f10);
  puVar1 = &UNK_11053f0f0;
  func_0x000107c613fc(&UNK_11053f0f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102710ff4,puVar1);
  return;
}



/* Entry: 102710ff4; end: 102710fff;  */

/* WARNING: Possible PIC construction at 0x000102710fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102710fd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102710fcc) */
/* WARNING: Removing unreachable block (ram,0x000102710fdc) */

void FUN_102710ff4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = lVar1;
  FUN_102711b8c();
  func_0x000107c613fc();
  puVar6 = PTR_PTR_1126c5b08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x30) = puVar6;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  *(long *)(lVar5 + 0x18) = lVar1;
  *(undefined8 *)(lVar5 + 0x20) = uVar4;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 102711000; end: 10271106b;  */

long FUN_102711000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126c5b08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return unaff_x20;
}



/* Entry: 10271106c; end: 102711583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271106c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  byte bVar15;
  long lVar16;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000100083b20(&puStack_a0);
  puVar6 = puStack_a0;
  uVar3 = *(undefined8 *)(puStack_a0 + _DAT_112fcd170);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(puVar6);
  uVar4 = uVar3;
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&puStack_a0);
  puVar6 = puStack_a0;
  puVar5 = puStack_a0;
  func_0x000107c4b8d8(puStack_a0);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c5c734(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar3 = 0;
  FUN_102710bd8(0);
  func_0x000107c610f8();
  FUN_102710254(uVar4,puVar6,uVar3);
  func_0x000100083b20(&puStack_a0);
  uVar3 = *(undefined8 *)(puStack_a0 + _DAT_1130831a0);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(puStack_a0);
  func_0x000107c3e2c0(uVar3);
  func_0x000107c615e8(uVar3);
  puVar6 = &UNK_11053f118;
  func_0x000107c613fc(&UNK_11053f118,0x18,7);
  func_0x000107c615fc(puVar6 + 0x10,uVar4);
  puVar7 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102711a28;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e1779c;
  puStack_88 = &UNK_11053f130;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar8);
  pcStack_b0 = FUN_10271199c;
  uStack_a8 = 0;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_100e17304;
  puStack_b8 = &UNK_11053f158;
  ppuVar9 = &puStack_d0;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(puVar6);
  func_0x000107c47be0();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(uStack_a8);
  puVar2 = puStack_78;
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar2);
  func_0x000100083b20(&puStack_a0);
  puVar2 = puStack_a0;
  puVar6 = &UNK_11053f190;
  func_0x000107c613fc(&UNK_11053f190,0x20,7);
  puVar14 = (undefined8 *)(puVar6 + 0x10);
  *puVar14 = 0x4352554f535f4f4e;
  *(undefined8 *)(puVar6 + 0x18) = 0xe900000000000045;
  uVar3 = *(undefined8 *)(puVar2 + _DAT_113083180);
  pcStack_80 = (code *)0x102711b74;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x1026c954c;
  puStack_88 = &UNK_11053f1a8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar8);
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61428(puVar14,&puStack_a0,0,0);
  uVar3 = *puVar14;
  uVar13 = *(undefined8 *)(puVar6 + 0x18);
  func_0x000107c61434(uVar13);
  func_0x000107c61574(puVar6);
  func_0x000100083b20(&puStack_d0);
  puVar6 = puStack_d0;
  lVar16 = *(long *)(puStack_d0 + _DAT_1130831b0);
  lVar10 = lVar16;
  func_0x000107c61174();
  func_0x000107c61170(puVar6);
  if (lVar16 == 0) {
    bVar15 = 1;
  }
  else {
    bVar15 = *(byte *)(lVar10 + _DAT_113083398);
    func_0x000107c61170(lVar10);
    bVar15 = bVar15 ^ 1;
  }
  func_0x000100083b20(&puStack_d0);
  puVar6 = puStack_d0;
  lVar16 = *(long *)(puStack_d0 + _DAT_1130831b0);
  lVar10 = lVar16;
  func_0x000107c61174();
  func_0x000107c61170(puVar6);
  if ((lVar16 != 0) &&
     (bVar1 = *(byte *)(lVar10 + _DAT_1130833a0), func_0x000107c61170(lVar10), (bVar1 & 1) != 0)) {
    bVar15 = 1;
  }
  func_0x000100337a84(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar13);
  func_0x000107c61174();
  func_0x000107c6157c();
  puVar5 = puVar7;
  func_0x0001038b5ba8(puVar7,uVar3,uVar13,0,1,bVar15 & 1,0);
  func_0x000100083b20(&puStack_d0);
  puVar6 = puStack_d0;
  puStack_d8 = puVar5;
  func_0x00010008a7c8(&puStack_d0,&puStack_d8);
  func_0x000107c61574(puVar6);
  puVar6 = puStack_d0;
  func_0x000100083b20(&puStack_d8);
  func_0x000107c61574(puVar6);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined **)(unaff_x20 + 0x38) = puStack_d8;
  func_0x000107c615e8(uVar11);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c4ee7c();
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = uVar3;
  func_0x000107c5fadc(uVar3,uVar13);
  func_0x000105f51a08(uVar12,uVar11,1);
  func_0x000107c61170(uVar11);
  uVar11 = 0x65736c6166;
  func_0x000107c5fadc(0x65736c6166,0xe500000000000000);
  func_0x000107c5fadc(uVar3,uVar13);
  func_0x000107c6142c(uVar13);
  func_0x000105f51b7c(uVar12,uVar11,uVar3,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102711584; end: 10271199b;  */

/* WARNING: Possible PIC construction at 0x0001027115bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027115e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027116b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027116e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027117a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027117d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027117f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027118d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027118f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027118fc) */
/* WARNING: Removing unreachable block (ram,0x0001027118dc) */
/* WARNING: Removing unreachable block (ram,0x000102711898) */
/* WARNING: Removing unreachable block (ram,0x000102711998) */
/* WARNING: Removing unreachable block (ram,0x0001027118ac) */
/* WARNING: Removing unreachable block (ram,0x000102711878) */
/* WARNING: Removing unreachable block (ram,0x000102711994) */
/* WARNING: Removing unreachable block (ram,0x00010271187c) */
/* WARNING: Removing unreachable block (ram,0x000102711848) */
/* WARNING: Removing unreachable block (ram,0x000102711828) */
/* WARNING: Removing unreachable block (ram,0x0001027117f8) */
/* WARNING: Removing unreachable block (ram,0x000102711990) */
/* WARNING: Removing unreachable block (ram,0x00010271180c) */
/* WARNING: Removing unreachable block (ram,0x0001027117d8) */
/* WARNING: Removing unreachable block (ram,0x00010271198c) */
/* WARNING: Removing unreachable block (ram,0x0001027117dc) */
/* WARNING: Removing unreachable block (ram,0x0001027117a8) */
/* WARNING: Removing unreachable block (ram,0x000102711788) */
/* WARNING: Removing unreachable block (ram,0x000102711758) */
/* WARNING: Removing unreachable block (ram,0x000102711988) */
/* WARNING: Removing unreachable block (ram,0x00010271176c) */
/* WARNING: Removing unreachable block (ram,0x000102711738) */
/* WARNING: Removing unreachable block (ram,0x000102711984) */
/* WARNING: Removing unreachable block (ram,0x00010271173c) */
/* WARNING: Removing unreachable block (ram,0x000102711708) */
/* WARNING: Removing unreachable block (ram,0x0001027116e8) */
/* WARNING: Removing unreachable block (ram,0x0001027116b8) */
/* WARNING: Removing unreachable block (ram,0x000102711980) */
/* WARNING: Removing unreachable block (ram,0x0001027116cc) */
/* WARNING: Removing unreachable block (ram,0x000102711698) */
/* WARNING: Removing unreachable block (ram,0x00010271197c) */
/* WARNING: Removing unreachable block (ram,0x00010271169c) */
/* WARNING: Removing unreachable block (ram,0x00010271163c) */
/* WARNING: Removing unreachable block (ram,0x00010271160c) */
/* WARNING: Removing unreachable block (ram,0x000102711974) */
/* WARNING: Removing unreachable block (ram,0x000102711610) */
/* WARNING: Removing unreachable block (ram,0x000102711978) */
/* WARNING: Removing unreachable block (ram,0x000102711624) */
/* WARNING: Removing unreachable block (ram,0x0001027115e8) */
/* WARNING: Removing unreachable block (ram,0x0001027115c0) */
/* WARNING: Removing unreachable block (ram,0x000102711970) */
/* WARNING: Removing unreachable block (ram,0x0001027115d4) */
/* WARNING: Removing unreachable block (ram,0x00010271193c) */

void FUN_102711584(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  func_0x000107c61600(param_2);
  func_0x000107c3d614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10271199c; end: 1027119bf;  */

void FUN_10271199c(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1027119c0; end: 1027119cb; -[_TtC30SecondaryLocationDeviceMapView39SecondaryLocationDeviceMapViewPresenter present] */

void FUN_1027119c0(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10271106c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1027119cc; end: 102711a27;  */

void FUN_1027119cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = param_2;
  func_0x000104515f78();
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x18) = lVar2;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 102711a28; end: 102711a2f;  */

/* WARNING: Possible PIC construction at 0x0001027115bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027115e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027116b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027116e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027117a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027117d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027117f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027118d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027118f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102711938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027118fc) */
/* WARNING: Removing unreachable block (ram,0x0001027118dc) */
/* WARNING: Removing unreachable block (ram,0x000102711898) */
/* WARNING: Removing unreachable block (ram,0x000102711998) */
/* WARNING: Removing unreachable block (ram,0x0001027118ac) */
/* WARNING: Removing unreachable block (ram,0x000102711878) */
/* WARNING: Removing unreachable block (ram,0x000102711994) */
/* WARNING: Removing unreachable block (ram,0x00010271187c) */
/* WARNING: Removing unreachable block (ram,0x000102711848) */
/* WARNING: Removing unreachable block (ram,0x000102711828) */
/* WARNING: Removing unreachable block (ram,0x0001027117f8) */
/* WARNING: Removing unreachable block (ram,0x000102711990) */
/* WARNING: Removing unreachable block (ram,0x00010271180c) */
/* WARNING: Removing unreachable block (ram,0x0001027117d8) */
/* WARNING: Removing unreachable block (ram,0x00010271198c) */
/* WARNING: Removing unreachable block (ram,0x0001027117dc) */
/* WARNING: Removing unreachable block (ram,0x0001027117a8) */
/* WARNING: Removing unreachable block (ram,0x000102711788) */
/* WARNING: Removing unreachable block (ram,0x000102711758) */
/* WARNING: Removing unreachable block (ram,0x000102711988) */
/* WARNING: Removing unreachable block (ram,0x00010271176c) */
/* WARNING: Removing unreachable block (ram,0x000102711738) */
/* WARNING: Removing unreachable block (ram,0x000102711984) */
/* WARNING: Removing unreachable block (ram,0x00010271173c) */
/* WARNING: Removing unreachable block (ram,0x000102711708) */
/* WARNING: Removing unreachable block (ram,0x0001027116e8) */
/* WARNING: Removing unreachable block (ram,0x0001027116b8) */
/* WARNING: Removing unreachable block (ram,0x000102711980) */
/* WARNING: Removing unreachable block (ram,0x0001027116cc) */
/* WARNING: Removing unreachable block (ram,0x000102711698) */
/* WARNING: Removing unreachable block (ram,0x00010271197c) */
/* WARNING: Removing unreachable block (ram,0x00010271169c) */
/* WARNING: Removing unreachable block (ram,0x00010271163c) */
/* WARNING: Removing unreachable block (ram,0x00010271160c) */
/* WARNING: Removing unreachable block (ram,0x000102711974) */
/* WARNING: Removing unreachable block (ram,0x000102711610) */
/* WARNING: Removing unreachable block (ram,0x000102711978) */
/* WARNING: Removing unreachable block (ram,0x000102711624) */
/* WARNING: Removing unreachable block (ram,0x0001027115e8) */
/* WARNING: Removing unreachable block (ram,0x0001027115c0) */
/* WARNING: Removing unreachable block (ram,0x000102711970) */
/* WARNING: Removing unreachable block (ram,0x0001027115d4) */
/* WARNING: Removing unreachable block (ram,0x00010271193c) */

void FUN_102711a28(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61600(lVar1);
  func_0x000107c3d614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102711a30; end: 102711a7b;  */

void FUN_102711a30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102711a7c; end: 102711b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102711a7c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_50;
  long alStack_48 [3];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c615e8(uVar1);
  func_0x000100083b20(alStack_48);
  lVar2 = _DAT_113083188;
  func_0x000107c61428(alStack_48[0] + _DAT_113083188,alStack_48,0,0);
  lVar2 = alStack_48[0] + lVar2;
  func_0x000107c61618();
  func_0x000107c61170(alStack_48[0]);
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_50);
    func_0x000107c4c3d4(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uStack_50);
  }
  return;
}



/* Entry: 102711b20; end: 102711b2b; -[_TtC30SecondaryLocationDeviceMapView39SecondaryLocationDeviceMapViewPresenter onSecondaryLocationDevicePromptCancelled] */

void FUN_102711b20(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_102711a7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102711b2c; end: 102711b57;  */

void FUN_102711b2c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  func_0x000107c6157c();
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102711b58; end: 102711b8b;  */

void FUN_102711b58(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102711b8c; end: 102711bab;  */

void FUN_102711b8c(void)

{
  func_0x000107c61168(&PTR_PTR_112eba338);
  return;
}



/* Entry: 102711bac; end: 102711bbb;  */

void FUN_102711bac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102711bbc; end: 102711bf7; -[SCSecondaryLocationDeviceMapViewScope init] */

void FUN_102711bbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102711bf8; end: 102711c17; -[_TtC37SCSecondaryLocationDeviceMapViewScope45SecondaryLocationDeviceMapViewFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102711bf8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eba3c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102711c18; end: 102711caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102711c18(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eba3c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102711cb0; end: 102711cb3;  */

void FUN_102711cb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102711cb4; end: 102711ce7;  */

void FUN_102711cb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102711ce8; end: 102711cf7; -[_TtC37SCSecondaryLocationDeviceMapViewScope45SecondaryLocationDeviceMapViewFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102711ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eba3c0));
  return;
}



/* Entry: 102711cf8; end: 102711d37;  */

void FUN_102711cf8(void)

{
  func_0x000107c61168(&PTR_PTR_11285cc88);
  return;
}



/* Entry: 102711d38; end: 102711d3b;  */

void FUN_102711d38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102711d3c; end: 102711da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102711d3c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102712130();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eba420) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102711da8; end: 102711e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102711da8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eba420) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102711e14; end: 102711e73; -[_TtC46MapDirectionsSheetScopedFactoryServiceProvider34SCMapDirectionsSheetScopedServices init] */

void FUN_102711e14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapDirectionsSheetScopedFactoryServiceProvider.SCMapDirectionsSheetScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102711e40);
  (*pcVar1)();
}



/* Entry: 102711e74; end: 102711e83; -[_TtC46MapDirectionsSheetScopedFactoryServiceProvider34SCMapDirectionsSheetScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102711e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eba420));
  return;
}



/* Entry: 102711e84; end: 102711eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102711e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11053f450;
  func_0x000107c613fc(&UNK_11053f450,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1027121c8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102711ef0; end: 102711f8b;  */

void FUN_102711ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11053f360;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11053f360;
  return;
}



/* Entry: 102711f8c; end: 102711fc3;  */

void FUN_102711f8c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102711fc4; end: 102711fcb;  */

undefined8 FUN_102711fc4(void)

{
  return 0x1b;
}



/* Entry: 102711fcc; end: 1027120ff;  */

void FUN_102711fcc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11053f478;
  func_0x000107c613fc(&UNK_11053f478,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027121a0;
  func_0x00010058fa64(FUN_1027121a0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102712100; end: 10271212f;  */

undefined ** FUN_102712100(void)

{
  return &PTR_DAT_113066d00;
}



/* Entry: 102712130; end: 10271214f;  */

void FUN_102712130(void)

{
  func_0x000107c61168(&PTR_PTR_11285cdf8);
  return;
}



/* Entry: 102712150; end: 10271219f;  */

undefined1  [16] FUN_102712150(void)

{
  return ZEXT816(0x11053f3b0);
}



/* Entry: 1027121a0; end: 1027121c7;  */

void FUN_1027121a0(void)

{
  func_0x00010058fc80(0,0);
  return;
}


