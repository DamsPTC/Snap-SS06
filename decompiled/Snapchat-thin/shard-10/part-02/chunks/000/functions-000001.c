/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10799a098; end: 10799a0c3;  */

void FUN_10799a098(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10799a0c4; end: 10799a2a7; -[SCImpalaPublisherProfileActionHandler _onDismissPublisherProfile] */

void FUN_10799a0c4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c080120();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11b1e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0de9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    uVar5 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf009c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x0001006372a4();
    uVar8 = uVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    if ((uVar8 != 0) && (uVar6 = uVar8, func_0x00010c080120(), (uVar6 & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e620(uVar3);
      _objc_release(puVar2);
      _objc_release(uVar3);
    }
    _objc_release(uVar8);
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf76780();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799a2a8; end: 10799a2bf; -[SCImpalaPublisherProfileActionHandler presentingViewController] */

void FUN_10799a2a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799a2c0; end: 10799a2cb; -[SCImpalaPublisherProfileActionHandler setPresentingViewController:] */

void FUN_10799a2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10799a2cc; end: 10799a2e3; -[SCImpalaPublisherProfileActionHandler delegate] */

void FUN_10799a2cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799a2e4; end: 10799a2ef; -[SCImpalaPublisherProfileActionHandler setDelegate:] */

void FUN_10799a2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10799a2f0; end: 10799a353; -[SCImpalaPublisherProfileActionHandler .cxx_destruct] */

void FUN_10799a2f0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10799a354; end: 10799a5ef;  */

void FUN_10799a354(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126bdd30;
  uVar4 = param_2;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126c2118;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126b8e08;
      _objc_opt_class(PTR_PTR_1126b8e08);
      uVar2 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      puVar1 = PTR_PTR_1126b8e08;
      if ((uVar2 & 1) != 0) {
        _objc_retain(param_1);
        _objc_opt_class(puVar1);
        uVar3 = param_1;
        _objc_opt_isKindOfClass(param_1,puVar1);
        uVar2 = param_1;
        if ((uVar3 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(param_1);
        uVar3 = uVar2;
        func_0x00010c258fc0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        func_0x00010c259740(uVar3);
        func_0x00010c25bac0(param_2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10799a428;
      }
      puVar1 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      uVar2 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      puVar1 = PTR_PTR_1126bdd28;
      if ((uVar2 & 1) == 0) goto LAB_10799a5c4;
      _objc_retain(param_1);
      _objc_opt_class(puVar1);
      uVar3 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      uVar2 = param_1;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_1);
      func_0x00010c259740(uVar2);
      _objc_release(uVar2);
    }
    else {
      _objc_retain(param_1);
      _objc_opt_class(puVar1);
      uVar3 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      uVar2 = param_1;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_1);
      uVar3 = uVar2;
      func_0x0001085381ac();
      _objc_release(uVar2);
      if (uVar3 == 0) {
LAB_10799a5c4:
        uVar4 = 0;
        goto LAB_10799a5c8;
      }
    }
    func_0x00010c25bac0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar3 = param_1;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_1);
    uVar2 = uVar3;
    func_0x00010bf82000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar2 = uVar3;
      func_0x00010bf82000(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      uVar4 = param_2;
      func_0x00010c25bac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
LAB_10799a428:
    _objc_release(uVar3);
  }
LAB_10799a5c8:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10799a5f0; end: 10799a7db;  */

void FUN_10799a5f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010bfa4340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107d0049c();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfa4340(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = param_1;
  func_0x00010799a698(param_1,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10799a7dc; end: 10799aa9b;  */

void FUN_10799a7dc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar11 = param_2;
  func_0x00010bf529e0();
  puVar10 = (undefined *)0x0;
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar3 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      FUN_10799aa9c(param_1,uVar3);
      if ((int)uVar4 != 0) {
        uVar5 = uVar3;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        puVar6 = PTR_PTR_1126b4d28;
        _objc_alloc(PTR_PTR_1126b4d28);
        func_0x00010c259580(uVar3);
        func_0x000107a88008();
        func_0x00010c04dcc0(puVar6);
        func_0x00010befa120(puVar1);
        uVar4 = param_1;
        func_0x00010c259cc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((int)uVar7 != 0) {
          _objc_retain(puVar6);
          _objc_release(puVar10);
          puVar10 = puVar6;
        }
        _objc_release(puVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar3);
      uVar11 = uVar11 + 1;
      uVar3 = param_2;
      func_0x00010bf529e0();
    } while (uVar11 < uVar3);
  }
  puVar6 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c0d6c60(param_3);
  func_0x00010c27aa00(param_3);
  func_0x00010c298f40();
  func_0x00010c298f80();
  func_0x00010c018aa0(0,puVar6);
  puVar8 = puVar1;
  func_0x00010bf09f80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bf51e00(puVar2);
  (**(code **)(param_5 + 0x10))(param_5,puVar8,puVar9,puVar10,puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10799aa9c; end: 10799ab47;  */

ulong FUN_10799aa9c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfddf20();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c071ae0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10799ab48; end: 10799ab5f;  */

void FUN_10799ab48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10799ab60; end: 10799ac6f;  */

void FUN_10799ab60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10799ac70;
  puStack_70 = &UNK_1109f2f60;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000100504554(param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10799ac70; end: 10799ad1f;  */

void FUN_10799ac70(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = param_2;
    func_0x00010c259740();
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c259740();
    if ((uVar1 == uVar2) && (uVar1 = param_2, func_0x00010c073600(), (uVar1 & 1) == 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      goto LAB_10799acf4;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0fed80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010799a698();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
LAB_10799acf4:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10799ad20; end: 10799afc7;  */

void FUN_10799ad20(ulong param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_2);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        ___stack_chk_fail();
        func_0x00010bd86420();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar10 = *(ulong *)(lVar9 * 8);
      if (param_1 == 0) {
LAB_10799ae44:
        lVar6 = param_4;
        func_0x00010c0fed80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar10;
        func_0x00010c0ea200();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c1561c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        FUN_10799a5f0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(lVar6);
      }
      else {
        uVar4 = uVar10;
        func_0x00010c259740();
        uVar5 = param_1;
        func_0x00010c259740();
        if ((uVar4 != uVar5) || (uVar4 = uVar10, func_0x00010c073600(), (uVar4 & 1) != 0))
        goto LAB_10799ae44;
        _objc_retain(param_3);
        lVar7 = param_3;
      }
      if (lVar7 != 0) {
        func_0x00010befa120(puVar2);
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar10;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(param_5);
        _objc_release(uVar4);
        _objc_release(uVar10);
      }
      _objc_release(lVar7);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10799afc8; end: 10799b017;  */

void FUN_10799afc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10799b018;
  puStack_20 = &UNK_1109f2f90;
  uStack_18 = param_2;
  func_0x00010bd86420(param_1,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799b018; end: 10799b107;  */

void FUN_10799b018(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b4d28;
  _objc_opt_class(PTR_PTR_1126b4d28);
  puVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = param_2;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_2);
    puVar2 = param_2;
  }
  else {
    puVar2 = PTR_PTR_1126b4d28;
    _objc_alloc(PTR_PTR_1126b4d28);
    puVar3 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80(param_2);
    func_0x00010c264f20(param_2);
    func_0x00010c04dcc0(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10799b108; end: 10799b32f;  */

void FUN_10799b108(undefined *param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_2;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
    _objc_retain(param_1);
    puVar4 = param_1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    puVar4 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar13 = *(long *)((long)puVar14 * 8);
        lVar5 = lVar13;
        func_0x00010c073600();
        if ((int)lVar5 == 0) {
          func_0x00010afeff68();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010bf4b900();
          if ((int)puVar6 == 0) {
            lVar5 = lVar13;
            func_0x00010c08fa60();
            if (lVar5 != 0) {
              func_0x00010befa120(puVar3);
            }
            func_0x00010befa120(puVar2);
          }
          else {
            func_0x00010c132e00(param_4);
            func_0x00010c0aad20(param_5);
          }
          _objc_release(lVar13);
        }
        else {
          func_0x00010befa120(puVar2);
        }
        puVar14 = puVar14 + 1;
      } while (puVar4 != puVar14);
      puVar4 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    puVar4 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(uVar10);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar12 = uVar10;
    func_0x00010bf529e0();
    if (uVar12 != 0) {
      uVar12 = 0;
      do {
        uVar7 = uVar10;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfddf20();
        if ((int)uVar8 != 0) {
          uVar8 = uVar7;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c0720c0();
          _objc_release(uVar8);
          if ((uVar9 & 1) == 0) {
            puVar2 = PTR_PTR_1126b4d28;
            _objc_alloc(PTR_PTR_1126b4d28);
            uVar8 = uVar7;
            func_0x00010c259cc0(uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c259580(uVar7);
            func_0x000107a88008();
            func_0x00010c04dcc0(puVar2);
            _objc_release(uVar8);
            func_0x00010befa120(puVar4);
            _objc_release(puVar2);
          }
        }
        _objc_release(uVar7);
        uVar12 = uVar12 + 1;
        uVar7 = uVar10;
        func_0x00010bf529e0();
      } while (uVar12 < uVar7);
    }
    _objc_release(uVar10);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10799b330; end: 10799b477;  */

void FUN_10799b330(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar6 = param_2;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      uVar2 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfddf20();
      if ((int)uVar3 != 0) {
        uVar3 = uVar2;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          puVar5 = PTR_PTR_1126b4d28;
          _objc_alloc(PTR_PTR_1126b4d28);
          uVar3 = uVar2;
          func_0x00010c259cc0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c259580(uVar2);
          func_0x000107a88008();
          func_0x00010c04dcc0(puVar5);
          _objc_release(uVar3);
          func_0x00010befa120(puVar1);
          _objc_release(puVar5);
        }
      }
      _objc_release(uVar2);
      uVar6 = uVar6 + 1;
      uVar2 = param_2;
      func_0x00010bf529e0();
    } while (uVar6 < uVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10799b478; end: 10799b78b;  */

void FUN_10799b478(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126bdd30;
  uVar2 = param_1;
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126bdd28;
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR_PTR_1126c2118;
      _objc_opt_class(PTR_PTR_1126c2118);
      uVar3 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      puVar1 = PTR_PTR_1126c2118;
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
        goto LAB_10799b594;
      }
      _objc_retain(param_1);
      _objc_opt_class(puVar1);
      uVar3 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_1);
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      pcStack_58 = FUN_10799ab48;
      uStack_50 = 0x10799ab58;
      uStack_48 = 0;
      func_0x00010c0bdf40(uVar2);
      uVar3 = puStack_68[5];
      _objc_retain(uVar3);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(uStack_48);
    }
    else {
      _objc_retain(param_1);
      _objc_opt_class(puVar1);
      _objc_opt_isKindOfClass(param_1,puVar1);
      uVar3 = param_1;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_1);
      uVar2 = uVar3;
      func_0x00010bf454e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x000108f51f98(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010bf45500(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_10799b594:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10799b78c; end: 10799b83f;  */

void FUN_10799b78c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  if (lVar2 == 0) {
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10799b840; end: 10799b87f;  */

void FUN_10799b840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf622e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10799b880; end: 10799ba9b;  */

void FUN_10799b880(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_2;
    func_0x00010c0ee360();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  if (lVar2 == 0) {
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10799ba9c; end: 10799bb1b;  */

void FUN_10799ba9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10799bb1c; end: 10799bb1f;  */

void FUN_10799bb1c(void)

{
  return;
}



/* Entry: 10799bb20; end: 10799c36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799bb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined *puVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined **ppuVar43;
  undefined **ppuVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined **ppuVar51;
  undefined **ppuVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined *puVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined *puVar72;
  undefined *puVar73;
  undefined *puVar74;
  undefined *puVar75;
  undefined *puVar76;
  undefined *puVar77;
  undefined *puVar78;
  long lVar79;
  undefined **ppuVar80;
  undefined **ppuVar81;
  undefined **unaff_x26;
  undefined *puVar82;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puVar83;
  undefined8 uVar84;
  undefined **ppuVar85;
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [16];
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined1 uStack_2a0;
  undefined8 uStack_298;
  undefined **ppuStack_290;
  undefined1 uStack_288;
  undefined1 uStack_287;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined8 uStack_248;
  undefined **ppuStack_240;
  long lStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
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
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = param_10;
  uStack_218 = param_9;
  _objc_retain();
  uStack_220 = param_6;
  _objc_retain(param_6);
  uStack_1f8 = param_7;
  _objc_retain(param_7);
  uStack_200 = param_8;
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_5;
  puStack_208 = puVar1;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar84 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puStack_210 = puVar1;
  _objc_retain(ppuVar2);
  ppuStack_230 = ppuVar2;
  func_0x00010bf52a60();
  ppuStack_1e8 = ppuVar2;
  if (ppuVar2 != (undefined **)0x0) {
    lStack_1f0 = *plStack_1a0;
    ppuStack_240 = &PTR____CFConstantStringClassReference_110eb3638;
    ppuStack_228 = param_5;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if (*plStack_1a0 != lStack_1f0) {
          _objc_enumerationMutation(ppuStack_230);
        }
        ppuVar80 = *(undefined ***)(lStack_1a8 + (long)unaff_x26 * 8);
        ppuVar2 = param_5;
        func_0x00010bf33b60();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126c2370;
        _objc_opt_class(PTR_PTR_1126c2370);
        ppuVar85 = ppuVar2;
        _objc_opt_isKindOfClass(ppuVar2,puVar1);
        if (((ulong)ppuVar85 & 1) == 0) {
          puVar1 = PTR_PTR_1126c23e8;
          _objc_opt_class(PTR_PTR_1126c23e8);
          ppuVar85 = ppuVar2;
          _objc_opt_isKindOfClass(ppuVar2,puVar1);
          if (((ulong)ppuVar85 & 1) != 0) goto LAB_10799bca8;
          if (lStack_238 == 4) {
            puVar1 = PTR_PTR_1126d59d8;
            _objc_opt_class(PTR_PTR_1126d59d8);
            ppuVar85 = ppuVar2;
            _objc_opt_isKindOfClass(ppuVar2,puVar1);
            if (((ulong)ppuVar85 & 1) == 0) goto LAB_10799bfa8;
            unaff_x27 = param_5;
            func_0x00010c08c980();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb68e0();
            ppuVar85 = param_5;
            func_0x00010c262ca0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51460(uVar84,param_5);
            _objc_release(ppuVar85);
            ppuVar81 = param_5;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar81;
            func_0x00010010fab4();
            ppuVar85 = ppuVar81;
            if ((int)ppuVar5 == 0) {
              ppuVar85 = (undefined **)0x0;
            }
            _objc_retain(ppuVar85);
            _objc_release(ppuVar81);
            func_0x00010c142240(ppuVar80);
            ppuVar80 = ppuVar85;
            func_0x00010c29d560();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar85);
            puVar1 = PTR_PTR_1126c22c0;
            _objc_opt_class(PTR_PTR_1126c22c0);
            ppuVar81 = ppuVar80;
            _objc_opt_isKindOfClass(ppuVar80,puVar1);
            ppuVar85 = ppuVar80;
            if (((ulong)ppuVar81 & 1) == 0) {
              ppuVar85 = (undefined **)0x0;
            }
            _objc_retain(ppuVar85);
            _objc_release(ppuVar80);
            ppuVar81 = ppuVar85;
            func_0x00010c25a160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar85);
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            ppuVar80 = ppuVar81;
            func_0x000108f52270(ppuVar81,puVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
            _objc_release(ppuVar81);
            ppuVar85 = (undefined **)PTR_PTR_1126c21e8;
            _objc_alloc(PTR_PTR_1126c21e8);
            ppuVar81 = ppuVar80;
            func_0x00010c0844e0(ppuVar80);
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar80;
            func_0x00010c0741a0();
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_260 = 0;
            uStack_258 = 0;
            uStack_270 = uStack_200;
            uStack_268 = 0;
            uStack_280 = uStack_1f8;
            uStack_278 = uStack_218;
            uStack_287 = 0;
            uStack_288 = SUB81(ppuVar5,0);
            uStack_298 = 0xffffffffffffffff;
            ppuStack_290 = ppuStack_240;
            uStack_2a0 = 0;
            func_0x00010c01b6a0(ppuVar85);
            func_0x00010befa120(puStack_210);
            goto LAB_10799bf88;
          }
        }
        else {
LAB_10799bca8:
          ppuVar85 = param_5;
          ppuStack_1d8 = ppuVar2;
          func_0x00010c08c980();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0();
          ppuVar2 = param_5;
          func_0x00010c262ca0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf51460(uVar84,param_5);
          _objc_release(ppuVar2);
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar81 = param_5;
          func_0x00010010fab4();
          ppuVar2 = param_5;
          if ((int)ppuVar81 == 0) {
            ppuVar2 = (undefined **)0x0;
          }
          _objc_retain(ppuVar2);
          _objc_release(param_5);
          func_0x00010c142240(ppuVar80);
          FUN_1079af5ac(ppuVar80,uStack_220);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar1 = PTR_PTR_1126c2180;
          _objc_opt_class(PTR_PTR_1126c2180);
          ppuVar81 = ppuVar80;
          _objc_opt_isKindOfClass(ppuVar80,puVar1);
          ppuVar5 = ppuVar80;
          if (((ulong)ppuVar81 & 1) == 0) {
            ppuVar5 = (undefined **)0x0;
          }
          _objc_retain(ppuVar5);
          ppuStack_1e0 = ppuVar85;
          if (ppuVar5 == (undefined **)0x0) {
            ppuVar81 = (undefined **)0x0;
          }
          else {
            ppuVar81 = ppuVar80;
            func_0x00010c156900();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(ppuVar5);
          _objc_release(ppuVar80);
          ppuVar85 = ppuVar2;
          func_0x00010c29d560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
          puVar1 = PTR_PTR_1126c22b8;
          _objc_opt_class(PTR_PTR_1126c22b8);
          ppuVar5 = ppuVar85;
          _objc_opt_isKindOfClass(ppuVar85,puVar1);
          ppuVar2 = ppuVar85;
          if (((ulong)ppuVar5 & 1) == 0) {
            ppuVar2 = (undefined **)0x0;
          }
          _objc_retain(ppuVar2);
          _objc_release(ppuVar85);
          ppuVar5 = ppuVar2;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          ppuVar85 = ppuVar5;
          func_0x000108f52270(ppuVar5,puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(ppuVar5);
          puVar1 = PTR_PTR_1126c21e8;
          _objc_alloc(PTR_PTR_1126c21e8);
          ppuVar5 = ppuVar85;
          func_0x00010c0844e0(ppuVar85);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar85;
          func_0x00010c0741a0();
          ppuVar4 = ppuVar2;
          func_0x00010c087760();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
          unaff_x28 = ppuVar4;
          func_0x00010bf5d660();
          _objc_retainAutoreleasedReturnValue();
          uStack_287 = unaff_x28 != (undefined **)0x0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_260 = 0;
          uStack_258 = 0;
          uStack_270 = uStack_200;
          uStack_268 = 0;
          uStack_280 = uStack_1f8;
          uStack_278 = uStack_218;
          uStack_288 = SUB81(ppuVar3,0);
          uStack_298 = 0xffffffffffffffff;
          uStack_2a0 = 0;
          ppuStack_290 = ppuVar81;
          func_0x00010c01b6a0(puVar1);
          func_0x00010befa120(puStack_210);
          _objc_release(puVar1);
          _objc_release(unaff_x28);
          _objc_release(ppuVar4);
          _objc_release(ppuVar5);
          param_5 = ppuStack_228;
          ppuVar2 = ppuStack_1d8;
          unaff_x27 = ppuStack_1e0;
LAB_10799bf88:
          _objc_release(ppuVar85);
          _objc_release(ppuVar81);
          _objc_release(ppuVar80);
          _objc_release(unaff_x27);
        }
LAB_10799bfa8:
        _objc_release(ppuVar2);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuStack_1e8 != unaff_x26);
      ppuVar2 = ppuStack_230;
      func_0x00010bf52a60();
      ppuStack_1e8 = ppuVar2;
    } while (ppuVar2 != (undefined **)0x0);
  }
  ppuVar2 = ppuStack_230;
  _objc_release(ppuStack_230);
  puVar8 = puStack_208;
  puVar7 = puStack_210;
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  ppuVar85 = &PTR____CFConstantStringClassReference_110f42058;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110f42078;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110f42058;
  puStack_148 = puStack_210;
  puStack_140 = puStack_208;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110f42098;
  func_0x00010bfb68e0(param_5);
  ppuStack_1d0 = ppuVar85;
  uStack_1c8 = param_2;
  uStack_1c0 = param_3;
  uStack_1b8 = param_4;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_158 = &PTR____CFConstantStringClassReference_110f41858;
  puVar57 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_138 = puVar1;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110f42d78;
  puStack_128 = PTR____kCFBooleanTrue_11034ab68;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_130 = puVar57;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar57);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(ppuVar2);
  _objc_release(puVar8);
  _objc_release(uStack_200);
  _objc_release(uStack_1f8);
  _objc_release(uStack_220);
  ppuVar85 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puStack_2e8 = puVar7;
  ppuStack_2d8 = ppuVar2;
  puStack_2d0 = puVar8;
  pcStack_2a8 = FUN_10799c370;
  puVar7 = PTR_PTR_1126ae720;
  ppuStack_300 = unaff_x28;
  ppuStack_2f8 = unaff_x27;
  ppuStack_2f0 = unaff_x26;
  ppuStack_2e0 = param_5;
  puStack_2c8 = puVar57;
  puStack_2c0 = puVar6;
  puStack_2b8 = puVar1;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_310,ppuVar85);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_318,auStack_310);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c72d0;
  _objc_alloc();
  if (ppuVar85 == (undefined **)0x0) {
    puVar57 = (undefined *)0x0;
  }
  else {
    puVar57 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bd0);
    _objc_loadWeakRetained();
  }
  puVar6 = puVar57;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar85;
  FUN_10799cfe8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4340();
  ppuVar80 = ppuVar85;
  FUN_10799cfe8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1e60();
  ppuVar81 = ppuVar85;
  FUN_10799cfe8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar81;
  func_0x00010c0f1dc0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar58 = (undefined *)0x0;
  }
  else {
    puVar58 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bd4);
    _objc_loadWeakRetained();
  }
  puVar9 = puVar58;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar59 = (undefined *)0x0;
  }
  else {
    puVar59 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bd8);
    _objc_loadWeakRetained();
  }
  puVar10 = puVar59;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar60 = (undefined *)0x0;
  }
  else {
    puVar60 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bdc);
    _objc_loadWeakRetained();
  }
  puVar11 = puVar60;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar85;
  func_0x00010799d00c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar61 = (undefined *)0x0;
  }
  else {
    puVar61 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c08);
    _objc_loadWeakRetained();
  }
  puVar12 = puVar61;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar85;
  func_0x00010799d030();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar85;
  func_0x00010799d030();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar15;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar62 = (undefined *)0x0;
  }
  else {
    puVar62 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c20);
    _objc_loadWeakRetained();
  }
  puVar17 = puVar62;
  func_0x00010bf81640();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar85;
  func_0x00010799d054();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar18;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar63 = (undefined *)0x0;
  }
  else {
    puVar63 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c28);
    _objc_loadWeakRetained();
  }
  puVar20 = puVar63;
  func_0x00010c155c20();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar64 = (undefined *)0x0;
  }
  else {
    puVar64 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c2c);
    _objc_loadWeakRetained();
  }
  puVar21 = puVar64;
  func_0x00010c107680();
  _objc_retainAutoreleasedReturnValue();
  lVar79 = (long)_DAT_112766bbc;
  puVar22 = (undefined *)((long)ppuVar85 + lVar79);
  _objc_loadWeakRetained();
  puVar23 = puVar22;
  func_0x00010c136300();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = ppuVar85;
  func_0x00010799d078();
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = ppuVar24;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar65 = (undefined *)0x0;
  }
  else {
    puVar65 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c34);
    _objc_loadWeakRetained();
  }
  puVar26 = puVar65;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar27 = ppuVar85;
  func_0x00010799d00c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = ppuVar27;
  func_0x00010c08d920();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar66 = (undefined *)0x0;
  }
  else {
    puVar66 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c18);
    _objc_loadWeakRetained();
  }
  puVar29 = puVar66;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar67 = (undefined *)0x0;
  }
  else {
    puVar67 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c10);
    _objc_loadWeakRetained();
  }
  puVar30 = puVar67;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar68 = (undefined *)0x0;
  }
  else {
    puVar68 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c0c);
    _objc_loadWeakRetained();
  }
  puVar31 = puVar68;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar85;
  func_0x00010799d09c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar33 = ppuVar32;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar34 = ppuVar85;
  func_0x00010799d09c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar35 = ppuVar34;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar69 = (undefined *)0x0;
  }
  else {
    puVar69 = (undefined *)((long)ppuVar85 + lVar79);
    _objc_loadWeakRetained();
  }
  puVar36 = puVar69;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar37 = ppuVar85;
  func_0x00010799d054();
  _objc_retainAutoreleasedReturnValue();
  ppuVar38 = ppuVar37;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar70 = (undefined *)0x0;
  }
  else {
    puVar70 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c00);
    _objc_loadWeakRetained();
  }
  puVar39 = puVar70;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar39;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar71 = (undefined *)0x0;
  }
  else {
    puVar71 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bfc);
    _objc_loadWeakRetained();
  }
  puVar41 = puVar71;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar72 = (undefined *)0x0;
  }
  else {
    puVar72 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bf8);
    _objc_loadWeakRetained();
  }
  puVar42 = puVar72;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  ppuVar43 = ppuVar85;
  func_0x00010799d078();
  _objc_retainAutoreleasedReturnValue();
  ppuVar44 = ppuVar43;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar73 = (undefined *)0x0;
  }
  else {
    puVar73 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bf4);
    _objc_loadWeakRetained();
  }
  puVar45 = puVar73;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar74 = (undefined *)0x0;
  }
  else {
    puVar74 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bf0);
    _objc_loadWeakRetained();
  }
  puVar46 = puVar74;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar75 = (undefined *)0x0;
  }
  else {
    puVar75 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bec);
    _objc_loadWeakRetained();
  }
  puVar47 = puVar75;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar76 = (undefined *)0x0;
  }
  else {
    puVar76 = (undefined *)((long)ppuVar85 + (long)_DAT_112766be8);
    _objc_loadWeakRetained();
  }
  puVar48 = puVar76;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar77 = (undefined *)0x0;
  }
  else {
    puVar77 = (undefined *)((long)ppuVar85 + (long)_DAT_112766be4);
    _objc_loadWeakRetained();
  }
  puVar49 = puVar77;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar78 = (undefined *)0x0;
  }
  else {
    puVar78 = (undefined *)((long)ppuVar85 + (long)_DAT_112766be0);
    _objc_loadWeakRetained();
  }
  puVar50 = puVar78;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  ppuVar51 = ppuVar85;
  func_0x00010bf819a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar52 = ppuVar51;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  puVar53 = (undefined *)((long)ppuVar85 + (long)_DAT_112766bc0);
  _objc_loadWeakRetained();
  puVar54 = puVar53;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar83 = (undefined *)0x0;
  }
  else {
    puVar83 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c38);
    _objc_loadWeakRetained();
  }
  puVar55 = puVar83;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar85 == (undefined **)0x0) {
    puVar82 = (undefined *)0x0;
  }
  else {
    puVar82 = (undefined *)((long)ppuVar85 + (long)_DAT_112766c3c);
    _objc_loadWeakRetained();
  }
  puVar56 = puVar82;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d9a0();
  _objc_release(puVar56);
  _objc_release(puVar82);
  _objc_release(puVar55);
  _objc_release(puVar83);
  _objc_release(puVar54);
  _objc_release(puVar53);
  _objc_release(ppuVar52);
  _objc_release(ppuVar51);
  _objc_release(puVar50);
  _objc_release(puVar78);
  _objc_release(puVar49);
  _objc_release(puVar77);
  _objc_release(puVar48);
  _objc_release(puVar76);
  _objc_release(puVar47);
  _objc_release(puVar75);
  _objc_release(puVar46);
  _objc_release(puVar74);
  _objc_release(puVar45);
  _objc_release(puVar73);
  _objc_release(ppuVar44);
  _objc_release(ppuVar43);
  _objc_release(puVar42);
  _objc_release(puVar72);
  _objc_release(puVar41);
  _objc_release(puVar71);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar70);
  _objc_release(ppuVar38);
  _objc_release(ppuVar37);
  _objc_release(puVar36);
  _objc_release(puVar69);
  _objc_release(ppuVar35);
  _objc_release(ppuVar34);
  _objc_release(ppuVar33);
  _objc_release(ppuVar32);
  _objc_release(puVar31);
  _objc_release(puVar68);
  _objc_release(puVar30);
  _objc_release(puVar67);
  _objc_release(puVar29);
  _objc_release(puVar66);
  _objc_release(ppuVar28);
  _objc_release(ppuVar27);
  _objc_release(puVar26);
  _objc_release(puVar65);
  _objc_release(ppuVar25);
  _objc_release(ppuVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar64);
  _objc_release(puVar20);
  _objc_release(puVar63);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(puVar17);
  _objc_release(puVar62);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(puVar12);
  _objc_release(puVar61);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  _objc_release(puVar60);
  _objc_release(puVar10);
  _objc_release(puVar59);
  _objc_release(puVar9);
  _objc_release(puVar58);
  _objc_release(ppuVar5);
  _objc_release(ppuVar81);
  _objc_release(ppuVar80);
  _objc_release(ppuVar2);
  _objc_release(puVar6);
  _objc_release(puVar57);
  ppuVar2 = ppuVar85;
  FUN_10799cfe8(ppuVar85);
  _objc_retainAutoreleasedReturnValue();
  ppuVar80 = ppuVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar8);
  _objc_release(ppuVar80);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar85;
  func_0x00010bf819a0(ppuVar85);
  _objc_retainAutoreleasedReturnValue();
  ppuVar80 = ppuVar2;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar81 = ppuVar80;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(puVar8);
  _objc_release(ppuVar81);
  _objc_release(ppuVar80);
  _objc_release(ppuVar2);
  FUN_10799cfe8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar85;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(ppuVar2);
  _objc_release(ppuVar85);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_318);
  _objc_destroyWeak(auStack_310);
  _objc_release(puVar7);
  return;
}



/* Entry: 10799c370; end: 10799cf9b; -[SCDiscoverFeedExpandedStoryFeedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799c370(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1109f2ff0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c72d0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar59 = 0;
  }
  else {
    lVar59 = param_1 + _DAT_112766bd0;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar59;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_10799cfe8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4340();
  lVar6 = param_1;
  FUN_10799cfe8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1e60();
  lVar7 = param_1;
  FUN_10799cfe8();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0f1dc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar60 = 0;
  }
  else {
    lVar60 = param_1 + _DAT_112766bd4;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar60;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar61 = 0;
  }
  else {
    lVar61 = param_1 + _DAT_112766bd8;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar61;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_1 + _DAT_112766bdc;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar62;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010799d00c();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar63 = 0;
  }
  else {
    lVar63 = param_1 + _DAT_112766c08;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar63;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010799d030();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010799d030();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar64 = 0;
  }
  else {
    lVar64 = param_1 + _DAT_112766c20;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar64;
  func_0x00010bf81640();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010799d054();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar65 = 0;
  }
  else {
    lVar65 = param_1 + _DAT_112766c28;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar65;
  func_0x00010c155c20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_112766c2c;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar66;
  func_0x00010c107680();
  _objc_retainAutoreleasedReturnValue();
  lVar80 = (long)_DAT_112766bbc;
  lVar24 = param_1 + lVar80;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c136300();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010799d078();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar67 = 0;
  }
  else {
    lVar67 = param_1 + _DAT_112766c34;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar67;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010799d00c();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c08d920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar68 = 0;
  }
  else {
    lVar68 = param_1 + _DAT_112766c18;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar68;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar69 = 0;
  }
  else {
    lVar69 = param_1 + _DAT_112766c10;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar69;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar70 = 0;
  }
  else {
    lVar70 = param_1 + _DAT_112766c0c;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar70;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010799d09c();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010799d09c();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar80 = 0;
  }
  else {
    lVar80 = param_1 + lVar80;
    _objc_loadWeakRetained();
  }
  lVar38 = lVar80;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x00010799d054();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar39;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar71 = 0;
  }
  else {
    lVar71 = param_1 + _DAT_112766c00;
    _objc_loadWeakRetained();
  }
  lVar41 = lVar71;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar72 = 0;
  }
  else {
    lVar72 = param_1 + _DAT_112766bfc;
    _objc_loadWeakRetained();
  }
  lVar43 = lVar72;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar73 = 0;
  }
  else {
    lVar73 = param_1 + _DAT_112766bf8;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar73;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x00010799d078();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar45;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar74 = 0;
  }
  else {
    lVar74 = param_1 + _DAT_112766bf4;
    _objc_loadWeakRetained();
  }
  lVar47 = lVar74;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar75 = 0;
  }
  else {
    lVar75 = param_1 + _DAT_112766bf0;
    _objc_loadWeakRetained();
  }
  lVar48 = lVar75;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar76 = 0;
  }
  else {
    lVar76 = param_1 + _DAT_112766bec;
    _objc_loadWeakRetained();
  }
  lVar49 = lVar76;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar77 = 0;
  }
  else {
    lVar77 = param_1 + _DAT_112766be8;
    _objc_loadWeakRetained();
  }
  lVar50 = lVar77;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar78 = 0;
  }
  else {
    lVar78 = param_1 + _DAT_112766be4;
    _objc_loadWeakRetained();
  }
  lVar51 = lVar78;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar79 = 0;
  }
  else {
    lVar79 = param_1 + _DAT_112766be0;
    _objc_loadWeakRetained();
  }
  lVar52 = lVar79;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x00010bf819a0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar53;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + _DAT_112766bc0;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar82 = 0;
  }
  else {
    lVar82 = param_1 + _DAT_112766c38;
    _objc_loadWeakRetained();
  }
  lVar57 = lVar82;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar81 = 0;
  }
  else {
    lVar81 = param_1 + _DAT_112766c3c;
    _objc_loadWeakRetained();
  }
  lVar58 = lVar81;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d9a0();
  _objc_release(lVar58);
  _objc_release(lVar81);
  _objc_release(lVar57);
  _objc_release(lVar82);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar79);
  _objc_release(lVar51);
  _objc_release(lVar78);
  _objc_release(lVar50);
  _objc_release(lVar77);
  _objc_release(lVar49);
  _objc_release(lVar76);
  _objc_release(lVar48);
  _objc_release(lVar75);
  _objc_release(lVar47);
  _objc_release(lVar74);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar73);
  _objc_release(lVar43);
  _objc_release(lVar72);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar71);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar80);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar70);
  _objc_release(lVar32);
  _objc_release(lVar69);
  _objc_release(lVar31);
  _objc_release(lVar68);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar67);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar66);
  _objc_release(lVar22);
  _objc_release(lVar65);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar64);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar63);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar62);
  _objc_release(lVar10);
  _objc_release(lVar61);
  _objc_release(lVar9);
  _objc_release(lVar60);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar59);
  lVar59 = param_1;
  FUN_10799cfe8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar59;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar3);
  _objc_release(lVar4);
  _objc_release(lVar59);
  lVar59 = param_1;
  func_0x00010bf819a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar59;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar59);
  FUN_10799cfe8();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar59);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  return;
}



/* Entry: 10799cf9c; end: 10799cfa7;  */

undefined * FUN_10799cf9c(void)

{
  return PTR____kCFBooleanFalse_11034ab60;
}



/* Entry: 10799cfa8; end: 10799cfe7;  */

void FUN_10799cfa8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be02020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10799cfe8; end: 10799d0bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799cfe8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112766bc8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799d0c0; end: 10799d13b; -[SCDiscoverFeedExpandedStoryFeedEntryPoint _discoverCrashLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799d0c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1170;
  _objc_alloc(PTR_PTR_1126b1170);
  param_1 = param_1 + _DAT_112766bc4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10799d13c; end: 10799d15b; -[SCDiscoverFeedExpandedStoryFeedEntryPoint discoverFeedLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799d13c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112766bcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799d15c; end: 10799d16f; -[SCDiscoverFeedExpandedStoryFeedEntryPoint setDiscoverFeedLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799d15c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112766bcc,param_3);
  return;
}



/* Entry: 10799d170; end: 10799d31b; -[SCDiscoverFeedExpandedStoryFeedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799d170(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112766c3c);
  _objc_destroyWeak(param_1 + _DAT_112766bc4);
  _objc_destroyWeak(param_1 + _DAT_112766c38);
  _objc_destroyWeak(param_1 + _DAT_112766bc0);
  _objc_destroyWeak(param_1 + _DAT_112766c34);
  _objc_destroyWeak(param_1 + _DAT_112766c30);
  _objc_destroyWeak(param_1 + _DAT_112766c2c);
  _objc_destroyWeak(param_1 + _DAT_112766c28);
  _objc_destroyWeak(param_1 + _DAT_112766c24);
  _objc_destroyWeak(param_1 + _DAT_112766c20);
  _objc_destroyWeak(param_1 + _DAT_112766c1c);
  _objc_destroyWeak(param_1 + _DAT_112766c18);
  _objc_destroyWeak(param_1 + _DAT_112766c14);
  _objc_destroyWeak(param_1 + _DAT_112766c10);
  _objc_destroyWeak(param_1 + _DAT_112766c0c);
  _objc_destroyWeak(param_1 + _DAT_112766c08);
  _objc_destroyWeak(param_1 + _DAT_112766c04);
  _objc_destroyWeak(param_1 + _DAT_112766bbc);
  _objc_destroyWeak(param_1 + _DAT_112766c00);
  _objc_destroyWeak(param_1 + _DAT_112766bfc);
  _objc_destroyWeak(param_1 + _DAT_112766bf8);
  _objc_destroyWeak(param_1 + _DAT_112766bf4);
  _objc_destroyWeak(param_1 + _DAT_112766bf0);
  _objc_destroyWeak(param_1 + _DAT_112766bec);
  _objc_destroyWeak(param_1 + _DAT_112766be8);
  _objc_destroyWeak(param_1 + _DAT_112766be4);
  _objc_destroyWeak(param_1 + _DAT_112766be0);
  _objc_destroyWeak(param_1 + _DAT_112766bdc);
  _objc_destroyWeak(param_1 + _DAT_112766bd8);
  _objc_destroyWeak(param_1 + _DAT_112766bd4);
  _objc_destroyWeak(param_1 + _DAT_112766bd0);
  _objc_destroyWeak(param_1 + _DAT_112766bcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112766bc8);
  return;
}



/* Entry: 10799d31c; end: 10799d3cf; -[SCDiscoverFeedExpandedStoryFeedScope initWithUIContainer:feedType:pageType:pageTitle:] */

undefined1 *
FUN_10799d31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9040;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10799d3d0; end: 10799d3e7; -[SCDiscoverFeedExpandedStoryFeedScope uiContainer] */

void FUN_10799d3d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799d3e8; end: 10799d3ff; -[SCDiscoverFeedExpandedStoryFeedScope delegate] */

void FUN_10799d3e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799d400; end: 10799d40b; -[SCDiscoverFeedExpandedStoryFeedScope setDelegate:] */

void FUN_10799d400(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10799d40c; end: 10799d413; -[SCDiscoverFeedExpandedStoryFeedScope feedType] */

undefined8 FUN_10799d40c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10799d414; end: 10799d41b; -[SCDiscoverFeedExpandedStoryFeedScope pageType] */

undefined8 FUN_10799d414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10799d41c; end: 10799d423; -[SCDiscoverFeedExpandedStoryFeedScope pageTitle] */

undefined8 FUN_10799d41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10799d424; end: 10799d457; -[SCDiscoverFeedExpandedStoryFeedScope .cxx_destruct] */

void FUN_10799d424(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10799d458; end: 10799d5c3; -[SCDiscoverFeedExpandedStoryFeedSectionCreator initWithActionHandler:discoverFeedDataFetcher:imageDownloader:bitmojiAvatarId:textColor:backgroundColor:shouldBounceCarousels:gestureCoordinator:sectionHeaderActionHandler:snapchattersSynchronousDataFetcher:sectionsCoordinator:circumstanceEngine:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10799d458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 in_stack_00000020;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_stack_00000020);
  puStack_70 = PTR_PTR_1126f9048;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithActionHandler_discoverFe_11252c508,param_3,param_4,
                      param_5,param_6,param_7,param_8,param_9);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112766c54;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112766c58;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2178;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112766c5c);
    *(undefined **)((long)puVar1 + (long)_DAT_112766c5c) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112766c60;
    _objc_retain(in_stack_00000020);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = in_stack_00000020;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000020);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10799d5c4; end: 10799d8bf; -[SCDiscoverFeedExpandedStoryFeedSectionCreator sectionForDescriptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799d5c4(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  plVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  plVar2 = plVar1;
  func_0x00010c0720c0();
  _objc_release(plVar1);
  if ((int)plVar2 == 0) {
    plVar1 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = plVar1;
    func_0x00010c0720c0();
    _objc_release(plVar1);
    if ((int)plVar2 == 0) {
      puStack_68 = PTR_PTR_1126f9048;
      plVar1 = &lStack_70;
      lStack_70 = param_1;
      _objc_msgSendSuper2(plVar1,PTR_s_sectionForDescriptor__112633158,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      plVar1 = param_3;
      FUN_1079a3b00(param_3,*(undefined8 *)(param_1 + _DAT_112766c64),
                    *(undefined8 *)(param_1 + _DAT_112766c58),0,
                    *(undefined8 *)(param_1 + _DAT_112766c5c),0,0,0,1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    plVar1 = (long *)PTR_PTR_1126b1108;
    _objc_alloc(PTR_PTR_1126b1108);
    func_0x00010c04f820();
    plVar2 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    plVar3 = plVar2;
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    if (plVar3 == (long *)0x0) {
      puVar8 = PTR_PTR_1126d59e0;
      _objc_alloc(PTR_PTR_1126d59e0);
      func_0x00010c043840();
    }
    else {
      puVar4 = PTR_PTR_1126c2180;
      _objc_alloc(PTR_PTR_1126c2180);
      plVar5 = plVar3;
      func_0x00010bfa4340(plVar3);
      _objc_retainAutoreleasedReturnValue();
      plVar6 = plVar3;
      func_0x00010c262de0(plVar3);
      _objc_retainAutoreleasedReturnValue();
      plVar7 = plVar3;
      func_0x00010c156900(plVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ee40(plVar3);
      func_0x00010c06e300(plVar3);
      func_0x00010bf2cc60(plVar3);
      func_0x00010c0127c0(puVar4);
      _objc_release(plVar7);
      _objc_release(plVar6);
      _objc_release(plVar5);
      puVar8 = PTR_PTR_1126d59e0;
      _objc_alloc(PTR_PTR_1126d59e0);
      func_0x00010c043840();
      _objc_release(puVar4);
    }
    func_0x00010c1f9240(plVar1);
    func_0x00010c189700(plVar1);
    puVar4 = PTR_PTR_1126c23a0;
    _objc_alloc(PTR_PTR_1126c23a0);
    func_0x00010c042de0();
    func_0x00010c189840();
    func_0x00010c1b9a60(plVar1);
    func_0x00010c161980(plVar1);
    _objc_release(puVar4);
    _objc_release(plVar3);
    _objc_release(plVar2);
    _objc_release(puVar8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10799d8c0; end: 10799d8cf; -[SCDiscoverFeedExpandedStoryFeedSectionCreator sectionExtensionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10799d8c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766c64);
}



/* Entry: 10799d8d0; end: 10799d90f; -[SCDiscoverFeedExpandedStoryFeedSectionCreator setSectionExtensionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799d8d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112766c64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10799d910; end: 10799d97f; -[SCDiscoverFeedExpandedStoryFeedSectionCreator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799d910(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112766c64,0);
  _objc_storeStrong(param_1 + _DAT_112766c60,0);
  _objc_storeStrong(param_1 + _DAT_112766c5c,0);
  _objc_storeStrong(param_1 + _DAT_112766c58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112766c54,0);
  return;
}



/* Entry: 10799d980; end: 10799d98b; +[SCDiscoverFeedExpandedStoryFeedViewController announcerIdentifier] */

undefined ** FUN_10799d980(void)

{
  return &PTR____CFConstantStringClassReference_110ea7798;
}



/* Entry: 10799d98c; end: 10799d99b; -[SCDiscoverFeedExpandedStoryFeedViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799d98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112766c68),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10799d99c; end: 10799d9ab; -[SCDiscoverFeedExpandedStoryFeedViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799d99c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112766c68),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10799d9ac; end: 10799e4e3; -[SCDiscoverFeedExpandedStoryFeedViewController initWithUserSession:feedType:pageType:pageTitle:endpointManager:circumstanceEngine:snapTokenProvider:readReceiptCoordinator:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:discoverFeedActionHandler:snapchattersSynchronousDataFetcher:sectionExtensionServices:storiesPrefetcher:adsClientInfoProvider:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:storiesSnapReadReceiptLogger:grapheneRegistry:adConfigProvider:sectionsCoordinator:lazyUserRegistrationInfoProvider:lazyUserBirthdayProvider:promotedStoriesLogger:snapchattersDataFetcher:imageDownloader:isBloopsEnabled:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:networkConnectivityMonitor:rtusClientCacheManager:unifiedGRPCClientFactory:dpaConfigProvider:adRenderDataParser:notificationPool:discoverFeedEventsLogger:customAppThemeProvider:storiesGrapheneMetricsEmitter:discoverCrashLogger:locationProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10799d9ac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16
                     ,undefined8 param_17,undefined8 param_18,undefined8 param_19,
                     undefined8 param_20,undefined8 param_21,undefined8 param_22,undefined8 param_23
                     ,undefined8 param_24,undefined8 param_25,undefined8 param_26,
                     undefined8 param_27,undefined8 param_28,undefined8 param_29,undefined8 param_30
                     ,undefined8 param_31,undefined8 param_32,undefined8 param_33,
                     undefined8 param_34,undefined8 param_35,undefined8 param_36,undefined8 param_37
                     ,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                     undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44
                     )

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  ulong uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain();
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain();
  uVar1 = param_1;
  func_0x00010be42860();
  *(ulong *)(param_1 + (long)_DAT_112766c6c) = uVar1 & 0xffffffff;
  puStack_70 = PTR_PTR_1126f9050;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithNibName_bundle_transitio_1125e9860,0,0);
  if (puVar2 == (ulong *)0x0) goto LAB_10799e324;
  _objc_storeWeak((long)puVar2 + (long)_DAT_112766c70,param_3);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112766c74) = param_4;
  *(long *)((long)puVar2 + (long)_DAT_112766c78) = param_5;
  lVar8 = (long)_DAT_112766c7c;
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_7;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766c80;
  _objc_retain(param_8);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_8;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766c84;
  _objc_retain(param_9);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_9;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766c88;
  _objc_retain(param_10);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_10;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766c8c;
  _objc_retain(param_11);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_11;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766c90;
  _objc_retain(param_12);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_12;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766c94;
  _objc_retain(param_13);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_13;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766c98;
  _objc_retain(param_14);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_14;
  _objc_release(uVar3);
  func_0x00010c1d58e0(*(undefined8 *)((long)puVar2 + lVar8));
  func_0x00010c1e1580(*(undefined8 *)((long)puVar2 + lVar8));
  lVar8 = (long)_DAT_112766c9c;
  _objc_retain(param_15);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_15;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766ca0;
  _objc_retain(param_16);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_16;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766ca4;
  _objc_retain(param_17);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_17;
  _objc_release(uVar3);
  _objc_storeWeak((long)puVar2 + (long)_DAT_112766ca8,param_18);
  lVar8 = (long)_DAT_112766cac;
  _objc_retain(param_19);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_19;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cb0;
  _objc_retain(param_20);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_20;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cb4;
  _objc_retain(param_21);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_21;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cb8;
  _objc_retain(param_22);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_22;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cbc;
  _objc_retain(param_23);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_23;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cc0;
  _objc_retain(param_25);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_25;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cc4;
  _objc_retain(param_26);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_26;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cc8;
  _objc_retain(param_27);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_27;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766ccc;
  _objc_retain(param_28);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_28;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cd0;
  _objc_retain(param_29);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_29;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cd4;
  _objc_retain(param_31);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_31;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cd8;
  _objc_retain(param_33);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_33;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cdc;
  _objc_retain(param_34);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_34;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766ce0;
  _objc_retain(param_44);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_44;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766ce4;
  _objc_retain(param_30);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_30;
  _objc_release(uVar3);
  puVar9 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112766ce8);
  *(undefined **)((long)puVar2 + (long)_DAT_112766ce8) = puVar9;
  _objc_release(uVar3);
  _objc_release(puVar4);
  lVar8 = (long)_DAT_112766cec;
  _objc_retain(param_35);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_35;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cf0;
  _objc_retain(param_36);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_36;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cf4;
  _objc_retain(param_37);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_37;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cf8;
  _objc_retain(param_38);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_38;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766cfc;
  _objc_retain(param_39);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_39;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c22e0;
  _objc_alloc();
  func_0x00010c00c800();
  lVar8 = (long)_DAT_112766d00;
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined **)((long)puVar2 + lVar8) = puVar4;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar8));
  lVar8 = (long)_DAT_112766d04;
  _objc_retain(param_24);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_24;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766d08;
  _objc_retain(param_32);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_32;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b02d0;
  _objc_opt_new();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112766c68);
  *(undefined **)((long)puVar2 + (long)_DAT_112766c68) = puVar4;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766d0c;
  _objc_retain(param_40);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_40;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766d10;
  _objc_retain(param_41);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_41;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112766d14);
  *(undefined **)((long)puVar2 + (long)_DAT_112766d14) = puVar4;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766d18;
  _objc_retain(param_42);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_42;
  _objc_release(uVar3);
  lVar8 = (long)_DAT_112766d1c;
  _objc_retain(param_43);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
  *(undefined8 *)((long)puVar2 + lVar8) = param_43;
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_5 == 0) {
    puVar9 = *(undefined **)((long)puVar2 + (long)_DAT_112766d20);
    ppuVar7 = &PTR____CFConstantStringClassReference_110ea78d8;
LAB_10799e244:
    *(undefined ***)((long)puVar2 + (long)_DAT_112766d20) = ppuVar7;
LAB_10799e24c:
    _objc_release(puVar9);
  }
  else {
    if (param_5 == 2) {
      puVar9 = *(undefined **)((long)puVar2 + (long)_DAT_112766d20);
      ppuVar7 = &PTR____CFConstantStringClassReference_110ea78f8;
      goto LAB_10799e244;
    }
    if (param_5 == 1) {
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112766d20);
      *(undefined **)((long)puVar2 + (long)_DAT_112766d20) = puVar4;
      _objc_release(uVar3);
      goto LAB_10799e24c;
    }
    puVar6 = puVar2;
    func_0x00010be42860();
    if ((int)puVar6 != 0) {
      puVar9 = *(undefined **)((long)puVar2 + (long)_DAT_112766d20);
      *(undefined ***)((long)puVar2 + (long)_DAT_112766d20) =
           &PTR____CFConstantStringClassReference_110ea78b8;
      goto LAB_10799e24c;
    }
    if (param_5 == 4) {
      lVar8 = (long)_DAT_112766d20;
      _objc_retain(&PTR____CFConstantStringClassReference_110eb3638);
      puVar9 = *(undefined **)((long)puVar2 + lVar8);
      *(undefined ***)((long)puVar2 + lVar8) = &PTR____CFConstantStringClassReference_110eb3638;
      goto LAB_10799e24c;
    }
  }
  puVar6 = puVar2;
  func_0x00010be42860();
  puVar5 = puVar2;
  func_0x00010bfdf5e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar6 == 0) {
    func_0x00010c216240();
    _objc_release(puVar5);
    func_0x00010c20eaa0(puVar2);
    func_0x00010c189400(puVar2);
  }
  else {
    func_0x00010c18f820();
    _objc_release(puVar5);
    puVar6 = puVar2;
    func_0x00010bfdf5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010bfdef60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar6);
  }
LAB_10799e324:
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10799e4e4; end: 10799e5c7; -[SCDiscoverFeedExpandedStoryFeedViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799e4e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  puVar2 = PTR_PTR_1126c21f0;
  _objc_opt_new(PTR_PTR_1126c21f0);
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2026e0(puVar1,param_2,0);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ea7918);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  lVar4 = (long)_DAT_112766d24;
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10799e5c8; end: 10799ea9b; -[SCDiscoverFeedExpandedStoryFeedViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799e5c8(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR_PTR_1126f9050;
  puStack_b0 = param_2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_loadView_112604be0);
  puVar12 = (undefined *)(long)_DAT_112766c78;
  if ((*(ulong *)(param_2 + (long)puVar12) & 0xfffffffffffffffd) == 0) {
    puVar1 = param_2;
    func_0x00010bdf44a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_112766d28;
    uVar9 = *(undefined8 *)(param_2 + lVar11);
    *(undefined **)(param_2 + lVar11) = puVar1;
    _objc_release(uVar9);
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar11));
    puVar1 = param_2;
    func_0x00010c152980(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    lVar10 = *(long *)(param_2 + (long)puVar12);
    puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x23 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = param_2;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x24;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = unaff_x23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 == 0) {
      puVar3 = *(undefined **)(param_2 + lVar11);
      uStack_90 = uVar9;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
      puStack_e8 = puVar3;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = puVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = puVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = *(undefined **)(param_2 + lVar11);
      puStack_88 = puVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      puStack_f0 = puVar2;
      func_0x00010bf49480(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + lVar11);
      puStack_f8 = puVar6;
      puStack_80 = puVar6;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      uStack_100 = uVar7;
      puStack_d0 = puVar12;
      func_0x00010c152980(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      uStack_d8 = unaff_x23;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf49520(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = unaff_x24;
      uStack_78 = uVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_b8);
      _objc_release(puVar2);
      unaff_x24 = puStack_e0;
      _objc_release(uVar7);
      puVar2 = puStack_e8;
      _objc_release(puVar12);
      unaff_x23 = uStack_d8;
      _objc_release(puVar6);
      puVar12 = puStack_d0;
      _objc_release(uStack_100);
      _objc_release(puStack_f8);
      _objc_release(puStack_f0);
    }
    else {
      puVar2 = *(undefined **)(param_2 + lVar11);
      uStack_a0 = uVar9;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = puVar5;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010bfdef60(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c34a0();
      puVar4 = puVar2;
      puStack_c8 = puVar5;
      func_0x00010bf493c0(-param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_b8);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puStack_c8);
    _objc_release(puStack_c0);
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(puVar1);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c178280();
  func_0x00010c18b5e0(puVar1);
  func_0x00010c1c8340(0x3fa999999999999a,puVar1);
  puVar2 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(puVar2);
  puVar5 = param_2;
  func_0x00010be42860();
  if ((int)puVar5 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar12);
    _objc_release(param_2);
    _objc_release(puVar2);
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_10799ea9c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_158 = PTR_PTR_1126f9050;
  puStack_160 = puVar5;
  puStack_140 = unaff_x24;
  uStack_138 = unaff_x23;
  puStack_130 = puVar12;
  puStack_128 = puVar2;
  puStack_120 = puVar1;
  puStack_118 = param_2;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_160,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beaf460(puVar5);
  puVar12 = PTR_PTR_1126b1138;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_150 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0127e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_168,puVar5);
  uVar9 = *(undefined8 *)(puVar5 + _DAT_112766ca0);
  puVar8 = auStack_168;
  _objc_copyWeak(auStack_170,puVar8);
  _objc_retain(puVar12);
  func_0x00010c297260(uVar9);
  puVar1 = puVar5;
  func_0x00010be42860();
  if ((int)puVar1 != 0) {
    uVar9 = *(undefined8 *)(puVar5 + _DAT_112766d0c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250840();
    _objc_release(uVar9);
  }
  if (2 < lRam00000001138466f0) {
    puVar1 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar10 = (long)_DAT_112766d2c;
    uVar9 = *(undefined8 *)(puVar5 + lVar10);
    *(undefined **)(puVar5 + lVar10) = puVar1;
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(puVar5 + lVar10);
    func_0x00010bf14800(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067880(uVar9);
    _objc_release(puVar5);
  }
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  __Unwind_Resume();
  _objc_retain(puVar8);
  puVar12 = puVar12 + 0x28;
  _objc_loadWeakRetained(puVar12);
  func_0x00010be9fcc0();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 10799ea9c; end: 10799ed33; -[SCDiscoverFeedExpandedStoryFeedViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799ea9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_58 = PTR_PTR_1126f9050;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beaf460(param_1);
  puVar1 = PTR_PTR_1126b1138;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0127e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112766ca0);
  puVar4 = auStack_68;
  _objc_copyWeak(auStack_70,puVar4);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar5);
  lVar6 = param_1;
  func_0x00010be42860();
  if ((int)lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112766d0c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250840();
    _objc_release(uVar5);
  }
  if (2 < lRam00000001138466f0) {
    puVar2 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar6 = (long)_DAT_112766d2c;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf14800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067880(uVar5);
    _objc_release(param_1);
  }
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar4);
  puVar1 = puVar1 + 0x28;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be9fcc0();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10799ed34; end: 10799ed93;  */

void FUN_10799ed34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fcc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10799ed94; end: 10799ee4b; -[SCDiscoverFeedExpandedStoryFeedViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799ed94(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126f9050;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112766d30);
  *(long **)(param_2 + _DAT_112766d30) = plVar1;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + _DAT_112766d34) = param_1;
  _objc_release(puVar2);
  uVar3 = 3;
  if (*(long *)(param_2 + _DAT_112766c6c) != 1) {
    uVar3 = 0;
  }
  *(undefined8 *)(param_2 + _DAT_112766d38) = uVar3;
  return;
}



/* Entry: 10799ee4c; end: 10799ef8b; -[SCDiscoverFeedExpandedStoryFeedViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799ee4c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_1126f9050;
  uStack_68 = param_1;
  _objc_msgSendSuper2(&uStack_68,PTR_s_viewDidAppear__112684bd0);
  uVar1 = param_1;
  func_0x00010be42860();
  if ((uVar1 & 1) == 0) {
    func_0x00010bdcc2c0(param_1);
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dcad78;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110eb3738;
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cae88;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110ea78b8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcbc40(param_1);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112766ca4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1080c0();
  _objc_release(uVar3);
  uVar1 = param_1;
  func_0x00010bed6f00();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10799ef8c;
  puStack_98 = PTR_PTR_1126f9050;
  uStack_a0 = uVar1;
  uStack_90 = uVar3;
  uStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_viewDidDisappear__112684c48);
  uVar4 = uVar1;
  func_0x00010be42860();
  if ((int)uVar4 == 0) {
    func_0x00010bdcc280(uVar1);
  }
  else {
    uVar3 = *(undefined8 *)(uVar1 + (long)_DAT_112766c94);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130ac0();
    _objc_release(uVar3);
    func_0x00010bdcbc40(uVar1);
  }
  uVar3 = *(undefined8 *)(uVar1 + (long)_DAT_112766d30);
  *(undefined8 *)(uVar1 + (long)_DAT_112766d30) = 0;
  _objc_release(uVar3);
  *(undefined8 *)(uVar1 + (long)_DAT_112766d34) = 0;
  lVar5 = uVar1 + (long)_DAT_112766d3c;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf74da0();
  _objc_release(lVar5);
  func_0x00010be92a20(uVar1);
  return;
}



/* Entry: 10799ef8c; end: 10799f087; -[SCDiscoverFeedExpandedStoryFeedViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799ef8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9050;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  lVar1 = param_1;
  func_0x00010be42860();
  if ((int)lVar1 == 0) {
    func_0x00010bdcc280(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112766c94);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130ac0();
    _objc_release(uVar2);
    func_0x00010bdcbc40(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112766d30);
  *(undefined8 *)(param_1 + _DAT_112766d30) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + _DAT_112766d34) = 0;
  lVar1 = param_1 + _DAT_112766d3c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf74da0();
  _objc_release(lVar1);
  func_0x00010be92a20(param_1);
  return;
}



/* Entry: 10799f088; end: 10799f1bf; -[SCDiscoverFeedExpandedStoryFeedViewController searchQueryResultControllerDidUpdateQueryResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799f088(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf5fcc0();
  if (lVar1 != 1) {
    *(undefined1 *)(param_1 + _DAT_112766d40) = 1;
  }
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112766ce8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  func_0x00010bed9920(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112766ca4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1080c0();
  _objc_release(uVar2);
  func_0x00010bee14e0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10799f1c0; end: 10799f1eb;  */

void FUN_10799f1c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10799f1ec; end: 10799f1ef; -[SCDiscoverFeedExpandedStoryFeedViewController searchQueryResultController:willUpdateResultForQuery:fromQuery:] */

void FUN_10799f1ec(void)

{
  return;
}



/* Entry: 10799f1f0; end: 10799f1f3; -[SCDiscoverFeedExpandedStoryFeedViewController presentingViewControllerForSearchQueryResultController:] */

void FUN_10799f1f0(void)

{
  return;
}



/* Entry: 10799f1f4; end: 10799f223; -[SCDiscoverFeedExpandedStoryFeedViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799f1f4(long param_1)

{
  func_0x00010c288160(*(undefined8 *)(param_1 + _DAT_112766d00));
                    /* WARNING: Could not recover jumptable at 0x00010bed9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImpressionItems_112593ff0);
  return;
}



/* Entry: 10799f224; end: 10799f283; -[SCDiscoverFeedExpandedStoryFeedViewController scrollViewWillBeginDragging:] */

void FUN_10799f224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bf4cdc0(param_5);
  FUN_107cb3384(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc40(param_3,param_4,&PTR____CFConstantStringClassReference_110f41418,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10799f284; end: 10799f33b; -[SCDiscoverFeedExpandedStoryFeedViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799f284(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010bed9920(param_3);
  if ((param_6 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010bf4cdc0(param_5);
    func_0x000107cb3498(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcbc40(param_3,param_4,&PTR____CFConstantStringClassReference_110f41418,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_3 + _DAT_112766ca4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1080c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10799f33c; end: 10799f3f3; -[SCDiscoverFeedExpandedStoryFeedViewController scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799f33c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112766ca4);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1080c0();
  _objc_release(uVar1);
  func_0x00010bf4cdc0(param_5);
  _objc_release(param_5);
  func_0x000107cb3498(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc40(param_3,param_4,&PTR____CFConstantStringClassReference_110f41418,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10799f3f4; end: 10799f3f7; -[SCDiscoverFeedExpandedStoryFeedViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10799f3f4(void)

{
  return;
}



/* Entry: 10799f3f8; end: 10799f4d7; -[SCDiscoverFeedExpandedStoryFeedViewController discoverQueryCoordinator:didReceiveServerResponseForQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799f3f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112766ce8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10799f4d8; end: 10799f503;  */

void FUN_10799f4d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10799f504; end: 10799f613; -[SCDiscoverFeedExpandedStoryFeedViewController discoverQueryCoordinator:didFailForQuery:error:statusCodeToDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799f504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = *(undefined8 *)(param_1 + _DAT_112766ce8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10799f614; end: 10799f63f;  */

void FUN_10799f614(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10799f640; end: 10799f9c7; -[SCDiscoverFeedExpandedStoryFeedViewController _setupQueryResultController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799f640(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar3 = PTR_PTR_1126b1168;
  _objc_alloc();
  lVar13 = param_1 + _DAT_112766c70;
  _objc_loadWeakRetained(lVar13);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112766c7c);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112766c80);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112766c84);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112766c88);
  lVar2 = (long)_DAT_112766c90;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112766c8c);
  uVar16 = *(undefined8 *)(param_1 + lVar2);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112766c94);
  lVar4 = param_1 + _DAT_112766ca8;
  _objc_loadWeakRetained();
  lVar1 = (long)_DAT_112766cac;
  func_0x00010c05d8a0(puVar3,*(undefined8 *)(param_1 + _DAT_112766d08),lVar13,uVar11,uVar8,uVar12,
                      uVar9,uVar10,uVar16,uVar14,lVar4,*(undefined8 *)(param_1 + lVar1),
                      *(undefined8 *)(param_1 + _DAT_112766cb0),
                      *(undefined8 *)(param_1 + _DAT_112766cb4),
                      *(undefined8 *)(param_1 + _DAT_112766cb8),
                      *(undefined8 *)(param_1 + _DAT_112766cbc),
                      *(undefined8 *)(param_1 + _DAT_112766d04),
                      *(undefined8 *)(param_1 + _DAT_112766cc0),
                      *(undefined8 *)(param_1 + _DAT_112766cc4),
                      *(undefined8 *)(param_1 + _DAT_112766cc8),
                      *(undefined8 *)(param_1 + _DAT_112766ccc),
                      *(undefined8 *)(param_1 + _DAT_112766ce4),
                      *(undefined8 *)(param_1 + _DAT_112766d08),
                      *(undefined8 *)(param_1 + _DAT_112766cdc),
                      *(undefined8 *)(param_1 + _DAT_112766cec),
                      *(undefined8 *)(param_1 + _DAT_112766cf0),
                      *(undefined8 *)(param_1 + _DAT_112766cf4),
                      *(undefined8 *)(param_1 + _DAT_112766cf8),
                      *(undefined8 *)(param_1 + _DAT_112766cfc),
                      *(undefined8 *)(param_1 + _DAT_112766d18),
                      *(undefined8 *)(param_1 + _DAT_112766d1c),
                      *(undefined8 *)(param_1 + _DAT_112766ce0));
  lVar15 = (long)_DAT_112766d44;
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar3;
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar13);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15));
  puVar3 = PTR_PTR_1126c2338;
  _objc_alloc();
  func_0x00010bfff800();
  puVar5 = PTR_PTR_1126b1148;
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff02c0();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112766d48);
  *(undefined **)(param_1 + _DAT_112766d48) = puVar5;
  _objc_release(uVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  puVar5 = PTR_PTR_1126b1150;
  _objc_alloc();
  func_0x00010c03fd60();
  lVar13 = (long)_DAT_112766d4c;
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar5;
  _objc_release(uVar8);
  func_0x00010c200b20(*(undefined8 *)(param_1 + lVar13));
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar13));
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf40a20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e940();
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10799f9c8; end: 10799fd87; -[SCDiscoverFeedExpandedStoryFeedViewController scrollToEndDetector:scrollViewWillReachEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799f9c8(long param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **unaff_x27;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(char *)(param_1 + _DAT_112766d40) == '\x01') &&
     (unaff_x27 = (undefined **)(long)_DAT_112766c78, *(long *)((long)unaff_x27 + param_1) != 4)) {
    uVar1 = *(ulong *)(param_1 + _DAT_112766d4c);
    func_0x00010bf5fee0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 != 0) {
      func_0x00010bf529e0(uVar1);
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_1079af428();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      param_2 = PTR_PTR_1126c2180;
      _objc_opt_class();
      uVar4 = uVar3;
      _objc_opt_isKindOfClass();
      uVar2 = uVar3;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c156900();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        _objc_release(uVar3);
LAB_10799fb9c:
        uVar3 = uVar2;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar4 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar3);
        if (uVar4 < 2) goto LAB_10799fb9c;
        func_0x00010bf529e0(uVar1);
        uVar3 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        FUN_1079af428();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        param_2 = PTR_PTR_1126c2180;
        _objc_opt_class();
        uVar3 = uVar5;
        _objc_opt_isKindOfClass();
        uVar4 = uVar5;
        if ((uVar3 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar5);
        uVar3 = uVar4;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
      if (uVar3 != 0) {
        _objc_initWeak(auStack_80,param_1);
        puVar6 = PTR_PTR_1126b1138;
        _objc_alloc();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_70 = uVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0127e0();
        _objc_release(puVar7);
        uVar8 = *(undefined8 *)(param_1 + _DAT_112766d04);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_78 = uVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_10799fd88;
        puStack_98 = &UNK_11085c6a8;
        param_2 = auStack_80;
        _objc_copyWeak(auStack_88);
        _objc_retain(puVar6);
        puStack_90 = puVar6;
        func_0x00010bfa9fc0(uVar8);
        _objc_release(puVar7);
        _objc_release(uVar8);
        _objc_release(puStack_90);
        _objc_destroyWeak(auStack_88);
        _objc_release(puVar6);
        _objc_destroyWeak(auStack_80);
        unaff_x27 = &puStack_b0;
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x27 + 0x28));
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar6 = param_2;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x1) {
    puVar6 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfd9420();
    _objc_release(puVar6);
    if ((int)puVar7 == 0) goto LAB_10799fe00;
  }
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be9fa20();
  _objc_release(param_3);
LAB_10799fe00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10799fd88; end: 10799fe13;  */

void FUN_10799fd88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfd9420();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) goto LAB_10799fe00;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fa20();
  _objc_release(param_1);
LAB_10799fe00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10799fe14; end: 10799fe1b; -[SCDiscoverFeedExpandedStoryFeedViewController pageViewName] */

undefined8 FUN_10799fe14(void)

{
  return 0x5d;
}



/* Entry: 10799fe1c; end: 10799ff5b; -[SCDiscoverFeedExpandedStoryFeedViewController didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799fe1c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c252440();
  if (uVar1 != 1) goto LAB_10799ff48;
  uVar1 = param_3;
  FUN_107c1f384(param_3,*(undefined8 *)(param_1 + _DAT_112766d24));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c20f8;
  _objc_opt_class(PTR_PTR_1126c20f8);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010bf4c080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    FUN_107c1f384(param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  puVar2 = PTR_DAT_1126a5008;
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar1 = 0;
    uVar3 = uVar4;
LAB_10799ff30:
    FUN_107c1f420(uVar3);
  }
  else {
    uVar1 = uVar4;
    func_0x00010c29e5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar3 = uVar1;
    if (uVar1 != 0) goto LAB_10799ff30;
  }
  _objc_release(uVar1);
  _objc_release(uVar4);
LAB_10799ff48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10799ff5c; end: 10799ff63; -[SCDiscoverFeedExpandedStoryFeedViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10799ff5c(void)

{
  return 1;
}



/* Entry: 10799ff64; end: 10799ff87; -[SCDiscoverFeedExpandedStoryFeedViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10799ff64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112766d24);
  func_0x00010c070ea0(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10799ff88; end: 1079a0037; -[SCDiscoverFeedExpandedStoryFeedViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10799ff88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be42860();
  if ((int)lVar1 == 0) {
    puStack_38 = PTR_PTR_1126f9050;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_didSelectDismissalActionWithHead_1125bc3f8,param_3);
  }
  else {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf787c0();
    _objc_release(lVar1);
  }
  *(undefined8 *)(param_1 + _DAT_112766d38) = 5;
  _objc_release(param_3);
  return;
}



/* Entry: 1079a0038; end: 1079a0043; -[SCDiscoverFeedExpandedStoryFeedViewController defaultProjectNameV2] */

void FUN_1079a0038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c258050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_stories_112673a38);
  return;
}



/* Entry: 1079a0044; end: 1079a004b; -[SCDiscoverFeedExpandedStoryFeedViewController defaultSubProjectName] */

undefined8 FUN_1079a0044(void)

{
  return 0;
}



/* Entry: 1079a004c; end: 1079a014b; -[SCDiscoverFeedExpandedStoryFeedViewController didStartToDisplayStoryWithIndexPath:feedType:groupDataModel:actionHandler:] */

void FUN_1079a004c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1079a014c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1079a014c; end: 1079a017f;  */

void FUN_1079a014c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a0180; end: 1079a0457; -[SCDiscoverFeedExpandedStoryFeedViewController didStartToDismissStoryAtIndexPath:actionHandler:shouldSkipDismissBaseViewUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0180(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double in_d3;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  if ((param_5 & 1) == 0) {
    func_0x0001008522a8();
    if (((uVar1 & 1) == 0) && (*(long *)(param_1 + _DAT_112766c78) == 2)) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc40();
      _objc_release(puVar2);
    }
    uVar1 = param_3;
    func_0x00010c1554e0();
    lVar10 = (long)_DAT_112766d4c;
    uVar3 = *(ulong *)(param_1 + lVar10);
    func_0x00010bf5fee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar1 < uVar4) {
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bf5fee0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1554e0(param_3);
      uVar7 = uVar5;
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar7);
    }
    lVar6 = param_1;
    func_0x00010be42860(param_1);
    lVar11 = (long)_DAT_112766d24;
    uVar5 = *(undefined8 *)(param_1 + lVar11);
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf5fee0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_107c1f630(param_3,uVar5,uVar7,(uint)lVar6 ^ 1,0);
    _objc_release(uVar7);
    lVar8 = *(long *)(param_1 + lVar11);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010c2a72c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar11;
    func_0x00010c252da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    _objc_release(lVar9);
    _objc_release(lVar11);
    _objc_release(lVar6);
    _objc_release(lVar10);
    func_0x00010bed4f20(in_d3,param_1);
    _objc_retain(lVar8);
    _objc_retain(param_4);
    uVar1 = param_4;
    func_0x00010010fab4(param_4,PTR_DAT_1126a5010);
    puVar2 = PTR_DAT_1126a5018;
    if ((param_4 != 0) && ((int)uVar1 != 0)) {
      _objc_retain(param_4);
      lVar10 = lVar8;
      func_0x00010010fab4(lVar8,puVar2);
      lVar6 = lVar8;
      if ((lVar8 == 0) || ((int)lVar10 == 0)) {
        func_0x00010bf4dce0(lVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0ea000(lVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c285260(param_4);
      _objc_release(param_4);
      _objc_release(lVar6);
    }
    _objc_release(param_4);
    _objc_release(lVar8);
    func_0x00010bed4f20(-in_d3,param_1);
    _objc_release(lVar8);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a0458; end: 1079a045b; -[SCDiscoverFeedExpandedStoryFeedViewController didDismissStory] */

void FUN_1079a0458(void)

{
  return;
}



/* Entry: 1079a045c; end: 1079a045f; -[SCDiscoverFeedExpandedStoryFeedViewController didTearDownStory] */

void FUN_1079a045c(void)

{
  return;
}



/* Entry: 1079a0460; end: 1079a04c7; -[SCDiscoverFeedExpandedStoryFeedViewController _updateCellFrameForDismissingTransition:topInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0460(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x0001008522a8();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + _DAT_112766c78) == 2)) {
    func_0x00010bfb68e0(param_3);
    func_0x00010c19f0e0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a04c8; end: 1079a0563; -[SCDiscoverFeedExpandedStoryFeedViewController _handleDidStartToDisplayStoryWithIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a04c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be42860(param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112766d24);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112766d4c);
  func_0x00010bf5fee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107c1f630(param_3,uVar3,uVar2,(uint)lVar1 ^ 1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079a0564; end: 1079a063b; -[SCDiscoverFeedExpandedStoryFeedViewController _updateImpressionItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0564(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112766d24);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112766d4c);
  func_0x00010bf5fee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(long *)(param_1 + _DAT_112766c78) - 1;
  if (uVar3 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10dee0938 + uVar3 * 8);
  }
  else {
    uVar2 = 0x14;
  }
  FUN_10799bb20(*(undefined8 *)(param_1 + _DAT_112766d34),uVar4,uVar1,
                *(undefined8 *)(param_1 + _DAT_112766d20),*(undefined8 *)(param_1 + _DAT_112766d30),
                uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc40(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079a063c; end: 1079a06e7; -[SCDiscoverFeedExpandedStoryFeedViewController _announcePageOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a063c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_1 + _DAT_112766c78) - 1;
  if (uVar2 < 4) {
    uVar1 = *(undefined8 *)(&UNK_10dee0938 + uVar2 * 8);
  }
  else {
    uVar1 = 0x14;
  }
  FUN_107cb3664(uVar1,*(undefined8 *)(param_1 + _DAT_112766d20),0,PTR____NSArray0__struct_11034ab48,
                5,*(undefined8 *)(param_1 + _DAT_112766d30),0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079a06e8; end: 1079a0797; -[SCDiscoverFeedExpandedStoryFeedViewController _announcePageClose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a06e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112766d38);
  uVar3 = *(long *)(param_1 + _DAT_112766c78) - 1;
  if (uVar3 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10dee0938 + uVar3 * 8);
  }
  else {
    uVar2 = 0x14;
  }
  func_0x000107cb3d20(uVar1,uVar2,*(undefined8 *)(param_1 + _DAT_112766d20),
                      *(undefined8 *)(param_1 + _DAT_112766d30),0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079a0798; end: 1079a08cf; -[SCDiscoverFeedExpandedStoryFeedViewController _announceEventWithName:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0798(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    puVar1 = param_4;
    func_0x00010c0d3c80();
  }
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    if (*(long *)(param_1 + _DAT_112766d30) != 0) {
      func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + _DAT_112766d30),
                          &PTR____CFConstantStringClassReference_110e5f1f8);
    }
  }
  else {
    _objc_release();
  }
  if (*(long *)(param_1 + _DAT_112766c78) == 1) {
    func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f41d18);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112766c68);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf7dbc0(uVar3,param_2,param_3,param_1,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a08d0; end: 1079a095f; -[SCDiscoverFeedExpandedStoryFeedViewController _createSubtitleLabel] */

void FUN_1079a08d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  func_0x00010c21ad00();
  func_0x00010c1cfce0(puVar1,param_2,2);
  func_0x00010c1bdb00(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c23d620(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079a0960; end: 1079a0b5b; -[SCDiscoverFeedExpandedStoryFeedViewController _updateSubtitleLabelTextIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0960(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112766c78;
  if ((*(ulong *)(param_1 + lVar7) & 0xfffffffffffffffd) != 0) goto LAB_1079a0b40;
  lVar2 = param_3;
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar7 = *(long *)(param_1 + lVar7);
  if (lVar7 == 2) {
    lVar7 = lVar4;
    func_0x00010c0deb60();
    if (lVar7 == 0) {
      func_0x0001079a3338();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar7 = 0;
    }
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112766d28),param_2,lVar7);
LAB_1079a0b30:
    _objc_release(lVar7);
  }
  else if (lVar7 == 0) {
    lVar7 = param_3;
    func_0x00010bf40a20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c156b00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar7);
    if (lVar3 != 0) {
      lVar2 = param_3;
      func_0x00010bf5fee0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      FUN_1079af428();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar7;
      FUN_1079d6288();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0();
      if ((int)lVar3 != 0) {
        func_0x0001079a3350();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x0001079a3368();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c0deb60();
        lVar1 = lVar5;
        if (lVar6 != 0) {
          lVar1 = lVar3;
        }
        func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112766d28),param_2,lVar1);
        _objc_release(lVar5);
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
      goto LAB_1079a0b30;
    }
  }
  _objc_release(lVar4);
LAB_1079a0b40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a0b5c; end: 1079a0c4f; -[SCDiscoverFeedExpandedStoryFeedViewController _sendPaginationQueryWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112766ca0);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c297260(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1079a0c50; end: 1079a0caf;  */

void FUN_1079a0c50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fcc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a0cb0; end: 1079a0db7; -[SCDiscoverFeedExpandedStoryFeedViewController _sendQueryWithSource:queryParameters:sectionExtensionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112766d50;
  if ((*(byte *)(param_1 + lVar3) & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112766d44);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1f9280(uVar2,param_2,param_5);
  func_0x00010c1f9280(*(undefined8 *)(param_1 + _DAT_112766d48),param_2,param_5);
  _objc_release(param_5);
  *(undefined1 *)(param_1 + lVar3) = 1;
  puVar1 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c1e6360(*(undefined8 *)(param_1 + _DAT_112766d4c),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079a0db8; end: 1079a0dc7; -[SCDiscoverFeedExpandedStoryFeedViewController _didFinishQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0db8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112766d50) = 0;
  return;
}



/* Entry: 1079a0dc8; end: 1079a0e4f; -[SCDiscoverFeedExpandedStoryFeedViewController _updateDiscoverFeedActionHandlerPropertiesOnViewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0dc8(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112766c98;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0f1e60();
  *(undefined8 *)(param_1 + _DAT_112766d54) = uVar2;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c0723a0();
  *(undefined1 *)(param_1 + _DAT_112766d58) = uVar1;
  func_0x00010c1b0c00(*(undefined8 *)(param_1 + lVar4));
  lVar3 = param_1;
  func_0x00010be42860();
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d8810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar4),PTR_s_setPageType__112653c28,0x5c);
    return;
  }
  return;
}



/* Entry: 1079a0e50; end: 1079a0eab; -[SCDiscoverFeedExpandedStoryFeedViewController _resetDiscoverFeedActionHandlerPropertiesOnViewDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0e50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112766d54;
  lVar3 = (long)_DAT_112766c98;
  func_0x00010c1d8800(*(undefined8 *)(param_1 + lVar3),param_2,*(undefined8 *)(param_1 + lVar2));
  lVar1 = (long)_DAT_112766d58;
  func_0x00010c1b0c00(*(undefined8 *)(param_1 + lVar3),param_2,*(undefined1 *)(param_1 + lVar1));
  *(undefined8 *)(param_1 + lVar2) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + lVar1) = 0;
  return;
}


