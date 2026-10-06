/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10809e050; end: 10809e067; -[SCValdiSurfacePresenterView viewTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809e050(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2 + _DAT_112774280,0x80);
  return;
}



/* Entry: 10809e068; end: 10809e077; -[SCValdiSurfacePresenterView embeddedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10809e068(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774284);
}



/* Entry: 10809e078; end: 10809e0b7; -[SCValdiSurfacePresenterView setEmbeddedView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809e078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112774284;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10809e0b8; end: 10809e103; -[SCValdiSurfacePresenterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809e0b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112774284,0);
  _objc_destroyWeak(param_1 + _DAT_11277428c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112774288,0);
  return;
}



/* Entry: 10809e104; end: 10809e11b;  */

void FUN_10809e104(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809e11c; end: 10809e18f;  */

void FUN_10809e11c(void)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  func_0x00010809f3a4(FUN_10809e190);
  if (lRam00000001137290e0 != -1) {
    func_0x000107c27d9c(0x1137290e0,&puStack_48);
  }
  uVar1 = uRam00000001137290e8;
  func_0x00010809f304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10809e190; end: 10809e1c3;  */

void FUN_10809e190(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb3b40(uVar2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001137290e8;
  uRam00000001137290e8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10809e1c4; end: 10809e20f;  */

void FUN_10809e1c4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137290f0 != -1) {
    func_0x000107c27d9c(0x1137290f0,&PTR___NSConcreteGlobalBlock_110a1ae80);
  }
  uVar1 = uRam00000001137290f8;
  func_0x00010809f304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10809e210; end: 10809e2cf;  */

void FUN_10809e210(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  func_0x00010c212f20();
  puVar3 = puVar2;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0dde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809f298();
  puVar4 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  _objc_opt_class();
  func_0x00010809f238();
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
    func_0x00010bf69e80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010809f370();
  }
  uVar1 = puRam00000001137290f8;
  puRam00000001137290f8 = puVar3;
  func_0x00010809f360(uVar1);
  func_0x00010809f270();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10809e2d0; end: 10809e3f3;  */

void FUN_10809e2d0(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long in_x3;
  
  func_0x00010809f2e4();
  func_0x00010809f370();
  iVar1 = 2;
  func_0x000107c31924(2,0x12,0,0);
  if (iVar1 == 0) {
    lVar2 = in_x3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(in_x3);
    func_0x00010c25d920(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    if (lVar2 == 0) {
      func_0x00010c12d3e0(in_x3);
    }
    else {
      func_0x00010c1d0640();
    }
    func_0x00010809f278();
    func_0x00010809f298();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e440(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010809f270();
  func_0x00010809f2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10809e3f4; end: 10809eebf;  */

void FUN_10809e3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,ulong param_8,long param_9,long param_10,
                  undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  func_0x00010809f2e4();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010809f280();
  _objc_retain(param_11);
  if (param_4 == 0) {
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2827c0();
    func_0x00010b988f18();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = lRam0000000113729128;
  if (param_5 != 0) {
    _objc_retain(param_5);
    if (lVar1 != -1) {
      func_0x000107c27d9c(0x113729128,&PTR___NSConcreteGlobalBlock_110a1aec0);
    }
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809f298();
    func_0x00010c067fc0();
    func_0x00010809f270();
  }
  if (param_10 != 0) {
    func_0x00010c067fc0();
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  if (param_9 != 0) {
    func_0x00010c1d0640(puVar2);
  }
  func_0x00010bf69e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3c80();
  func_0x00010809f270();
  func_0x00010c166c00(param_1);
  func_0x00010c0720c0();
  func_0x00010c1bdb00(param_1);
  if ((param_7 != 0) || (param_6 != 0)) {
    func_0x00010c1d0640(puVar2);
  }
  func_0x00010bf51e00(param_1);
  func_0x00010c1d0640(puVar2);
  func_0x00010809f288();
  uVar3 = param_8;
  _objc_retain();
  if (param_8 == 0) {
    func_0x00010809f280();
    goto LAB_10809e704;
  }
  func_0x00010809f314();
  if ((uVar3 & 1) == 0) {
    func_0x00010809f314();
    if ((uVar3 & 1) == 0) {
      func_0x00010809f314();
      if ((uVar3 & 1) == 0) {
        func_0x00010809f314();
        if ((uVar3 & 1) == 0) {
          func_0x00010809f314();
          if ((uVar3 & 1) == 0) {
            func_0x00010b96bf1c();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010809f390();
            if ((int)uVar4 != 0) {
              puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010809f340(uVar3);
              _objc_release(puVar5);
            }
            func_0x00010809f288();
            goto LAB_10809e650;
          }
          func_0x00010809f278();
          func_0x00010809f280();
          func_0x00010809f334();
          func_0x00010809f264();
        }
        else {
          func_0x00010809f278();
          func_0x00010809f280();
          func_0x00010809f244();
          func_0x00010809f334();
        }
      }
      else {
        func_0x00010809f278();
        func_0x00010809f280();
        func_0x00010809f244();
        func_0x00010809f334();
      }
    }
    else {
      func_0x00010809f278();
      func_0x00010809f280();
      func_0x00010809f244();
      func_0x00010809f334();
    }
    func_0x00010c1d0640(puVar2);
  }
  else {
LAB_10809e650:
    func_0x00010809f278();
    func_0x00010809f280();
    func_0x00010809f334();
    func_0x00010809f264();
    func_0x00010809f244();
  }
LAB_10809e704:
  func_0x00010809f2ec();
  puVar5 = PTR_PTR_1126d91d0;
  _objc_alloc(PTR_PTR_1126d91d0);
  func_0x00010bf51e00(puVar2);
  func_0x00010bff5000(puVar5);
  func_0x00010809f32c();
  func_0x00010809f2bc();
  func_0x00010809f2ec();
  func_0x00010809f2fc();
  _objc_release(param_11);
  _objc_release(param_10);
  func_0x00010809f2f4();
  func_0x00010809f278();
  func_0x00010809f30c();
  func_0x00010809f298();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010809f288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10809eec0; end: 10809f02b;  */

void FUN_10809eec0(void)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  func_0x00010809f3a4(0x10809ef34);
  if (lRam0000000113729108 != -1) {
    func_0x000107c27d9c(0x113729108,&puStack_48);
  }
  uVar1 = uRam0000000113729100;
  func_0x00010809f304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10809f02c; end: 10809f1bf;  */

void FUN_10809f02c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010809f290();
  func_0x00010809f2c4();
  uStack_98 = param_1;
  func_0x00010809f290();
  func_0x00010809f2c4();
  uStack_90 = param_1;
  func_0x00010809f290();
  func_0x00010809f258();
  uStack_88 = param_1;
  func_0x00010809f290();
  func_0x00010809f258();
  uStack_80 = param_1;
  func_0x00010809f290();
  func_0x00010809f2c4();
  uStack_78 = param_1;
  func_0x00010809f290();
  func_0x00010809f258();
  uStack_70 = param_1;
  func_0x00010809f290();
  func_0x00010809f258();
  uStack_68 = param_1;
  func_0x00010809f290();
  func_0x00010809f258();
  puVar4 = &uStack_98;
  puVar5 = (undefined8 *)0x8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113729110;
  puRam0000000113729110 = puVar2;
  func_0x00010809f360(uVar1);
  func_0x00010809f2fc();
  func_0x00010809f2f4();
  func_0x00010809f278();
  func_0x00010809f30c();
  func_0x00010809f288();
  func_0x00010809f298();
  func_0x00010809f270();
  func_0x00010809f2bc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010809f2e4();
  puVar3 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 < puVar3) {
    func_0x00010bf0e4e0(puVar4,param_2,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010809f304();
  }
  func_0x00010809f2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10809f1c0; end: 10809f21f;  */

void FUN_10809f1c0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  func_0x00010809f2e4();
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (param_4 < uVar1) {
    func_0x00010bf0e4e0(param_3,param_2,0,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010809f304();
  }
  func_0x00010809f2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10809f220; end: 10809f3b7;  */

void FUN_10809f220(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000113729120;
  ppuRam0000000113729120 = &PTR__OBJC_CLASS___NSConstantDictionary_111174e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10809f3b8; end: 10809f447;  */

uint FUN_10809f3b8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x19;
  ulong unaff_x20;
  uint uVar3;
  
  FUN_10809ffb0();
  func_0x00010c0d7080();
  if ((unaff_x20 & 1) == 0) {
    lVar1 = unaff_x19;
    func_0x00010c26ca60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x00010c26ca60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_opt_isKindOfClass(unaff_x19,puVar2);
      uVar3 = (uint)unaff_x19 ^ 1;
      func_0x00010809ffd4();
    }
    func_0x00010809ffc4();
  }
  else {
    uVar3 = 1;
  }
  func_0x00010809ffbc();
  return uVar3 & 1;
}



/* Entry: 10809f448; end: 10809f583;  */

void FUN_10809f448(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = lRam0000000113729130;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x113729130,&PTR___NSConcreteGlobalBlock_110a1aee0);
  }
  func_0x00010c16b720(param_1);
  func_0x00010c212f20(param_1);
  func_0x00010c16b720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10809f584; end: 10809f607;  */

bool FUN_10809f584(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10809ffb0();
  func_0x00010809ffec();
  lVar1 = unaff_x19;
  func_0x00010c26c440();
  if (lVar1 != param_3) {
    func_0x00010c26c440();
    if (unaff_x19 == 1) {
      FUN_10809f448();
    }
    else if (unaff_x19 == 0) {
      func_0x00010c212f20();
    }
    func_0x00010c213560();
  }
  func_0x00010809ffc4();
  func_0x00010809ffbc();
  return lVar1 != param_3;
}



/* Entry: 10809f608; end: 10809f6ff;  */

void FUN_10809f608(ulong param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  puVar4 = &uStack_110;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c1cbe20(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_c8;
  uVar6 = 0x10;
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar7 = *plStack_100;
    do {
      uVar6 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(uVar1);
        }
        FUN_10809f608(*(undefined8 *)(lStack_108 + uVar6 * 8));
        uVar6 = uVar6 + 1;
        in_ZR = uVar6 == uVar2;
      } while (uVar6 < uVar2);
      puVar5 = auStack_c8;
      uVar6 = 0x10;
      uVar2 = uVar1;
      puVar4 = &uStack_110;
      func_0x00010bf52a60(uVar1,param_2,&uStack_110,puVar5);
    } while (uVar2 != 0);
  }
  func_0x00010809ffc4();
  func_0x00010809ffbc();
  func_0x0001080a0018(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010809ffb0();
  func_0x00010809ffec();
  func_0x00010809fffc();
  _objc_retain(puVar4);
  uVar2 = uVar1;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809ffdc();
  func_0x00010809fff4();
  uVar3 = param_1;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != uVar2) {
    func_0x00010c19e480(param_1,param_2,uVar2);
    FUN_10809f608(param_1);
  }
  uVar2 = param_1;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar6 != 0) && (uVar2 != uVar6)) {
    func_0x00010c213180(param_1,param_2,uVar6);
  }
  func_0x00010c13ae40(uVar1,param_2,puVar5);
  uVar2 = param_1;
  func_0x00010c26b7a0();
  if (uVar2 != uVar1) {
    func_0x0001080a002c();
    func_0x00010c213040();
    func_0x00010c1cbe20(param_1);
  }
  func_0x00010809ffcc();
  func_0x00010809ffd4();
  func_0x00010809ffc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10809f700; end: 10809f823;  */

void FUN_10809f700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10809ffb0();
  func_0x00010809ffec();
  func_0x00010809fffc();
  _objc_retain(param_3);
  lVar1 = unaff_x20;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809ffdc();
  func_0x00010809fff4();
  lVar2 = unaff_x19;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != lVar1) {
    func_0x00010c19e480();
    FUN_10809f608();
  }
  lVar1 = unaff_x19;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_5 != 0) && (lVar1 != param_5)) {
    func_0x00010c213180();
  }
  func_0x00010c13ae40();
  func_0x00010c26b7a0();
  if (unaff_x19 != unaff_x20) {
    func_0x0001080a002c();
    func_0x00010c213040();
    func_0x00010c1cbe20();
  }
  func_0x00010809ffcc();
  func_0x00010809ffd4();
  func_0x00010809ffc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809f824; end: 10809f99b;  */

void FUN_10809f824(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  int param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x20;
  
  FUN_10809ffb0();
  func_0x00010809ffec();
  func_0x0001080a002c();
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  if (param_6 != 0) {
    func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f340(param_1);
    func_0x00010809fff4();
    if (param_2 != 0) {
      func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44700();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010809ffcc();
      _objc_release(param_1);
      func_0x00010809fff4();
    }
  }
  if ((0 < (long)param_5) && (uVar2 = uVar1, func_0x00010c08fa60(), param_5 < uVar2)) {
    func_0x00010c08fa60();
    func_0x00010c08fa60();
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a002c();
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809ffcc();
    func_0x00010809ffdc();
    uVar1 = unaff_x20;
  }
  func_0x00010809ffc4();
  func_0x00010809ffbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10809f99c; end: 10809fcdf;  */

void FUN_10809f99c(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *unaff_x19;
  undefined *unaff_x20;
  
  FUN_10809ffb0();
  _objc_retain();
  if (param_3 != 0) {
    func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f340();
    func_0x00010809ffd4();
    if (param_2 != 0) {
      unaff_x19 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c0d96e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a002c();
      func_0x00010bf44700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010809ffbc();
      func_0x00010809ffcc();
      func_0x00010809ffe4();
    }
  }
  if ((0 < (long)unaff_x20) && (puVar1 = unaff_x19, func_0x00010c08fa60(), unaff_x20 < puVar1)) {
    func_0x00010c260c80(unaff_x19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809ffd4();
  }
  func_0x00010809ffbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10809fce0; end: 10809fee3;  */

bool FUN_10809fce0(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  FUN_10809ffb0();
  func_0x00010809ffec();
  lVar1 = unaff_x20;
  func_0x00010bf529e0();
  if (lVar1 == 5) {
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010b988f18();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809ffcc();
    _objc_retainAutorelease(unaff_x20);
    func_0x00010bdc0fe0();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    func_0x00010809ffdc();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0004();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(param_1);
    func_0x00010809ffdc();
    func_0x00010809ffcc();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0004();
    uVar5 = (ulong)(uint)(float)param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar5);
    func_0x00010809ffdc();
    func_0x00010809ffcc();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0004();
    uVar6 = uVar5;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(uVar5,uVar6);
    func_0x00010809fff4();
    func_0x00010809ffdc();
  }
  else {
    lVar2 = lVar1;
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c076f00();
    if ((int)lVar3 == 0) goto LAB_10809feb0;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        &PTR____CFConstantStringClassReference_110ed4f18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eeea0(lVar2,param_3,puVar4,4);
  }
  func_0x00010809ffcc();
LAB_10809feb0:
  func_0x00010809ffe4();
  func_0x00010809ffc4();
  func_0x00010809ffbc();
  return lVar1 == 5;
}



/* Entry: 10809fee4; end: 10809ffaf;  */

void FUN_10809fee4(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0);
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0);
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809ffbc();
  func_0x00010c1fe7a0(0,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10809ffb0; end: 1080a0037;  */

void FUN_10809ffb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1080a0038; end: 1080a009b;  */

uint FUN_1080a0038(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x19;
  uint uVar3;
  
  func_0x0001080a0e7c();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class();
  func_0x0001080a0e64();
  lVar1 = unaff_x19;
  if (((ulong)puVar2 & 1) == 0) {
    lVar1 = 0;
  }
  func_0x0001080a0dd8();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c067fc0();
    uVar3 = (uint)unaff_x19 & 1;
  }
  func_0x0001080a0e14();
  func_0x0001080a0de0();
  return uVar3;
}



/* Entry: 1080a009c; end: 1080a01f7;  */

void FUN_1080a009c(undefined *param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x0001080a0e7c();
  func_0x0001080a0dd8();
  func_0x0001080a0e1c();
  if ((param_1 == (undefined *)0x0) || (func_0x0001080a0e1c(), param_1 <= param_2)) {
    if (param_4 == (undefined *)0x0) {
      param_4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001080a0dd8();
    }
  }
  else {
    func_0x0001080a0e98(PTR__NSUnderlineColorAttributeName_110345878);
    func_0x00010bf0dde0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_opt_class();
    func_0x0001080a0e70();
    puVar1 = param_1;
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    func_0x0001080a0df8();
    _objc_release(param_1);
    puVar2 = puVar1;
    FUN_1080a01f8();
    if ((int)puVar2 == 0) {
      func_0x0001080a0e98(PTR__NSForegroundColorAttributeName_1103457f8);
      func_0x00010bf0dde0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      _objc_opt_class();
      func_0x0001080a0e70();
      puVar1 = puVar2;
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      func_0x0001080a0e90();
      _objc_release(puVar2);
      puVar2 = puVar1;
      FUN_1080a01f8();
      if ((int)puVar2 == 0) {
        if (param_4 == (undefined *)0x0) {
          param_4 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x0001080a0dd8();
        }
      }
      else {
        func_0x0001080a0e90();
        param_4 = puVar1;
      }
      func_0x0001080a0e4c();
    }
    else {
      func_0x0001080a0df8();
      param_4 = puVar1;
    }
    func_0x0001080a0e5c();
  }
  func_0x0001080a0e14();
  func_0x0001080a0de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1080a01f8; end: 1080a021f;  */

bool FUN_1080a01f8(double param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 != 0) {
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGColorGetAlpha();
    bVar1 = 0.0 < param_1;
  }
  return bVar1;
}



/* Entry: 1080a0220; end: 1080a0403;  */

void FUN_1080a0220(ulong param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_70;
  
  lVar4 = param_2;
  func_0x0001080a0de8();
  uStack_70 = extraout_x8;
  _objc_retain();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_1080a0404;
  uStack_100 = 0x1080a0414;
  lStack_f8 = 0;
  func_0x0001080a0e1c();
  uVar1 = param_1;
  func_0x00010bf97b00();
  uVar5 = puStack_118[5];
  func_0x0001080a0e90();
  func_0x0001080a0e24();
  lVar3 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(uVar5);
      }
      func_0x00010c11f4c0(*(undefined8 *)(uVar6 * 8));
      uVar2 = param_1;
      func_0x00010c12b3c0();
      if ((int)param_2 != 0) {
        uVar2 = param_1;
        func_0x00010c12b3c0();
      }
      uVar6 = uVar6 + 1;
      in_ZR = uVar6 == uVar1;
    } while (uVar6 < uVar1);
    func_0x0001080a0e24();
    uVar1 = uVar2;
  }
  func_0x0001080a0e4c();
  uVar5 = puStack_118[5];
  func_0x0001080a0dd8();
  func_0x0001080a0e84();
  lVar3 = lStack_f8;
  _objc_release();
  func_0x0001080a0de0();
  func_0x0001080a0db8(uStack_70);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  func_0x0001080a0e84();
  __Unwind_Resume();
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 1080a0404; end: 1080a041b;  */

void FUN_1080a0404(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1080a041c; end: 1080a04d3;  */

void FUN_1080a041c(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_1080a0038();
  if (param_2 != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    if (lVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = puVar1;
      _objc_release(uVar2);
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    }
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1080a04d4; end: 1080a0567;  */

void FUN_1080a04d4(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001080a0de8();
  uStack_28 = extraout_x8;
  func_0x0001080a0e54();
  uVar3 = param_3;
  func_0x00010c079b60();
  if ((uVar3 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
    uVar3 = 0;
  }
  else {
    func_0x00010c0e7b80(param_3);
    uStack_38 = param_1;
    func_0x00010c0e18e0(param_3);
    puVar2 = &uStack_38;
    uVar3 = 2;
    uStack_30 = param_1;
  }
  _CGContextSetLineDash();
  func_0x0001080a0de0();
  func_0x0001080a0db8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080a0e7c();
  func_0x0001080a0dd8();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (((param_5 != 0) && (uVar3 != 0x7fffffffffffffff)) && (func_0x0001080a0e1c(), uVar3 < param_2))
  {
    func_0x0001080a0e1c();
    _NSIntersectionRange(uVar3,param_5,0,param_2);
    if (param_5 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a0dd8();
      func_0x0001080a0df8();
      func_0x00010bf97b00(param_3);
      func_0x0001080a0df8();
      func_0x0001080a0e4c();
      _objc_release(puVar2);
      func_0x0001080a0e5c();
    }
  }
  func_0x0001080a0e14();
  func_0x0001080a0de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080a0568; end: 1080a06e3;  */

void FUN_1080a0568(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  
  func_0x0001080a0e7c();
  func_0x0001080a0dd8();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (((param_4 != 0) && (param_3 != 0x7fffffffffffffff)) &&
     (func_0x0001080a0e1c(), param_3 < param_1)) {
    func_0x0001080a0e1c();
    _NSIntersectionRange(param_3,param_4,0,param_1);
    if (param_4 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a0dd8();
      func_0x0001080a0df8();
      func_0x00010bf97b00();
      func_0x0001080a0df8();
      func_0x0001080a0e4c();
      _objc_release(param_2);
      func_0x0001080a0e5c();
    }
  }
  func_0x0001080a0e14();
  func_0x0001080a0de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080a06e4; end: 1080a082b;  */

void FUN_1080a06e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x0001080a0e54();
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_opt_class();
  func_0x0001080a0e64();
  if (((ulong)puVar1 & 1) == 0) {
    param_2 = 0;
  }
  func_0x0001080a0dd8();
  lVar3 = *(long *)(param_1 + 0x38);
  _NSIntersectionRange(*(undefined8 *)(param_1 + 0x30),lVar3,param_3,param_4);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfcd240();
    if (*(char *)(param_1 + 0x70) == '\x01') {
      _NSIntersectionRange
                (uVar2,lVar3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    }
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      func_0x0001080a0dd8();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x0001080a0df8();
      func_0x00010bf97d80(uVar4);
      _objc_release(uVar2);
      _objc_release(param_2);
      _objc_release(uVar4);
    }
  }
  func_0x0001080a0e14();
  func_0x0001080a0de0();
  return;
}



/* Entry: 1080a082c; end: 1080a097f;  */

void FUN_1080a082c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = param_2;
  func_0x0001080a0e54();
  lVar2 = *(long *)(param_5 + 0x40);
  _NSIntersectionRange(*(undefined8 *)(param_5 + 0x38),lVar2,param_7,param_8);
  if (lVar2 != 0) {
    uVar1 = *(ulong *)(param_5 + 0x20);
    func_0x00010bf20b60();
    func_0x0001080a0e00();
    if ((uVar1 & 1) == 0) {
      func_0x00010c09ee80(*(undefined8 *)(param_5 + 0x20));
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      dVar4 = param_1 + dVar4;
      if (*(long *)(param_5 + 0x28) == 0) {
        param_1 = 0.0;
      }
      else {
        func_0x00010bf6e320();
        param_1 = param_1 * -0.5;
      }
      dVar5 = *(double *)(param_5 + 0x48);
      param_1 = param_1 + dVar4 + *(double *)(param_5 + 0x50);
      dVar6 = *(double *)(param_5 + 0x58) + param_1;
      func_0x0001080a0da4();
      _CGRectGetMinX();
      dVar4 = *(double *)(param_5 + 0x60) * -0.5;
      dVar6 = dVar6 + dVar4;
      func_0x0001080a0da4();
      _CGRectGetWidth();
      uVar3 = *(undefined8 *)(param_5 + 0x30);
      func_0x00010c2971a0(dVar5 + param_1,dVar6,dVar4,*(undefined8 *)(param_5 + 0x60),
                          PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      func_0x0001080a0e5c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1080a0980; end: 1080a0a93;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001080a0a24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1080a0980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 uStack_180;
  undefined *puStack_178;
  
  uVar2 = param_5;
  func_0x0001080a0de8();
  func_0x0001080a0e54();
  uVar7 = 0;
  uVar9 = 0;
  uVar11 = 0;
  uVar13 = 0;
  uVar15 = 0;
  uVar17 = 0;
  uVar19 = 0;
  uVar21 = 0;
  func_0x0001080a0e38();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar3 = *(ulong *)(uVar6 * 8);
      func_0x00010bdc1080();
      func_0x0001080a0e00();
      if ((uVar3 & 1) == 0) {
        func_0x0001080a0da4();
        _CGRectGetMidY();
        param_2 = CONCAT17(uVar21,CONCAT16(uVar19,CONCAT15(uVar17,CONCAT14(uVar15,CONCAT13(uVar13,
                                                  CONCAT12(uVar11,CONCAT11(uVar9,uVar7)))))));
        func_0x0001080a0da4();
        _CGRectGetMinX();
        _CGContextMoveToPoint
                  (CONCAT17(uVar22,CONCAT16(uVar20,CONCAT15(uVar18,CONCAT14(uVar16,CONCAT13(uVar14,
                                                  CONCAT12(uVar12,CONCAT11(uVar10,uVar8))))))),
                   param_2,param_5);
        uVar22 = uVar21;
        uVar20 = uVar19;
        uVar18 = uVar17;
        uVar16 = uVar15;
        uVar14 = uVar13;
        uVar12 = uVar11;
        uVar10 = uVar9;
        uVar8 = uVar7;
        uVar7 = uVar8;
        uVar9 = uVar10;
        uVar11 = uVar12;
        uVar13 = uVar14;
        uVar15 = uVar16;
        uVar17 = uVar18;
        uVar19 = uVar20;
        uVar21 = uVar22;
        func_0x0001080a0da4();
        _CGRectGetMaxX();
        _CGContextAddLineToPoint(param_5);
        uVar3 = param_5;
        _CGContextStrokePath();
      }
      uVar6 = uVar6 + 1;
      in_ZR = uVar6 == uVar2;
    } while (uVar6 < uVar2);
    func_0x0001080a0e38();
    uVar2 = uVar3;
  }
  uVar4 = 0;
  func_0x0001080a0de0();
  func_0x0001080a0db8(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_180;
  puStack_178 = PTR_PTR_1126fc580;
  uStack_180 = uVar4;
  _objc_msgSendSuper2(&uStack_180,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    *(ulong *)((long)puVar5 + 8) =
         CONCAT17(uVar21,CONCAT16(uVar19,CONCAT15(uVar17,CONCAT14(uVar15,CONCAT13(uVar13,CONCAT12(
                                                  uVar11,CONCAT11(uVar9,uVar7)))))));
    *(undefined8 *)((long)puVar5 + 0x10) = param_2;
    *(undefined8 *)((long)puVar5 + 0x18) = param_3;
    *(undefined8 *)((long)puVar5 + 0x20) = param_4;
  }
  return;
}



/* Entry: 1080a0a94; end: 1080a0af3; -[SCValdiCustomUnderlineStyle initWithHeight:onWidth:offWidth:offset:] */

void FUN_1080a0a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fc580;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 1080a0af4; end: 1080a0b17; -[SCValdiCustomUnderlineStyle isPatterned] */

bool FUN_1080a0af4(long param_1)

{
  if (0.0 < *(double *)(param_1 + 0x10)) {
    return 0.0 < *(double *)(param_1 + 0x18);
  }
  return false;
}



/* Entry: 1080a0b18; end: 1080a0c53; +[SCValdiCustomUnderlineStyle styleWithString:error:] */

/* WARNING: Removing unreachable block (ram,0x0001080a0bcc) */
/* WARNING: Removing unreachable block (ram,0x0001080a0bd0) */
/* WARNING: Removing unreachable block (ram,0x0001080a0bd4) */
/* WARNING: Removing unreachable block (ram,0x0001080a0bd8) */
/* WARNING: Removing unreachable block (ram,0x0001080a0bdc) */
/* WARNING: Removing unreachable block (ram,0x0001080a0be4) */
/* WARNING: Removing unreachable block (ram,0x0001080a0be8) */
/* WARNING: Removing unreachable block (ram,0x0001080a0c38) */
/* WARNING: Removing unreachable block (ram,0x0001080a0bec) */
/* WARNING: Removing unreachable block (ram,0x0001080a0bf0) */

void FUN_1080a0b18(void)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *in_x3;
  
  if (in_x3 != (undefined8 *)0x0) {
    *in_x3 = 0;
  }
  puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x00010c14f820();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)puVar2;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ace0();
  func_0x0001080a0e4c();
  func_0x0001080a0dcc();
  if ((((iVar1 != 0) && (func_0x0001080a0dcc(), iVar1 != 0)) && (func_0x0001080a0dcc(), iVar1 != 0))
     && (func_0x0001080a0dcc(), iVar1 != 0)) {
    func_0x00010c06c740();
    if (((ulong)puVar2 & 1) == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ed4f58;
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ed4f78;
    }
    FUN_1080a0cbc(in_x3,ppuVar3);
  }
  func_0x0001080a0de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1080a0c54; end: 1080a0cbb;  */

undefined8 FUN_1080a0c54(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  func_0x00010c14eba0(param_1,param_2,param_2);
  if ((int)param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed4fb8;
  }
  else {
    if ((*param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      return 1;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed4fd8;
  }
  FUN_1080a0cbc(param_3,ppuVar1);
  return 0;
}



/* Entry: 1080a0cbc; end: 1080a0d83;  */

undefined8 FUN_1080a0cbc(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  
  func_0x0001080a0de8();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar3 = (undefined *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    func_0x0001080a0e54();
    func_0x00010bf72080(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0e14();
    puVar3 = puVar2;
    _objc_autorelease();
    *param_2 = puVar2;
    func_0x0001080a0e4c();
  }
  func_0x0001080a0db8(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(undefined8 *)(puVar3 + 8);
}



/* Entry: 1080a0d84; end: 1080a0d8b; -[SCValdiCustomUnderlineStyle height] */

undefined8 FUN_1080a0d84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a0d8c; end: 1080a0d93; -[SCValdiCustomUnderlineStyle onWidth] */

undefined8 FUN_1080a0d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a0d94; end: 1080a0d9b; -[SCValdiCustomUnderlineStyle offWidth] */

undefined8 FUN_1080a0d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080a0d9c; end: 1080a0eab; -[SCValdiCustomUnderlineStyle offset] */

undefined8 FUN_1080a0d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1080a0eac; end: 1080a0f53; -[SCValdiFont initWithFont:fontManager:] */

long FUN_1080a0eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001080a1764();
  func_0x0001080a173c();
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x0001080a175c();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)PTR__UIFontTextStyleBody_110345bd8;
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    func_0x0001080a173c();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_4;
    _objc_release(uVar1);
  }
  func_0x0001080a174c();
  func_0x0001080a1744();
  return param_1;
}



/* Entry: 1080a0f54; end: 1080a100f; -[SCValdiFont initWithFont:textStyle:maxSize:fontManager:] */

long FUN_1080a0f54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x0001080a1764();
  func_0x0001080a173c();
  _objc_retain(param_6);
  func_0x00010bfee200();
  if (param_2 != 0) {
    func_0x0001080a175c();
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = param_4;
    _objc_release(uVar1);
    func_0x0001080a173c();
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = param_5;
    _objc_release(uVar1);
    *(undefined8 *)(param_2 + 0x18) = param_1;
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = param_6;
    _objc_release(uVar1);
  }
  func_0x0001080a1784();
  func_0x0001080a174c();
  func_0x0001080a1744();
  return param_2;
}



/* Entry: 1080a1010; end: 1080a1033; -[SCValdiFont fontManager] */

void FUN_1080a1010(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001080a175c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080a1034; end: 1080a12b7; -[SCValdiFont resolveFontFromTraitCollection:] */

void FUN_1080a1034(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *unaff_x24;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  func_0x0001080a1764();
  if (param_4 == (undefined *)0x0) {
    param_4 = *(undefined **)(param_2 + 0x30);
    func_0x00010bf6a880();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080a175c();
  _objc_sync_enter(param_2);
  if ((param_4 == *(undefined **)(param_2 + 0x28)) &&
     (unaff_x24 = *(undefined **)(param_2 + 0x20), unaff_x24 != (undefined *)0x0)) {
    func_0x0001080a1794();
  }
  else {
    if ((*(long *)(param_2 + 8) == 0) || (puVar8 = (undefined *)0x0, *(long *)(param_2 + 0x10) == 0)
       ) {
      bVar1 = true;
      goto LAB_1080a123c;
    }
    puVar3 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
    func_0x00010c0ccd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a173c();
    puVar8 = *(undefined **)(param_2 + 8);
    _objc_retain(puVar8);
    iVar2 = (int)*(undefined8 *)(param_2 + 0x30);
    func_0x00010c22e720();
    param_5 = param_4;
    if (iVar2 != 0) {
      puVar4 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
      func_0x00010c279600(PTR__OBJC_CLASS___UITraitCollection_1126b6d80,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      param_5 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_68 = param_4;
      puStack_60 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_68,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c279660(param_5,param_3,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a174c();
      func_0x0001080a1774();
      puVar4 = param_4;
      func_0x00010c08f9e0();
      if (puVar4 == (undefined *)0x1) {
        puVar8 = *(undefined **)(param_2 + 0x30);
        uVar6 = *(undefined8 *)(param_2 + 8);
        func_0x00010bfb3f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c102de0(*(undefined8 *)(param_2 + 8));
        func_0x00010bfb4180(puVar8,param_3,uVar6,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080a1754();
        func_0x0001080a1774();
      }
      func_0x0001080a178c();
    }
    param_1 = *(double *)(param_2 + 0x18);
    if (param_1 <= 0.0) {
      func_0x00010c14e5e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c14e620();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = (undefined8 *)(param_2 + 0x20);
    uVar6 = *puVar9;
    *puVar9 = puVar3;
    _objc_release(uVar6);
    func_0x0001080a173c();
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    *(undefined **)(param_2 + 0x28) = param_4;
    _objc_release(uVar6);
    unaff_x24 = (undefined *)*puVar9;
    func_0x0001080a1794();
    func_0x0001080a1754();
    func_0x0001080a177c();
    func_0x0001080a1784();
  }
  bVar1 = false;
LAB_1080a123c:
  lVar7 = param_2;
  _objc_sync_exit();
  func_0x0001080a1744();
  if (bVar1) {
    unaff_x24 = *(undefined **)(param_2 + 8);
    func_0x0001080a1794();
  }
  func_0x0001080a174c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_sync_exit(param_2);
    __Unwind_Resume(lVar7);
    func_0x0001080a1764();
    func_0x0001080a173c();
    if (puVar8 == (undefined *)0x0) {
      unaff_x24 = PTR_PTR_1126d9238;
      _objc_alloc(PTR_PTR_1126d9238);
      puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c087620(PTR__OBJC_CLASS___UIFont_1126aec38);
      func_0x00010c266f40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c013a60(unaff_x24,param_3,puVar8,param_5);
    }
    else {
      puVar3 = puVar8;
      func_0x00010bf44740(puVar8,param_3,&PTR____CFConstantStringClassReference_110db2d98);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      if (puVar4 < (undefined *)0x2) {
        puVar3 = PTR_PTR_1126d9238;
        func_0x00010bfb40e0(PTR_PTR_1126d9238,param_3,puVar8);
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          func_0x00010b96bf1c();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          func_0x00010c076f00();
          if ((int)puVar8 != 0) {
            puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                                &PTR____CFConstantStringClassReference_110ed4ff8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0eeea0(puVar3,param_3,puVar8,4);
            func_0x0001080a1754();
          }
          unaff_x24 = (undefined *)0x0;
        }
        else {
          unaff_x24 = PTR_PTR_1126d9238;
          _objc_alloc(PTR_PTR_1126d9238);
          puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010c106a80(PTR__OBJC_CLASS___UIFont_1126aec38,param_3,puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c013a60(unaff_x24,param_3,puVar8,param_5);
        }
      }
      else {
        puVar4 = puVar3;
        func_0x00010c0dfd40(puVar3,param_3,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40(puVar3,param_3,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar10 = param_1;
        func_0x0001080a177c();
        puVar5 = puVar3;
        func_0x00010bf529e0();
        puVar8 = PTR_PTR_1126d9238;
        if ((undefined *)0x2 < puVar5) {
          puVar5 = puVar3;
          func_0x00010c0dfd40(puVar3,param_3,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb40e0(puVar8,param_3,puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080a178c();
        }
        puVar8 = puVar3;
        func_0x00010bf529e0();
        dVar11 = 0.0;
        if ((undefined *)0x3 < puVar8) {
          func_0x00010c0dfd40(puVar3,param_3,3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          func_0x0001080a178c();
          dVar11 = dVar10;
        }
        func_0x00010bfb4180(param_1,param_5,param_3,puVar4,0);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = PTR_PTR_1126d9238;
        _objc_alloc(PTR_PTR_1126d9238);
        func_0x00010c013ae0(dVar11);
        func_0x0001080a1774();
      }
      func_0x0001080a177c();
      func_0x0001080a1754();
    }
    func_0x0001080a1784();
    func_0x0001080a174c();
    func_0x0001080a1744();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x24);
  return;
}



/* Entry: 1080a12b8; end: 1080a1553; +[SCValdiFont fontFromValdiAttribute:fontManager:] */

void FUN_1080a12b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x0001080a1764();
  func_0x0001080a173c();
  if (param_4 == 0) {
    puVar6 = PTR_PTR_1126d9238;
    _objc_alloc(PTR_PTR_1126d9238);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c087620(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x00010c266f40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c013a60(puVar6,param_3,puVar4,param_5);
  }
  else {
    uVar1 = param_4;
    func_0x00010bf44740(param_4,param_3,&PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 < 2) {
      puVar4 = PTR_PTR_1126d9238;
      func_0x00010bfb40e0(PTR_PTR_1126d9238,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        func_0x00010b96bf1c();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c076f00();
        if ((int)puVar6 != 0) {
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                              &PTR____CFConstantStringClassReference_110ed4ff8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0eeea0(puVar4,param_3,puVar6,4);
          func_0x0001080a1754();
        }
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR_PTR_1126d9238;
        _objc_alloc(PTR_PTR_1126d9238);
        puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c106a80(PTR__OBJC_CLASS___UIFont_1126aec38,param_3,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c013a60(puVar6,param_3,puVar3,param_5);
      }
    }
    else {
      uVar2 = uVar1;
      func_0x00010c0dfd40(uVar1,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40(uVar1,param_3,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar7 = param_1;
      func_0x0001080a177c();
      uVar5 = uVar1;
      func_0x00010bf529e0();
      puVar4 = PTR_PTR_1126d9238;
      if (2 < uVar5) {
        uVar5 = uVar1;
        func_0x00010c0dfd40(uVar1,param_3,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb40e0(puVar4,param_3,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080a178c();
      }
      uVar5 = uVar1;
      func_0x00010bf529e0();
      uVar8 = 0;
      if (3 < uVar5) {
        func_0x00010c0dfd40(uVar1,param_3,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x0001080a178c();
        uVar8 = uVar7;
      }
      func_0x00010bfb4180(param_1,param_5,param_3,uVar2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126d9238;
      _objc_alloc(PTR_PTR_1126d9238);
      func_0x00010c013ae0(uVar8);
      func_0x0001080a1774();
    }
    func_0x0001080a177c();
    func_0x0001080a1754();
  }
  func_0x0001080a1784();
  func_0x0001080a174c();
  func_0x0001080a1744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1080a1554; end: 1080a16ef; +[SCValdiFont fontTextStyleFromString:] */

void FUN_1080a1554(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)PTR__UIFontTextStyleBody_110345bd8;
    func_0x0001080a173c();
  }
  else {
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    puVar1 = (undefined8 *)PTR__UIFontTextStyleBody_110345bd8;
    if ((((((param_3 & 1) == 0) &&
          (func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleCallout_110345be0,
          (param_3 & 1) == 0)) &&
         (func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleCaption1_110345be8,
         (param_3 & 1) == 0)) &&
        ((((func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleCaption2_110345bf0,
           (param_3 & 1) == 0 &&
           (func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleFootnote_110345bf8,
           (param_3 & 1) == 0)) &&
          ((func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleHeadline_110345c00,
           (param_3 & 1) == 0 &&
           ((func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleSubheadline_110345c10
            , (param_3 & 1) == 0 &&
            (func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleLargeTitle_110345c08,
            (param_3 & 1) == 0)))))) &&
         (func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleTitle1_110345c18,
         (param_3 & 1) == 0)))) &&
       (((func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleTitle2_110345c20,
         (param_3 & 1) == 0 &&
         (func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleTitle3_110345c28,
         (param_3 & 1) == 0)) &&
        (func_0x0001080a1734(), puVar1 = (undefined8 *)PTR__UIFontTextStyleBody_110345bd8,
        (param_3 & 1) != 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
      func_0x0001080a173c();
    }
    func_0x0001080a1744();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1080a16f0; end: 1080a1733; -[SCValdiFont .cxx_destruct] */

void FUN_1080a16f0(long param_1)

{
  func_0x0001080a176c(param_1 + 0x30);
  func_0x0001080a176c(param_1 + 0x28);
  func_0x0001080a176c(param_1 + 0x20);
  func_0x0001080a176c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a1734; end: 1080a179b;  */

void FUN_1080a1734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080a179c; end: 1080a1887; -[SCValdiFontAttributes initWithAttributes:font:color:textAligment:numberOfLines:lineBreakMode:needAttributedString:] */

long FUN_1080a179c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x0001080a1fc0();
  func_0x0001080a1fb8();
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x0001080a1ff0();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
    func_0x0001080a1fc0();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_4;
    _objc_release(uVar1);
    func_0x0001080a1fb8();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_5;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 8) = param_6;
    *(undefined1 *)(param_1 + 0x38) = param_9;
    *(undefined8 *)(param_1 + 0x50) = param_7;
    *(undefined8 *)(param_1 + 0x58) = param_8;
  }
  func_0x0001080a1fe0();
  func_0x0001080a1f9c();
  func_0x0001080a1fd8();
  return param_1;
}



/* Entry: 1080a1888; end: 1080a18ab; -[SCValdiFontAttributes resolveTextAlignmentWithIsRightToLeft:] */

long FUN_1080a1888(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (param_3 != 0) {
    if (lVar1 == 2) {
      return 0;
    }
    if (lVar1 == 0) {
      lVar1 = 2;
    }
  }
  return lVar1;
}



/* Entry: 1080a18ac; end: 1080a1a1f; -[SCValdiFontAttributes buildAttributesWithIsRightToLeft:traitCollection:] */

void FUN_1080a18ac(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0d3c80();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 0) && (uVar2 != 0)) {
    func_0x00010c0d3c80();
    func_0x00010beffa20();
    func_0x00010c166c00(uVar2);
    func_0x00010c1d0640(uVar1);
    func_0x0001080a1fc8();
  }
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_opt_class(PTR__OBJC_CLASS___UIFont_1126aec38);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  func_0x0001080a1fe8();
  if ((uVar2 == 0) && (*(long *)(param_1 + 0x40) != 0)) {
    func_0x00010c13a900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1);
  }
  func_0x00010bf08660(PTR_PTR_1126d91d0);
  func_0x00010bf51e00(uVar1);
  func_0x0001080a1fe8();
  func_0x0001080a1fe0();
  func_0x0001080a1f9c();
  func_0x0001080a1fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080a1a20; end: 1080a1ca7; +[SCValdiFontAttributes applyLineHeightInAttributes:font:] */

void FUN_1080a1a20(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  
  _objc_retain(param_4);
  func_0x0001080a1fc0();
  puVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  func_0x0001080a1fb8();
  _objc_release(puVar1);
  puVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  func_0x0001080a1fd0();
  if ((param_5 == 0) || (puVar2 == (undefined *)0x0 && puVar1 == (undefined *)0x0))
  goto LAB_1080a1c74;
  puVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  _objc_opt_class(PTR__OBJC_CLASS___NSParagraphStyle_1126af948);
  puVar6 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar4);
  puVar4 = puVar5;
  if (((ulong)puVar6 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  func_0x0001080a1fc8();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
  }
  else {
    func_0x00010c0d3c80(puVar5);
  }
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf885a0(puVar2);
    if (0.0 < param_1) {
      func_0x00010c1c82e0(0,puVar5);
      func_0x00010c1c3ba0(0,puVar5);
      func_0x00010c1bdc00(param_1,puVar5);
      func_0x00010bf51e00(puVar5);
      func_0x0001080a1fa4();
      func_0x0001080a1fd0();
LAB_1080a1c58:
      func_0x00010c12d3e0(param_4);
    }
  }
  else {
    func_0x00010bf885a0(puVar3);
    if (0.0 < param_1) {
      func_0x00010c1bdc00(0,puVar5);
      func_0x00010c1c82e0(param_1,puVar5);
      dVar7 = param_1;
      func_0x00010c1c3ba0(puVar5);
      func_0x00010bf51e00(puVar5);
      func_0x0001080a1fa4();
      func_0x0001080a1fd0();
      func_0x00010c099280(param_5);
      if (ABS((param_1 - dVar7) * 0.5) <= 0.001) goto LAB_1080a1c58;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar2);
    }
  }
  func_0x0001080a1fc8();
  func_0x0001080a1fe8();
LAB_1080a1c74:
  _objc_release(puVar1);
  func_0x0001080a1fe0();
  func_0x0001080a1f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080a1ca8; end: 1080a1dbb; -[SCValdiFontAttributes resolveAttributesWithIsRightToLeft:traitCollection:] */

void FUN_1080a1ca8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x0001080a1fc0();
  _objc_sync_enter(param_1);
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if ((lVar2 == 0) || (param_4 != *(long *)(param_1 + 0x28))) {
      func_0x0001080a1ff0();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = param_4;
      _objc_release(uVar1);
      lVar2 = param_1;
      func_0x00010bf22040(param_1,param_2,0,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar2;
      _objc_release(uVar1);
      lVar2 = *(long *)(param_1 + 0x18);
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    if ((lVar2 == 0) || (param_4 != *(long *)(param_1 + 0x30))) {
      func_0x0001080a1ff0();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = param_4;
      _objc_release(uVar1);
      lVar2 = param_1;
      func_0x00010bf22040(param_1,param_2,1,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar2;
      _objc_release(uVar1);
      lVar2 = *(long *)(param_1 + 0x20);
    }
  }
  func_0x0001080a1fb8();
  _objc_sync_exit(param_1);
  func_0x0001080a1f9c();
  func_0x0001080a1fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1080a1dbc; end: 1080a1f17; -[SCValdiFontAttributes debugDescription] */

void FUN_1080a1dbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c0def20(param_1);
  func_0x00010c0df780(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c099180(param_1);
  func_0x00010c0df780(puVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0d7080(param_1);
  func_0x00010c0df6e0(puVar3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110ed51b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x0001080a1fd0();
  _objc_release(puVar2);
  func_0x0001080a1fc8();
  func_0x0001080a1f9c();
  func_0x0001080a1fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1080a1f18; end: 1080a1f1f; -[SCValdiFontAttributes font] */

undefined8 FUN_1080a1f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1080a1f20; end: 1080a1f27; -[SCValdiFontAttributes color] */

undefined8 FUN_1080a1f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1080a1f28; end: 1080a1f2f; -[SCValdiFontAttributes numberOfLines] */

undefined8 FUN_1080a1f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1080a1f30; end: 1080a1f37; -[SCValdiFontAttributes lineBreakMode] */

undefined8 FUN_1080a1f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1080a1f38; end: 1080a1f3f; -[SCValdiFontAttributes needAttributedString] */

undefined1 FUN_1080a1f38(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 1080a1f40; end: 1080a1f93; -[SCValdiFontAttributes .cxx_destruct] */

void FUN_1080a1f40(long param_1)

{
  FUN_1080a1f94(param_1 + 0x48);
  FUN_1080a1f94(param_1 + 0x40);
  FUN_1080a1f94(param_1 + 0x30);
  FUN_1080a1f94(param_1 + 0x28);
  FUN_1080a1f94(param_1 + 0x20);
  FUN_1080a1f94(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1080a1f94; end: 1080a1ff7;  */

void FUN_1080a1f94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1080a1ff8; end: 1080a21df; -[SCValdiFontManager _lockFreeRegisterFontWithFontName:data:error:] */

ulong FUN_1080a1ff8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   undefined8 *param_5)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001080a2ab4();
  _CGDataProviderCreateWithCFData();
  if (param_4 == 0) {
LAB_1080a20f8:
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar5;
  }
  else {
    uVar1 = param_4;
    _CGFontCreateWithDataProvider();
    if (uVar1 == 0) {
      _CGDataProviderRelease(param_4);
      goto LAB_1080a20f8;
    }
    uVar7 = uVar1;
    _CGFontCopyFullName();
    puStack_70 = (undefined *)0x0;
    uVar2 = uVar1;
    _CTFontManagerRegisterGraphicsFont(uVar1,&puStack_70);
    _CFRelease(uVar1);
    _CGDataProviderRelease(param_4);
    puVar5 = puStack_70;
    if ((uVar2 & 1) != 0) {
LAB_1080a20ac:
      puVar3 = *(undefined **)(param_1 + 0x20);
      if (puVar3 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        *(undefined **)(param_1 + 0x20) = puVar5;
        func_0x0001080a2b3c(uVar6);
        puVar3 = *(undefined **)(param_1 + 0x20);
      }
      func_0x00010c1d0640(puVar3);
      func_0x0001080a2b04();
      goto LAB_1080a2198;
    }
    puVar4 = puStack_70;
    func_0x00010bf3ec40();
    in_ZR = true;
    if (puVar4 == (undefined *)0x69) {
LAB_1080a20a8:
      func_0x0001080a2ad0();
      goto LAB_1080a20ac;
    }
    puVar4 = puVar5;
    func_0x00010bf3ec40();
    in_ZR = puVar4 == (undefined *)0x131;
    if ((bool)in_ZR) goto LAB_1080a20a8;
    puVar3 = puVar5;
    _objc_retainAutorelease(puVar5);
    *param_5 = puVar5;
  }
  _objc_release();
  uVar7 = 0;
LAB_1080a2198:
  func_0x0001080a2ae0();
  func_0x0001080a2aac();
  func_0x0001080a2b88(uStack_58);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x0001080a2ab4();
  func_0x0001080a2b04();
  _objc_retain(puVar3);
  _objc_sync_enter(puVar3);
  puVar5 = puVar3;
  func_0x00010be4f920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_sync_exit(puVar3);
  func_0x0001080a2abc();
  func_0x0001080a2ae0();
  func_0x0001080a2aac();
  return (ulong)(puVar5 != (undefined *)0x0);
}



/* Entry: 1080a21e0; end: 1080a227b; -[SCValdiFontManager registerFontWithFontName:data:error:] */

bool FUN_1080a21e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  func_0x0001080a2ab4();
  func_0x0001080a2b04();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010be4f920(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_sync_exit(param_1);
  func_0x0001080a2abc();
  func_0x0001080a2ae0();
  func_0x0001080a2aac();
  return lVar1 != 0;
}



/* Entry: 1080a227c; end: 1080a2463; -[SCValdiFontManager _lockFreeModuleFontWithName:fontSize:] */

void FUN_1080a227c(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *unaff_x20;
  undefined *unaff_x22;
  ulong uVar7;
  undefined8 unaff_x25;
  ulong uVar8;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001080a2ab4();
  puVar2 = *(undefined **)(param_2 + 0x20);
  func_0x00010c0e00e0(puVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010c11f420(param_4,param_3,&PTR____CFConstantStringClassReference_110db3eb8);
    unaff_x20 = param_4;
    func_0x00010c260c80(param_4,param_3,0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_4;
    func_0x00010c260c00(param_4,param_3,puVar2 + 1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uVar7 = *(ulong *)(param_2 + 0x18);
    uVar3 = uVar7;
    _objc_retain();
    func_0x0001080a2af0();
    if (uVar3 != 0) {
      lVar6 = *plStack_130;
      do {
        uVar8 = 0;
        do {
          in_ZR = *plStack_130 == lVar6;
          if (!(bool)in_ZR) {
            _objc_enumerationMutation(uVar7);
          }
          uVar4 = *(ulong *)(lStack_138 + uVar8 * 8);
          func_0x00010bfb3cc0(uVar4,param_3,unaff_x20,unaff_x22);
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 != 0) {
            uStack_148 = 0;
            puVar2 = param_2;
            func_0x00010be4f920(param_2,param_3,param_4,uVar4,&uStack_148);
            _objc_retainAutoreleasedReturnValue();
            if (puVar2 != (undefined *)0x0) {
              func_0x0001080a2b1c();
              func_0x00010bfb41a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
              goto LAB_1080a2410;
            }
            _objc_release();
          }
          uVar8 = uVar8 + 1;
          in_ZR = uVar8 == uVar3;
        } while (uVar8 < uVar3);
        func_0x0001080a2af0();
        uVar3 = uVar4;
      } while (uVar4 != 0);
    }
    unaff_x25 = 0;
    puVar2 = (undefined *)0x0;
LAB_1080a2410:
    func_0x0001080a2ad0();
    _objc_release(unaff_x22);
    func_0x0001080a2ae0();
  }
  else {
    func_0x0001080a2b1c();
    func_0x00010bfb41a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(unaff_x25);
  func_0x0001080a2aac();
  func_0x0001080a2b88(uStack_80);
  if ((bool)in_ZR) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x0001080a2a8c();
  func_0x0001080a2b34();
  func_0x0001080a2ad8();
  func_0x00010bf4bb00(unaff_x20,param_3,&PTR____CFConstantStringClassReference_110db3eb8);
  if ((int)unaff_x20 == 0) {
    func_0x0001080a2aa4();
    if ((int)unaff_x20 == 0) {
      func_0x0001080a2aa4();
      if ((int)unaff_x20 == 0) {
        func_0x0001080a2aa4();
        if ((int)unaff_x20 == 0) {
          func_0x0001080a2aa4();
          if ((((ulong)unaff_x20 & 1) == 0) && (func_0x0001080a2aa4(), (int)unaff_x20 == 0)) {
            func_0x0001080a2aa4();
            if ((int)unaff_x20 == 0) {
              func_0x0001080a2aa4();
              if ((int)unaff_x20 == 0) {
                func_0x0001080a2aa4();
                iVar1 = (int)unaff_x20;
                if ((((ulong)unaff_x20 & 1) != 0) || (func_0x0001080a2aa4(), iVar1 != 0)) {
                  func_0x0001080a2b74();
                  func_0x00010c266f60(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfb3ce0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfb3d60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0001080a2ac4();
                  func_0x0001080a2abc();
                  unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                  func_0x00010bfb4160(param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,unaff_x22);
                  _objc_retainAutoreleasedReturnValue();
                  if (unaff_x20 == (undefined *)0x0) {
                    unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                    func_0x00010c084040(param_1);
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_1080a2708;
                  }
LAB_1080a26e4:
                  _objc_retain(unaff_x20);
                  goto LAB_1080a2714;
                }
                func_0x0001080a2aa4();
                if (iVar1 != 0) {
                  func_0x00010bf1eda0(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfb3ce0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfb3d60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0001080a2ac4();
                  func_0x0001080a2abc();
                  unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                  func_0x00010bfb4160(param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,unaff_x22);
                  _objc_retainAutoreleasedReturnValue();
                  if (unaff_x20 == (undefined *)0x0) {
                    unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                    func_0x00010bf1eda0(param_1);
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_1080a2708;
                  }
                  goto LAB_1080a26e4;
                }
                unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
                func_0x0001080a2b54();
                func_0x00010bfb41a0();
                _objc_retainAutoreleasedReturnValue();
                if ((unaff_x22 == (undefined *)0x0) || (lVar6 = *(long *)(param_4 + 8), lVar6 == 0))
                {
LAB_1080a2814:
                  _objc_retain(unaff_x22);
                  unaff_x20 = unaff_x22;
                }
                else {
                  func_0x00010c22e720();
                  unaff_x20 = *(undefined **)(param_4 + 8);
                  if ((int)lVar6 == 0) {
                    func_0x0001080a2b54();
                    func_0x00010c09b540();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    func_0x0001080a2b54();
                    func_0x00010c09b560();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  if (unaff_x20 == (undefined *)0x0) goto LAB_1080a2814;
                }
              }
              else {
                func_0x0001080a2b60();
                func_0x00010c266f60(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3ce0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3d60();
                _objc_retainAutoreleasedReturnValue();
                func_0x0001080a2ac4();
                func_0x0001080a2abc();
                unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                func_0x00010bfb4160(param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,unaff_x22);
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x20 != (undefined *)0x0) goto LAB_1080a26e4;
                unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                func_0x00010c084040(param_1);
                _objc_retainAutoreleasedReturnValue();
LAB_1080a2708:
                _objc_retain();
                func_0x0001080a2abc();
LAB_1080a2714:
                func_0x0001080a2ad0();
              }
              _objc_release(unaff_x22);
              puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
            }
            else {
              unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
              func_0x00010c084040(param_1);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
            }
          }
          else {
            func_0x0001080a2b74();
            func_0x00010c266f60(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
          }
        }
        else {
          unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf1eda0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
        }
      }
      else {
        func_0x0001080a2b60();
        func_0x00010c266f60(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
      }
    }
    else {
      unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c266f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    }
    puVar2 = unaff_x20;
    PTR__OBJC_CLASS___UIFont_1126aec38 = puVar5;
    if (unaff_x20 == (undefined *)0x0) {
      func_0x00010c266f40(param_1,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
    }
  }
  else {
    func_0x0001080a2b54(param_4);
    func_0x00010be4f900();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
  }
  func_0x0001080a2a9c();
  func_0x0001080a2aac();
  func_0x0001080a2ae0();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080a2464; end: 1080a283f; -[SCValdiFontManager fontWithName:fontSize:legibilityWeight:] */

void FUN_1080a2464(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x22;
  
  func_0x0001080a2a8c();
  func_0x0001080a2b34();
  func_0x0001080a2ad8();
  func_0x00010bf4bb00();
  if ((int)unaff_x20 != 0) {
    func_0x0001080a2b54();
    func_0x00010be4f900();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1080a258c;
  }
  func_0x0001080a2aa4();
  if ((int)unaff_x20 == 0) {
    func_0x0001080a2aa4();
    if ((int)unaff_x20 == 0) {
      func_0x0001080a2aa4();
      if ((int)unaff_x20 == 0) {
        func_0x0001080a2aa4();
        if ((((ulong)unaff_x20 & 1) == 0) && (func_0x0001080a2aa4(), (int)unaff_x20 == 0)) {
          func_0x0001080a2aa4();
          if ((int)unaff_x20 == 0) {
            func_0x0001080a2aa4();
            if ((int)unaff_x20 == 0) {
              func_0x0001080a2aa4();
              iVar1 = (int)unaff_x20;
              if ((((ulong)unaff_x20 & 1) != 0) || (func_0x0001080a2aa4(), iVar1 != 0)) {
                func_0x0001080a2b74();
                func_0x00010c266f60(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3ce0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3d60();
                _objc_retainAutoreleasedReturnValue();
                func_0x0001080a2ac4();
                func_0x0001080a2abc();
                unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                func_0x00010bfb4160(param_1);
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x20 == (undefined *)0x0) {
                  unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                  func_0x00010c084040(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_1080a2708;
                }
LAB_1080a26e4:
                _objc_retain(unaff_x20);
                goto LAB_1080a2714;
              }
              func_0x0001080a2aa4();
              if (iVar1 != 0) {
                func_0x00010bf1eda0(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3ce0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3d60();
                _objc_retainAutoreleasedReturnValue();
                func_0x0001080a2ac4();
                func_0x0001080a2abc();
                unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                func_0x00010bfb4160(param_1);
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x20 == (undefined *)0x0) {
                  unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
                  func_0x00010bf1eda0(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_1080a2708;
                }
                goto LAB_1080a26e4;
              }
              unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
              func_0x0001080a2b54();
              func_0x00010bfb41a0();
              _objc_retainAutoreleasedReturnValue();
              if ((unaff_x22 == (undefined *)0x0) || (lVar3 = *(long *)(unaff_x19 + 8), lVar3 == 0))
              {
LAB_1080a2814:
                _objc_retain(unaff_x22);
                unaff_x20 = unaff_x22;
              }
              else {
                func_0x00010c22e720();
                unaff_x20 = *(undefined **)(unaff_x19 + 8);
                if ((int)lVar3 == 0) {
                  func_0x0001080a2b54();
                  func_0x00010c09b540();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  func_0x0001080a2b54();
                  func_0x00010c09b560();
                  _objc_retainAutoreleasedReturnValue();
                }
                if (unaff_x20 == (undefined *)0x0) goto LAB_1080a2814;
              }
            }
            else {
              func_0x0001080a2b60();
              func_0x00010c266f60(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb3ce0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb3d60();
              _objc_retainAutoreleasedReturnValue();
              func_0x0001080a2ac4();
              func_0x0001080a2abc();
              unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
              func_0x00010bfb4160(param_1);
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x20 != (undefined *)0x0) goto LAB_1080a26e4;
              unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
              func_0x00010c084040(param_1);
              _objc_retainAutoreleasedReturnValue();
LAB_1080a2708:
              _objc_retain();
              func_0x0001080a2abc();
LAB_1080a2714:
              func_0x0001080a2ad0();
            }
            _objc_release(unaff_x22);
            puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
          }
          else {
            unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
            func_0x00010c084040(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
          }
        }
        else {
          func_0x0001080a2b74();
          func_0x00010c266f60(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
        }
      }
      else {
        unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bf1eda0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      }
    }
    else {
      func_0x0001080a2b60();
      func_0x00010c266f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    }
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  }
  unaff_x19 = unaff_x20;
  PTR__OBJC_CLASS___UIFont_1126aec38 = puVar2;
  if (unaff_x20 == (undefined *)0x0) {
    func_0x00010c266f40(param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = puVar2;
  }
LAB_1080a258c:
  func_0x0001080a2a9c();
  func_0x0001080a2aac();
  func_0x0001080a2ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1080a2840; end: 1080a2907; -[SCValdiFontManager defaultTraitCollection] */

void FUN_1080a2840(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain();
  func_0x0001080a2ad8();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c279640(PTR__OBJC_CLASS___UITraitCollection_1126b6d80,param_2,
                        *(undefined8 *)PTR__UIContentSizeCategoryLarge_110345b68);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a2b0c();
    func_0x0001080a2abc();
    func_0x00010c279600(PTR__OBJC_CLASS___UITraitCollection_1126b6d80,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a2b0c();
    func_0x0001080a2abc();
    puVar2 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
    func_0x00010c279660(PTR__OBJC_CLASS___UITraitCollection_1126b6d80,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    func_0x0001080a2b3c(uVar3);
    func_0x0001080a2ae0();
    lVar4 = *(long *)(param_1 + 0x10);
  }
  func_0x0001080a2b04();
  func_0x0001080a2a9c();
  func_0x0001080a2aac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1080a2908; end: 1080a2957; -[SCValdiFontManager shouldBypassContextForLegibilityWeight] */

long FUN_1080a2908(long param_1)

{
  long lVar1;
  
  _objc_retain();
  func_0x0001080a2ad8();
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010c22e720();
  }
  func_0x0001080a2a9c();
  func_0x0001080a2aac();
  return lVar1;
}



/* Entry: 1080a2958; end: 1080a299b; -[SCValdiFontManager setFontLoader:] */

void FUN_1080a2958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001080a2ab4();
  func_0x0001080a2b04();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080a299c; end: 1080a2a03; -[SCValdiFontManager addFontDataProvider:] */

void FUN_1080a299c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  func_0x0001080a2a8c();
  func_0x0001080a2b34();
  func_0x0001080a2ad8();
  lVar1 = *(long *)(unaff_x19 + 0x18);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined **)(unaff_x19 + 0x18) = puVar2;
    func_0x0001080a2b3c(uVar3);
    lVar1 = *(long *)(unaff_x19 + 0x18);
  }
  func_0x00010befa120(lVar1);
  func_0x0001080a2a9c();
  func_0x0001080a2aac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080a2a04; end: 1080a2a43; -[SCValdiFontManager removeFontDataProvider:] */

void FUN_1080a2a04(void)

{
  long unaff_x19;
  
  func_0x0001080a2a8c();
  func_0x0001080a2b34();
  func_0x0001080a2ad8();
  func_0x00010c12d360(*(undefined8 *)(unaff_x19 + 0x18));
  func_0x0001080a2a9c();
  func_0x0001080a2aac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080a2a44; end: 1080a2a7f; -[SCValdiFontManager .cxx_destruct] */

void FUN_1080a2a44(long param_1)

{
  func_0x0001080a2b4c(param_1 + 0x20);
  func_0x0001080a2b4c(param_1 + 0x18);
  func_0x0001080a2b4c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a2a80; end: 1080a2b9b;  */

void FUN_1080a2a80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_sync_exit_11034d348)();
  return;
}



/* Entry: 1080a2b9c; end: 1080a2c53; -[SCValdiImageAttachmentInfo initWithAttachmentId:width:height:imageData:] */

undefined1 *
FUN_1080a2b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fc588;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1080a2c54; end: 1080a2c5b; -[SCValdiImageAttachmentInfo attachmentId] */

undefined8 FUN_1080a2c54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a2c5c; end: 1080a2c63; -[SCValdiImageAttachmentInfo width] */

undefined8 FUN_1080a2c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a2c64; end: 1080a2c6b; -[SCValdiImageAttachmentInfo height] */

undefined8 FUN_1080a2c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080a2c6c; end: 1080a2c73; -[SCValdiImageAttachmentInfo imageData] */

undefined8 FUN_1080a2c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1080a2c74; end: 1080a2ca3; -[SCValdiImageAttachmentInfo .cxx_destruct] */

void FUN_1080a2c74(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a2ca4; end: 1080a2d97;  */

void FUN_1080a2ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain();
  func_0x0001080a3180();
  _objc_retain(param_3);
  if (param_4 != 0) {
    func_0x00010c261580(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    func_0x0001080a3180();
    _objc_retain(param_3);
    func_0x00010bf97e80(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    func_0x0001080a3170();
  }
  func_0x0001080a3190();
  func_0x0001080a3188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080a2d98; end: 1080a2ec3;  */

void FUN_1080a2d98(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_6);
  lVar2 = *(long *)(param_5 + 0x20);
  func_0x00010c0654a0();
  _objc_retainAutoreleasedReturnValue();
  if (((lVar2 != 0) && (*(long *)(param_5 + 0x28) != 0)) && (*(long *)(param_5 + 0x30) != 0)) {
    iVar1 = (int)*(undefined8 *)(param_5 + 0x20);
    func_0x00010c124520();
    _CGRectIsNull();
    if (iVar1 == 0) {
      uVar3 = (ulong)(uint)(float)(param_1 + *(double *)(param_5 + 0x38));
      uVar5 = (ulong)(uint)(float)(param_2 + *(double *)(param_5 + 0x40));
      uVar7 = (ulong)(uint)(float)param_3;
      uVar8 = (ulong)(uint)(float)param_4;
      func_0x00010b968614(uVar3,uVar5,uVar7,uVar8);
      uVar4 = uVar3;
      uVar6 = uVar5;
      func_0x00010bf20c00(param_6);
      func_0x00010c17a6a0(uVar3,uVar5,param_6);
      func_0x00010c1739e0(uVar4,uVar6,uVar7,uVar8,param_6);
      goto LAB_1080a2e34;
    }
  }
  func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_6);
LAB_1080a2e34:
  func_0x0001080a3188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1080a2ec4; end: 1080a2f7f;  */

void FUN_1080a2ec4(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain();
  func_0x0001080a3180();
  if (param_2 != 0) {
    func_0x00010c261580(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    func_0x0001080a3180();
    func_0x00010bf97e80(param_2);
    func_0x0001080a3190();
    _objc_release(param_3);
    _objc_release(param_1);
  }
  func_0x0001080a3188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080a2f80; end: 1080a3163;  */

/* WARNING: Removing unreachable block (ram,0x0001080a2fe8) */
/* WARNING: Removing unreachable block (ram,0x0001080a3024) */
/* WARNING: Removing unreachable block (ram,0x0001080a3078) */
/* WARNING: Removing unreachable block (ram,0x0001080a3034) */
/* WARNING: Removing unreachable block (ram,0x0001080a3084) */
/* WARNING: Removing unreachable block (ram,0x0001080a3090) */

void FUN_1080a2f80(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c0654a0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001080a3180();
  lVar1 = param_2;
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x0001080a3178();
    func_0x0001080a3178();
    func_0x0001080a3178();
    func_0x0001080a3178();
  }
  func_0x0001080a3190();
  func_0x0001080a3188();
  func_0x0001080a3188();
  _objc_release(param_2);
  return;
}



/* Entry: 1080a3164; end: 1080a31a3;  */

void FUN_1080a3164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c220290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080a31a4; end: 1080a322f; -[SCValdiInlineViewAttachmentInfo initWithChildIndex:verticalAlignment:sizeProvider:] */

undefined1 *
FUN_1080a31a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fc590;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1080a3230; end: 1080a323b; -[SCValdiInlineViewAttachmentInfo size] */

void FUN_1080a3230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080a3238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 1080a323c; end: 1080a3243; -[SCValdiInlineViewAttachmentInfo childIndex] */

undefined8 FUN_1080a323c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a3244; end: 1080a324b; -[SCValdiInlineViewAttachmentInfo verticalAlignment] */

undefined8 FUN_1080a3244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080a324c; end: 1080a3257; -[SCValdiInlineViewAttachmentInfo .cxx_destruct] */

void FUN_1080a324c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a3258; end: 1080a32cb; -[SCValdiOnLayoutAttribute initWithCallback:] */

undefined1 * FUN_1080a3258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc598;
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



/* Entry: 1080a32cc; end: 1080a32d3; -[SCValdiOnLayoutAttribute callback] */

undefined8 FUN_1080a32cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a32d4; end: 1080a32df; -[SCValdiOnLayoutAttribute .cxx_destruct] */

void FUN_1080a32d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a32e0; end: 1080a3353; -[SCValdiOnTapAttribute initWithCallback:] */

undefined1 * FUN_1080a32e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc5a0;
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



/* Entry: 1080a3354; end: 1080a335b; -[SCValdiOnTapAttribute callback] */

undefined8 FUN_1080a3354(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a335c; end: 1080a3367; -[SCValdiOnTapAttribute .cxx_destruct] */

void FUN_1080a335c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a3368; end: 1080a336f; -[SCValdiProcessedTextRangeValue range] */

undefined1  [16] FUN_1080a3368(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


