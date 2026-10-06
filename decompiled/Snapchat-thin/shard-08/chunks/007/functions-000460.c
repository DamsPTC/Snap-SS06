/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10649ab70; end: 10649ace3; -[SCContextOperaLayerPresenterChrome subscreenWillAppearWithUnhideContainers:] */

void FUN_10649ab70(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_218 [128];
  long lStack_198;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar12);
  lVar11 = lVar12;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar12);
      }
      uVar2 = *(ulong *)(lVar13 * 8);
      if ((((param_3 & 1) == 0) || (uVar2 != *(ulong *)(param_1 + 0x38))) &&
         (((param_3 >> 1 & 1) == 0 || (uVar2 != *(ulong *)(param_1 + 0xf0))))) {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126cae60;
        _objc_opt_class(PTR_PTR_1126cae60);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        func_0x00010bfe1560(uVar1);
        _objc_release(uVar1);
      }
      lVar13 = lVar13 + 1;
    } while (lVar11 != lVar13);
    lVar11 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(lVar12 + 0x30);
  _objc_retain(lVar11);
  puVar9 = auStack_218;
  lVar8 = lVar11;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar11);
      }
      uVar2 = *(ulong *)(lVar13 * 8);
      if (uVar2 != *(ulong *)(lVar12 + 0x38)) {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126cae60;
        _objc_opt_class(PTR_PTR_1126cae60);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        func_0x00010c235840(uVar1);
        _objc_release(uVar1);
      }
      lVar13 = lVar13 + 1;
    } while (lVar8 != lVar13);
    puVar9 = auStack_218;
    lVar8 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar3 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  func_0x00010bde83e0(lVar11);
  uVar5 = *(undefined8 *)(lVar11 + 8);
  func_0x00010beeed40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4eae0();
  uVar6 = *(undefined8 *)(lVar11 + 8);
  func_0x00010beeed40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4eb00();
  func_0x00010be3d1e0(lVar11);
  func_0x00010bff0a60(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar7 = puVar9;
  func_0x00010beeed20();
  if ((int)puVar7 == 0x1a) {
    uVar6 = *(undefined8 *)(lVar11 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c2a27c0();
    _objc_release(uVar6);
    if ((int)uVar5 != 0) {
      lVar8 = *(long *)(lVar11 + 8);
      func_0x00010beeed80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        lVar13 = *(long *)(lVar11 + 8);
        func_0x00010beee700();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar12;
        func_0x00010bf54560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        _objc_release(lVar13);
        lVar12 = lVar11 + 0x18;
        _objc_loadWeakRetained(lVar12);
        func_0x00010c18b5e0(lVar10);
        _objc_release(lVar12);
        _objc_release(lVar8);
        goto LAB_10649b020;
      }
    }
  }
  lVar10 = *(long *)(lVar11 + 0x20);
  if (lVar10 == 0) {
    uVar5 = *(undefined8 *)(lVar11 + 8);
    func_0x00010bf544e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar11 + 0x18;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c18b5e0(uVar5);
    _objc_release(lVar8);
    uVar6 = *(undefined8 *)(lVar11 + 0x20);
    *(undefined8 *)(lVar11 + 0x20) = uVar5;
    _objc_release(uVar6);
    lVar10 = *(long *)(lVar11 + 0x20);
  }
  _objc_retain(lVar10);
LAB_10649b020:
  lVar11 = lVar11 + 0x88;
  _objc_loadWeakRetained(lVar11);
  _objc_retain(lVar10);
  func_0x00010bfd0040(lVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar10);
  _objc_release(puVar3);
  _objc_release(puVar9);
  return;
}



/* Entry: 10649ace4; end: 10649ae3f; -[SCContextOperaLayerPresenterChrome subscreenWillDisappear] */

void FUN_10649ace4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar12);
  puVar11 = auStack_e8;
  lVar8 = lVar12;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar12);
      }
      uVar2 = *(ulong *)(lVar13 * 8);
      if (uVar2 != *(ulong *)(param_1 + 0x38)) {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126cae60;
        _objc_opt_class(PTR_PTR_1126cae60);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        func_0x00010c235840(uVar1);
        _objc_release(uVar1);
      }
      lVar13 = lVar13 + 1;
    } while (lVar8 != lVar13);
    puVar11 = auStack_e8;
    lVar8 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar3 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  func_0x00010bde83e0(lVar12);
  uVar5 = *(undefined8 *)(lVar12 + 8);
  func_0x00010beeed40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4eae0();
  uVar6 = *(undefined8 *)(lVar12 + 8);
  func_0x00010beeed40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4eb00();
  func_0x00010be3d1e0(lVar12);
  func_0x00010bff0a60(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar7 = puVar11;
  func_0x00010beeed20();
  if ((int)puVar7 == 0x1a) {
    uVar6 = *(undefined8 *)(lVar12 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c2a27c0();
    _objc_release(uVar6);
    if ((int)uVar5 != 0) {
      lVar8 = *(long *)(lVar12 + 8);
      func_0x00010beeed80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar12 + 8);
        func_0x00010beee700();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar10;
        func_0x00010bf54560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(lVar9);
        lVar10 = lVar12 + 0x18;
        _objc_loadWeakRetained(lVar10);
        func_0x00010c18b5e0(lVar13);
        _objc_release(lVar10);
        _objc_release(lVar8);
        goto LAB_10649b020;
      }
    }
  }
  lVar13 = *(long *)(lVar12 + 0x20);
  if (lVar13 == 0) {
    uVar5 = *(undefined8 *)(lVar12 + 8);
    func_0x00010bf544e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar12 + 0x18;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c18b5e0(uVar5);
    _objc_release(lVar8);
    uVar6 = *(undefined8 *)(lVar12 + 0x20);
    *(undefined8 *)(lVar12 + 0x20) = uVar5;
    _objc_release(uVar6);
    lVar13 = *(long *)(lVar12 + 0x20);
  }
  _objc_retain(lVar13);
LAB_10649b020:
  lVar12 = lVar12 + 0x88;
  _objc_loadWeakRetained(lVar12);
  _objc_retain(lVar13);
  func_0x00010bfd0040(lVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar13);
  _objc_release(lVar13);
  _objc_release(puVar3);
  _objc_release(puVar11);
  return;
}



/* Entry: 10649ae40; end: 10649b0cf; -[SCContextOperaLayerPresenterChrome operaChromeScope:didSelectAction:withEvent:menuType:] */

void FUN_10649ae40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  lVar5 = param_1;
  func_0x00010bde83e0(param_1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010beeed40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf4eae0();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010beeed40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4eb00();
  lVar9 = param_1;
  func_0x00010be3d1e0(param_1,param_2,param_6);
  func_0x00010bff0a60(puVar1,param_2,5,lVar5,uVar8,uVar4,lVar9);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar8 = param_4;
  func_0x00010beeed20();
  if ((int)uVar8 == 0x1a) {
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c2a27c0();
    _objc_release(uVar4);
    if ((int)uVar8 != 0) {
      lVar5 = *(long *)(param_1 + 8);
      func_0x00010beeed80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        lVar6 = *(long *)(param_1 + 8);
        func_0x00010beee700();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010bf54560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar6);
        lVar7 = param_1 + 0x18;
        _objc_loadWeakRetained(lVar7);
        func_0x00010c18b5e0(lVar9,param_2,lVar7);
        _objc_release(lVar7);
        _objc_release(lVar5);
        goto LAB_10649b020;
      }
    }
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf544e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c18b5e0(uVar8,param_2,lVar5);
    _objc_release(lVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    _objc_release(uVar4);
    lVar9 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar9);
LAB_10649b020:
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10649b0d0;
  puStack_70 = &UNK_1108450c8;
  lStack_68 = lVar9;
  _objc_retain(lVar9);
  func_0x00010bfd0040(lVar9,param_2,param_4,puVar1,param_1,0,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lStack_68);
  _objc_release(lVar9);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10649b0d0; end: 10649b0d3;  */

void FUN_10649b0d0(void)

{
  return;
}



/* Entry: 10649b0d4; end: 10649b0f3; -[SCContextOperaLayerPresenterChrome _interactionContextFromMenuType:] */

undefined8 FUN_10649b0d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    return *(undefined8 *)(&UNK_10dddc470 + param_3 * 8);
  }
  return 8;
}



/* Entry: 10649b0f4; end: 10649b117; -[SCContextOperaLayerPresenterChrome _contextMenuTypeFromMenuType:] */

undefined8 FUN_10649b0f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined8 *)(&UNK_10dddc498 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 10649b118; end: 10649b127; -[SCContextOperaLayerPresenterChrome operaChromeScope:sendOperaEvent:parameters:withEvent:] */

void FUN_10649b118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendOperaEvent_parameters_withE_112585800,param_4,param_5,param_6);
  return;
}



/* Entry: 10649b128; end: 10649b477; -[SCContextOperaLayerPresenterChrome _sendOperaEvent:parameters:withEvent:] */

void FUN_10649b128(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  if (param_5 != 0) {
    if (param_4 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126b6168;
      func_0x00010c247d60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar2 = PTR_PTR_1126b6168;
      func_0x00010c247d60(PTR_PTR_1126b6168);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      func_0x00010bef7f60(puVar1);
      puVar2 = puVar1;
      func_0x00010bf51e00();
      _objc_release(param_4);
      _objc_release(puVar1);
    }
  }
  puVar1 = PTR_PTR_1126b2d20;
  func_0x00010c079520(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf1f3c0();
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x90);
    puVar1 = PTR_PTR_1126c9830;
    func_0x00010beedca0(PTR_PTR_1126c9830);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010beeed40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b5cb8;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5c68;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b5cb8;
    func_0x00010bfc1d00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar1);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010beeed40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0eb7c0(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0bc640(uVar5);
  return;
}



/* Entry: 10649b478; end: 10649b4e7; -[SCContextOperaLayerPresenterChrome operaChromeScope:shouldPromoteItem:] */

void FUN_10649b478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10649b4e8;
  puStack_20 = &UNK_110924b50;
  uStack_18 = param_1;
  func_0x00010c0bc640(param_4,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110924b80,
                      &PTR___NSConcreteGlobalBlock_110924bc0,&PTR___NSConcreteGlobalBlock_110924be0)
  ;
  return;
}



/* Entry: 10649b4e8; end: 10649b4ff;  */

void FUN_10649b4e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be83090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__promoteProtoAction__11257e5c0,param_2);
  return;
}



/* Entry: 10649b500; end: 10649b54b; -[SCContextOperaLayerPresenterChrome operaChromeScopeDidDismiss:] */

void FUN_10649b500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6160;
  func_0x00010bf3d9e0(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f960(param_1,param_2,puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10649b54c; end: 10649b68b; -[SCContextOperaLayerPresenterChrome _promoteProtoAction:] */

void FUN_10649b54c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xa0) == 0) {
    puVar1 = PTR_PTR_1126cae80;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c05faa0(puVar1,param_2,uVar4,lVar2,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0xe8));
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar1;
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  lVar2 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c265220();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0xa0);
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != lVar5) {
    lVar2 = param_1 + 0xd8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c2109a0();
    _objc_release(lVar2);
  }
  func_0x00010c210940(*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf5d2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6fe0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10649b68c; end: 10649b693; -[SCContextOperaLayerPresenterChrome pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8 FUN_10649b68c(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 10649b694; end: 10649b69b; -[SCContextOperaLayerPresenterChrome headerContainer] */

undefined8 FUN_10649b694(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10649b69c; end: 10649b6a3; -[SCContextOperaLayerPresenterChrome verticalActionsContainer] */

undefined8 FUN_10649b69c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10649b6a4; end: 10649b80b; -[SCContextOperaLayerPresenterChrome .cxx_destruct] */

void FUN_10649b6a4(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10649b80c; end: 10649b943; -[SCContextOperaLayerPresenterPlanDynamicSticker initWithInteropProvider:eventAnnouncer:viewerUserId:viewerIsCreator:planDynamicStickerScopeExposer:planDynamicStickerScopeServices:] */

undefined1 *
FUN_10649b80c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f15d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x58) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10649b944; end: 10649bcc7; -[SCContextOperaLayerPresenterPlanDynamicSticker setupWithPresenter:viewController:] */

void FUN_10649b944(long param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **unaff_x23;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c269a60();
  *(char *)(param_1 + 0x5a) = (char)iVar3;
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c269a40();
  }
  *(undefined1 *)(param_1 + 0x5b) = uVar2;
  *(bool *)(param_1 + 0x59) = param_3 != 0;
  if ((param_3 != 0) && (*(long *)(param_1 + 0x18) == 0)) {
    _objc_storeWeak(param_1 + 0x38,param_3);
    _objc_storeWeak(param_1 + 0x30,param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar4);
    *(undefined1 *)(param_1 + 0x78) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar4);
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x40));
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar5 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = puVar5;
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126cae60;
      _objc_alloc();
      func_0x00010c0340c0();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar5;
      _objc_release(uVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c29bf00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227960(0xbff0000000000000);
      _objc_release(uVar4);
      _objc_release(uVar6);
      func_0x00010c19dfc0(*(undefined8 *)(param_1 + 0x20));
      uVar4 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9680();
      _objc_release(uVar4);
    }
    uVar4 = param_4;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    _objc_release(uVar9);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    bVar1 = *(byte *)(param_1 + 0x5a);
    puVar5 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((bVar1 & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef99a0(uVar4);
    }
    else {
      puVar8 = PTR_PTR_1126b2338;
      puStack_68 = puVar5;
      func_0x00010c0c6900();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef99a0(uVar4);
      _objc_release(puVar7);
    }
    _objc_release(puVar8);
    _objc_release(puVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010beedfa0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10649bcc8;
    puStack_88 = &UNK_110924c00;
    param_2 = auStack_78;
    _objc_copyWeak(auStack_80);
    uVar4 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    unaff_x23 = &puStack_a0;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x20));
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_3 + 0x70);
    *(undefined1 **)(param_3 + 0x70) = param_2;
    _objc_release(uVar4);
    func_0x00010be0d2a0(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10649bcc8; end: 10649bd27;  */

void FUN_10649bcc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = param_2;
    _objc_release(uVar1);
    func_0x00010be0d2a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10649bd28; end: 10649bf57; -[SCContextOperaLayerPresenterPlanDynamicSticker _exposeScopeIfNecessary] */

void FUN_10649bd28(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar7 = &puStack_80;
  if (*(char *)(param_1 + 0x59) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c071800();
    if (((iVar1 != 0) && (*(long *)(param_1 + 0x18) == 0)) && (*(char *)(param_1 + 0x78) == '\x01'))
    {
      lVar10 = *(long *)(param_1 + 0x70);
      _objc_retain(lVar10);
      if (lVar10 != 0) {
        lVar2 = lVar10;
        func_0x00010bf4e4e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x0001084365e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = lVar3;
        func_0x00010c269920();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010bf8d2c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfaea20();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        if (lVar6 != 0) {
          lVar2 = lVar6;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar2;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          lVar2 = lVar4;
          func_0x00010c08fa60();
          if (lVar2 != 0) {
            _objc_initWeak(auStack_58,param_1);
            puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_78 = 0xc2000000;
            pcStack_70 = FUN_10649bf9c;
            puStack_68 = &UNK_1108434b0;
            _objc_copyWeak(auStack_60,auStack_58);
            _objc_retainBlock(&puStack_80);
            uVar8 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010bf24440();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(param_1 + 0x18) = uVar8;
            _objc_release(uVar9);
            func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
            _objc_release(ppuVar7);
            _objc_destroyWeak(auStack_60);
            _objc_destroyWeak(auStack_58);
          }
          _objc_release(lVar4);
        }
        _objc_release(lVar6);
        _objc_release(lVar3);
      }
      _objc_release(lVar10);
    }
  }
  return;
}



/* Entry: 10649bf58; end: 10649bf9b;  */

bool FUN_10649bf58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010beedca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf31ca0();
  _objc_release(param_2);
  return (int)uVar1 == 0x4d;
}



/* Entry: 10649bf9c; end: 10649c047;  */

void FUN_10649bf9c(long param_1)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10649c048;
    puStack_40 = &UNK_1108434b0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10649c048; end: 10649c127;  */

void FUN_10649c048(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010beeed40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        puVar3 = PTR_PTR_1126b6038;
        _objc_alloc(PTR_PTR_1126b6038);
        lVar4 = lVar2;
        func_0x00010bf4eae0(lVar2);
        lVar5 = lVar2;
        func_0x00010bf4eb00(lVar2);
        func_0x00010bff0a60(puVar3,param_2,5,5,lVar4,lVar5,3);
        func_0x00010c10b9a0(lVar1,param_2,puVar3,0,lVar2,0,0,0);
        _objc_release(puVar3);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10649c128; end: 10649c12f; -[SCContextOperaLayerPresenterPlanDynamicSticker hide] */

void FUN_10649c128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 10649c130; end: 10649c137; -[SCContextOperaLayerPresenterPlanDynamicSticker show:] */

void FUN_10649c130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_show_11266b038);
  return;
}



/* Entry: 10649c138; end: 10649c13f; -[SCContextOperaLayerPresenterPlanDynamicSticker prepareToDisappear] */

void FUN_10649c138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_willDisappear_1126871c8);
  return;
}



/* Entry: 10649c140; end: 10649c147; -[SCContextOperaLayerPresenterPlanDynamicSticker didDisappear] */

void FUN_10649c140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didDisappear_1125bac28);
  return;
}



/* Entry: 10649c148; end: 10649c14b; -[SCContextOperaLayerPresenterPlanDynamicSticker hideUntilDidAppearIfNeccessary] */

void FUN_10649c148(void)

{
  return;
}



/* Entry: 10649c14c; end: 10649c153; -[SCContextOperaLayerPresenterPlanDynamicSticker prepareToAppear] */

void FUN_10649c14c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_willAppear_112687030)
  ;
  return;
}



/* Entry: 10649c154; end: 10649c15b; -[SCContextOperaLayerPresenterPlanDynamicSticker didAppear] */

void FUN_10649c154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_didAppear_1125ba2c0);
  return;
}



/* Entry: 10649c15c; end: 10649c1e3; -[SCContextOperaLayerPresenterPlanDynamicSticker teardown] */

void FUN_10649c15c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x40),param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + 0x60));
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10649c1e4; end: 10649c1eb; -[SCContextOperaLayerPresenterPlanDynamicSticker shouldRespondToSubscreenAppearance] */

undefined8 FUN_10649c1e4(void)

{
  return 0;
}



/* Entry: 10649c1ec; end: 10649c1ef; -[SCContextOperaLayerPresenterPlanDynamicSticker subscreenWillAppearWithUnhideContainers:] */

void FUN_10649c1ec(void)

{
  return;
}



/* Entry: 10649c1f0; end: 10649c1f3; -[SCContextOperaLayerPresenterPlanDynamicSticker subscreenWillDisappear] */

void FUN_10649c1f0(void)

{
  return;
}



/* Entry: 10649c1f4; end: 10649c1fb; -[SCContextOperaLayerPresenterPlanDynamicSticker pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8 FUN_10649c1f4(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 10649c1fc; end: 10649c3e7; -[SCContextOperaLayerPresenterPlanDynamicSticker operaViewDidSendEvent:page:params:] */

void FUN_10649c1fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x59) == '\x01') {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x48);
    uVar1 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    _objc_release(uVar1);
    if (iVar4 != 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar1 == 0) {
        puVar3 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(puVar2);
        if ((int)uVar1 == 0) goto LAB_10649c3b4;
      }
      else {
        _objc_release(puVar2);
      }
      if (*(char *)(param_1 + 0x5b) == '\x01') {
        uVar1 = param_4;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_58,param_1);
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_10649c3e8;
        puStack_78 = &UNK_110848218;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(uVar1);
        uStack_70 = uVar1;
        _objc_retain(param_5);
        uStack_68 = param_5;
        func_0x000100162d98("APPSTORE",&puStack_90);
        _objc_release(uStack_68);
        _objc_release(uStack_70);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        _objc_release(uVar1);
      }
      else {
        func_0x00010bdca720(param_1);
      }
    }
  }
LAB_10649c3b4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10649c3e8; end: 10649c43f;  */

void FUN_10649c3e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x59) == '\x01')) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c071ae0(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    if ((int)uVar2 != 0) {
      func_0x00010bdca720(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10649c440; end: 10649c47b; -[SCContextOperaLayerPresenterPlanDynamicSticker _anchorAndExposeForDisplayEventWithParams:] */

void FUN_10649c440(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be86900();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x78) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be0d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exposeScopeIfNecessary_112560e48);
    return;
  }
  return;
}



/* Entry: 10649c47c; end: 10649c84b; -[SCContextOperaLayerPresenterPlanDynamicSticker _reanchorLayoutGuideToImageViewWithParams:] */

long FUN_10649c47c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((PTR_DAT_1126a53c8 == (undefined *)0x0) ||
       (uVar3 = uVar2, func_0x00010010fab4(), (uVar3 & 1) == 0)) {
      _objc_release(uVar2);
    }
    else if (uVar2 != 0) {
      puVar4 = PTR_PTR_1126b2348;
      func_0x00010bfe90c0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
      uVar5 = uVar19;
      _objc_opt_isKindOfClass(uVar19,puVar4);
      uVar3 = uVar19;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar19);
      if (uVar3 == 0) {
        if (*(char *)(param_1 + 0x5a) == '\x01') {
          uVar19 = uVar1;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          if (uVar19 != 0) goto LAB_10649c618;
        }
        else {
          uVar19 = 0;
        }
LAB_10649c830:
        lVar18 = 0;
      }
      else {
        uVar3 = uVar2;
        func_0x00010c29bf00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar19;
        func_0x00010c070780();
        _objc_release(uVar3);
        if ((uVar5 & 1) == 0) goto LAB_10649c830;
LAB_10649c618:
        lVar18 = *(long *)(param_1 + 0x60);
        func_0x00010bf529e0();
        if (lVar18 != 0) {
          func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          uVar6 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x60) = 0;
          _objc_release(uVar6);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar19;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar19;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar19;
        func_0x00010bf1ff80(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar10;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar19;
        func_0x00010c2793a0(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar13;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + 0x60);
        *(undefined **)(param_1 + 0x60) = puVar4;
        _objc_release(uVar17);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar5);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(uVar3);
        _objc_release(uVar7);
        func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        if (*(char *)(param_1 + 0x5a) == '\x01') {
          uVar6 = *(undefined8 *)(param_1 + 0x68);
          func_0x00010c0f0780(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08cdc0();
          _objc_release(uVar6);
        }
        lVar18 = 1;
      }
      _objc_release(uVar19);
      _objc_release(uVar2);
      goto LAB_10649c5a8;
    }
  }
  lVar18 = 0;
LAB_10649c5a8:
  _objc_release(uVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x80,0);
    _objc_storeStrong(param_3 + 0x70,0);
    _objc_storeStrong(param_3 + 0x68,0);
    _objc_storeStrong(param_3 + 0x60,0);
    _objc_storeStrong(param_3 + 0x50,0);
    _objc_storeStrong(param_3 + 0x48,0);
    _objc_storeStrong(param_3 + 0x40,0);
    _objc_destroyWeak(param_3 + 0x38);
    _objc_destroyWeak(param_3 + 0x30);
    _objc_storeStrong(param_3 + 0x28,0);
    _objc_storeStrong(param_3 + 0x20,0);
    _objc_storeStrong(param_3 + 0x18,0);
    _objc_storeStrong(param_3 + 0x10,0);
    lVar16 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar16,0);
    return lVar16;
  }
  return lVar18;
}



/* Entry: 10649c84c; end: 10649c903; -[SCContextOperaLayerPresenterPlanDynamicSticker .cxx_destruct] */

void FUN_10649c84c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10649c904; end: 10649c9ff; -[SCContextOperaLayerPresenterPollsDynamicSticker initWithInteropProvider:eventAnnouncer:pollsDynamicStickerScopeExposer:pollsDynamicStickerScopeServices:] */

undefined1 *
FUN_10649c904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f15e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10649ca00; end: 10649cd57; -[SCContextOperaLayerPresenterPollsDynamicSticker setupWithPresenter:viewController:] */

void FUN_10649ca00(long param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined **ppuVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined **unaff_x22;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c269a60();
  *(char *)(param_1 + 0x51) = (char)iVar3;
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c269a40();
  }
  *(undefined1 *)(param_1 + 0x52) = uVar2;
  *(bool *)(param_1 + 0x50) = param_3 != 0;
  if ((param_3 != 0) && (*(long *)(param_1 + 0x18) == 0)) {
    _objc_storeWeak(param_1 + 0x38,param_3);
    _objc_storeWeak(param_1 + 0x30,param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar4);
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x40));
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar5 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      *(undefined **)(param_1 + 0x60) = puVar5;
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126cae60;
      _objc_alloc();
      func_0x00010c0340c0();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar5;
      _objc_release(uVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c29bf00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227960(0xbff0000000000000);
      _objc_release(uVar4);
      _objc_release(uVar6);
      func_0x00010c19dfc0(*(undefined8 *)(param_1 + 0x20));
      uVar4 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9680();
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    bVar1 = *(byte *)(param_1 + 0x51);
    puVar5 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((bVar1 & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar5;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef99a0(uVar4);
    }
    else {
      puVar8 = PTR_PTR_1126b2338;
      puStack_68 = puVar5;
      func_0x00010c0c6900();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef99a0(uVar4);
      _objc_release(puVar7);
    }
    _objc_release(puVar8);
    _objc_release(puVar5);
    uVar4 = param_4;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    _objc_release(uVar17);
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010beedfa0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10649cd58;
    puStack_88 = &UNK_110924c00;
    param_2 = auStack_78;
    _objc_copyWeak(auStack_80);
    func_0x00010c25ff60(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    unaff_x22 = &puStack_a0;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x22 + 0x20));
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    puVar9 = param_2;
    func_0x00010bf4e4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x0001084365e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar10;
    func_0x00010c269920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar9);
    if (puVar13 != (undefined1 *)0x0) {
      puVar9 = puVar10;
      func_0x00010c1032e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c1032c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar9);
      if (puVar12 != (undefined1 *)0x0) {
        uVar4 = *(undefined8 *)(param_3 + 0x28);
        func_0x00010beeed40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b6038;
        _objc_alloc();
        func_0x00010bf4eae0(uVar4);
        func_0x00010bf4eb00(uVar4);
        func_0x00010bff0a60();
        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_128 = 0xc2000000;
        pcStack_120 = FUN_10649d06c;
        puStack_118 = &UNK_110841f80;
        _objc_retain(param_2);
        ppuVar14 = &puStack_130;
        puStack_110 = param_2;
        puStack_108 = puVar5;
        _objc_retainBlock(ppuVar14);
        puVar9 = param_2;
        func_0x00010bf4e4e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar9;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar11;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar9;
        func_0x00010c08fa60();
        puVar16 = puVar11;
        if (puVar15 == (undefined1 *)0x0) {
          func_0x00010c294420(puVar11);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(puVar11);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar9);
        uVar6 = *(undefined8 *)(param_3 + 0x10);
        func_0x00010bf24460();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_3 + 0x18);
        *(undefined8 *)(param_3 + 0x18) = uVar6;
        _objc_release(uVar17);
        func_0x00010bf9d620(*(undefined8 *)(param_3 + 8));
        func_0x00010bfe1560(*(undefined8 *)(param_3 + 0x20));
        _objc_release(puVar16);
        _objc_release(puVar11);
        _objc_release(ppuVar14);
        _objc_release(puStack_110);
        _objc_release(puVar5);
        _objc_release(uVar4);
      }
      _objc_release(puVar12);
    }
    _objc_release(puVar13);
    _objc_release(puVar10);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10649cd58; end: 10649d04b;  */

void FUN_10649cd58(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf4e4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001084365e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c269920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      lVar1 = lVar2;
      func_0x00010c1032e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1032c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar1);
      if (lVar4 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010beeed40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126b6038;
        _objc_alloc();
        func_0x00010bf4eae0(uVar6);
        func_0x00010bf4eb00(uVar6);
        func_0x00010bff0a60();
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_10649d06c;
        puStack_78 = &UNK_110841f80;
        _objc_retain(param_2);
        ppuVar8 = &puStack_90;
        lStack_70 = param_2;
        puStack_68 = puVar7;
        _objc_retainBlock(ppuVar8);
        lVar1 = param_2;
        func_0x00010bf4e4e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        lVar1 = lVar3;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar1;
        func_0x00010c08fa60();
        lVar10 = lVar3;
        if (lVar9 == 0) {
          func_0x00010c294420(lVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(lVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar1);
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010bf24460();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = uVar11;
        _objc_release(uVar12);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
        func_0x00010bfe1560(*(undefined8 *)(param_1 + 0x20));
        _objc_release(lVar10);
        _objc_release(lVar3);
        _objc_release(ppuVar8);
        _objc_release(lStack_70);
        _objc_release(puVar7);
        _objc_release(uVar6);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10649d04c; end: 10649d06b;  */

bool FUN_10649d04c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c27dd80(param_2);
  return (int)param_2 == 4;
}



/* Entry: 10649d06c; end: 10649d0df;  */

void FUN_10649d06c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010c2a1140(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0480(uVar1,param_2,puVar2,0,0,*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10649d0e0; end: 10649d0e7; -[SCContextOperaLayerPresenterPollsDynamicSticker hide] */

void FUN_10649d0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 10649d0e8; end: 10649d0ef; -[SCContextOperaLayerPresenterPollsDynamicSticker show:] */

void FUN_10649d0e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_show_11266b038);
  return;
}



/* Entry: 10649d0f0; end: 10649d0f7; -[SCContextOperaLayerPresenterPollsDynamicSticker prepareToDisappear] */

void FUN_10649d0f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_willDisappear_1126871c8);
  return;
}



/* Entry: 10649d0f8; end: 10649d0ff; -[SCContextOperaLayerPresenterPollsDynamicSticker didDisappear] */

void FUN_10649d0f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didDisappear_1125bac28);
  return;
}



/* Entry: 10649d100; end: 10649d103; -[SCContextOperaLayerPresenterPollsDynamicSticker hideUntilDidAppearIfNeccessary] */

void FUN_10649d100(void)

{
  return;
}



/* Entry: 10649d104; end: 10649d10b; -[SCContextOperaLayerPresenterPollsDynamicSticker prepareToAppear] */

void FUN_10649d104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_willAppear_112687030)
  ;
  return;
}



/* Entry: 10649d10c; end: 10649d113; -[SCContextOperaLayerPresenterPollsDynamicSticker didAppear] */

void FUN_10649d10c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_didAppear_1125ba2c0);
  return;
}



/* Entry: 10649d114; end: 10649d153; -[SCContextOperaLayerPresenterPollsDynamicSticker teardown] */

void FUN_10649d114(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10649d154; end: 10649d15b; -[SCContextOperaLayerPresenterPollsDynamicSticker shouldRespondToSubscreenAppearance] */

undefined8 FUN_10649d154(void)

{
  return 0;
}



/* Entry: 10649d15c; end: 10649d15f; -[SCContextOperaLayerPresenterPollsDynamicSticker subscreenWillAppearWithUnhideContainers:] */

void FUN_10649d15c(void)

{
  return;
}



/* Entry: 10649d160; end: 10649d163; -[SCContextOperaLayerPresenterPollsDynamicSticker subscreenWillDisappear] */

void FUN_10649d160(void)

{
  return;
}



/* Entry: 10649d164; end: 10649d16b; -[SCContextOperaLayerPresenterPollsDynamicSticker pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8 FUN_10649d164(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 10649d16c; end: 10649d357; -[SCContextOperaLayerPresenterPollsDynamicSticker operaViewDidSendEvent:page:params:] */

void FUN_10649d16c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x48);
    uVar1 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if (iVar4 != 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar1 == 0) {
        puVar3 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(puVar2);
        if ((int)uVar1 == 0) goto LAB_10649d324;
      }
      else {
        _objc_release(puVar2);
      }
      if (*(char *)(param_1 + 0x52) == '\x01') {
        uVar1 = param_4;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_58,param_1);
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_10649d358;
        puStack_78 = &UNK_110848218;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(uVar1);
        uStack_70 = uVar1;
        _objc_retain(param_5);
        uStack_68 = param_5;
        func_0x000100162d98("APPSTORE",&puStack_90);
        _objc_release(uStack_68);
        _objc_release(uStack_70);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        _objc_release(uVar1);
      }
      else {
        func_0x00010be73f20(param_1);
      }
    }
  }
LAB_10649d324:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10649d358; end: 10649d3af;  */

void FUN_10649d358(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x50) == '\x01')) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    if ((int)uVar2 != 0) {
      func_0x00010be73f20(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10649d3b0; end: 10649d7a7; -[SCContextOperaLayerPresenterPollsDynamicSticker _pinOverlayForDisplayEventWithParams:] */

void FUN_10649d3b0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c12b8c0(param_1);
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d9e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cae08;
  _objc_opt_class(PTR_PTR_1126cae08);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) goto LAB_10649d75c;
  uVar5 = uVar2;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010010fab4();
  uVar4 = uVar5;
  if ((int)uVar6 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  if (uVar4 != 0) {
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010bfe90c0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar7 = uVar18;
    _objc_opt_isKindOfClass(uVar18,puVar3);
    uVar6 = uVar18;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar18);
    if (uVar6 == 0) {
      if (*(char *)(param_1 + 0x51) == '\x01') {
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar2;
        goto joined_r0x00010649d554;
      }
      uVar18 = 0;
    }
    else {
      func_0x00010c29bf00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar18;
      func_0x00010c070780();
      _objc_release(uVar5);
      uVar2 = uVar2 & 1;
joined_r0x00010649d554:
      if (uVar2 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar18;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar8;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar18;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar18;
        func_0x00010bf1ff80(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar18;
        func_0x00010c2793a0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + 0x58);
        *(undefined **)(param_1 + 0x58) = puVar3;
        _objc_release(uVar17);
        _objc_release(uVar14);
        _objc_release(uVar7);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar6);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar5);
        _objc_release(uVar9);
        _objc_release(uVar15);
        _objc_release(uVar2);
        _objc_release(uVar8);
        func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        if (*(char *)(param_1 + 0x51) == '\x01') {
          uVar15 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010c0f0780(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08cdc0();
          _objc_release(uVar15);
        }
        func_0x00010c235840(*(undefined8 *)(param_1 + 0x20));
      }
    }
    _objc_release(uVar18);
  }
  _objc_release(uVar4);
LAB_10649d75c:
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)(param_3 + 0x58);
  func_0x00010bf529e0();
  if (lVar16 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  uVar15 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_3 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 10649d7a8; end: 10649d7e7; -[SCContextOperaLayerPresenterPollsDynamicSticker removeConstraints] */

void FUN_10649d7a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + 0x58));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10649d7e8; end: 10649d87b; -[SCContextOperaLayerPresenterPollsDynamicSticker .cxx_destruct] */

void FUN_10649d7e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10649d87c; end: 10649db43; -[SCContextOperaLayerPresenterSpotlight initWithV3InteropProvider:eventAnnouncer:actionBarContentStyle:scopeExposer:contextSpotlightScopeServices:lifecycleEvent:experimentsProvider:operaViewProperties:hasUnifiedActionBar:operaPropertyUpdateModerator:scopeExposurePerformer:appStartExperimentReader:storiesConfigProvider:viewLocation:] */

undefined8 *
FUN_10649d87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f15e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    puVar1[7] = param_5;
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 10) = param_11;
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    puVar1[0x12] = param_17;
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10649db44; end: 10649ec0f; -[SCContextOperaLayerPresenterSpotlight setupWithPresenter:viewController:] */

undefined8
FUN_10649db44(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined *param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (*(long *)(param_4 + 0x20) == 0) {
    if (*(long *)(param_4 + 0x28) == 0) {
      lVar26 = *(long *)(param_4 + 0x38);
      if (lVar26 == 4) {
        puVar3 = param_7;
        func_0x00010c149080();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar29 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
        _objc_alloc_init();
        puVar3 = puVar4;
        func_0x00010c0f0780(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9680();
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar5 = puVar29;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c0f0780();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar29;
        puStack_100 = puVar8;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar4;
        func_0x00010c0f0780();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar9;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar29;
        puStack_f8 = puVar12;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar4;
        func_0x00010c0f0780(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar13;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar29;
        puStack_f0 = puVar16;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar4;
        func_0x00010bf1ff80(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar17;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_e8 = puVar19;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar3);
        _objc_release(puVar20);
        _objc_release(puVar19);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      else if (lVar26 == 1) {
        puVar3 = param_7;
        func_0x00010bfbbac0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        lVar26 = *(long *)(param_4 + 0x90);
        puVar3 = puVar4;
        func_0x00010c0f0780(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        if ((lVar26 == 0x68) || (lVar26 == 0x51)) {
          func_0x000100594f4c();
          func_0x00010c148fc0(puVar3);
          param_1 = param_1 + param_3;
        }
        else {
          param_1 = 89.0;
        }
        _objc_release(puVar3);
        _objc_release(puVar3);
        puVar29 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
        _objc_alloc_init();
        puVar3 = puVar4;
        func_0x00010c0f0780(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9680();
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar5 = puVar29;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c0f0780();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar29;
        puStack_e0 = puVar8;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar4;
        func_0x00010c0f0780();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar9;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar29;
        puStack_d8 = puVar12;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar4;
        func_0x00010c0f0780(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar13;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar29;
        puStack_d0 = puVar16;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar4;
        func_0x00010bf1ff80(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar17;
        func_0x00010bf493c0(-param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_c8 = puVar19;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar3);
        _objc_release(puVar20);
        _objc_release(puVar19);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      else if (lVar26 == 0) {
        if (*(char *)(param_4 + 0x50) == '\x01') {
          uVar1 = *(ulong *)(param_4 + 0x88);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126b12d0;
          func_0x00010bf8bb20(PTR_PTR_1126b12d0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bf1f320();
          _objc_release(puVar3);
          _objc_release(uVar1);
          if ((uVar2 & 1) == 0) {
            puVar3 = param_7;
            func_0x00010bfbbac0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            uVar1 = *(ulong *)(param_4 + 0x88);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126b12d0;
            func_0x00010bf676c0(PTR_PTR_1126b12d0);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010bf1f320();
            _objc_release(puVar3);
            _objc_release(uVar1);
            if ((uVar2 & 1) == 0) {
              func_0x000100594f4c();
            }
            else {
              param_1 = 70.0;
            }
            func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
            puVar29 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
            _objc_alloc_init();
            puVar3 = puVar4;
            func_0x00010c0f0780(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef9680();
            _objc_release(puVar3);
            puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar5 = puVar29;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar4;
            func_0x00010c0f0780();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar5;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar29;
            puStack_a0 = puVar8;
            func_0x00010c08de00();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar4;
            func_0x00010c0f0780();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010c08de00();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar9;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar29;
            puStack_98 = puVar12;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar4;
            func_0x00010c0f0780(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar13;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar29;
            puStack_90 = puVar16;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar4;
            func_0x00010bf1ff80(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar17;
            func_0x00010bf493c0(-(param_1 + param_3));
            _objc_retainAutoreleasedReturnValue();
            puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_88 = puVar19;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar3);
            _objc_release(puVar20);
            _objc_release(puVar19);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
          else {
            puVar3 = param_7;
            func_0x00010bf5d300();
            _objc_retainAutoreleasedReturnValue();
            puVar29 = puVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
          }
        }
        else {
          lVar26 = *(long *)(param_4 + 0x90);
          puVar3 = param_7;
          func_0x00010bfbbac0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar29 = puVar4;
          if (lVar26 == 0x17) {
            puVar3 = param_7;
            func_0x00010c149080();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            puVar29 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
            _objc_alloc_init();
            puVar3 = puVar4;
            func_0x00010c0f0780(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef9680();
            _objc_release(puVar3);
            puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar6 = puVar29;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar4;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar29;
            puStack_c0 = puVar8;
            func_0x00010c08de00();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar4;
            func_0x00010c08de00();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar9;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar29;
            puStack_b8 = puVar11;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar4;
            func_0x00010c2793a0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar12;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar29;
            puStack_b0 = puVar14;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar5;
            func_0x00010bf1ff80(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar15;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_a8 = puVar17;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar3);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
        }
      }
      else {
        puVar29 = (undefined *)0x0;
      }
      puVar3 = PTR_PTR_1126cae60;
      _objc_alloc();
      func_0x00010c0340c0();
      uVar27 = *(undefined8 *)(param_4 + 0x28);
      *(undefined **)(param_4 + 0x28) = puVar3;
      _objc_release(uVar27);
      _objc_release(puVar29);
    }
    uVar21 = *(undefined8 *)(param_4 + 8);
    func_0x00010beeed40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar21;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_108,uVar27);
    _objc_release(uVar27);
    _objc_release(uVar21);
    _objc_initWeak(auStack_110,*(undefined8 *)(param_4 + 0x30));
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = auStack_108;
    _objc_loadWeakRetained();
    puVar23 = puVar22;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar25 = puVar24;
    _objc_opt_isKindOfClass(puVar24,puVar4);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    if (((ulong)puVar25 & 1) != 0) {
      puVar22 = auStack_108;
      _objc_loadWeakRetained();
      puVar23 = puVar22;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar23;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar24;
      func_0x00010bf1f3c0();
      *(char *)(param_4 + 0x70) = (char)puVar25;
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
    }
    puVar25 = auStack_108;
    _objc_loadWeakRetained();
    puVar23 = puVar25;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
    _objc_release(puVar25);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar25 = puVar24;
    _objc_opt_isKindOfClass(puVar24,puVar4);
    puVar23 = puVar24;
    if (((ulong)puVar25 & 1) == 0) {
      puVar23 = (undefined1 *)0x0;
    }
    _objc_retain();
    _objc_release(puVar24);
    puVar24 = puVar23;
    func_0x00010bf1f3c0();
    if ((int)puVar24 != 0) {
      *(undefined1 *)(param_4 + 0x71) = 1;
    }
    _objc_initWeak(auStack_118);
    uVar30 = *(undefined8 *)(param_4 + 0x18);
    uVar21 = *(undefined8 *)(param_4 + 8);
    func_0x00010beedfa0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_10649ec18;
    puStack_128 = &UNK_110924cd0;
    _objc_copyWeak(auStack_120,auStack_108);
    uVar27 = uVar21;
    func_0x00010c0b8600(uVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = auStack_118;
    _objc_loadWeakRetained(puVar24);
    puVar25 = auStack_110;
    _objc_loadWeakRetained();
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_10649ecf8;
    puStack_158 = &UNK_110854350;
    _objc_copyWeak(auStack_150,auStack_110);
    _objc_copyWeak(auStack_148,auStack_108);
    lVar26 = param_4 + 0x68;
    _objc_loadWeakRetained();
    func_0x00010bf243a0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_4 + 0x20) = uVar30;
    _objc_release(uVar28);
    _objc_release(lVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(uVar27);
    _objc_release(uVar21);
    if (*(long *)(param_4 + 0x78) == 0) {
      func_0x00010bec1780(param_4);
    }
    else {
      _objc_initWeak(auStack_178);
      uVar27 = *(undefined8 *)(param_4 + 0x78);
      _objc_copyWeak(auStack_180,auStack_178);
      func_0x00010c0f7fc0(uVar27);
      _objc_destroyWeak(auStack_180);
      _objc_destroyWeak(auStack_178);
    }
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_118);
    _objc_release(puVar23);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_6;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume(param_6);
  return 0;
}



/* Entry: 10649ec10; end: 10649ec17;  */

undefined8 FUN_10649ec10(void)

{
  return 0;
}



/* Entry: 10649ec18; end: 10649ecf7;  */

void FUN_10649ec18(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c93c0;
  _objc_alloc(PTR_PTR_1126c93c0);
  lVar2 = param_2;
  func_0x00010bf4e4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = param_2;
  func_0x00010c0b3760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0454c0(puVar1);
  _objc_release(lVar5);
  if (lVar3 == 0) {
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10649ecf8; end: 10649ed6f;  */

void FUN_10649ecf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b6160;
  func_0x00010c277180(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb7a0(lVar1,param_2,puVar2,param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10649ed70; end: 10649ed9b;  */

void FUN_10649ed70(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10649ed9c; end: 10649edab; -[SCContextOperaLayerPresenterSpotlight _startScope] */

void FUN_10649ed9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10649edac; end: 10649edb3; -[SCContextOperaLayerPresenterSpotlight hide] */

void FUN_10649edac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 10649edb4; end: 10649edbb; -[SCContextOperaLayerPresenterSpotlight show:] */

void FUN_10649edb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_show_11266b038);
  return;
}



/* Entry: 10649edbc; end: 10649edc3; -[SCContextOperaLayerPresenterSpotlight prepareToDisappear] */

void FUN_10649edbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_willDisappear_1126871c8);
  return;
}



/* Entry: 10649edc4; end: 10649edcb; -[SCContextOperaLayerPresenterSpotlight didDisappear] */

void FUN_10649edc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_didDisappear_1125bac28);
  return;
}



/* Entry: 10649edcc; end: 10649edcf; -[SCContextOperaLayerPresenterSpotlight hideUntilDidAppearIfNeccessary] */

void FUN_10649edcc(void)

{
  return;
}



/* Entry: 10649edd0; end: 10649edd7; -[SCContextOperaLayerPresenterSpotlight prepareToAppear] */

void FUN_10649edd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_willAppear_112687030)
  ;
  return;
}



/* Entry: 10649edd8; end: 10649eddf; -[SCContextOperaLayerPresenterSpotlight didAppear] */

void FUN_10649edd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_didAppear_1125ba2c0);
  return;
}



/* Entry: 10649ede0; end: 10649ee1f; -[SCContextOperaLayerPresenterSpotlight teardown] */

void FUN_10649ede0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10649ee20; end: 10649ee27; -[SCContextOperaLayerPresenterSpotlight isSwipeUpAllowed] */

undefined1 FUN_10649ee20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 10649ee28; end: 10649ee9b; -[SCContextOperaLayerPresenterSpotlight pageDidChangeResizingState:] */

void FUN_10649ee28(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_pageDidChangeResizingState__112619df0);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0f0f60(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10649ee9c; end: 10649eea3; -[SCContextOperaLayerPresenterSpotlight shouldRespondToSubscreenAppearance] */

undefined8 FUN_10649ee9c(void)

{
  return 0;
}



/* Entry: 10649eea4; end: 10649eea7; -[SCContextOperaLayerPresenterSpotlight subscreenWillAppearWithUnhideContainers:] */

void FUN_10649eea4(void)

{
  return;
}



/* Entry: 10649eea8; end: 10649eeab; -[SCContextOperaLayerPresenterSpotlight subscreenWillDisappear] */

void FUN_10649eea8(void)

{
  return;
}



/* Entry: 10649eeac; end: 10649eeb3; -[SCContextOperaLayerPresenterSpotlight pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8 FUN_10649eeac(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 10649eeb4; end: 10649ef9f; -[SCContextOperaLayerPresenterSpotlight actionHandler:willStartAction:source:] */

void FUN_10649eeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010beeed20();
  if ((int)uVar1 != 0x29) {
    func_0x00010beeed20();
  }
  uVar1 = param_4;
  func_0x00010beeed20();
  if ((int)uVar1 == 0x29) {
    uVar1 = param_1;
    func_0x00010beb55e0();
    func_0x00010beb4be0(param_1);
    if ((int)uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe1d20();
      _objc_release(uVar1);
    }
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10fb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10649efa0; end: 10649f01b; -[SCContextOperaLayerPresenterSpotlight actionHandler:didEndAction:source:] */

void FUN_10649efa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  func_0x00010beeed20();
  if ((param_4 == 0x29) && (uVar1 = param_1, func_0x00010beb55e0(), (int)uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236c00();
    _objc_release(uVar1);
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10fac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10649f01c; end: 10649f073; -[SCContextOperaLayerPresenterSpotlight _shouldResizeOperaWhenCommentsOpen] */

void FUN_10649f01c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x000108f4b570(uVar1,*(undefined8 *)(param_1 + 0x90));
  if (((int)uVar1 != 0) &&
     (((*(byte *)(param_1 + 0x71) & 1) != 0 || (*(char *)(param_1 + 0x70) == '\x01')))) {
    func_0x000108f4b60c(*(undefined8 *)(param_1 + 0x48));
  }
  return;
}



/* Entry: 10649f074; end: 10649f11b; -[SCContextOperaLayerPresenterSpotlight _shouldPauseWhenCommentsOpen] */

ulong FUN_10649f074(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x000108f4b570(uVar2,*(undefined8 *)(param_1 + 0x90));
  uVar1 = (uint)uVar2;
  if (*(byte *)(param_1 + 0x70) == 1 && uVar1 == 0) {
    uVar5 = 1;
  }
  else if (((*(byte *)(param_1 + 0x71) & 1) == 0) && ((*(byte *)(param_1 + 0x70) & uVar1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0f60a0();
    _objc_release(uVar3);
    if (((uVar5 & 1) == 0) && (((uVar1 ^ 1) & 1) == 0)) {
      lVar4 = *(long *)(param_1 + 0x48);
      func_0x000108f4b60c(lVar4);
      uVar5 = (ulong)(lVar4 == 0);
    }
  }
  return uVar5;
}



/* Entry: 10649f11c; end: 10649f133; -[SCContextOperaLayerPresenterSpotlight delegate] */

void FUN_10649f11c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10649f134; end: 10649f13f; -[SCContextOperaLayerPresenterSpotlight setDelegate:] */

void FUN_10649f134(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 10649f140; end: 10649f203; -[SCContextOperaLayerPresenterSpotlight .cxx_destruct] */

void FUN_10649f140(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10649f204; end: 10649f3a3; -[SCContextOperaLayerPresenterTappableElements initWithInteropProvider:actionHandlerDelegate:actionHandler:eventAnnouncer:scopeExposer:lensPromptDataProvider:userId:nglStudySettings:] */

undefined1 *
FUN_10649f204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f15f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10649f3a4; end: 10649f757; -[SCContextOperaLayerPresenterTappableElements setupWithPresenter:viewController:] */

void FUN_10649f3a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **unaff_x22;
  undefined1 auStack_f8 [8];
  undefined1 *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar9 = &puStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c269a60();
  *(char *)(param_1 + 0x29) = (char)uVar3;
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2a) = 0;
    *(bool *)(param_1 + 0x28) = param_3 != 0;
LAB_10649f434:
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar12);
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x48));
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto LAB_10649f70c;
  }
  else {
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 8);
    func_0x00010c269a40();
    *(undefined1 *)(param_1 + 0x2a) = uVar2;
    *(bool *)(param_1 + 0x28) = param_3 != 0;
    if ((*(byte *)(param_1 + 0x29) & 1) == 0) goto LAB_10649f434;
    if (param_3 == 0) goto LAB_10649f70c;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    if (*(char *)(param_1 + 0x29) == '\x01') {
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      _objc_release(uVar12);
      func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x48));
    }
    if (*(long *)(param_1 + 0x50) == 0) {
      puVar4 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
      _objc_alloc_init();
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      *(undefined **)(param_1 + 0x60) = puVar4;
      _objc_release(uVar12);
      puVar4 = PTR_PTR_1126cae60;
      _objc_alloc();
      func_0x00010c0340c0();
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar4;
      _objc_release(uVar12);
      func_0x00010c1ad840(*(undefined8 *)(param_1 + 0x50));
      func_0x00010c19dfc0(*(undefined8 *)(param_1 + 0x50));
      uVar12 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9680();
      _objc_release(uVar12);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    bVar1 = *(byte *)(param_1 + 0x29);
    puVar4 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((bVar1 & 1) == 0) {
      puVar6 = PTR_PTR_1126c95c8;
      puStack_80 = puVar4;
      func_0x00010bf98f20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef99a0(uVar12);
    }
    else {
      puVar6 = PTR_PTR_1126b2338;
      puStack_70 = puVar4;
      func_0x00010c0c6900();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126c95c8;
      puStack_68 = puVar6;
      func_0x00010bf98f20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef99a0(uVar12);
      _objc_release(puVar5);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    uVar12 = param_4;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    _objc_release(uVar13);
    _objc_release(uVar12);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010beeed40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_88,uVar12);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_initWeak(auStack_90,param_1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10649f758;
    puStack_a8 = &UNK_110854350;
    _objc_copyWeak(auStack_a0,auStack_90);
    _objc_copyWeak(auStack_98,auStack_88);
    _objc_retainBlock();
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    *(undefined ***)(param_1 + 0x40) = ppuVar9;
    _objc_release(uVar12);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    unaff_x22 = &puStack_c0;
  }
LAB_10649f70c:
  _objc_release(param_4);
  lVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_c8 = FUN_10649f758;
    lVar11 = lVar10 + 0x20;
    puStack_f0 = (undefined1 *)unaff_x22;
    lStack_e8 = param_1;
    uStack_e0 = param_4;
    lStack_d8 = param_3;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_loadWeakRetained();
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(lVar11 + 8);
      func_0x00010beedfa0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_f8,lVar10 + 0x28);
      func_0x00010c25ff60(uVar12);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_destroyWeak(auStack_f8);
    }
    _objc_release(lVar11);
    return;
  }
  return;
}



/* Entry: 10649f758; end: 10649f827;  */

void FUN_10649f758(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010beedfa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    func_0x00010c25ff60(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10649f828; end: 10649fa9b;  */

void FUN_10649f828(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_2);
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x38) != 0) {
    func_0x00010bf6f440(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
    func_0x00010c12e1e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
    _objc_release(uVar1);
  }
  puVar2 = param_2;
  func_0x00010bf4e4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0001084365e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c08f7a0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x00010c269920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf8d2e0();
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x0) goto LAB_10649fa70;
    puVar2 = puVar3;
    func_0x00010c269920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cae90;
  }
  else {
    puVar2 = PTR_PTR_1126cae88;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08f780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193ec0(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126cae90;
  }
  PTR_PTR_1126cae90 = puVar4;
  if (puVar2 != (undefined *)0x0) {
    _objc_alloc();
    puVar5 = PTR_PTR_1126cae98;
    _objc_alloc(PTR_PTR_1126cae98);
    puVar6 = param_2;
    func_0x00010bf4e4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar7);
    puVar8 = param_2;
    func_0x00010c0b3760(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c050840(puVar5);
    lVar9 = *(long *)(param_1 + 0x20) + 0x10;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c00b140();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar4;
    _objc_release(uVar1);
    _objc_release(lVar9);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
    func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    func_0x00010bf72460(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
    func_0x00010be35760(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
LAB_10649fa70:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10649fa9c; end: 10649fa9f;  */

void FUN_10649fa9c(void)

{
  return;
}



/* Entry: 10649faa0; end: 10649facb; -[SCContextOperaLayerPresenterTappableElements hide] */

void FUN_10649faa0(long param_1)

{
  func_0x00010bfe1560(*(undefined8 *)(param_1 + 0x50));
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 10649facc; end: 10649faf3; -[SCContextOperaLayerPresenterTappableElements show:] */

void FUN_10649facc(long param_1)

{
  func_0x00010c235840(*(undefined8 *)(param_1 + 0x50));
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 10649faf4; end: 10649fafb; -[SCContextOperaLayerPresenterTappableElements prepareToDisappear] */

void FUN_10649faf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_willDisappear_1126871c8);
  return;
}



/* Entry: 10649fafc; end: 10649fb03; -[SCContextOperaLayerPresenterTappableElements didDisappear] */

void FUN_10649fafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_didDisappear_1125bac28);
  return;
}



/* Entry: 10649fb04; end: 10649fb07; -[SCContextOperaLayerPresenterTappableElements hideUntilDidAppearIfNeccessary] */

void FUN_10649fb04(void)

{
  return;
}


