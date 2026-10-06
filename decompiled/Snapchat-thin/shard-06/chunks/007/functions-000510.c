/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104dc5fb0; end: 104dc5fc3; -[SCShippingAddressCreateUpdateViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc5fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112713074,param_3);
  return;
}



/* Entry: 104dc5fc4; end: 104dc5fd3; -[SCShippingAddressCreateUpdateViewController theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dc5fc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712ff0);
}



/* Entry: 104dc5fd4; end: 104dc5fe3; -[SCShippingAddressCreateUpdateViewController setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc5fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112712ff0) = param_3;
  return;
}



/* Entry: 104dc5fe4; end: 104dc5ff3; -[SCShippingAddressCreateUpdateViewController commerceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dc5fe4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712ff4);
}



/* Entry: 104dc5ff4; end: 104dc620b; -[SCShippingAddressCreateUpdateViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc5ff4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712ff4,0);
  _objc_destroyWeak(param_1 + _DAT_112713074);
  _objc_storeStrong(param_1 + _DAT_112713070,0);
  _objc_storeStrong(param_1 + _DAT_11271306c,0);
  _objc_storeStrong(param_1 + _DAT_112712ffc,0);
  _objc_storeStrong(param_1 + _DAT_112712ff8,0);
  _objc_storeStrong(param_1 + _DAT_112713020,0);
  _objc_storeStrong(param_1 + _DAT_11271301c,0);
  _objc_destroyWeak(param_1 + _DAT_112713018);
  _objc_storeStrong(param_1 + _DAT_112713028,0);
  _objc_storeStrong(param_1 + _DAT_112713068,0);
  _objc_storeStrong(param_1 + _DAT_112713064,0);
  _objc_storeStrong(param_1 + _DAT_112713010,0);
  _objc_storeStrong(param_1 + _DAT_11271300c,0);
  _objc_storeStrong(param_1 + _DAT_112713054,0);
  _objc_storeStrong(param_1 + _DAT_112713008,0);
  _objc_storeStrong(param_1 + _DAT_112713004,0);
  _objc_storeStrong(param_1 + _DAT_112713014,0);
  _objc_storeStrong(param_1 + _DAT_112713050,0);
  _objc_storeStrong(param_1 + _DAT_112713058,0);
  _objc_storeStrong(param_1 + _DAT_11271305c,0);
  _objc_storeStrong(param_1 + _DAT_112713000,0);
  _objc_storeStrong(param_1 + _DAT_112713030,0);
  _objc_storeStrong(param_1 + _DAT_11271302c,0);
  _objc_storeStrong(param_1 + _DAT_11271304c,0);
  _objc_storeStrong(param_1 + _DAT_112713048,0);
  _objc_storeStrong(param_1 + _DAT_112713044,0);
  _objc_storeStrong(param_1 + _DAT_112713040,0);
  _objc_storeStrong(param_1 + _DAT_11271303c,0);
  _objc_storeStrong(param_1 + _DAT_112713038,0);
  _objc_storeStrong(param_1 + _DAT_112713034,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713024,0);
  return;
}



/* Entry: 104dc620c; end: 104dc6373; -[SCShippingAddressTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104dc620c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4318;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c161260(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112713078) = 0;
    func_0x00010c1972a0(puVar1);
    puVar2 = PTR_PTR_1126b06c8;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x000108e04dec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_11271307c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1c8c60(puVar1);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be39400(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 104dc6374; end: 104dc661b;  */

void FUN_104dc6374(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bbf20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x3fc99999a0000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bc080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x3fb1eb8520000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dc661c; end: 104dc699b; -[SCShippingAddressTableViewCell _initAddressLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc661c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
  lVar9 = (long)_DAT_112713080;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar9));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112713084);
  *(undefined **)(param_1 + _DAT_112713084) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112713088);
  *(undefined **)(param_1 + _DAT_112713088) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
  lVar7 = (long)_DAT_11271308c;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (puVar3 == (undefined *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      puVar11 = (undefined *)0x0;
      lVar10 = lVar8;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar1);
        }
        lVar8 = *(long *)((long)puVar11 * 8);
        puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(lVar8);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(lVar8);
        _objc_release(puVar4);
        func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9));
        _objc_retain(lVar10);
        func_0x00010c0bbfc0(lVar8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_retain(lVar8);
        _objc_release(lVar10);
        _objc_release(lVar10);
        puVar11 = puVar11 + 1;
        lVar10 = lVar8;
      } while (puVar3 != puVar11);
      puVar3 = puVar1;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar7));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar8 + 0x20);
    func_0x00010bf4dce0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(0x402e000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c098960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x20) + (long)_DAT_11271307c);
    func_0x00010c0bbfa0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(0xc02e000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c274140();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar8 + 0x20);
    func_0x00010bf4dce0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(0x4022000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf1fec0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar8 + 0x20);
    func_0x00010bf4dce0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(0xc022000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf348c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar5 = lVar2;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar8 + 0x20);
    func_0x00010bf4dce0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 104dc699c; end: 104dc6cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc699c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271307c);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4022000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc022000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dc6cd8; end: 104dc6e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc6cd8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112713080;
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
    func_0x00010c0bc020(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0bbea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dc6e0c; end: 104dc6f53; -[SCShippingAddressTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc6e0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e4318;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_11271307c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
  lVar1 = param_1;
  func_0x00010bf98f40();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bfe5980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bfe5980(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a97a0(*(undefined8 *)(param_1 + lVar2));
      _objc_release(lVar1);
      func_0x00010c103dc0(*(undefined8 *)(param_1 + lVar2));
    }
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
  }
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112713080));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104dc6f54; end: 104dc7017;  */

void FUN_104dc6f54(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  func_0x00010c21c560(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc03e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dc7018; end: 104dc710f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc7018(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  func_0x00010c21c560(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271307c);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dc7110; end: 104dc719b; -[SCShippingAddressTableViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc7110(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4318;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1972a0(param_1);
  *(undefined1 *)(param_1 + _DAT_112713078) = 0;
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112713084));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112713088));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11271308c));
  return;
}



/* Entry: 104dc719c; end: 104dc739f; -[SCShippingAddressTableViewCell setAddress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc719c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfbba80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112713084),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c25caa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112713088;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010c25cac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar2 != 0) {
    uVar1 = param_3;
    func_0x00010c25caa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c25cac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110db2798);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bf39960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c2befe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db27d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11271308c),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf76460();
  if ((int)uVar1 != 0) {
    func_0x00010c161260(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dc73a0; end: 104dc73f3; -[SCShippingAddressTableViewCell setItem:] */

void FUN_104dc73a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b06b8;
  _objc_opt_class(PTR_PTR_1126b06b8);
  uVar2 = param_3;
  func_0x00010c077980(param_3,param_2,puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c165c20(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dc73f4; end: 104dc744b; -[SCShippingAddressTableViewCell setMode:] */

void FUN_104dc73f4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4318;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setMode__11264fd40);
  lVar1 = param_1;
  func_0x00010c0cfd40();
  if (lVar1 == 0) {
    func_0x00010c161260(param_1);
  }
  return;
}



/* Entry: 104dc744c; end: 104dc7453; -[SCShippingAddressTableViewCell setSelectedLayout] */

void FUN_104dc744c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCellSelected__11263c330,1);
  return;
}



/* Entry: 104dc7454; end: 104dc745b; -[SCShippingAddressTableViewCell setDeselectedLayout] */

void FUN_104dc7454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCellSelected__11263c330,0);
  return;
}



/* Entry: 104dc745c; end: 104dc746b; -[SCShippingAddressTableViewCell isCellSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104dc745c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112713078);
}



/* Entry: 104dc746c; end: 104dc74c3; -[SCShippingAddressTableViewCell setCellSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc746c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  *(char *)(param_1 + _DAT_112713078) = (char)param_3;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271307c),param_2,param_3 ^ 1);
  lVar1 = param_1;
  func_0x00010bf98f40();
  if ((int)lVar1 != 0) {
    func_0x00010c161260(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 104dc74c4; end: 104dc7533; -[SCShippingAddressTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc74c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713080,0);
  _objc_storeStrong(param_1 + _DAT_11271308c,0);
  _objc_storeStrong(param_1 + _DAT_112713088,0);
  _objc_storeStrong(param_1 + _DAT_112713084,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271307c,0);
  return;
}



/* Entry: 104dc7534; end: 104dc7583; -[SCCommerceImageTitleSubtitleSelectionView initWithFrame:] */

undefined1 * FUN_104dc7534(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4320;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104dc7584; end: 104dc77e7; -[SCCommerceImageTitleSubtitleSelectionView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc7584(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e4320;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar4 = (long)_DAT_112713090;
  dVar8 = 33.0;
  dVar6 = 15.5;
  dVar7 = dVar8;
  func_0x00010c19f0e0(0x402f000000000000,0x4024000000000000,0x4040800000000000,0x4040800000000000,
                      *(undefined8 *)(param_1 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
  dVar6 = dVar6 + dVar8 + 7.5;
  func_0x00010bfb68e0(param_1);
  dVar8 = dVar8 - dVar6;
  dVar9 = dVar8 + -7.5;
  if (*(long *)(param_1 + _DAT_112713094) == 1) {
    func_0x00010bfb68e0(param_1);
    lVar5 = (long)_DAT_112713098;
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfb3a80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    lVar4 = (long)_DAT_11271309c;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    dVar10 = dVar8;
    func_0x00010bfb3a80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    dVar7 = dVar7 - (dVar8 + dVar10);
    dVar10 = dVar7 * 0.5;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfb3a80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    dVar8 = dVar6;
    func_0x00010c19f0e0(dVar6,dVar10,dVar9,dVar7,*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar5));
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfb3a80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    func_0x00010c19f0e0(dVar6,dVar10 + dVar7,dVar9,dVar8,*(undefined8 *)(param_1 + lVar4));
    _objc_release(uVar1);
  }
  else if (*(long *)(param_1 + _DAT_112713094) == 0) {
    func_0x00010bfb68e0(param_1);
    lVar4 = (long)_DAT_112713098;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfb3a80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    dVar7 = dVar7 - dVar8;
    dVar8 = dVar7 * 0.5;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfb3a80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    func_0x00010c19f0e0(dVar6,dVar8,dVar9,dVar7,*(undefined8 *)(param_1 + lVar4));
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271309c));
  }
  return;
}



/* Entry: 104dc77e8; end: 104dc77f7; -[SCCommerceImageTitleSubtitleSelectionView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc77e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112713094) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 104dc77f8; end: 104dc7873; -[SCCommerceImageTitleSubtitleSelectionView _tapGestureRecognized:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc77f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127130a0;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfe8e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104dc7874; end: 104dc798f; -[SCCommerceImageTitleSubtitleSelectionView _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc7874(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c17d4c0(param_1,param_2,1);
  puVar1 = PTR_PTR_1126b0648;
  _objc_opt_new();
  lVar3 = (long)_DAT_112713090;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713098);
  *(undefined **)(param_1 + _DAT_112713098) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271309c);
  *(undefined **)(param_1 + _DAT_11271309c) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1);
  *(undefined8 *)(param_1 + _DAT_112713094) = 1;
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_opt_new();
  lVar3 = (long)_DAT_1127130a4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c178280(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addGestureRecognizer__11259bdb8,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 104dc7990; end: 104dc79af; -[SCCommerceImageTitleSubtitleSelectionView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc7990(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127130a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dc79b0; end: 104dc79c3; -[SCCommerceImageTitleSubtitleSelectionView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc79b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127130a0,param_3);
  return;
}



/* Entry: 104dc79c4; end: 104dc79d3; -[SCCommerceImageTitleSubtitleSelectionView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc79c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112713090,1);
  return;
}



/* Entry: 104dc79d4; end: 104dc79e3; -[SCCommerceImageTitleSubtitleSelectionView textLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc79d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112713098,1);
  return;
}



/* Entry: 104dc79e4; end: 104dc79f3; -[SCCommerceImageTitleSubtitleSelectionView subtextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc79e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11271309c,1);
  return;
}



/* Entry: 104dc79f4; end: 104dc7a03; -[SCCommerceImageTitleSubtitleSelectionView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dc79f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713094);
}



/* Entry: 104dc7a04; end: 104dc7a13; -[SCCommerceImageTitleSubtitleSelectionView tapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dc7a04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130a4);
}



/* Entry: 104dc7a14; end: 104dc7a53; -[SCCommerceImageTitleSubtitleSelectionView setTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc7a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127130a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dc7a54; end: 104dc7abf; -[SCCommerceImageTitleSubtitleSelectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc7a54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127130a4,0);
  _objc_storeStrong(param_1 + _DAT_11271309c,0);
  _objc_storeStrong(param_1 + _DAT_112713098,0);
  _objc_storeStrong(param_1 + _DAT_112713090,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127130a0);
  return;
}



/* Entry: 104dc7ac0; end: 104dc7c03; -[SCCommerceCheckoutSummaryCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104dc7ac0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e4328;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    func_0x000104dc7ba0(0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127130a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127130a8) = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 2;
    func_0x000104dc7ba0(2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127130ac);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127130ac) = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104dc7c04; end: 104dc7e27; -[SCCommerceCheckoutSummaryCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc7c04(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126e4328;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar2 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar7 = param_3;
  dVar8 = param_4;
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b0730;
  uVar5 = *(ulong *)(param_5 + _DAT_1127130b0);
  _objc_retain(uVar5);
  _objc_opt_class(puVar3);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar4 = uVar1;
  func_0x00010c08e820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar9 = param_3;
  dVar6 = param_4;
  func_0x00010bf20bc0(param_3,param_4);
  _objc_release(uVar4);
  lVar2 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8c020(uVar1);
  func_0x00010bf8c020(uVar1);
  func_0x00010b8162e0(dVar6,dVar9,dVar7,dVar8);
  func_0x00010b8166f8(lVar2);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_1127130a8));
  _objc_release(lVar2);
  uVar4 = uVar1;
  func_0x00010c140c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20bc0(param_3,param_4);
  _objc_release(uVar4);
  lVar2 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar9 = param_1 - dVar7;
  func_0x00010bf8c020(uVar1);
  func_0x00010bf8c020(uVar1);
  func_0x00010b8162e0(dVar9 - param_4,param_1,dVar7,dVar8);
  func_0x00010b8166f8(lVar2);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_1127130ac));
  _objc_release(uVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 104dc7e28; end: 104dc7fe7; -[SCCommerceCheckoutSummaryCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc7e28(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b0730;
  _objc_opt_class(PTR_PTR_1126b0730);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_1127130b0;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_104dc7fc8;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c08e820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_1127130a8));
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c140c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127130ac;
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c140c40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf13d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar6);
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_104dc7fc8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dc7fe8; end: 104dc8117; +[SCCommerceCheckoutSummaryCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_104dc7fe8(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b0730;
  _objc_opt_class(PTR_PTR_1126b0730);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c08e820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20bc0(param_1,param_2);
  dVar5 = param_4;
  func_0x00010b8165e8(param_3);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c140c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20bc0(param_1,param_2);
  dVar4 = param_3;
  func_0x00010b8165e8();
  _objc_release(uVar3);
  if (dVar5 <= param_4) {
    dVar5 = param_4;
  }
  func_0x00010bf8c020(uVar1);
  func_0x00010bf8c020(uVar1);
  _objc_release(uVar1);
  dVar4 = dVar5 + param_3 + dVar4;
  if (param_2 <= dVar4) {
    dVar4 = param_2;
  }
  _objc_release(param_7);
  auVar6._8_8_ = dVar4;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 104dc8118; end: 104dc8127; -[SCCommerceCheckoutSummaryCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dc8118(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130b0);
}



/* Entry: 104dc8128; end: 104dc8177; -[SCCommerceCheckoutSummaryCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc8128(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127130b0,0);
  _objc_storeStrong(param_1 + _DAT_1127130ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127130a8,0);
  return;
}



/* Entry: 104dc8178; end: 104dc82cf; -[SCCommerceCheckoutSummaryView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104dc8178(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e4330;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
    func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_1127130b4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c167740(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1738c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_opt_class(PTR_PTR_1126b0738);
    puVar2 = PTR_PTR_1126b0738;
    _objc_opt_class(PTR_PTR_1126b0738);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(uVar4);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104dc82d0; end: 104dc83bf; -[SCCommerceCheckoutSummaryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc82d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e4330;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  puVar2 = PTR_PTR_1126b0740;
  uVar4 = *(ulong *)(param_5 + _DAT_1127130b8);
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
  func_0x00010bf8c020(uVar1);
  func_0x00010bf8c020(uVar1);
  func_0x00010b8162e0(param_2,param_1,param_3,param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_1127130b4));
  _objc_release(uVar1);
  return;
}



/* Entry: 104dc83c0; end: 104dc8517; -[SCCommerceCheckoutSummaryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc83c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b0740;
  _objc_opt_class(PTR_PTR_1126b0740);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_1127130b8;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_104dc84f8;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010bf13d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127130b4;
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf13d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(uVar5);
    func_0x00010c128b60(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c1cbe20(*(undefined8 *)(param_1 + lVar6));
  }
LAB_104dc84f8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dc8518; end: 104dc86ab; +[SCCommerceCheckoutSummaryView sizeWithViewModel:constrainedToSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_104dc8518(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  puVar5 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = param_1;
  dVar11 = param_2;
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b0740;
  _objc_opt_class(PTR_PTR_1126b0740);
  uVar2 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar1);
  uVar4 = param_6;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  func_0x00010bf8c020(uVar4);
  func_0x00010bf8c020(uVar4);
  dVar12 = dVar12 + param_3;
  dVar10 = 0.0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar2 = uVar4;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_f8;
  uVar7 = uVar2;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    lVar8 = *plStack_130;
    do {
      uVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(uVar2);
        }
        dVar10 = param_1;
        dVar11 = param_2;
        func_0x00010c23d6e0(param_1,PTR_PTR_1126b0738);
        dVar12 = dVar12 + dVar11;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
      puVar6 = auStack_f8;
      uVar7 = uVar2;
      puVar5 = &uStack_140;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(uVar2);
  if (param_2 <= dVar12) {
    dVar12 = param_2;
  }
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar13._8_8_ = dVar12;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b0738;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)puVar5;
  func_0x00010bf6e0c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b0740;
  uVar7 = *(ulong *)(param_6 + (long)_DAT_1127130b8);
  _objc_retain(uVar7);
  _objc_opt_class(puVar1);
  uVar2 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar1);
  uVar4 = uVar7;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar7);
  uVar2 = uVar4;
  func_0x00010bf343c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c142240(puVar6);
  _objc_release(puVar6);
  uVar4 = uVar2;
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  auVar14._8_8_ = dVar11;
  auVar14._0_8_ = dVar10;
  return auVar14;
}



/* Entry: 104dc86ac; end: 104dc87eb; -[SCCommerceCheckoutSummaryView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc86ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126b0738;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b0740;
  uVar5 = *(ulong *)(param_1 + _DAT_1127130b8);
  _objc_retain(uVar5);
  _objc_opt_class(puVar1);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar1);
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar3 = uVar4;
  func_0x00010bf343c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104dc87ec; end: 104dc887f; -[SCCommerceCheckoutSummaryView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104dc87ec(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126b0740;
  uVar4 = *(ulong *)(param_1 + _DAT_1127130b8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar1);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar2 = uVar3;
  func_0x00010bf343c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf529e0(uVar2);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 104dc8880; end: 104dc89ab; -[SCCommerceCheckoutSummaryView collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_104dc8880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  puVar2 = PTR_PTR_1126b0740;
  puVar1 = PTR_PTR_1126b0738;
  uVar5 = *(ulong *)(param_5 + _DAT_1127130b8);
  _objc_retain(uVar5);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar3 = uVar4;
  func_0x00010bf343c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c142240(param_9);
  _objc_release(param_9);
  uVar4 = uVar3;
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  func_0x00010c23d6e0(param_3,param_4,puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 104dc89ac; end: 104dc89b3; -[SCCommerceCheckoutSummaryView collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_104dc89ac(void)

{
  return 0;
}



/* Entry: 104dc89b4; end: 104dc89c3; -[SCCommerceCheckoutSummaryView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dc89b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130b8);
}



/* Entry: 104dc89c4; end: 104dc8a03; -[SCCommerceCheckoutSummaryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc89c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127130b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127130b4,0);
  return;
}



/* Entry: 104dc8a04; end: 104dc8d2b; -[SCProductCheckoutViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104dc8a04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126e4338;
  puVar1 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b0618;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0878a0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127130c0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b06c8;
    _objc_alloc();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_1127130c4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0648;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_1127130c8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127130cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127130cc) = puVar2;
    _objc_release(uVar5);
    func_0x00010c161260(puVar1);
    func_0x00010c1a5dc0(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 104dc8d2c; end: 104dc8f9b;  */

void FUN_104dc8d2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x402c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bc000();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x4032000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dc8f9c; end: 104dc921b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc8f9c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc01c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = (long)_DAT_1127130c4;
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar6);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar6);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c0df720(param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dc921c; end: 104dc944b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc921c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bbfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4032000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127130c0);
  func_0x00010c0bbea0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4000000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dc944c; end: 104dc948b; -[SCProductCheckoutViewCell setLabelItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc944c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127130d0);
  *(undefined8 *)(param_1 + _DAT_1127130d0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c228d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setupLabels_112667d80);
  return;
}



/* Entry: 104dc948c; end: 104dc94fb; -[SCProductCheckoutViewCell setLabelInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc948c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127130d4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127130c0),param_2,
                      *(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dc94fc; end: 104dc951b; -[SCProductCheckoutViewCell setHasError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc94fc(long param_1,undefined8 param_2,uint param_3)

{
  *(char *)(param_1 + _DAT_1127130d8) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127130c4),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 104dc951c; end: 104dc9643; -[SCProductCheckoutViewCell setLabelIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc951c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127130dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae6b8;
  lVar5 = (long)_DAT_1127130c8;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c29c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae790;
    lVar2 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar3,param_2,0x19,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a320(puVar4,param_2,param_3,uVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa620(*(undefined8 *)(param_1 + lVar5),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,param_3 == 0);
  func_0x00010c228d60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dc9644; end: 104dc9653; -[SCProductCheckoutViewCell setIsSingleLine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc9644(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127130e0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c228d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setupLabels_112667d80);
  return;
}



/* Entry: 104dc9654; end: 104dc97eb; -[SCProductCheckoutViewCell setupLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc9654(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_1127130d0;
  lVar1 = *(long *)(param_1 + lVar8);
  uVar7 = 0;
  if (lVar1 != 0) {
    if (*(char *)(param_1 + _DAT_1127130e0) == '\x01') {
      func_0x00010bf446e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110db3678);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = lVar1;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar2;
      _objc_release(uVar6);
      _objc_release(lVar1);
      lVar1 = *(long *)(param_1 + lVar8);
      param_3 = (undefined1 *)plVar5;
    }
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar7 = 0;
      do {
        lVar1 = param_1;
        func_0x00010be20940(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = *(undefined1 **)(param_1 + lVar8);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        param_3 = puVar3;
        func_0x00010c212f20(lVar1);
        _objc_release(puVar3);
        _objc_release(lVar1);
        uVar7 = uVar7 + 1;
        uVar4 = *(ulong *)(param_1 + lVar8);
        func_0x00010bf529e0();
      } while (uVar7 < uVar4);
    }
    uVar4 = *(ulong *)(param_1 + lVar8);
    func_0x00010bf529e0();
    lVar1 = (long)_DAT_1127130cc;
    while( true ) {
      uVar7 = *(ulong *)(param_1 + lVar1);
      func_0x00010bf529e0();
      if (uVar7 <= uVar4) break;
      uVar6 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c0dfd40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      param_3 = (undefined1 *)0x1;
      func_0x00010c1a7f60();
      _objc_release(uVar6);
      uVar4 = uVar4 + 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (param_3 != (undefined1 *)0x0) {
    lVar1 = (long)_DAT_1127130c4;
    func_0x00010c1a97a0(*(undefined8 *)(uVar7 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c103dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(uVar7 + lVar1),PTR_s_populateWithIcon__11261e990,0xc);
    return;
  }
  return;
}



/* Entry: 104dc97ec; end: 104dc9827; -[SCProductCheckoutViewCell setIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc97ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = (long)_DAT_1127130c4;
    func_0x00010c1a97a0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c103dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_populateWithIcon__11261e990,0xc);
    return;
  }
  return;
}



/* Entry: 104dc9828; end: 104dc99eb; -[SCProductCheckoutViewCell _getMultiLineLabelAtLineIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc9828(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar7 = (long)_DAT_1127130cc;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf529e0();
  puVar3 = PTR_PTR_1126b0618;
  if (uVar1 <= param_3) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0878a0(0x402e000000000000,puVar3,param_2,0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1cfce0(puVar3,param_2,1);
    func_0x00010c1c83a0(0x3fe6666660000000,puVar3);
    func_0x00010c165e20(puVar3,param_2,0);
    func_0x00010c1bdb00(puVar3,param_2,4);
    lVar4 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar4);
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar7),param_2,puVar3);
    _objc_release(puVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c0dfd40(uVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  if (param_3 == 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127130c0);
    _objc_retain(uVar6);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0dfd40(uVar6,param_2,param_3 - 1);
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104dc99ec;
  puStack_58 = &UNK_11084fc58;
  lStack_50 = param_1;
  uStack_48 = uVar6;
  _objc_retain(uVar6);
  func_0x00010c0bbfe0(uVar5,param_2,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c08cdc0(param_1);
  _objc_release(uStack_48);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104dc99ec; end: 104dc9d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc99ec(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127130dc);
  lVar2 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4000000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c0bbfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    (**(code **)(lVar3 + 0x10))(lVar3,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar9;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))(0x4032000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  else {
    lVar7 = *(long *)(lVar7 + _DAT_1127130c8);
    func_0x00010c0bc000(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    (**(code **)(lVar3 + 0x10))(lVar3,lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(0x4022000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  cVar1 = *(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127130d8);
  lVar2 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20);
  if (cVar1 == '\x01') {
    lVar7 = *(long *)(lVar7 + _DAT_1127130c4);
    func_0x00010c0bbfa0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    (**(code **)(lVar3 + 0x10))(lVar3,lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(0xc032000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
  }
  else {
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c0bc000();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104dc9d44; end: 104dc9d53; -[SCProductCheckoutViewCell labelItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dc9d44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130d0);
}



/* Entry: 104dc9d54; end: 104dc9d63; -[SCProductCheckoutViewCell labelInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dc9d54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130d4);
}



/* Entry: 104dc9d64; end: 104dc9d73; -[SCProductCheckoutViewCell labelIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dc9d64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130dc);
}



/* Entry: 104dc9d74; end: 104dc9d83; -[SCProductCheckoutViewCell isSingleLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104dc9d74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127130e0);
}



/* Entry: 104dc9d84; end: 104dc9d93; -[SCProductCheckoutViewCell hasError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104dc9d84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127130d8);
}



/* Entry: 104dc9d94; end: 104dc9e23; -[SCProductCheckoutViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc9d94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127130dc,0);
  _objc_storeStrong(param_1 + _DAT_1127130d4,0);
  _objc_storeStrong(param_1 + _DAT_1127130c4,0);
  _objc_storeStrong(param_1 + _DAT_1127130c8,0);
  _objc_storeStrong(param_1 + _DAT_1127130d0,0);
  _objc_storeStrong(param_1 + _DAT_1127130cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127130c0,0);
  return;
}



/* Entry: 104dc9e24; end: 104dc9f3f; -[SCCommerceStoreItemCollectionViewCell initWithFrame:] */

undefined1 * FUN_104dc9e24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e4340;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    func_0x00010be3a020(puVar1);
    func_0x00010be3a8a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104dc9f40; end: 104dc9fb3; -[SCCommerceStoreItemCollectionViewCell setCompositeImageModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc9f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127130e4);
  *(undefined8 *)(param_1 + _DAT_1127130e4) = uVar2;
  _objc_release(uVar3);
  lVar1 = (long)_DAT_1127130ec;
  func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar1),param_2,
                      *(undefined8 *)(param_1 + _DAT_1127130e8));
  func_0x00010c1805a0(*(undefined8 *)(param_1 + lVar1),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dc9fb4; end: 104dca02b; -[SCCommerceStoreItemCollectionViewCell setProductWithTitle:productPrice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dc9fb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beaf180(param_1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127130f0),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127130f4),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104dca02c; end: 104dca0fb; -[SCCommerceStoreItemCollectionViewCell setStrikeThroughProductWithTitle:productPrice:strikeThroughPrice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dca02c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beb00e0(param_1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127130f0),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127130f4),param_2,param_4);
  _objc_release(param_4);
  puVar1 = PTR_PTR_1126b0618;
  func_0x00010c25cce0(0x402a000000000000,PTR_PTR_1126b0618,param_2,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_1127130f8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104dca0fc; end: 104dca143; -[SCCommerceStoreItemCollectionViewCell setOutOfStockProductWithTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dca0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010beae960(param_1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127130f0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dca144; end: 104dca1e3; -[SCCommerceStoreItemCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dca144(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4340;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010c1805a0(*(undefined8 *)(param_1 + _DAT_1127130ec));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127130f0));
  lVar1 = (long)_DAT_1127130f4;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_1127130fc));
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_1127130f8));
  return;
}



/* Entry: 104dca1e4; end: 104dca2cb; -[SCCommerceStoreItemCollectionViewCell _initNetworkImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dca1e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126b0608;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_1127130ec;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
  lVar2 = param_1;
  func_0x00010bf13d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104dca2cc;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104dca2cc; end: 104dca403;  */

void FUN_104dca2cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfe7e20(PTR_PTR_1126b0748);
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dca404; end: 104dca55f; -[SCCommerceStoreItemCollectionViewCell _initTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dca404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_1127130f0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,2);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,4);
  lVar2 = param_1;
  func_0x00010bf13d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104dca560;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104dca560; end: 104dca7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dca560(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x402c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc02c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127130ec);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4018000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc039000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dca7d4; end: 104dca8df; -[SCCommerceStoreItemCollectionViewCell _initPriceLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dca7d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127130f4;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,4);
  lVar2 = param_1;
  func_0x00010bf13d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104dca8e0; end: 104dca95f; -[SCCommerceStoreItemCollectionViewCell _setupPriceLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dca8e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010be3a200();
  lVar1 = (long)_DAT_1127130f4;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar1));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104dca960;
  puStack_30 = &UNK_1108471b0;
  lStack_28 = param_1;
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar1),param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104dca960; end: 104dcab9f;  */

void FUN_104dca960(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x402c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc02c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c116300(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dcaba0; end: 104dcad13; -[SCCommerceStoreItemCollectionViewCell _setupStrikeThroughLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcaba0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_1127130f8;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar3,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,4);
    lVar2 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + lVar4);
  }
  func_0x00010befbb60(param_1,param_2,lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104dcad14;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be3a200(param_1);
  lVar2 = (long)_DAT_1127130f4;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104dcaed4;
  puStack_78 = &UNK_1108471b0;
  lStack_70 = param_1;
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar2),param_2,&puStack_90);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104dcad14; end: 104dcaed3;  */

void FUN_104dcad14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x402c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c116300(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dcaed4; end: 104dcb153;  */

void FUN_104dcaed4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25cc80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bc000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x401e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc02c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c116300(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dcb154; end: 104dcb2db; -[SCCommerceStoreItemCollectionViewCell _setupOutOfStockLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcb154(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127130fc;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar4);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar4);
    _objc_release(puVar1);
    func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110db3698;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3698,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    lVar3 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
    _objc_release(lVar3);
  }
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104dcb2dc; end: 104dcb51b;  */

void FUN_104dcb2dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x402c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc02c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c116300(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dcb51c; end: 104dcb57f; +[SCCommerceStoreItemCollectionViewCell cellPaddingWithNumColumns:] */

double FUN_104dcb51c(undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar2 = 0.03;
  func_0x00010b816218();
  _objc_release(puVar1);
  return (double)(long)(dVar2 * param_3 * 0.03) / dVar2;
}



/* Entry: 104dcb580; end: 104dcb5fb; +[SCCommerceStoreItemCollectionViewCell cellWidthWithNumColumns:] */

double FUN_104dcb580(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bf33fc0(PTR_PTR_1126b0748);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  dVar2 = (double)param_6;
  dVar3 = (param_3 - param_1 * (double)(param_6 + 1)) / dVar2;
  func_0x00010b816218();
  return (double)(long)(dVar2 * dVar3) / dVar2;
}



/* Entry: 104dcb5fc; end: 104dcb63b; +[SCCommerceStoreItemCollectionViewCell cellHeightWithNumColumns:] */

double FUN_104dcb5fc(double param_1)

{
  double dVar1;
  
  func_0x00010bf34480();
  dVar1 = param_1;
  func_0x00010c26b8e0(PTR_PTR_1126b0748);
  param_1 = param_1 + dVar1;
  func_0x00010b816218();
  return (double)(long)(param_1 * dVar1) / dVar1;
}



/* Entry: 104dcb63c; end: 104dcb6b7; +[SCCommerceStoreItemCollectionViewCell imageHeightWithNumColumns:] */

double FUN_104dcb63c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bf33fc0(PTR_PTR_1126b0748);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  dVar2 = (double)param_6;
  dVar3 = (param_3 - param_1 * (double)(param_6 + 1)) / dVar2;
  func_0x00010b816218();
  return (double)(long)(dVar2 * dVar3) / dVar2;
}



/* Entry: 104dcb6b8; end: 104dcb743; +[SCCommerceStoreItemCollectionViewCell textBlockHeight] */

double FUN_104dcb6b8(void)

{
  double dVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = 16.0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(puVar2);
  dVar4 = 13.0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  dVar1 = dVar4 * 2.0;
  _objc_release(puVar2);
  func_0x00010b816218();
  return (double)(long)((dVar3 * 2.0 + 6.0 + dVar1) * dVar4) / dVar4;
}



/* Entry: 104dcb744; end: 104dcb753; -[SCCommerceStoreItemCollectionViewCell compositeImageModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dcb744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130e4);
}



/* Entry: 104dcb754; end: 104dcb763; -[SCCommerceStoreItemCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dcb754(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130e8);
}



/* Entry: 104dcb764; end: 104dcb7a3; -[SCCommerceStoreItemCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcb764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127130e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dcb7a4; end: 104dcb7b3; -[SCCommerceStoreItemCollectionViewCell productTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dcb7a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130f0);
}



/* Entry: 104dcb7b4; end: 104dcb7f3; -[SCCommerceStoreItemCollectionViewCell setProductTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcb7b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127130f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dcb7f4; end: 104dcb803; -[SCCommerceStoreItemCollectionViewCell productPriceLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dcb7f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130f4);
}


