/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7fb7b4; end: 10b7fb803; -[SIGAlertDialog setSecureTextEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb7b4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112793f18;
  func_0x00010c1f9a00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)PTR__UITextContentTypeOneTimeCode_110345e00;
  if (param_3 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c213250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setTextContentType__1126626b8,uVar1);
  return;
}



/* Entry: 10b7fb804; end: 10b7fb813; -[SIGAlertDialog editTextFieldPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fd730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f18),PTR_s_placeholder_11261cfe8);
  return;
}



/* Entry: 10b7fb814; end: 10b7fb823; -[SIGAlertDialog setEditTextFieldPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dc9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f18),PTR_s_setPlaceholder__112654c98);
  return;
}



/* Entry: 10b7fb824; end: 10b7fb833; -[SIGAlertDialog setEditTextFieldAutocapitalizationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f18),PTR_s_setAutocapitalizationType__112638e48);
  return;
}



/* Entry: 10b7fb834; end: 10b7fb843; -[SIGAlertDialog editTextFieldAutocapitalizationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f18),PTR_s_autocapitalizationType_1125a2150);
  return;
}



/* Entry: 10b7fb844; end: 10b7fb87b; -[SIGAlertDialog setEditTextFieldMaxLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112793f1c);
  *(undefined8 *)(param_1 + _DAT_112793f1c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7fb87c; end: 10b7fb88b; -[SIGAlertDialog setAccessoryLayoutStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb87c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112793f20) = param_3;
  return;
}



/* Entry: 10b7fb88c; end: 10b7fb8e3; -[SIGAlertDialog viewDidLoad] */

void FUN_10b7fb88c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b190;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bdc8800(param_1);
  func_0x00010beabb40(param_1);
  func_0x00010beaab60(param_1);
  return;
}



/* Entry: 10b7fb8e4; end: 10b7fbb2f; -[SIGAlertDialog _addSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb8e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
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
  lVar11 = (long)_DAT_112793f24;
  lVar2 = *(long *)(param_1 + lVar11);
  iVar13 = _DAT_112793f0c;
  if (lVar2 != 0) {
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    iVar13 = _DAT_112793f0c;
    if (lVar2 == 0) {
      uVar10 = *(undefined8 *)(param_1 + _DAT_112793f0c);
      uVar3 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c29bf00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar10);
      _objc_release(uVar3);
    }
    else {
      func_0x00010bef7700(param_1);
      iVar13 = _DAT_112793f0c;
      uVar10 = *(undefined8 *)(param_1 + _DAT_112793f0c);
      uVar3 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c29bf00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar10);
      _objc_release(uVar3);
      func_0x00010bf77e80(lVar2);
    }
    _objc_release(lVar2);
  }
  if (*(long *)(param_1 + _DAT_112793f28) != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + iVar13));
  }
  if (*(long *)(param_1 + _DAT_112793f2c) != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + iVar13));
  }
  if (*(long *)(param_1 + _DAT_112793f30) != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + iVar13));
  }
  lVar12 = (long)_DAT_112793f08;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar12));
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar11 = *(long *)(param_1 + _DAT_112793f34);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar14 = *plStack_110;
    do {
      lVar15 = 0;
      do {
        if (*plStack_110 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        func_0x00010befbb60(*(undefined8 *)(param_1 + lVar12));
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lVar11;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar11);
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_10b7fbb30;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar9 = *(long *)(lVar2 + _DAT_112793f08);
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(lVar9);
    lVar11 = lVar9;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    func_0x00010c1e3380(0x424c0000,lVar12);
    lVar11 = lVar9;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c08cee0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar15;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar11;
    func_0x00010bf49540(0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar11);
    lVar11 = lVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar11;
    func_0x00010bf493c0(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar11);
    func_0x00010c1e3380(0x4479c000,lVar4);
    lVar11 = lVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010bf493c0(0xc044000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar11);
    func_0x00010c1e3380(0x4479c000,lVar6);
    lVar11 = lVar2;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar11;
    func_0x00010bfe4380();
    _objc_release(lVar11);
    lVar11 = lVar9;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x4073600000000000;
    if (lVar14 != 1) {
      uVar3 = 0x4079000000000000;
    }
    lVar14 = lVar11;
    func_0x00010bf49580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar11 = lVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    _objc_release(lVar2);
    _objc_release(lVar11);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_1c8 = lVar12;
    lStack_1c0 = lVar5;
    lStack_1b8 = lVar4;
    lStack_1b0 = lVar6;
    lStack_1a8 = lVar14;
    lStack_1a0 = lVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar14);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar12);
    lVar2 = lVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      puStack_200 = puVar1;
      pcStack_1d8 = FUN_10b7fbed4;
      puStack_208 = PTR_PTR_11270b190;
      lStack_210 = lVar2;
      lStack_1f8 = lVar5;
      lStack_1f0 = lVar12;
      lStack_1e8 = lVar9;
      ppuStack_1e0 = &puStack_130;
      _objc_msgSendSuper2(&lStack_210,PTR_s_viewWillAppear__1126853f0);
      lVar12 = (long)_DAT_112793f18;
      lVar11 = *(long *)(lVar2 + lVar12);
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 != 0) {
        func_0x00010bf179a0(*(undefined8 *)(lVar2 + lVar12));
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b7fbb30; end: 10b7fbed3; -[SIGAlertDialog _setupContainerAutolayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fbb30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + _DAT_112793f08);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c1e3380(0x424c0000,lVar9);
  lVar2 = lVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf49540(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  lVar2 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  func_0x00010c1e3380(0x4479c000,lVar4);
  lVar2 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf493c0(0xc044000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  func_0x00010c1e3380(0x4479c000,lVar6);
  lVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bfe4380();
  _objc_release(lVar2);
  lVar2 = lVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0x4073600000000000;
  if (lVar11 != 1) {
    uVar12 = 0x4079000000000000;
  }
  lVar11 = lVar2;
  func_0x00010bf49580(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_a8 = lVar9;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  lStack_90 = lVar6;
  lStack_88 = lVar11;
  lStack_80 = lVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar9);
  lVar2 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puStack_e0 = puVar1;
  pcStack_b8 = FUN_10b7fbed4;
  puStack_e8 = PTR_PTR_11270b190;
  lStack_f0 = lVar2;
  lStack_d8 = lVar5;
  lStack_d0 = lVar9;
  lStack_c8 = lVar10;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_f0,PTR_s_viewWillAppear__1126853f0);
  lVar11 = (long)_DAT_112793f18;
  lVar9 = *(long *)(lVar2 + lVar11);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    func_0x00010bf179a0(*(undefined8 *)(lVar2 + lVar11));
  }
  return;
}



/* Entry: 10b7fbed4; end: 10b7fbf47; -[SIGAlertDialog viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fbed4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b190;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  lVar2 = (long)_DAT_112793f18;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 10b7fbf48; end: 10b7fc027; -[SIGAlertDialog viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fbf48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_11270b190;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  lVar5 = (long)_DAT_112793f18;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar2 = uVar4;
    func_0x00010bf193c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf94e60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26c600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb600(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10b7fc028; end: 10b7fc147; -[SIGAlertDialog traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fc028(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_48 = PTR_PTR_11270b190;
  lStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar1,param_3);
  lVar2 = param_1;
  func_0x00010be244e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + _DAT_112793f14));
  _objc_release(lVar2);
  uVar3 = param_3;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010c279540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0720c0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  if ((uVar5 & 1) == 0) {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10b7fc148; end: 10b7fc1ab; +[SIGAlertDialog _imageViewForImage:] */

void FUN_10b7fc148(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c01bf60();
    _objc_release(param_3);
    func_0x00010c182220(puVar1,param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7fc1ac; end: 10b7fc3b3; -[SIGAlertDialog setLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fc1ac(long param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar2 = param_1;
  func_0x00010bfc36e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112793f34;
  lVar3 = *(long *)(param_1 + lVar10);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar7 = 0;
    lVar3 = (long)_DAT_112793f38;
    do {
      cVar1 = *(char *)(param_1 + lVar3);
      uVar4 = *(ulong *)(param_1 + lVar10);
      func_0x00010c0dfd40(uVar4,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      if (cVar1 == '\x01') {
        if (param_3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar4;
          func_0x00010c071ae0(uVar4,param_2,*(undefined8 *)(param_1 + _DAT_112793f3c));
        }
        func_0x00010c1b2440(uVar4,param_2,uVar5);
        uVar5 = uVar4;
        func_0x00010c071ae0(uVar4,param_2,lVar2);
        if ((uVar5 & 1) == 0) {
          func_0x00010c21e900(uVar4,param_2,param_3 ^ 1);
          func_0x00010c195460(uVar4,param_2,param_3 ^ 1);
          if ((param_3 & 1) == 0) {
            lVar8 = (long)_DAT_112793f40;
            uVar5 = *(ulong *)(param_1 + lVar8);
            func_0x00010bf529e0();
            if (uVar7 < uVar5) {
              uVar6 = *(undefined8 *)(param_1 + lVar8);
              func_0x00010c0dfd40(uVar6,param_2,uVar7);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar6;
              func_0x00010c067fc0();
              _objc_release(uVar6);
            }
            else {
              uVar9 = 1;
            }
            func_0x00010c1748a0(uVar4,param_2,uVar9);
          }
        }
      }
      else {
        if (param_3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar4;
          func_0x00010c071ae0(uVar4,param_2,*(undefined8 *)(param_1 + _DAT_112793f3c));
        }
        func_0x00010c1beb60(uVar4,param_2,uVar5);
        uVar5 = uVar4;
        func_0x00010c071ae0(uVar4,param_2,lVar2);
        if ((uVar5 & 1) == 0) {
          func_0x00010c21e900(uVar4,param_2,param_3 ^ 1);
          if ((param_3 & 1) == 0) {
            lVar8 = (long)_DAT_112793f44;
            uVar5 = *(ulong *)(param_1 + lVar8);
            func_0x00010bf529e0();
            if (uVar7 < uVar5) {
              uVar6 = *(undefined8 *)(param_1 + lVar8);
              func_0x00010c0dfd40(uVar6,param_2,uVar7);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar6;
              func_0x00010c2827c0();
              _objc_release(uVar6);
            }
            else {
              uVar9 = 1;
            }
          }
          else {
            uVar9 = 5;
          }
          func_0x00010c20eaa0(uVar4,param_2,uVar9);
        }
      }
      _objc_release(uVar4);
      uVar7 = uVar7 + 1;
      uVar4 = *(ulong *)(param_1 + lVar10);
      func_0x00010bf529e0();
    } while (uVar7 < uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b7fc3b4; end: 10b7fc3eb; -[SIGAlertDialog textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10b7fc3b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112793f10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_4);
    return (uint)lVar1 ^ 1;
  }
  return 1;
}



/* Entry: 10b7fc3ec; end: 10b7fc4db; -[SIGAlertDialog textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10b7fc3ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + _DAT_112793f1c);
  if (uVar1 != 0) {
    func_0x00010c2827c0();
    lVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    uVar4 = param_6;
    func_0x00010c08fa60();
    uVar4 = uVar4 + (lVar3 - param_5);
    if ((uVar1 < uVar4) && (uVar5 = param_6, func_0x00010c08fa60(), param_5 < uVar5)) {
      func_0x00010bebc0e0(param_1);
      uVar6 = 0;
      goto LAB_10b7fc4b0;
    }
    if (uVar4 < uVar1) {
      func_0x00010bea57c0(param_1,param_2,0);
    }
  }
  uVar6 = 1;
LAB_10b7fc4b0:
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10b7fc4dc; end: 10b7fc523; -[SIGAlertDialog _signalMaxLengthRejection] */

void FUN_10b7fc4dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
  _objc_alloc(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0);
  func_0x00010c04ea80();
  func_0x00010bfe9da0();
  func_0x00010bea57c0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7fc524; end: 10b7fc62b; -[SIGAlertDialog _setMaxLengthCaptionVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fc524(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112793f48);
  func_0x00010c074c20();
  if (param_3 == iVar1) {
    *(undefined1 *)(param_1 + _DAT_112793f4c) = 1;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x10b7fc5e0;
    puStack_38 = &UNK_110845ce0;
    uStack_28 = (undefined1)param_3;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b7fc62c;
    puStack_60 = &UNK_110841f20;
    lStack_58 = param_1;
    lStack_30 = param_1;
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_50,
                        &puStack_78);
  }
  return;
}



/* Entry: 10b7fc62c; end: 10b7fc647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fc62c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112793f4c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be498f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__layoutTextBoundaryGradientForce_11256ffd8,1);
  return;
}



/* Entry: 10b7fc648; end: 10b7fc693; -[SIGAlertDialog scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fc648(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112793f0c));
  if ((int)param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be498f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__layoutTextBoundaryGradientForce_11256ffd8,0);
    return;
  }
  return;
}



/* Entry: 10b7fc694; end: 10b7fc81f; -[SIGAlertDialog _setAttributedDialogText:placeholders:urlStrings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fc694(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b0ac8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar1 = param_3;
    func_0x00010c23b9a0(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010bfb5e80(puVar2,param_2,param_4,param_5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c219b60(puVar2,param_2,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar2);
    func_0x00010c193a00(puVar2,param_2,0);
    func_0x00010c1f7b20(puVar2,param_2,0);
    func_0x00010c18b5e0(puVar2,param_2,param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112793f30);
    *(undefined **)(param_1 + _DAT_112793f30) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7fc820; end: 10b7fc9cf; -[SIGAlertDialog _setEditModeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fc820(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **unaff_x26;
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  long lStack_310;
  undefined8 *puStack_308;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
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
  long lStack_140;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(char *)(param_1 + _DAT_112793f50) = (char)param_3;
  if (param_3 != 0) {
    puVar3 = PTR_PTR_1126b3f70;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar19 = (long)_DAT_112793f18;
    uVar16 = *(undefined8 *)(param_1 + lVar19);
    *(undefined **)(param_1 + lVar19) = puVar3;
    _objc_release(uVar16);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
    uVar16 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar16);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar19));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar19));
    lVar19 = param_1;
    func_0x00010be5be20();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + _DAT_112793f48);
    *(long *)(param_1 + _DAT_112793f48) = lVar19;
    _objc_release(uVar16);
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar19 = (long)_DAT_112793f2c;
    uVar16 = *(undefined8 *)(param_1 + lVar19);
    *(undefined **)(param_1 + lVar19) = puVar3;
    _objc_release(uVar16);
    _objc_release(puVar4);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
    func_0x00010c16e060(*(undefined8 *)(param_1 + lVar19));
    func_0x00010c166c00(*(undefined8 *)(param_1 + lVar19));
    func_0x00010c207380(0x4020000000000000,*(undefined8 *)(param_1 + lVar19));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3);
  _objc_release(puVar4);
  func_0x00010c181f00(0x447a0000,puVar3);
  func_0x00010c181cc0(0x447a0000,puVar3);
  puVar4 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar5 = puVar4;
  func_0x00010b8851a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar5);
  func_0x00010c21ad00(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4);
  _objc_release(puVar5);
  func_0x00010c1cfce0(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar6);
  func_0x00010c16e060(puVar5);
  func_0x00010c166c00(puVar5);
  func_0x00010c207380(0x4018000000000000,puVar5);
  func_0x00010c1a7f60(puVar5);
  ppuVar14 = &PTR____CFConstantStringClassReference_110f8a418;
  func_0x00010c160fc0(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar14);
  ppuVar7 = ppuVar14;
  func_0x00010bf529e0();
  if ((long)ppuVar7 - 1U < 5) {
    puVar4 = PTR_PTR_1126e1558;
    func_0x00010c071880();
    lVar15 = (long)_DAT_112793f38;
    puVar3[lVar15] = (char)puVar4;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    cVar1 = puVar3[lVar15];
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      plStack_270 = (long *)0x0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      _objc_retain(ppuVar14);
      ppuVar12 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar12 == (undefined **)0x0) {
        bVar2 = true;
      }
      else {
        lVar15 = *plStack_270;
        unaff_x26 = *(undefined ***)PTR__UIAccessibilityTraitButton_110345920;
        do {
          ppuVar20 = (undefined **)0x0;
          do {
            if (*plStack_270 != lVar15) {
              _objc_enumerationMutation(ppuVar14);
            }
            puVar6 = PTR_PTR_1126aed78;
            ppuVar21 = *(undefined ***)(lStack_278 + (long)ppuVar20 * 8);
            func_0x00010c25e300(ppuVar21);
            func_0x00010bdd72a0(puVar6);
            puVar8 = PTR_PTR_1126e1560;
            _objc_alloc(PTR_PTR_1126e1560);
            ppuVar9 = ppuVar21;
            func_0x00010c2711a0(ppuVar21);
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar21;
            func_0x00010c2711a0(ppuVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c051240(puVar8);
            _objc_release(ppuVar10);
            _objc_release(ppuVar9);
            func_0x00010c19bd20(puVar8);
            func_0x00010c1672e0(puVar8);
            func_0x00010befbd60(puVar8);
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuVar9 = ppuVar21;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c160fc0(puVar8);
            _objc_release(puVar6);
            _objc_release(ppuVar9);
            ppuVar9 = ppuVar21;
            func_0x00010c2711a0(ppuVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c161020(puVar8);
            _objc_release(ppuVar9);
            func_0x00010c161080(puVar8);
            ppuVar9 = ppuVar21;
            func_0x00010beecec0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar9;
            func_0x00010c08fa60();
            _objc_release(ppuVar9);
            if (ppuVar10 != (undefined **)0x0) {
              ppuVar9 = ppuVar21;
              func_0x00010beecec0(ppuVar21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c160fc0(puVar8);
              _objc_release(ppuVar9);
            }
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar17);
            _objc_release(puVar6);
            ppuVar10 = ppuVar21;
            func_0x00010beee0a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = &PTR___NSConcreteGlobalBlock_110d61f40;
            if (ppuVar10 != (undefined **)0x0) {
              ppuVar9 = ppuVar10;
            }
            ppuVar10 = ppuVar9;
            func_0x00010bf51e00(ppuVar9);
            ppuVar11 = ppuVar10;
            _objc_retainBlock();
            func_0x00010befa120(puVar5);
            _objc_release(ppuVar11);
            _objc_release(ppuVar10);
            ppuVar10 = ppuVar21;
            func_0x00010c25e300();
            if (ppuVar10 == (undefined **)0x0) {
              bVar2 = true;
            }
            else {
              func_0x00010c25e300();
              bVar2 = ppuVar21 == (undefined **)0x1;
            }
            func_0x00010c219b60(puVar8);
            func_0x00010c23d620(puVar8);
            func_0x00010befa120(puVar4);
            _objc_release(ppuVar9);
            _objc_release(puVar8);
            ppuVar20 = (undefined **)((long)ppuVar20 + 1);
          } while (ppuVar12 != ppuVar20);
          ppuVar12 = ppuVar14;
          func_0x00010bf52a60();
        } while (ppuVar12 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      if (((bool)((undefined **)0x1 < ppuVar7 & bVar2)) && ((puVar3[_DAT_112793efc] & 1) == 0)) {
        puVar6 = puVar4;
        func_0x00010c089820(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1748a0();
        func_0x00010bf529e0(puVar17);
        func_0x00010c1d04c0(puVar17);
        _objc_release(puVar6);
      }
      puVar6 = puVar5;
      func_0x00010bf51e00();
      uVar16 = *(undefined8 *)(puVar3 + _DAT_112793f54);
      *(undefined **)(puVar3 + _DAT_112793f54) = puVar6;
      _objc_release(uVar16);
      puVar6 = puVar17;
      func_0x00010bf51e00();
      uVar16 = *(undefined8 *)(puVar3 + _DAT_112793f40);
      *(undefined **)(puVar3 + _DAT_112793f40) = puVar6;
      _objc_release(uVar16);
    }
    else {
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      lStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      plStack_2b0 = (long *)0x0;
      _objc_retain(ppuVar14);
      ppuVar12 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar12 == (undefined **)0x0) {
        bVar2 = true;
      }
      else {
        lVar15 = *plStack_2b0;
        unaff_x26 = &puStack_330;
        do {
          ppuVar20 = (undefined **)0x0;
          do {
            if (*plStack_2b0 != lVar15) {
              _objc_enumerationMutation(ppuVar14);
            }
            lVar18 = *(long *)(lStack_2b8 + (long)ppuVar20 * 8);
            uStack_2f0 = 0;
            uStack_2e0 = 0x3042000000;
            uStack_2d8 = 0x10b7fd488;
            uStack_2d0 = 0x10b7fd494;
            puStack_2e8 = &uStack_2f0;
            _objc_initWeak(auStack_2c8,0);
            _objc_initWeak(auStack_2f8,puVar3);
            puVar6 = PTR_PTR_1126e1568;
            lVar19 = lVar18;
            func_0x00010c2711a0(lVar18);
            _objc_retainAutoreleasedReturnValue();
            puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_328 = 0xc2000000;
            pcStack_320 = FUN_10b7fd49c;
            puStack_318 = &UNK_110d61f60;
            _objc_copyWeak(auStack_300,auStack_2f8);
            lStack_310 = lVar18;
            puStack_308 = &uStack_2f0;
            func_0x00010beff500(puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar19);
            _objc_storeWeak(puStack_2e8 + 5,puVar6);
            lVar19 = lVar18;
            func_0x00010beecec0();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar19;
            func_0x00010c08fa60();
            _objc_release(lVar19);
            if (lVar13 != 0) {
              lVar19 = lVar18;
              func_0x00010beecec0(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c160fc0(puVar6);
              _objc_release(lVar19);
            }
            func_0x00010c166a80(puVar6);
            puVar17 = PTR_PTR_1126aed78;
            func_0x00010c25e300(lVar18);
            func_0x00010bdd73c0(puVar17);
            func_0x00010c20eaa0(puVar6);
            puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            _objc_release(puVar17);
            lVar19 = lVar18;
            func_0x00010c25e300();
            if (lVar19 == 0) {
              bVar2 = true;
            }
            else {
              func_0x00010c25e300();
              bVar2 = lVar18 == 1;
            }
            func_0x00010c219b60(puVar6);
            func_0x00010c23d620(puVar6);
            func_0x00010befa120(puVar4);
            _objc_release(puVar6);
            _objc_destroyWeak(auStack_300);
            _objc_destroyWeak(auStack_2f8);
            __Block_object_dispose(&uStack_2f0,8);
            _objc_destroyWeak(auStack_2c8);
            ppuVar20 = (undefined **)((long)ppuVar20 + 1);
          } while (ppuVar12 != ppuVar20);
          ppuVar12 = ppuVar14;
          func_0x00010bf52a60();
        } while (ppuVar12 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      if (((bool)((undefined **)0x1 < ppuVar7 & bVar2)) && ((puVar3[_DAT_112793efc] & 1) == 0)) {
        puVar6 = puVar4;
        func_0x00010c089820(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20eaa0();
        _objc_release(puVar6);
        func_0x00010bf529e0(puVar5);
        func_0x00010c1d04c0(puVar5);
      }
      puVar6 = puVar5;
      func_0x00010bf51e00();
      puVar17 = *(undefined **)(puVar3 + _DAT_112793f44);
      *(undefined **)(puVar3 + _DAT_112793f44) = puVar6;
    }
    _objc_release(puVar17);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf51e00();
    uVar16 = *(undefined8 *)(puVar3 + _DAT_112793f34);
    *(undefined **)(puVar3 + _DAT_112793f34) = puVar5;
    _objc_release(uVar16);
    _objc_release(puVar4);
  }
  ppuVar7 = ppuVar14;
  _objc_release(ppuVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_140) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x26 + 6);
    _objc_destroyWeak(auStack_2f8);
    __Block_object_dispose(&uStack_2f0,8);
    _objc_destroyWeak(ppuVar14 + 5);
    __Unwind_Resume(ppuVar7);
    return;
  }
  return;
}



/* Entry: 10b7fc9d0; end: 10b7fcbfb; -[SIGAlertDialog _makeMaxLengthCaptionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fc9d0(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **unaff_x26;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_e0;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3);
  _objc_release(puVar4);
  func_0x00010c181f00(0x447a0000,puVar3);
  func_0x00010c181cc0(0x447a0000,puVar3);
  puVar4 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar5 = puVar4;
  func_0x00010b8851a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar5);
  func_0x00010c21ad00(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4);
  _objc_release(puVar5);
  func_0x00010c1cfce0(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar6);
  func_0x00010c16e060(puVar5);
  func_0x00010c166c00(puVar5);
  func_0x00010c207380(0x4018000000000000,puVar5);
  func_0x00010c1a7f60(puVar5);
  ppuVar15 = &PTR____CFConstantStringClassReference_110f8a418;
  func_0x00010c160fc0(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar15);
  ppuVar7 = ppuVar15;
  func_0x00010bf529e0();
  if ((long)ppuVar7 - 1U < 5) {
    puVar4 = PTR_PTR_1126e1558;
    func_0x00010c071880();
    lVar16 = (long)_DAT_112793f38;
    puVar3[lVar16] = (char)puVar4;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    cVar1 = puVar3[lVar16];
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      plStack_210 = (long *)0x0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      _objc_retain(ppuVar15);
      ppuVar12 = ppuVar15;
      func_0x00010bf52a60();
      if (ppuVar12 == (undefined **)0x0) {
        bVar2 = true;
      }
      else {
        lVar16 = *plStack_210;
        unaff_x26 = *(undefined ***)PTR__UIAccessibilityTraitButton_110345920;
        do {
          ppuVar20 = (undefined **)0x0;
          do {
            if (*plStack_210 != lVar16) {
              _objc_enumerationMutation(ppuVar15);
            }
            puVar6 = PTR_PTR_1126aed78;
            ppuVar21 = *(undefined ***)(lStack_218 + (long)ppuVar20 * 8);
            func_0x00010c25e300(ppuVar21);
            func_0x00010bdd72a0(puVar6);
            puVar8 = PTR_PTR_1126e1560;
            _objc_alloc(PTR_PTR_1126e1560);
            ppuVar9 = ppuVar21;
            func_0x00010c2711a0(ppuVar21);
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar21;
            func_0x00010c2711a0(ppuVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c051240(puVar8);
            _objc_release(ppuVar10);
            _objc_release(ppuVar9);
            func_0x00010c19bd20(puVar8);
            func_0x00010c1672e0(puVar8);
            func_0x00010befbd60(puVar8);
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuVar9 = ppuVar21;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c160fc0(puVar8);
            _objc_release(puVar6);
            _objc_release(ppuVar9);
            ppuVar9 = ppuVar21;
            func_0x00010c2711a0(ppuVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c161020(puVar8);
            _objc_release(ppuVar9);
            func_0x00010c161080(puVar8);
            ppuVar9 = ppuVar21;
            func_0x00010beecec0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar9;
            func_0x00010c08fa60();
            _objc_release(ppuVar9);
            if (ppuVar10 != (undefined **)0x0) {
              ppuVar9 = ppuVar21;
              func_0x00010beecec0(ppuVar21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c160fc0(puVar8);
              _objc_release(ppuVar9);
            }
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar18);
            _objc_release(puVar6);
            ppuVar10 = ppuVar21;
            func_0x00010beee0a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = &PTR___NSConcreteGlobalBlock_110d61f40;
            if (ppuVar10 != (undefined **)0x0) {
              ppuVar9 = ppuVar10;
            }
            ppuVar10 = ppuVar9;
            func_0x00010bf51e00(ppuVar9);
            ppuVar11 = ppuVar10;
            _objc_retainBlock();
            func_0x00010befa120(puVar5);
            _objc_release(ppuVar11);
            _objc_release(ppuVar10);
            ppuVar10 = ppuVar21;
            func_0x00010c25e300();
            if (ppuVar10 == (undefined **)0x0) {
              bVar2 = true;
            }
            else {
              func_0x00010c25e300();
              bVar2 = ppuVar21 == (undefined **)0x1;
            }
            func_0x00010c219b60(puVar8);
            func_0x00010c23d620(puVar8);
            func_0x00010befa120(puVar4);
            _objc_release(ppuVar9);
            _objc_release(puVar8);
            ppuVar20 = (undefined **)((long)ppuVar20 + 1);
          } while (ppuVar12 != ppuVar20);
          ppuVar12 = ppuVar15;
          func_0x00010bf52a60();
        } while (ppuVar12 != (undefined **)0x0);
      }
      _objc_release(ppuVar15);
      if (((bool)((undefined **)0x1 < ppuVar7 & bVar2)) && ((puVar3[_DAT_112793efc] & 1) == 0)) {
        puVar6 = puVar4;
        func_0x00010c089820(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1748a0();
        func_0x00010bf529e0(puVar18);
        func_0x00010c1d04c0(puVar18);
        _objc_release(puVar6);
      }
      puVar6 = puVar5;
      func_0x00010bf51e00();
      uVar17 = *(undefined8 *)(puVar3 + _DAT_112793f54);
      *(undefined **)(puVar3 + _DAT_112793f54) = puVar6;
      _objc_release(uVar17);
      puVar6 = puVar18;
      func_0x00010bf51e00();
      uVar17 = *(undefined8 *)(puVar3 + _DAT_112793f40);
      *(undefined **)(puVar3 + _DAT_112793f40) = puVar6;
      _objc_release(uVar17);
    }
    else {
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      _objc_retain(ppuVar15);
      ppuVar12 = ppuVar15;
      func_0x00010bf52a60();
      if (ppuVar12 == (undefined **)0x0) {
        bVar2 = true;
      }
      else {
        lVar16 = *plStack_250;
        unaff_x26 = &puStack_2d0;
        do {
          ppuVar20 = (undefined **)0x0;
          do {
            if (*plStack_250 != lVar16) {
              _objc_enumerationMutation(ppuVar15);
            }
            lVar19 = *(long *)(lStack_258 + (long)ppuVar20 * 8);
            uStack_290 = 0;
            uStack_280 = 0x3042000000;
            uStack_278 = 0x10b7fd488;
            uStack_270 = 0x10b7fd494;
            puStack_288 = &uStack_290;
            _objc_initWeak(auStack_268,0);
            _objc_initWeak(auStack_298,puVar3);
            puVar6 = PTR_PTR_1126e1568;
            lVar13 = lVar19;
            func_0x00010c2711a0(lVar19);
            _objc_retainAutoreleasedReturnValue();
            puStack_2d0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_2c8 = 0xc2000000;
            pcStack_2c0 = FUN_10b7fd49c;
            puStack_2b8 = &UNK_110d61f60;
            _objc_copyWeak(auStack_2a0,auStack_298);
            lStack_2b0 = lVar19;
            puStack_2a8 = &uStack_290;
            func_0x00010beff500(puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar13);
            _objc_storeWeak(puStack_288 + 5,puVar6);
            lVar13 = lVar19;
            func_0x00010beecec0();
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar13;
            func_0x00010c08fa60();
            _objc_release(lVar13);
            if (lVar14 != 0) {
              lVar13 = lVar19;
              func_0x00010beecec0(lVar19);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c160fc0(puVar6);
              _objc_release(lVar13);
            }
            func_0x00010c166a80(puVar6);
            puVar18 = PTR_PTR_1126aed78;
            func_0x00010c25e300(lVar19);
            func_0x00010bdd73c0(puVar18);
            func_0x00010c20eaa0(puVar6);
            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            _objc_release(puVar18);
            lVar13 = lVar19;
            func_0x00010c25e300();
            if (lVar13 == 0) {
              bVar2 = true;
            }
            else {
              func_0x00010c25e300();
              bVar2 = lVar19 == 1;
            }
            func_0x00010c219b60(puVar6);
            func_0x00010c23d620(puVar6);
            func_0x00010befa120(puVar4);
            _objc_release(puVar6);
            _objc_destroyWeak(auStack_2a0);
            _objc_destroyWeak(auStack_298);
            __Block_object_dispose(&uStack_290,8);
            _objc_destroyWeak(auStack_268);
            ppuVar20 = (undefined **)((long)ppuVar20 + 1);
          } while (ppuVar12 != ppuVar20);
          ppuVar12 = ppuVar15;
          func_0x00010bf52a60();
        } while (ppuVar12 != (undefined **)0x0);
      }
      _objc_release(ppuVar15);
      if (((bool)((undefined **)0x1 < ppuVar7 & bVar2)) && ((puVar3[_DAT_112793efc] & 1) == 0)) {
        puVar6 = puVar4;
        func_0x00010c089820(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20eaa0();
        _objc_release(puVar6);
        func_0x00010bf529e0(puVar5);
        func_0x00010c1d04c0(puVar5);
      }
      puVar6 = puVar5;
      func_0x00010bf51e00();
      puVar18 = *(undefined **)(puVar3 + _DAT_112793f44);
      *(undefined **)(puVar3 + _DAT_112793f44) = puVar6;
    }
    _objc_release(puVar18);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf51e00();
    uVar17 = *(undefined8 *)(puVar3 + _DAT_112793f34);
    *(undefined **)(puVar3 + _DAT_112793f34) = puVar5;
    _objc_release(uVar17);
    _objc_release(puVar4);
  }
  ppuVar7 = ppuVar15;
  _objc_release(ppuVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e0) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x26 + 6);
    _objc_destroyWeak(auStack_298);
    __Block_object_dispose(&uStack_290,8);
    _objc_destroyWeak(ppuVar15 + 5);
    __Unwind_Resume(ppuVar7);
    return;
  }
  return;
}



/* Entry: 10b7fcbfc; end: 10b7fd483; -[SIGAlertDialog _setActions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fcbfc(long param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined **ppuVar19;
  undefined **unaff_x26;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined8 *puStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf529e0();
  if (uVar3 - 1 < 5) {
    puVar4 = PTR_PTR_1126e1558;
    func_0x00010c071880();
    lVar17 = (long)_DAT_112793f38;
    *(char *)(param_1 + lVar17) = (char)puVar4;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    cVar1 = *(char *)(param_1 + lVar17);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      _objc_retain(param_3);
      uVar10 = param_3;
      func_0x00010bf52a60();
      if (uVar10 == 0) {
        bVar2 = true;
      }
      else {
        lVar17 = *plStack_1b0;
        unaff_x26 = *(undefined ***)PTR__UIAccessibilityTraitButton_110345920;
        do {
          uVar18 = 0;
          do {
            if (*plStack_1b0 != lVar17) {
              _objc_enumerationMutation(param_3);
            }
            puVar12 = PTR_PTR_1126aed78;
            ppuVar19 = *(undefined ***)(lStack_1b8 + uVar18 * 8);
            func_0x00010c25e300(ppuVar19);
            func_0x00010bdd72a0(puVar12);
            puVar6 = PTR_PTR_1126e1560;
            _objc_alloc(PTR_PTR_1126e1560);
            ppuVar7 = ppuVar19;
            func_0x00010c2711a0(ppuVar19);
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = ppuVar19;
            func_0x00010c2711a0(ppuVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c051240(puVar6);
            _objc_release(ppuVar8);
            _objc_release(ppuVar7);
            func_0x00010c19bd20(puVar6);
            func_0x00010c1672e0(puVar6);
            func_0x00010befbd60(puVar6);
            puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuVar7 = ppuVar19;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c160fc0(puVar6);
            _objc_release(puVar12);
            _objc_release(ppuVar7);
            ppuVar7 = ppuVar19;
            func_0x00010c2711a0(ppuVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c161020(puVar6);
            _objc_release(ppuVar7);
            func_0x00010c161080(puVar6);
            ppuVar7 = ppuVar19;
            func_0x00010beecec0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = ppuVar7;
            func_0x00010c08fa60();
            _objc_release(ppuVar7);
            if (ppuVar8 != (undefined **)0x0) {
              ppuVar7 = ppuVar19;
              func_0x00010beecec0(ppuVar19);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c160fc0(puVar6);
              _objc_release(ppuVar7);
            }
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar15);
            _objc_release(puVar12);
            ppuVar8 = ppuVar19;
            func_0x00010beee0a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = &PTR___NSConcreteGlobalBlock_110d61f40;
            if (ppuVar8 != (undefined **)0x0) {
              ppuVar7 = ppuVar8;
            }
            ppuVar8 = ppuVar7;
            func_0x00010bf51e00(ppuVar7);
            ppuVar9 = ppuVar8;
            _objc_retainBlock();
            func_0x00010befa120(puVar5);
            _objc_release(ppuVar9);
            _objc_release(ppuVar8);
            ppuVar8 = ppuVar19;
            func_0x00010c25e300();
            if (ppuVar8 == (undefined **)0x0) {
              bVar2 = true;
            }
            else {
              func_0x00010c25e300();
              bVar2 = ppuVar19 == (undefined **)0x1;
            }
            func_0x00010c219b60(puVar6);
            func_0x00010c23d620(puVar6);
            func_0x00010befa120(puVar4);
            _objc_release(ppuVar7);
            _objc_release(puVar6);
            uVar18 = uVar18 + 1;
          } while (uVar10 != uVar18);
          uVar10 = param_3;
          func_0x00010bf52a60();
        } while (uVar10 != 0);
      }
      _objc_release(param_3);
      if (((bool)(1 < uVar3 & bVar2)) && ((*(byte *)(param_1 + _DAT_112793efc) & 1) == 0)) {
        puVar12 = puVar4;
        func_0x00010c089820(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1748a0();
        func_0x00010bf529e0(puVar15);
        func_0x00010c1d04c0(puVar15);
        _objc_release(puVar12);
      }
      puVar12 = puVar5;
      func_0x00010bf51e00();
      uVar14 = *(undefined8 *)(param_1 + _DAT_112793f54);
      *(undefined **)(param_1 + _DAT_112793f54) = puVar12;
      _objc_release(uVar14);
      puVar12 = puVar15;
      func_0x00010bf51e00();
      uVar14 = *(undefined8 *)(param_1 + _DAT_112793f40);
      *(undefined **)(param_1 + _DAT_112793f40) = puVar12;
      _objc_release(uVar14);
    }
    else {
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      _objc_retain(param_3);
      uVar10 = param_3;
      func_0x00010bf52a60();
      if (uVar10 == 0) {
        bVar2 = true;
      }
      else {
        lVar17 = *plStack_1f0;
        unaff_x26 = &puStack_270;
        do {
          uVar18 = 0;
          do {
            if (*plStack_1f0 != lVar17) {
              _objc_enumerationMutation(param_3);
            }
            lVar16 = *(long *)(lStack_1f8 + uVar18 * 8);
            uStack_230 = 0;
            uStack_220 = 0x3042000000;
            uStack_218 = 0x10b7fd488;
            uStack_210 = 0x10b7fd494;
            puStack_228 = &uStack_230;
            _objc_initWeak(auStack_208,0);
            _objc_initWeak(auStack_238,param_1);
            puVar12 = PTR_PTR_1126e1568;
            lVar11 = lVar16;
            func_0x00010c2711a0(lVar16);
            _objc_retainAutoreleasedReturnValue();
            puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_268 = 0xc2000000;
            pcStack_260 = FUN_10b7fd49c;
            puStack_258 = &UNK_110d61f60;
            _objc_copyWeak(auStack_240,auStack_238);
            lStack_250 = lVar16;
            puStack_248 = &uStack_230;
            func_0x00010beff500(puVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            _objc_storeWeak(puStack_228 + 5,puVar12);
            lVar11 = lVar16;
            func_0x00010beecec0();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar11;
            func_0x00010c08fa60();
            _objc_release(lVar11);
            if (lVar13 != 0) {
              lVar11 = lVar16;
              func_0x00010beecec0(lVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c160fc0(puVar12);
              _objc_release(lVar11);
            }
            func_0x00010c166a80(puVar12);
            puVar15 = PTR_PTR_1126aed78;
            func_0x00010c25e300(lVar16);
            func_0x00010bdd73c0(puVar15);
            func_0x00010c20eaa0(puVar12);
            puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            _objc_release(puVar15);
            lVar11 = lVar16;
            func_0x00010c25e300();
            if (lVar11 == 0) {
              bVar2 = true;
            }
            else {
              func_0x00010c25e300();
              bVar2 = lVar16 == 1;
            }
            func_0x00010c219b60(puVar12);
            func_0x00010c23d620(puVar12);
            func_0x00010befa120(puVar4);
            _objc_release(puVar12);
            _objc_destroyWeak(auStack_240);
            _objc_destroyWeak(auStack_238);
            __Block_object_dispose(&uStack_230,8);
            _objc_destroyWeak(auStack_208);
            uVar18 = uVar18 + 1;
          } while (uVar10 != uVar18);
          uVar10 = param_3;
          func_0x00010bf52a60();
        } while (uVar10 != 0);
      }
      _objc_release(param_3);
      if (((bool)(1 < uVar3 & bVar2)) && ((*(byte *)(param_1 + _DAT_112793efc) & 1) == 0)) {
        puVar12 = puVar4;
        func_0x00010c089820(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20eaa0();
        _objc_release(puVar12);
        func_0x00010bf529e0(puVar5);
        func_0x00010c1d04c0(puVar5);
      }
      puVar12 = puVar5;
      func_0x00010bf51e00();
      puVar15 = *(undefined **)(param_1 + _DAT_112793f44);
      *(undefined **)(param_1 + _DAT_112793f44) = puVar12;
    }
    _objc_release(puVar15);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)(param_1 + _DAT_112793f34);
    *(undefined **)(param_1 + _DAT_112793f34) = puVar5;
    _objc_release(uVar14);
    _objc_release(puVar4);
  }
  uVar3 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x26 + 6);
    _objc_destroyWeak(auStack_238);
    __Block_object_dispose(&uStack_230,8);
    _objc_destroyWeak(param_3 + 0x28);
    __Unwind_Resume(uVar3);
    return;
  }
  return;
}



/* Entry: 10b7fd484; end: 10b7fd49b;  */

void FUN_10b7fd484(void)

{
  return;
}



/* Entry: 10b7fd49c; end: 10b7fd51b;  */

void FUN_10b7fd49c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beee0a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be31bc0(lVar1,param_2,lVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7fd51c; end: 10b7fd53f; +[SIGAlertDialog _buttonEmphasisForActionStyle:] */

undefined8 FUN_10b7fd51c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 3U < 5) {
    return *(undefined8 *)(&UNK_10e5f2478 + (param_3 - 3U) * 8);
  }
  return 1;
}



/* Entry: 10b7fd540; end: 10b7fd563; +[SIGAlertDialog _buttonStyleForActionStyle:] */

undefined8 FUN_10b7fd540(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 7) {
    return *(undefined8 *)(&UNK_10e5f24a0 + (param_3 - 1U) * 8);
  }
  return 1;
}



/* Entry: 10b7fd564; end: 10b7fd603; -[SIGAlertDialog _handleTapForActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fd564(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_112793f34);
  func_0x00010bfece20(uVar1,param_2,param_3);
  if (uVar1 != 0x7fffffffffffffff) {
    lVar4 = (long)_DAT_112793f54;
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be31bc0(param_1,param_2,param_3,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7fd604; end: 10b7fd66f; -[SIGAlertDialog _handleTapForButton:withAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fd604(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112793f3c);
  *(undefined8 *)(param_1 + _DAT_112793f3c) = param_3;
  _objc_release(uVar1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_1,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b7fd670; end: 10b7fd797; -[SIGAlertDialog _setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fd670(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c212f20();
    func_0x00010c213040(puVar2,param_2,1);
    func_0x00010c1bdb20(puVar2,param_2,1);
    uVar4 = 3;
    if (*(char *)(param_1 + _DAT_112793f04) == '\0') {
      uVar4 = 0;
    }
    func_0x00010c165e00(puVar2);
    func_0x00010c1cfce0(puVar2,param_2,uVar4);
    func_0x00010c21ad00(puVar2,param_2,5);
    func_0x00010c1c3ae0(0x403d000000000000,puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c219b60(puVar2,param_2,0);
    func_0x00010c23d620(puVar2);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112793f28);
    *(undefined **)(param_1 + _DAT_112793f28) = puVar2;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7fd798; end: 10b7fd833; -[SIGAlertDialog _setAccessoryViewOrViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fd798(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112793f34);
    func_0x00010bf529e0();
    if (uVar1 < 5) {
      lVar3 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(lVar3);
      lVar3 = (long)_DAT_112793f24;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_3;
      _objc_release(uVar2);
      *(undefined8 *)(param_1 + _DAT_112793f20) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7fd834; end: 10b7fd843; -[SIGAlertDialog _accessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fd834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f24),PTR_s_view_1126849e8);
  return;
}



/* Entry: 10b7fd844; end: 10b7fd847; -[SIGAlertDialog _setupAutolayout] */

void FUN_10b7fd844(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be06cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dynamicTypeAutolayout_11255f4d0);
  return;
}



/* Entry: 10b7fd848; end: 10b7fe81f; -[SIGAlertDialog _dynamicTypeAutolayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fd848(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 unaff_d9;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = *(undefined **)(param_1 + _DAT_112793f08);
  _objc_retain(puVar19);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112793f0c;
  puVar1 = *(undefined **)(param_1 + lVar20);
  puStack_138 = puVar11;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar19;
  puStack_140 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_1 + lVar20);
  puStack_160 = puVar2;
  puStack_a0 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar19;
  puStack_168 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_1 + lVar20);
  puStack_178 = puVar3;
  lStack_158 = lVar20;
  puStack_98 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar19;
  func_0x00010c2793a0(puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_90 = puVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar19;
  func_0x00010c2a5060(puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puStack_138;
  func_0x00010befa160();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar19);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar16);
  _objc_release(puVar4);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  puStack_160 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_1;
  func_0x00010bdc3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puStack_148 = param_1;
  if (puVar16 == (undefined *)0x0) {
    uVar22 = 0x4038000000000000;
  }
  else {
    if (*(long *)(param_1 + _DAT_112793f20) == 1) {
      puVar11 = puStack_150;
      func_0x00010c08c0e0(puStack_150);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar11);
      puVar16 = param_1;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = puVar16;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar16;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      puStack_d8 = puVar11;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puStack_160;
      puVar4 = puStack_160;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar3;
      puStack_168 = puVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_170 = puVar19;
      puStack_d0 = puVar19;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = param_1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      puStack_180 = puVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c8 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar12);
      puVar19 = param_1;
LAB_10b7fdde8:
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puStack_180);
      _objc_release(puVar19);
      _objc_release(puStack_178);
      _objc_release(puStack_170);
      _objc_release(puStack_168);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar11);
      _objc_release(puVar16);
      _objc_release(puStack_140);
    }
    else if (*(long *)(param_1 + _DAT_112793f20) == 0) {
      puVar11 = puStack_150;
      func_0x00010c08c0e0(puStack_150);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar11);
      puVar11 = param_1;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = puVar11;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puStack_188 = puVar11;
      func_0x00010bf493c0(0x4038000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      puStack_190 = puVar11;
      puStack_c0 = puVar11;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = puVar3;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puStack_160;
      puVar2 = puStack_160;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar3;
      puStack_168 = puVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = param_1;
      puStack_170 = puVar16;
      puStack_b8 = puVar16;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = puVar19;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar11;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar19;
      puStack_180 = puVar2;
      func_0x00010bf49460();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = puVar4;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar6;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar12);
      _objc_release(puVar2);
      puVar2 = puStack_198;
      _objc_release(puVar16);
      puVar16 = puStack_188;
      _objc_release(puVar11);
      puVar11 = puStack_190;
      _objc_release(puVar6);
      puVar6 = param_1;
      goto LAB_10b7fdde8;
    }
    puVar16 = puStack_148;
    puVar6 = puStack_148;
    func_0x00010bdc3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    puVar4 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar11);
    puVar11 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar11 = (undefined *)0x0;
    }
    _objc_retain(puVar11);
    _objc_release(puVar6);
    puVar4 = puVar16;
    if (puVar11 != (undefined *)0x0) {
      func_0x00010c1f7b20(puVar6);
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar16;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar4);
      puVar4 = puStack_148;
      _objc_release(puVar16);
      func_0x00010befa120(puVar12);
      _objc_release(puVar3);
    }
    func_0x00010bdc3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar11);
    uVar22 = 0x4030000000000000;
    puVar1 = puVar16;
  }
  puVar16 = puStack_148;
  lVar20 = (long)_DAT_112793f28;
  puVar4 = *(undefined **)(puStack_148 + lVar20);
  puVar6 = puVar1;
  if (puVar4 != (undefined *)0x0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar4;
    func_0x00010bf493c0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(puVar16 + lVar20);
    puStack_168 = puVar4;
    puStack_f0 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puStack_160;
    puVar4 = puStack_160;
    func_0x00010c08de00(puStack_160);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf493c0(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(puVar16 + lVar20);
    puStack_e8 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e0 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar12);
    puVar16 = puStack_148;
    _objc_release(puVar19);
    _objc_release(puVar11);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puStack_168);
    _objc_release(puStack_140);
    puVar6 = *(undefined **)(puVar16 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar22 = 0x4030000000000000;
  }
  lVar20 = (long)_DAT_112793f30;
  puVar1 = *(undefined **)(puVar16 + lVar20);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar1;
    func_0x00010bf493c0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar16 + lVar20);
    puStack_170 = puVar1;
    puStack_108 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_160;
    puVar1 = puStack_160;
    func_0x00010c08de00(puStack_160);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar7;
    func_0x00010bf493c0(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = *(undefined **)(puVar16 + lVar20);
    puStack_140 = puVar6;
    uStack_100 = uVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar12);
    puVar16 = puStack_148;
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar22);
    _objc_release(puVar1);
    _objc_release(uVar7);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
    puVar6 = *(undefined **)(puVar16 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_140);
    uVar22 = 0x4030000000000000;
  }
  lVar20 = (long)_DAT_112793f2c;
  puVar1 = *(undefined **)(puVar16 + lVar20);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar1;
    func_0x00010bf493c0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar16 + lVar20);
    puStack_170 = puVar1;
    puStack_120 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_150;
    puVar1 = puStack_150;
    func_0x00010c2a5060(puStack_150);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf493c0(0xc050000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = *(undefined **)(puVar16 + lVar20);
    puStack_140 = puVar6;
    uStack_118 = uVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puStack_138;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_110 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar12);
    puVar16 = puStack_148;
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(puVar1);
    _objc_release(uVar8);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
    puVar6 = *(undefined **)(puVar16 + lVar20);
    func_0x00010bf1ff80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_140);
  }
  puVar1 = puStack_160;
  puVar4 = puStack_160;
  func_0x00010bf1ff80(puStack_160);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar12);
  _objc_release(puVar19);
  _objc_release(puVar4);
  lVar20 = lStack_158;
  uVar8 = *(undefined8 *)(puVar16 + lStack_158);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar8);
  func_0x00010c1e3380(0x42500000,uVar7);
  puStack_168 = (undefined *)uVar7;
  func_0x00010befa120(puVar12);
  uVar7 = *(undefined8 *)(puVar16 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = uVar7;
  _objc_release(puVar6);
  lVar18 = (long)_DAT_112793f34;
  lVar20 = *(long *)(puVar16 + lVar18);
  func_0x00010bf529e0();
  if (lVar20 != 0) {
    uVar21 = 0;
    uVar22 = 0x4040000000000000;
    unaff_d9 = 0xc040000000000000;
    do {
      uVar7 = *(undefined8 *)(puVar16 + lVar18);
      if (uVar21 == 0) {
        func_0x00010c0dfd40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf493c0(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_138);
      }
      else {
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(puVar16 + lVar18);
        func_0x00010c0dfd40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar9;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010bf493c0(0x4020000000000000,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_138);
        _objc_release(uVar10);
        _objc_release(uVar17);
      }
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      puVar2 = *(undefined **)(puVar16 + lVar18);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = puVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puStack_150;
      puVar6 = puStack_150;
      func_0x00010c08de00(puStack_150);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf493c0(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = *(undefined **)(puVar16 + lVar18);
      puStack_130 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar11;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar1;
      func_0x00010bf493c0(0xc040000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_128 = puVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puStack_138);
      _objc_release(puVar4);
      _objc_release(puVar16);
      _objc_release(puVar12);
      puVar16 = puStack_148;
      _objc_release(puVar1);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puStack_140);
      uVar21 = uVar21 + 1;
      uVar13 = *(ulong *)(puVar16 + lVar18);
      func_0x00010bf529e0();
    } while (uVar21 < uVar13);
  }
  uVar9 = *(undefined8 *)(puVar16 + lVar18);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puStack_150;
  puVar4 = puStack_150;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_138;
  func_0x00010befa120(puStack_138);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar9);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puStack_168);
  _objc_release(lStack_158);
  _objc_release(puStack_160);
  _objc_release(puVar1);
  puVar12 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  pcStack_1a8 = FUN_10b7fe820;
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = *(undefined **)(puVar12 + _DAT_112793f08);
  uStack_210 = unaff_d9;
  uStack_208 = uVar22;
  puStack_200 = puVar3;
  puStack_1f8 = puVar2;
  uStack_1f0 = uVar8;
  puStack_1e8 = puVar16;
  puStack_1e0 = puVar11;
  puStack_1d8 = puVar4;
  uStack_1d0 = uVar7;
  uStack_1c8 = uVar9;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_2e0 = puVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar12;
  puStack_2f0 = puVar6;
  func_0x00010bdc3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar11 = puStack_2e0;
  puStack_2e8 = puVar12;
  if (puVar3 == (undefined *)0x0) {
    uVar22 = 0x4038000000000000;
    goto LAB_10b7febb8;
  }
  puVar3 = puVar12;
  if (*(long *)(puVar12 + _DAT_112793f20) == 1) {
    puVar16 = puStack_2e0;
    func_0x00010c08c0e0(puStack_2e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar16);
    puVar16 = puVar12;
    func_0x00010bdc3fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d8 = puVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_2f8 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_300 = puVar16;
    puStack_248 = puVar16;
    func_0x00010bdc3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    func_0x00010c08de00(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_240 = puVar14;
    func_0x00010bdc3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_238 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    puVar1 = puStack_2e8;
    _objc_release(puVar6);
    _objc_release(puVar16);
    puVar6 = puStack_2f8;
    _objc_release(puVar11);
    puVar4 = puStack_2d8;
    puVar16 = puStack_300;
    _objc_release(puVar15);
LAB_10b7feb3c:
    _objc_release(puVar12);
    _objc_release(puVar14);
    _objc_release(puVar5);
    _objc_release(puVar19);
    _objc_release(puVar3);
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  else {
    puVar1 = puVar12;
    if (*(long *)(puVar12 + _DAT_112793f20) == 0) {
      puVar16 = puStack_2e0;
      func_0x00010c08c0e0(puStack_2e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar16);
      puVar4 = puVar12;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar6;
      func_0x00010bf493c0(0x4038000000000000);
      _objc_retainAutoreleasedReturnValue();
      puStack_230 = puVar16;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar3;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34860(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar19;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_228 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      puVar5 = puVar11;
      goto LAB_10b7feb3c;
    }
  }
  puVar11 = puVar1;
  func_0x00010bdc3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_2f0);
  _objc_release(puVar11);
  uVar22 = 0x4030000000000000;
  puVar12 = puVar1;
  puStack_2f0 = puVar3;
LAB_10b7febb8:
  lVar20 = (long)_DAT_112793f28;
  puVar11 = *(undefined **)(puVar12 + lVar20);
  puStack_2d0 = puVar2;
  if (puVar11 != (undefined *)0x0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_2f0;
    puStack_2d8 = puVar11;
    func_0x00010bf493c0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar12 + lVar20);
    puStack_2f8 = puVar11;
    puStack_260 = puVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_2e0;
    puVar2 = puStack_2e0;
    func_0x00010c08de00(puStack_2e0);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar8;
    func_0x00010bf493c0(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar12 + lVar20);
    uStack_258 = uVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_250 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puStack_2d0);
    _objc_release(puVar12);
    _objc_release(uVar7);
    _objc_release(puVar11);
    puVar12 = puStack_2e8;
    _objc_release(uVar9);
    _objc_release(uVar22);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(puStack_2f8);
    _objc_release(puStack_2d8);
    puVar11 = *(undefined **)(puVar12 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_2d0;
    _objc_release(puVar3);
    uVar22 = 0x4030000000000000;
    puStack_2f0 = puVar11;
  }
  lVar20 = (long)_DAT_112793f30;
  if (*(long *)(puVar12 + lVar20) != 0) {
    lVar18 = (long)_DAT_112793f0c;
    puVar11 = *(undefined **)(puVar12 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d8 = puVar11;
    func_0x00010bf493c0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(puVar12 + lVar18);
    puStack_2f8 = puVar11;
    puStack_298 = puVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_2e0;
    puVar2 = puStack_2e0;
    puStack_300 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_308 = puVar2;
    func_0x00010bf493c0(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar12 + lVar18);
    puStack_310 = puVar3;
    puStack_290 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    uStack_318 = uVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_d9 = 0xc040000000000000;
    puStack_320 = puVar2;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar12 + lVar18);
    uStack_328 = uVar22;
    uStack_288 = uVar22;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar12 + lVar20);
    uStack_330 = uVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_338 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_340 = uVar7;
    func_0x00010c14d8a0(0x437a0000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar12 + lVar20);
    uStack_348 = uVar7;
    uStack_280 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar12 + lVar18);
    uStack_350 = uVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_358 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar12 + lVar20);
    uStack_360 = uVar8;
    uStack_278 = uVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010c08de00(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar9;
    func_0x00010bf493c0(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar12 + lVar20);
    uStack_270 = uVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_2d0;
    func_0x00010c2793a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_268 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar7);
    _objc_release(puVar11);
    puVar12 = puStack_2e8;
    _objc_release(uVar8);
    _objc_release(uVar22);
    _objc_release(puVar3);
    _objc_release(uVar9);
    _objc_release(uStack_360);
    _objc_release(uStack_358);
    _objc_release(uStack_350);
    _objc_release(uStack_348);
    _objc_release(uStack_340);
    _objc_release(uStack_338);
    _objc_release(uStack_330);
    _objc_release(uStack_328);
    _objc_release(puStack_320);
    _objc_release(uStack_318);
    _objc_release(puStack_310);
    _objc_release(puStack_308);
    _objc_release(puStack_300);
    _objc_release(puStack_2f8);
    _objc_release(puStack_2d8);
    puVar11 = *(undefined **)(puVar12 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_2f0);
    uVar22 = 0x4030000000000000;
    puStack_2f0 = puVar11;
  }
  lVar20 = (long)_DAT_112793f2c;
  puVar11 = *(undefined **)(puVar12 + lVar20);
  if (puVar11 != (undefined *)0x0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d8 = puVar11;
    func_0x00010bf493c0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = *(undefined **)(puVar12 + lVar20);
    puStack_2f8 = puVar11;
    puStack_2b8 = puVar11;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_2e0;
    puVar3 = puStack_2e0;
    puStack_300 = puVar16;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_308 = puVar3;
    func_0x00010bf493c0(0xc050000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar12 + lVar20);
    puStack_310 = puVar16;
    puStack_2b0 = puVar16;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010bf34860(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puStack_2e8 + lVar20);
    uStack_2a8 = uVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar17;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_2a0 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar8);
    _objc_release(puVar11);
    _objc_release(uVar17);
    _objc_release(uVar7);
    _objc_release(puVar3);
    puVar12 = puStack_2e8;
    _objc_release(uVar9);
    _objc_release(puStack_310);
    _objc_release(puStack_308);
    _objc_release(puStack_300);
    _objc_release(puStack_2f8);
    _objc_release(puStack_2d8);
    puVar11 = *(undefined **)(puVar12 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_2f0);
    puStack_2f0 = puVar11;
  }
  lVar18 = (long)_DAT_112793f34;
  lVar20 = *(long *)(puVar12 + lVar18);
  func_0x00010bf529e0();
  if (lVar20 != 0) {
    uVar21 = 0;
    uVar22 = 0x4040000000000000;
    unaff_d9 = 0xc040000000000000;
    do {
      uVar7 = *(undefined8 *)(puVar12 + lVar18);
      if (uVar21 == 0) {
        func_0x00010c0dfd40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf493c0(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_2d0);
      }
      else {
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(puVar12 + lVar18);
        func_0x00010c0dfd40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar9;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010bf493c0(0x4020000000000000,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_2d0);
        _objc_release(uVar10);
        _objc_release(uVar17);
      }
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      puVar16 = *(undefined **)(puVar12 + lVar18);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puStack_2d8 = puVar16;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puStack_2e0;
      puVar2 = puStack_2e0;
      func_0x00010c08de00(puStack_2e0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar16;
      func_0x00010bf493c0(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(puVar12 + lVar18);
      puStack_2c8 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar9;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf493c0(0xc040000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_2c0 = uVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puStack_2d0);
      _objc_release(puVar12);
      _objc_release(uVar8);
      _objc_release(puVar11);
      puVar12 = puStack_2e8;
      _objc_release(uVar7);
      _objc_release(uVar9);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar16);
      _objc_release(puStack_2d8);
      uVar21 = uVar21 + 1;
      uVar13 = *(ulong *)(puVar12 + lVar18);
      func_0x00010bf529e0();
    } while (uVar21 < uVar13);
  }
  uVar9 = *(undefined8 *)(puVar12 + lVar18);
  func_0x00010c089820(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puStack_2e0;
  puVar3 = puStack_2e0;
  func_0x00010bf1ff80(puStack_2e0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493c0(0xc038000000000000,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_2d0;
  func_0x00010befa120(puStack_2d0);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar9);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puStack_2f0);
  _objc_release(puVar2);
  puVar3 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
    return;
  }
  ___stack_chk_fail();
  puStack_380 = puVar2;
  puStack_378 = puVar11;
  pcStack_368 = FUN_10b7ff598;
  puStack_398 = PTR_PTR_11270b190;
  puStack_3a0 = puVar3;
  uStack_390 = unaff_d9;
  uStack_388 = uVar22;
  ppuStack_370 = &puStack_1b0;
  _objc_msgSendSuper2(&puStack_3a0,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010be498e0(puVar3);
  lVar20 = (long)_DAT_112793f0c;
  func_0x00010bf4d5e0(*(undefined8 *)(puVar3 + lVar20));
  func_0x00010bfb68e0(*(undefined8 *)(puVar3 + lVar20));
  func_0x00010c17d4c0(*(undefined8 *)(puVar3 + lVar20));
  return;
}



/* Entry: 10b7fe820; end: 10b7ff597; -[SIGAlertDialog _noDynamicTypeAutolayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fe820(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 unaff_d9;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = *(undefined **)(param_1 + _DAT_112793f08);
  _objc_retain(puVar16);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  puStack_150 = puVar16;
  func_0x00010bdc3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar16 = puStack_140;
  puStack_148 = param_1;
  if (puVar9 == (undefined *)0x0) {
    uVar21 = 0x4038000000000000;
    goto LAB_10b7febb8;
  }
  puVar9 = param_1;
  if (*(long *)(param_1 + _DAT_112793f20) == 1) {
    puVar11 = puStack_140;
    func_0x00010c08c0e0(puStack_140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar11);
    puVar11 = param_1;
    func_0x00010bdc3fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar11;
    puStack_a8 = puVar11;
    func_0x00010bdc3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar16;
    func_0x00010c08de00(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar5;
    func_0x00010bdc3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    puVar20 = puStack_148;
    _objc_release(puVar14);
    _objc_release(puVar11);
    puVar14 = puStack_158;
    _objc_release(puVar16);
    puVar2 = puStack_138;
    puVar11 = puStack_160;
    _objc_release(puVar6);
LAB_10b7feb3c:
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar14);
    _objc_release(puVar2);
  }
  else {
    puVar20 = param_1;
    if (*(long *)(param_1 + _DAT_112793f20) == 0) {
      puVar11 = puStack_140;
      func_0x00010c08c0e0(puStack_140);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar11);
      puVar2 = param_1;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar14;
      func_0x00010bf493c0(0x4038000000000000);
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = puVar11;
      func_0x00010bdc3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34860(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1);
      puVar4 = puVar16;
      goto LAB_10b7feb3c;
    }
  }
  puVar16 = puVar20;
  func_0x00010bdc3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_150);
  _objc_release(puVar16);
  uVar21 = 0x4030000000000000;
  param_1 = puVar20;
  puStack_150 = puVar9;
LAB_10b7febb8:
  lVar17 = (long)_DAT_112793f28;
  puVar16 = *(undefined **)(param_1 + lVar17);
  puStack_130 = puVar1;
  if (puVar16 != (undefined *)0x0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puStack_150;
    puStack_138 = puVar16;
    func_0x00010bf493c0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar17);
    puStack_158 = puVar16;
    puStack_c0 = puVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puStack_140;
    puVar1 = puStack_140;
    func_0x00010c08de00(puStack_140);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar7;
    func_0x00010bf493c0(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar17);
    uStack_b8 = uVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puStack_130);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(puVar16);
    param_1 = puStack_148;
    _objc_release(uVar8);
    _objc_release(uVar21);
    _objc_release(puVar1);
    _objc_release(uVar7);
    _objc_release(puStack_158);
    _objc_release(puStack_138);
    puVar16 = *(undefined **)(param_1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_130;
    _objc_release(puVar9);
    uVar21 = 0x4030000000000000;
    puStack_150 = puVar16;
  }
  lVar17 = (long)_DAT_112793f30;
  if (*(long *)(param_1 + lVar17) != 0) {
    lVar18 = (long)_DAT_112793f0c;
    puVar16 = *(undefined **)(param_1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar16;
    func_0x00010bf493c0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(param_1 + lVar18);
    puStack_158 = puVar16;
    puStack_f8 = puVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puStack_140;
    puVar1 = puStack_140;
    puStack_160 = puVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar1;
    func_0x00010bf493c0(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar18);
    puStack_170 = puVar9;
    puStack_f0 = puVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar16;
    uStack_178 = uVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_d9 = 0xc040000000000000;
    puStack_180 = puVar1;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar18);
    uStack_188 = uVar21;
    uStack_e8 = uVar21;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar17);
    uStack_190 = uVar10;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_198 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uVar10;
    func_0x00010c14d8a0(0x437a0000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar17);
    uStack_1a8 = uVar10;
    uStack_e0 = uVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar18);
    uStack_1b0 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar17);
    uStack_1c0 = uVar7;
    uStack_d8 = uVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar16;
    func_0x00010c08de00(puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar8;
    func_0x00010bf493c0(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar17);
    uStack_d0 = uVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_130;
    func_0x00010c2793a0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(puVar16);
    param_1 = puStack_148;
    _objc_release(uVar7);
    _objc_release(uVar21);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uStack_1c0);
    _objc_release(uStack_1b8);
    _objc_release(uStack_1b0);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1a0);
    _objc_release(uStack_198);
    _objc_release(uStack_190);
    _objc_release(uStack_188);
    _objc_release(puStack_180);
    _objc_release(uStack_178);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
    _objc_release(puStack_160);
    _objc_release(puStack_158);
    _objc_release(puStack_138);
    puVar16 = *(undefined **)(param_1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_150);
    uVar21 = 0x4030000000000000;
    puStack_150 = puVar16;
  }
  lVar17 = (long)_DAT_112793f2c;
  puVar16 = *(undefined **)(param_1 + lVar17);
  if (puVar16 != (undefined *)0x0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar16;
    func_0x00010bf493c0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = *(undefined **)(param_1 + lVar17);
    puStack_158 = puVar16;
    puStack_118 = puVar16;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puStack_140;
    puVar9 = puStack_140;
    puStack_160 = puVar11;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar9;
    func_0x00010bf493c0(0xc050000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar17);
    puStack_170 = puVar11;
    puStack_110 = puVar11;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar16;
    func_0x00010bf34860(puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puStack_148 + lVar17);
    uStack_108 = uVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar12;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_100 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar11);
    _objc_release(uVar7);
    _objc_release(puVar16);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(puVar9);
    param_1 = puStack_148;
    _objc_release(uVar8);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
    _objc_release(puStack_160);
    _objc_release(puStack_158);
    _objc_release(puStack_138);
    puVar16 = *(undefined **)(param_1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_150);
    puStack_150 = puVar16;
  }
  lVar18 = (long)_DAT_112793f34;
  lVar17 = *(long *)(param_1 + lVar18);
  func_0x00010bf529e0();
  if (lVar17 != 0) {
    uVar19 = 0;
    uVar21 = 0x4040000000000000;
    unaff_d9 = 0xc040000000000000;
    do {
      uVar10 = *(undefined8 *)(param_1 + lVar18);
      if (uVar19 == 0) {
        func_0x00010c0dfd40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar10;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf493c0(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_130);
      }
      else {
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar10;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + lVar18);
        func_0x00010c0dfd40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar8;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar7;
        func_0x00010bf493c0(0x4020000000000000,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_130);
        _objc_release(uVar13);
        _objc_release(uVar12);
      }
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar10);
      puVar14 = *(undefined **)(param_1 + lVar18);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = puVar14;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puStack_140;
      puVar1 = puStack_140;
      func_0x00010c08de00(puStack_140);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar14;
      func_0x00010bf493c0(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar18);
      puStack_128 = puVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar10;
      func_0x00010bf493c0(0xc040000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_120 = uVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puStack_130);
      _objc_release(puVar11);
      _objc_release(uVar7);
      _objc_release(puVar16);
      param_1 = puStack_148;
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(puVar9);
      _objc_release(puVar1);
      _objc_release(puVar14);
      _objc_release(puStack_138);
      uVar19 = uVar19 + 1;
      uVar15 = *(ulong *)(param_1 + lVar18);
      func_0x00010bf529e0();
    } while (uVar19 < uVar15);
  }
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c089820(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puStack_140;
  puVar9 = puStack_140;
  func_0x00010bf1ff80(puStack_140);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bf493c0(0xc038000000000000,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_130;
  func_0x00010befa120(puStack_130);
  _objc_release(uVar7);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(uVar8);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puStack_150);
  _objc_release(puVar1);
  puVar9 = puVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar16;
  pcStack_1c8 = FUN_10b7ff598;
  puStack_1f8 = PTR_PTR_11270b190;
  puStack_200 = puVar9;
  uStack_1f0 = unaff_d9;
  uStack_1e8 = uVar21;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_200,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010be498e0(puVar9);
  lVar17 = (long)_DAT_112793f0c;
  func_0x00010bf4d5e0(*(undefined8 *)(puVar9 + lVar17));
  func_0x00010bfb68e0(*(undefined8 *)(puVar9 + lVar17));
  func_0x00010c17d4c0(*(undefined8 *)(puVar9 + lVar17));
  return;
}



/* Entry: 10b7ff598; end: 10b7ff617; -[SIGAlertDialog viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7ff598(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b190;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010be498e0(param_1);
  lVar1 = (long)_DAT_112793f0c;
  func_0x00010bf4d5e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10b7ff618; end: 10b7ff72f; -[SIGAlertDialog _layoutTextBoundaryGradientForceLayout:] */

/* WARNING: Possible PIC construction at 0x00010b7ff690: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b7ff694) */
/* WARNING: Removing unreachable block (ram,0x00010bf42760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7ff618(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112793f4c) & 1) != 0) {
    return;
  }
  if (param_3 != 0) {
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + _DAT_112793f08));
  }
  lVar1 = param_1;
  func_0x00010beb66e0();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f14),PTR_s_setHidden__1126479f8,(int)lVar1 == 0);
  return;
}



/* Entry: 10b7ff730; end: 10b7ff7d3; -[SIGAlertDialog _shouldShowTextBoundaryGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10b7ff730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_112793f0c;
  uVar1 = *(ulong *)(param_5 + lVar3);
  func_0x00010bfb68e0();
  _CGRectEqualToRect();
  puVar2 = PTR_PTR_1126aed78;
  if ((uVar1 & 1) != 0) {
    return (undefined *)0x0;
  }
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar3));
  uVar4 = param_2;
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c2333f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,uVar4,param_4,puVar2,PTR_s_shouldShowBottomTextGradientForC_11266a720);
  return puVar2;
}



/* Entry: 10b7ff7d4; end: 10b7ff7f3; +[SIGAlertDialog shouldShowBottomTextGradientForContentOffsetY:contentHeight:scrollFrameHeight:] */

bool FUN_10b7ff7d4(double param_1,double param_2,double param_3)

{
  return param_1 < (param_2 - param_3) + -1.0 && param_3 < param_2;
}



/* Entry: 10b7ff7f4; end: 10b7ff83f; -[SIGAlertDialog getCancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7ff7f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112793f34;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf529e0();
  if (1 < uVar1) {
    func_0x00010c089820(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ff840; end: 10b7ff84f; -[SIGAlertDialog linkHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7ff840(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793f10);
}



/* Entry: 10b7ff850; end: 10b7ff85b; -[SIGAlertDialog setLinkHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7ff850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b7ff85c; end: 10b7ff86b; -[SIGAlertDialog editTextFieldMaxLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7ff85c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793f1c);
}



/* Entry: 10b7ff86c; end: 10b7ff87b; -[SIGAlertDialog isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b7ff86c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112793ef8);
}



/* Entry: 10b7ff87c; end: 10b7ff88b; -[SIGAlertDialog accessoryLayoutStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7ff87c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793f20);
}



/* Entry: 10b7ff88c; end: 10b7ff9bb; -[SIGAlertDialog .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7ff88c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112793f1c,0);
  _objc_storeStrong(param_1 + _DAT_112793f10,0);
  _objc_storeStrong(param_1 + _DAT_112793f00,0);
  _objc_storeStrong(param_1 + _DAT_112793f14,0);
  _objc_storeStrong(param_1 + _DAT_112793f0c,0);
  _objc_storeStrong(param_1 + _DAT_112793f08,0);
  _objc_storeStrong(param_1 + _DAT_112793f3c,0);
  _objc_storeStrong(param_1 + _DAT_112793f44,0);
  _objc_storeStrong(param_1 + _DAT_112793f40,0);
  _objc_storeStrong(param_1 + _DAT_112793f54,0);
  _objc_storeStrong(param_1 + _DAT_112793f34,0);
  _objc_storeStrong(param_1 + _DAT_112793f24,0);
  _objc_storeStrong(param_1 + _DAT_112793f48,0);
  _objc_storeStrong(param_1 + _DAT_112793f2c,0);
  _objc_storeStrong(param_1 + _DAT_112793f18,0);
  _objc_storeStrong(param_1 + _DAT_112793f30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793f28,0);
  return;
}



/* Entry: 10b7ff9bc; end: 10b7ff9c7; +[SIGAlertDialogAction alertDialogActionWithTitle:actionBlockWithSpinner:] */

void FUN_10b7ff9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010beff4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_alertDialogActionWithTitle_acces_11259d6d0,param_3,0,param_4);
  return;
}



/* Entry: 10b7ff9c8; end: 10b7ff9d3; +[SIGAlertDialogAction alertDialogActionWithTitle:actionBlock:] */

void FUN_10b7ff9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010beff490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_alertDialogActionWithTitle_acces_11259d6c8,param_3,0,param_4);
  return;
}



/* Entry: 10b7ff9d4; end: 10b7ffa5f; +[SIGAlertDialogAction alertDialogActionWithTitle:accessibilityIdentifier:actionBlockWithSpinner:] */

void FUN_10b7ff9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aed70;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c052c00();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7ffa60; end: 10b7ffb0b; +[SIGAlertDialogAction alertDialogActionWithTitle:accessibilityIdentifier:actionBlock:] */

void FUN_10b7ffa60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b7ffb0c;
  puStack_40 = &UNK_110d61f90;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010beff4a0(param_1,param_2,param_3,param_4,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7ffb0c; end: 10b7ffb1f;  */

void FUN_10b7ffb0c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7ffb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b7ffb20; end: 10b7ffc17; +[SIGAlertDialogAction alertDialogActionWithTitle:accessibilityIdentifier:accessibilityLabel:actionBlock:] */

void FUN_10b7ffb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126aed70;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b7ffc18;
  puStack_50 = &UNK_110d61f90;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010c052c00(puVar1,param_2,param_3,param_4,param_5,&puStack_68,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7ffc18; end: 10b7ffc2b;  */

void FUN_10b7ffc18(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7ffc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b7ffc2c; end: 10b7ffd27; +[SIGAlertDialogAction alertDialogActionWithTitle:accessibilityIdentifier:accessibilityLabel:actionBlock:styling:] */

void FUN_10b7ffc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126aed70;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b7ffd28;
  puStack_50 = &UNK_110d61f90;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010c052c00(puVar1,param_2,param_3,param_4,param_5,&puStack_68,param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7ffd28; end: 10b7ffd3b;  */

void FUN_10b7ffd28(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7ffd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b7ffd3c; end: 10b7ffe4f; -[SIGAlertDialogAction initWithTitle:accessibilityIdentifier:accessibilityLabel:actionBlock:styling:] */

undefined1 *
FUN_10b7ffd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270b198;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7ffe50; end: 10b7ffe57; -[SIGAlertDialogAction title] */

undefined8 FUN_10b7ffe50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7ffe58; end: 10b7ffe5f; -[SIGAlertDialogAction accessibilityIdentifier] */

undefined8 FUN_10b7ffe58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7ffe60; end: 10b7ffe67; -[SIGAlertDialogAction accessibilityLabel] */

undefined8 FUN_10b7ffe60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7ffe68; end: 10b7ffe6f; -[SIGAlertDialogAction styling] */

undefined8 FUN_10b7ffe68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7ffe70; end: 10b7ffe77; -[SIGAlertDialogAction actionBlock] */

undefined8 FUN_10b7ffe70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7ffe78; end: 10b7ffebf; -[SIGAlertDialogAction .cxx_destruct] */

void FUN_10b7ffe78(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7ffec0; end: 10b7fffb3; +[SIGAlertDialogButton alertDialogButtonWithTitle:actionBlock:dynamicTypeEnabled:] */

void FUN_10b7ffec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1568;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c052c40();
  _objc_release(param_4);
  func_0x00010befbd60(puVar1,param_2,puVar1,PTR_s__possiblyInvokeActionBlock_1125480f0,0x40);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c161020(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c161080(puVar1,param_2,*(undefined8 *)PTR__UIAccessibilityTraitButton_110345920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7fffb4; end: 10b8002b7; -[SIGAlertDialogButton initWithTitle:actionBlock:dynamicTypeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b7fffb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a0 = PTR_PTR_11270b1a0;
  uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar17 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(uVar19,uVar20,uVar21,uVar22,puVar17,PTR_s_initWithFrame__1125e2948);
  if (puVar17 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    func_0x00010c21ad00();
    func_0x00010c165e00(puVar1);
    func_0x00010c219b60(puVar1);
    func_0x00010c1cfce0(puVar1);
    func_0x00010c213040(puVar1);
    func_0x00010c1c3ae0(0x4038000000000000,puVar1);
    uVar19 = *(undefined8 *)((long)puVar17 + (long)_DAT_112793f6c);
    *(undefined **)((long)puVar17 + (long)_DAT_112793f6c) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar19);
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar19 = *(undefined8 *)((long)puVar17 + (long)_DAT_112793f70);
    *(undefined **)((long)puVar17 + (long)_DAT_112793f70) = puVar2;
    _objc_release(uVar19);
    _objc_retain(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010bea8740(puVar17);
    func_0x00010befbb60(puVar17);
    func_0x00010befbb60(puVar17);
    func_0x00010beefea0(puVar17);
    puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar17;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    puStack_98 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar17;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar18);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_112793f6c;
  puVar9 = *(undefined8 **)(param_3 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar9;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_3 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010c2793a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar22;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3;
  func_0x00010c274200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar12;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_3 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar14;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beef8c0(puVar18);
  _objc_release(puVar1);
  _objc_release(uVar21);
  _objc_release(param_3);
  _objc_release(uVar14);
  _objc_release(uVar20);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar19);
  _objc_release(lVar11);
  _objc_release(uVar22);
  _objc_release(puVar17);
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar17 = (undefined8 *)0x0;
  if ((long)puVar2 < 4) {
    if ((long)puVar2 < 2) {
      if (puVar2 != (undefined *)0x0) {
        puVar18 = (undefined *)0x0;
        if (puVar2 != (undefined *)0x1) goto LAB_10b8007b0;
        puVar17 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b80078c;
      }
      puVar17 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)puVar9 + (long)_DAT_112793f70);
    }
    else if (puVar2 == (undefined *)0x2) {
      puVar17 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)puVar9 + (long)_DAT_112793f70);
    }
    else {
      puVar18 = (undefined *)0x0;
      if (puVar2 != (undefined *)0x3) goto LAB_10b8007b0;
      puVar17 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)puVar9 + (long)_DAT_112793f70);
    }
  }
  else if ((long)puVar2 < 6) {
    if (puVar2 != (undefined *)0x4) {
      puVar18 = (undefined *)0x0;
      if (puVar2 == (undefined *)0x5) {
        puVar17 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10b8007b0;
    }
    puVar17 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar9 + (long)_DAT_112793f70);
  }
  else {
    if (puVar2 == (undefined *)0x6) {
      puVar17 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar2 != (undefined *)0x7) {
        puVar18 = (undefined *)0x0;
        if (puVar2 != (undefined *)0x8) goto LAB_10b8007b0;
        puVar17 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = *(undefined8 *)((long)puVar9 + (long)_DAT_112793f70);
        goto LAB_10b8007ac;
      }
      puVar17 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10b80078c:
    puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar9 + (long)_DAT_112793f70);
  }
LAB_10b8007ac:
  func_0x00010c216160(uVar19);
LAB_10b8007b0:
  func_0x00010c16e440(puVar9);
  func_0x00010c213180(*(undefined8 *)((long)puVar9 + (long)_DAT_112793f6c));
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar17);
  return puVar17;
}



/* Entry: 10b8002b8; end: 10b8004f3; -[SIGAlertDialogButton activateTitleConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8002b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112793f6c;
  lVar1 = *(long *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf493c0(0x4030000000000000,lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  lStack_88 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf493c0(0xc030000000000000,uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010bf493c0(0x4028000000000000,uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493c0(0xc028000000000000,uVar8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010beef8c0(puVar14);
  _objc_release(puVar15);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar14 = (undefined *)0x0;
  if ((long)puVar11 < 4) {
    if ((long)puVar11 < 2) {
      if (puVar11 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        if (puVar11 != (undefined *)0x1) goto LAB_10b8007b0;
        puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6c);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = 0xbc;
        goto LAB_10b80078c;
      }
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(lVar1 + _DAT_112793f70);
      uVar12 = 0x6d;
    }
    else if (puVar11 == (undefined *)0x2) {
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(lVar1 + _DAT_112793f70);
      uVar12 = 0xc4;
    }
    else {
      puVar15 = (undefined *)0x0;
      if (puVar11 != (undefined *)0x3) goto LAB_10b8007b0;
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,99);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x52);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(lVar1 + _DAT_112793f70);
      uVar12 = 0x52;
    }
  }
  else if ((long)puVar11 < 6) {
    if (puVar11 != (undefined *)0x4) {
      puVar15 = (undefined *)0x0;
      if (puVar11 == (undefined *)0x5) {
        puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6f);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbe);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10b8007b0;
    }
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x62);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x51);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + _DAT_112793f70);
    uVar12 = 0x51;
  }
  else {
    if (puVar11 == (undefined *)0x6) {
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x70);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 0xc4;
    }
    else {
      if (puVar11 != (undefined *)0x7) {
        puVar15 = (undefined *)0x0;
        if (puVar11 != (undefined *)0x8) goto LAB_10b8007b0;
        puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x66);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,5);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(lVar1 + _DAT_112793f70);
        uVar12 = 5;
        goto LAB_10b8007ac;
      }
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 0xbf;
    }
LAB_10b80078c:
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + _DAT_112793f70);
    uVar12 = 0xbc;
  }
LAB_10b8007ac:
  func_0x00010c216160(uVar10,param_2,uVar12);
LAB_10b8007b0:
  func_0x00010c16e440(lVar1,param_2,puVar14);
  func_0x00010c213180(*(undefined8 *)(lVar1 + _DAT_112793f6c),param_2,puVar15);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 10b8004f4; end: 10b8007eb; -[SIGAlertDialogButton setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8004f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined *)0x0;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 != 0) {
        puVar4 = (undefined *)0x0;
        if (param_3 != 1) goto LAB_10b8007b0;
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6c);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = 0xbc;
        goto LAB_10b80078c;
      }
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112793f70);
      uVar2 = 0x6d;
    }
    else if (param_3 == 2) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112793f70);
      uVar2 = 0xc4;
    }
    else {
      puVar4 = (undefined *)0x0;
      if (param_3 != 3) goto LAB_10b8007b0;
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,99);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x52);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112793f70);
      uVar2 = 0x52;
    }
  }
  else if (param_3 < 6) {
    if (param_3 != 4) {
      puVar4 = (undefined *)0x0;
      if (param_3 == 5) {
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6f);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbe);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10b8007b0;
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x62);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x51);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112793f70);
    uVar2 = 0x51;
  }
  else {
    if (param_3 == 6) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x70);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = 0xc4;
    }
    else {
      if (param_3 != 7) {
        puVar4 = (undefined *)0x0;
        if (param_3 != 8) goto LAB_10b8007b0;
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x66);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,5);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + _DAT_112793f70);
        uVar2 = 5;
        goto LAB_10b8007ac;
      }
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = 0xbf;
    }
LAB_10b80078c:
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112793f70);
    uVar2 = 0xbc;
  }
LAB_10b8007ac:
  func_0x00010c216160(uVar1,param_2,uVar2);
LAB_10b8007b0:
  func_0x00010c16e440(param_1,param_2,puVar3);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112793f6c),param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b8007ec; end: 10b800853; -[SIGAlertDialogButton setLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8007ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((uint)*(byte *)(param_1 + _DAT_112793f74) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112793f74) = (char)param_3;
  if ((uint)param_3 == 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112793f70));
  }
  else {
    func_0x00010c24dbc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f6c),PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 10b800854; end: 10b800867; -[SIGAlertDialogButton intrinsicContentSize] */

undefined1  [16] FUN_10b800854(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4046000000000000;
  auVar1._0_8_ = 0x4066e00000000000;
  return auVar1;
}



/* Entry: 10b800868; end: 10b80086b; -[SIGAlertDialogButton sizeThatFits:] */

void FUN_10b800868(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b80086c; end: 10b800907; -[SIGAlertDialogButton _setTitle:actionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80086c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if ((param_4 != 0) && (lVar2 != 0)) {
    lVar2 = (long)_DAT_112793f6c;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar2));
    lVar2 = param_4;
    _objc_retainBlock();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112793f78);
    *(long *)(param_1 + _DAT_112793f78) = lVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b800908; end: 10b80099b; -[SIGAlertDialogButton _possiblyInvokeActionBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800908(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112793f78;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar3 = (long)_DAT_112793f7c;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    _objc_release();
    if ((lVar1 != 0) && (lVar1 = param_1, func_0x00010c071800(), (int)lVar1 != 0)) {
      lVar2 = *(long *)(param_1 + lVar2);
      lVar3 = param_1 + lVar3;
      _objc_loadWeakRetained(lVar3);
      (**(code **)(lVar2 + 0x10))(lVar2,lVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 10b80099c; end: 10b800a17; -[SIGAlertDialogButton layoutSubviews] */

void FUN_10b80099c(undefined8 param_1)

{
  double in_d3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b1a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(param_1);
  return;
}



/* Entry: 10b800a18; end: 10b800a27; -[SIGAlertDialogButton actionBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b800a18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793f78);
}



/* Entry: 10b800a28; end: 10b800a47; -[SIGAlertDialogButton alertDialog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800a28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112793f7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b800a48; end: 10b800a5b; -[SIGAlertDialogButton setAlertDialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800a48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112793f7c,param_3);
  return;
}



/* Entry: 10b800a5c; end: 10b800a6b; -[SIGAlertDialogButton isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b800a5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112793f74);
}



/* Entry: 10b800a6c; end: 10b800ac7; -[SIGAlertDialogButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800a6c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112793f7c);
  _objc_storeStrong(param_1 + _DAT_112793f78,0);
  _objc_storeStrong(param_1 + _DAT_112793f70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793f6c,0);
  return;
}



/* Entry: 10b800ac8; end: 10b800acf; -[SIGDialog initWithContentView:] */

void FUN_10b800ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c003f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithContentView_whenKeyboard_1125de9a8,param_3,0);
  return;
}



/* Entry: 10b800ad0; end: 10b800bfb; -[SIGDialog initWithContentView:whenKeyboardShowingPrioritizeArea:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b800ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 in_d3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_11270b1a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112793f84;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112793f88;
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    func_0x00010c1c8b80(puVar1);
    puVar3 = PTR_PTR_1126e1570;
    _objc_alloc_init();
    lVar4 = (long)_DAT_112793f8c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c1a7d00(in_d3,*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b20(puVar1);
    if (*(long *)((long)puVar1 + lVar5) == 1) {
      func_0x00010bead4c0(puVar1);
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b800bfc; end: 10b800c97; -[SIGDialog _setupKeyboardListener] */

void FUN_10b800bfc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b800c98; end: 10b800ce3; -[SIGDialog _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800c98(long param_1,undefined8 param_2)

{
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_112793f90),param_2,0);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b800ce4; end: 10b800d2f; -[SIGDialog _keyboardWillHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800ce4(long param_1,undefined8 param_2)

{
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_112793f90),param_2,1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b800d30; end: 10b800d3f; -[SIGDialog accessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f84),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 10b800d40; end: 10b800d4f; -[SIGDialog setAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f84),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 10b800d50; end: 10b800d5f; -[SIGDialog accessibilityLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f84),PTR_s_accessibilityLabel_112598d68);
  return;
}



/* Entry: 10b800d60; end: 10b800d6f; -[SIGDialog setAccessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800d60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f84),PTR_s_setAccessibilityLabel__112635e28);
  return;
}



/* Entry: 10b800d70; end: 10b8014ff; -[SIGDialog viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b800d70(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR_PTR_11270b1a8;
  puStack_d0 = param_1;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3ecccccd);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  puStack_e0 = puVar2;
  func_0x00010bef9040(puVar1);
  lVar11 = (long)_DAT_112793f94;
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_alloc_init();
  puVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112793f84;
  func_0x00010befbb60();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf348e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar5);
  lVar11 = (long)_DAT_112793f90;
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = uVar3;
  _objc_release(uVar5);
  puStack_170 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar4 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  puStack_f8 = puVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_108 = puVar4;
  puStack_c0 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  puStack_118 = puVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_128 = puVar6;
  puStack_b8 = puVar6;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  puStack_138 = puVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar6;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar4;
  puStack_d8 = puVar1;
  puStack_b0 = puVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  puStack_158 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_168 = puVar1;
  puStack_a8 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  puStack_180 = puVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  puStack_190 = puVar4;
  puStack_a0 = puVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  puStack_1a0 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_1d8 = puVar2;
  puStack_1b0 = puVar1;
  puStack_98 = puVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  puStack_1c0 = puVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar4;
  puStack_90 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  puStack_1e0 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  lStack_1e8 = lVar12;
  puStack_88 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar3;
  uStack_80 = uVar5;
  uStack_78 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puStack_170;
  func_0x00010bf0a0c0(puStack_170);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puStack_1d8;
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a8);
  _objc_release(puStack_198);
  _objc_release(puStack_1a0);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  _objc_release(puStack_178);
  _objc_release(puStack_180);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_150);
  _objc_release(puStack_158);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_130);
  _objc_release(puStack_138);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  _objc_release(puStack_110);
  _objc_release(puStack_118);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f0);
  _objc_release(puStack_f8);
  if (*(long *)(param_1 + _DAT_112793f88) == 1) {
    puVar10 = *(undefined **)(param_1 + lStack_1e8);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010bf49500(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar10);
    func_0x00010befa120(puVar9);
    _objc_release(puVar2);
  }
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar9);
  _objc_release(uStack_e8);
  _objc_release(puVar1);
  _objc_release(puStack_e0);
  puVar1 = puStack_d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_10b801500;
  puStack_218 = PTR_PTR_11270b1a8;
  puStack_220 = puVar1;
  puStack_210 = param_1;
  puStack_208 = puVar10;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_220,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + _DAT_112793f94));
  return;
}



/* Entry: 10b801500; end: 10b801553; -[SIGDialog viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b801500(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b1a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112793f94));
  return;
}



/* Entry: 10b801554; end: 10b8015a7; -[SIGDialog viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b801554(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b1a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112793f94));
  return;
}



/* Entry: 10b8015a8; end: 10b8015fb; -[SIGDialog viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8015a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b1a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112793f94));
  return;
}



/* Entry: 10b8015fc; end: 10b80164f; -[SIGDialog viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8015fc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b1a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112793f94));
  return;
}



/* Entry: 10b801650; end: 10b801653; -[SIGDialog actionSheetTransitionWillBeginWithView:] */

void FUN_10b801650(void)

{
  return;
}



/* Entry: 10b801654; end: 10b80166b; -[SIGDialog _backgroundViewTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b801654(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112793f80) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be022d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissActionDialog_11255e250);
  return;
}



/* Entry: 10b80166c; end: 10b8016bf; -[SIGDialog _dismissActionDialog] */

void FUN_10b80166c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b8016c0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf84b00(param_1,param_2,1,&puStack_38);
  return;
}



/* Entry: 10b8016c0; end: 10b801743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8016c0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112793f98;
  uVar1 = *(long *)(param_1 + 0x20) + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x20) + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf71d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 10b801744; end: 10b801763; -[SIGDialog delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b801744(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112793f98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b801764; end: 10b801777; -[SIGDialog setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b801764(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112793f98,param_3);
  return;
}



/* Entry: 10b801778; end: 10b801787; -[SIGDialog tapBackgroundToDismissDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b801778(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112793f80);
}


