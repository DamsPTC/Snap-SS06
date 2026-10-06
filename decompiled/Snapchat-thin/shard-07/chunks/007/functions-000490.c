/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105941698; end: 1059416eb;  */

void FUN_105941698(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126bd088;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfac5e0(uVar1);
  func_0x00010c0d4fc0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059416ec; end: 105941793; -[SCFideliusManager loadingStatusEnum] */

undefined8 FUN_1059416ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105941794;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105941794; end: 1059417c3;  */

void FUN_105941794(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfac5e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 1059417c4; end: 10594186b; -[SCFideliusManager startedLoading] */

undefined1 FUN_1059417c4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10594186c;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_70);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10594186c; end: 1059418a3;  */

void FUN_10594186c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfac5e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 != 0;
  return;
}



/* Entry: 1059418a4; end: 1059419d7; -[SCFideliusManager _clientInit:source:] */

void FUN_1059418a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f310289;
  func_0x0001000ba800(&UNK_10f310289);
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdeda0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar5 = param_3;
  func_0x00010bfdebe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf4b900(uVar4,param_2,uVar5);
  _objc_release(uVar5);
  if ((uVar3 & 1) == 0) {
    uVar5 = param_3;
    func_0x00010bfdebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4,param_2,uVar5);
    _objc_release(uVar5);
  }
  func_0x00010be5fd20(param_1,param_2,param_3,uVar4,param_4);
  _objc_release(uVar4);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059419d8; end: 105941b5f; -[SCFideliusManager _meshInitializeDeviceKey:hashedPublicKeys:source:] */

void FUN_1059419d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = &UNK_10f3102a7;
  func_0x0001000ba800(&UNK_10f3102a7);
  puVar4 = PTR_PTR_1126c0388;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf70640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105941b60;
  puStack_90 = &UNK_1108c0e10;
  lStack_88 = param_1;
  _objc_retain(param_3);
  puStack_d8 = puVar3;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x105941c1c;
  puStack_c0 = &UNK_11087ec20;
  lStack_b8 = param_1;
  uStack_b0 = param_5;
  uStack_80 = param_3;
  uStack_78 = param_5;
  func_0x00010c0b7460(puVar4,param_2,param_3,param_4,uVar7,uVar1,uVar2,&puStack_a8,&puStack_d8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uStack_80);
  func_0x0001000e2a84(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105941b60; end: 105941ce7;  */

void FUN_105941b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c085320(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfded60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010bf15da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be822a0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105941ce8; end: 105941d3f; -[SCFideliusManager _incrementKeyVersion:] */

void FUN_105941ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105941d40;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_40);
  return;
}



/* Entry: 105941d40; end: 105941fa7;  */

void FUN_105941d40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined **)(param_1 + 0x20);
  if ((*(long *)(puVar2 + 0x10) != 0) && (func_0x00010bfac5e0(), puVar2 == (undefined *)0x5)) {
    puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c298be0();
    if ((long)puVar2 < *(long *)(param_1 + 0x28)) {
      puVar2 = PTR_PTR_1126c03c8;
      _objc_alloc();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010bfdebe0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c0ee500(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010bfeb3c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c085320(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c019e60();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar1 = PTR_PTR_1126c0388;
      puVar7 = puVar2;
      FUN_105949cfc();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bfdebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf70640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7460(puVar1);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c085320(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bde2420(*(undefined8 *)(puVar2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105941fa8; end: 10594200b;  */

void FUN_105941fa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c085320(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bde2420(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10594200c; end: 1059421ab;  */

void FUN_10594200c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40();
  _objc_release(param_2);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bd088;
  func_0x00010c0d4fe0(PTR_PTR_1126bd088);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20);
  ppuVar8 = *(undefined ***)(lVar7 + 0x10);
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e10358;
  }
  else {
    ppuVar4 = ppuVar8;
    func_0x00010c085320(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar7 + 0x10) != 0) {
      func_0x00010c298be0();
      lVar7 = *(long *)(param_1 + 0x20);
    }
  }
  uVar5 = *(undefined8 *)(lVar7 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf706a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7e00(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if (ppuVar8 != (undefined **)0x0) {
    _objc_release(ppuVar4);
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059421ac; end: 10594251b; -[SCFideliusManager _commitNewKeyVersionWithSeverIwek:key:] */

void FUN_1059421ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c085320(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c071ae0(param_3,param_2,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126bd088;
    func_0x00010c0d4fe0(PTR_PTR_1126bd088,param_2,9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c085320(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c298be0();
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010bf706a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7e00(uVar8,param_2,1,0,0,&PTR____CFConstantStringClassReference_110e10758,puVar9,
                        uVar4,uVar5,9999,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(puVar9);
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_1059424f4;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10594251c;
    puStack_70 = &UNK_1108c0e70;
    lStack_68 = param_1;
    func_0x00010bfab320(*(undefined8 *)(param_1 + 8),param_2,&puStack_88);
    lVar2 = param_1;
    func_0x00010be98ac0(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bd088;
    func_0x00010c0d4fe0(PTR_PTR_1126bd088,param_2,9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c085320(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c298be0();
    puVar9 = PTR_PTR_1126c0480;
    if ((int)lVar2 == 0) {
      puVar6 = *(undefined **)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010bf706a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7e00(uVar1,param_2,1,0,0,&PTR____CFConstantStringClassReference_110e10738,
                          puVar3,uVar4,uVar5,9999,puVar9);
    }
    else {
      puVar6 = *(undefined **)(param_1 + 0x10);
      func_0x00010c0ee500(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c272440(puVar9,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010c0b4ca0();
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf706a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7e00(uVar1,param_2,1,1,0,0,puVar3,uVar4,uVar5,puVar7,uVar10);
      _objc_release(uVar10);
      _objc_release(uVar8);
    }
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c600();
  }
  _objc_release(uVar8);
LAB_1059424f4:
  _objc_release(param_4);
  return;
}



/* Entry: 10594251c; end: 10594267f;  */

void FUN_10594251c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126bd088;
    func_0x00010c0d4fe0(PTR_PTR_1126bd088);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65a60(param_2);
  }
  else {
    puVar1 = *(undefined **)(*(long *)(param_1 + 0x20) + 0xb8);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bd088;
    func_0x00010c0d4fe0(PTR_PTR_1126bd088);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c085320(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf706a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7e00(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105942680; end: 105942737; -[SCFideliusManager _saveArchive:] */

undefined8 FUN_105942680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c14b640(uVar3,param_2,param_3,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a660();
    _objc_release(uVar3);
  }
  return uVar2;
}



/* Entry: 105942738; end: 10594278f; -[SCFideliusManager _rollbackKeyVersion] */

void FUN_105942738(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105942790;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_38);
  return;
}



/* Entry: 105942790; end: 10594283b;  */

void FUN_105942790(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if ((lVar1 != 0) && (func_0x00010c298be0(), 9 < lVar1)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010bfdebe0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bb20(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bde1240(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be1a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__generateAndUpload__112564418,10);
    return;
  }
  return;
}



/* Entry: 10594283c; end: 1059428db; -[SCFideliusManager invalidate] */

void FUN_10594283c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &UNK_10f3103c5;
  func_0x0001000ba800(&UNK_10f3103c5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059428dc;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_58);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 1059428dc; end: 10594294b;  */

void FUN_1059428dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0f60();
  _objc_release(uVar1);
  func_0x00010bdd2540(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10594294c; end: 105942a97; -[SCFideliusManager _clearUserInfo] */

void FUN_10594294c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000ba800(&UNK_10f3103ee);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3dee0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6cca0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c540();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c05e0;
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a600(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105942a98; end: 105942b93; -[SCFideliusManager _backupAndresetCurrentDeviceUser] */

void FUN_105942a98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x0001000ba800(&UNK_10f31040f);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286ca0();
    _objc_release(uVar1);
  }
  func_0x00010bf63c80(*(undefined8 *)(param_1 + 8));
  lVar2 = param_1;
  func_0x00010c15f960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63c80();
  _objc_release(lVar2);
  func_0x00010bde1240(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  func_0x00010c19b7a0(param_1,param_2,10);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105942b94; end: 105942b9b; -[SCFideliusManager _setStatusToTempReady] */

void FUN_105942b94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFideliusStatus__112644808,6);
  return;
}



/* Entry: 105942b9c; end: 105942d3b; -[SCFideliusManager _useNewIdentity:source:] */

void FUN_105942b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f310442;
  func_0x0001000ba800(&UNK_10f310442);
  puVar2 = PTR_PTR_1126c03c8;
  _objc_alloc();
  uVar6 = param_3;
  func_0x00010bfdebe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c11a480(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c1142a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c085320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c298be0(param_3);
  func_0x00010c019e60(puVar2,param_2,uVar6,uVar3,uVar4,uVar5,uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286cc0();
  _objc_release(uVar6);
  func_0x00010bea7ee0(param_1);
  func_0x00010be16f40(param_1,param_2,param_4);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105942d3c; end: 105942e1f; -[SCFideliusManager _generateAndUpload:] */

void FUN_105942d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001000ba800(&UNK_10f31048c);
  func_0x00010c19b7a0(param_1,param_2,2);
  puVar1 = PTR_PTR_1126c0388;
  func_0x00010bf59620(PTR_PTR_1126c0388);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_105949cfc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c15f960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256b40();
  _objc_release(uVar3);
  func_0x00010bde14a0(param_1,param_2,puVar2,param_3);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105942e20; end: 10594307f; -[SCFideliusManager _loadFromArchive:] */

void FUN_105942e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x0001000ba800(&UNK_10f3104b1);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf09660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bd088;
  func_0x00010c0d4fe0(PTR_PTR_1126bd088,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a660();
    _objc_release(uVar6);
    lVar1 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1160();
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bfdebe0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c291bc0(lVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar1 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3a660();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1160();
    }
    else {
      _objc_retain(lVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2;
      _objc_release(uVar6);
      lVar5 = lVar1;
      func_0x00010c26b200();
      if ((int)lVar5 == 0) {
        lVar5 = param_1;
        func_0x00010c15f960(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf19900();
        _objc_release(lVar5);
        uVar6 = *(undefined8 *)(param_1 + 0xb8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1160();
      }
      else {
        func_0x00010bea7ee0(param_1);
        uVar6 = *(undefined8 *)(param_1 + 0xb8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1160();
      }
    }
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105943080; end: 105943247; -[SCFideliusManager isBetaReady:] */

undefined1 FUN_105943080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar3 = &UNK_10f310650;
  func_0x0001000ba800(&UNK_10f310650);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x88);
  func_0x00010c06fc80();
  if (iVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar5);
    _objc_release(param_3);
  }
  else {
    lVar4 = param_1;
    func_0x00010be6e220();
    *(char *)(puStack_48 + 3) = (char)lVar4;
    lVar4 = param_1;
    func_0x00010be3e6a0();
    *(char *)(puStack_68 + 3) = (char)lVar4;
  }
  if (*(char *)(puStack_48 + 3) == '\x01') {
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x88));
  }
  uVar1 = *(undefined1 *)(puStack_68 + 3);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  func_0x0001000e2a84(puVar3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105943248; end: 10594328f;  */

void FUN_105943248(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be6e220(uVar1,param_2,7);
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be3e6a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 105943290; end: 10594329b;  */

void FUN_105943290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be67c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onArchiveLoaded__1125778c0,7);
  return;
}



/* Entry: 10594329c; end: 10594333f; -[SCFideliusManager _optionallyLoadArchiveOnDemand:] */

bool FUN_10594329c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_10f31066e;
  func_0x0001000ba800(&UNK_10f31066e);
  lVar2 = param_1;
  func_0x00010bfac5e0();
  if (lVar2 == 0) {
    func_0x00010c19b7a0(param_1,param_2,1);
    func_0x00010be4d4a0(param_1,param_2,param_3);
  }
  func_0x0001000e2a84(puVar1);
  return lVar2 == 0;
}



/* Entry: 105943340; end: 1059433df; -[SCFideliusManager _isBetaReady:] */

bool FUN_105943340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f31069f;
  func_0x0001000ba800(&UNK_10f31069f);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    func_0x00010be56600(param_1,param_2,&PTR____CFConstantStringClassReference_110e10318,param_3);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return lVar2 != 0;
}



/* Entry: 1059433e0; end: 105943503; -[SCFideliusManager logNotReady:action:] */

void FUN_1059433e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = &UNK_10f3106be;
  func_0x0001000ba800(&UNK_10f3106be);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105943504;
    puStack_60 = &UNK_110848ba8;
    lStack_58 = param_1;
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  else {
    func_0x00010be56600(param_1,param_2,param_3,param_4);
  }
  func_0x0001000e2a84(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105943504; end: 105943513;  */

void FUN_105943504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be56610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logNotReady_action__112573320,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105943514; end: 105943683; -[SCFideliusManager _logNotReady:action:] */

void FUN_105943514(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f3106dc;
  func_0x0001000ba800(&UNK_10f3106dc);
  puVar3 = PTR_PTR_1126bd088;
  lVar2 = param_1;
  func_0x00010bfac5e0(param_1);
  func_0x00010c0d4fc0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e102f8);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e10318),
     (uVar4 & 1) == 0)) {
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e10338);
  }
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aaf60();
  _objc_release(uVar5);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105943684; end: 1059437b7; -[SCFideliusManager myUserIdentity] */

void FUN_105943684(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &UNK_10f3106fb;
  func_0x0001000ba800(&UNK_10f3106fb);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105941680;
    uStack_40 = 0x105941690;
    uStack_38 = 0;
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x88));
    param_1 = puStack_58[5];
    _objc_retain(param_1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be61d60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001000e2a84(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1059437b8; end: 1059437f7;  */

void FUN_1059437b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be61d60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059437f8; end: 105943853; -[SCFideliusManager _myUserIdentity] */

void FUN_1059437f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_10f31071c;
  func_0x0001000ba800(&UNK_10f31071c);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105943854; end: 10594399b; -[SCFideliusManager getCurrentUserKey] */

void FUN_105943854(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = &UNK_10f31073e;
  func_0x0001000ba800(&UNK_10f31073e);
  func_0x00010c06d280(param_1,param_2,&PTR____CFConstantStringClassReference_110e10378);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bfab340();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010bfdebe0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010bfac2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bfc5800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar5 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar5;
        FUN_105949cfc(lVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  else {
    FUN_105949cfc();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10594399c; end: 105943ae3; -[SCFideliusManager userDbManager] */

void FUN_10594399c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &UNK_10f310762;
  func_0x0001000ba800(&UNK_10f310762);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105941680;
  uStack_40 = 0x105941690;
  uStack_38 = 0;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x88);
  func_0x00010c06fc80();
  if (iVar2 == 0) {
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x88));
  }
  else {
    lVar4 = param_1;
    func_0x00010be43180();
    puVar1 = puStack_58;
    if ((int)lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x98);
      _objc_retain(uVar6);
      uVar5 = puVar1[5];
      puVar1[5] = uVar6;
      _objc_release(uVar5);
    }
  }
  uVar5 = puStack_58[5];
  _objc_retain(uVar5);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  func_0x0001000e2a84(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105943ae4; end: 105943b3b;  */

void FUN_105943ae4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be43180(uVar1,param_2,&PTR____CFConstantStringClassReference_110e10918);
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105943b3c; end: 105943b97; -[SCFideliusManager userDatabaseFetcher] */

void FUN_105943b3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105943b98; end: 105943c37; -[SCFideliusManager onFideliusWarmStart] */

void FUN_105943b98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &UNK_10f3107ae;
  func_0x0001000ba800(&UNK_10f3107ae);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105943c38;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_58);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 105943c38; end: 105943d87;  */

void FUN_105943c38(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010bf3b620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfac5e0();
  if (lVar2 != 8) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bfac5e0();
    if (lVar2 != 6) {
      uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c234e60(uVar3,param_2,puVar4,1);
      _objc_release(puVar4);
      if ((uVar5 & 1) == 0) {
        func_0x00010bfab2a0(*(undefined8 *)(param_1 + 0x20),param_2,
                            &PTR____CFConstantStringClassReference_110de6838);
      }
      _objc_release(uVar3);
      goto LAB_105943cfc;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb5720();
  if (iVar1 != 0) {
    func_0x00010be971c0(*(undefined8 *)(param_1 + 0x20),param_2,6);
  }
LAB_105943cfc:
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfac5e0();
  if (lVar2 == 7) {
    func_0x00010c19b7a0(*(undefined8 *)(param_1 + 0x20),param_2,1);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c085320(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010bfdebe0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4d2a0(lVar2,param_2,uVar6,uVar7,6);
    _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 105943d88; end: 105943e17; -[SCFideliusManager fetchUpdates:] */

void FUN_105943d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105943e18;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105943e18; end: 105943e23;  */

void FUN_105943e18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be152f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchUpdates__112562e58,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105943e24; end: 105944007; -[SCFideliusManager _finishLoadingNewIdentityWithSource:] */

void FUN_105943e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  ppuVar7 = &puStack_80;
  puVar1 = &UNK_10f310857;
  func_0x0001000ba800(&UNK_10f310857);
  lVar2 = param_1;
  func_0x00010bfac5e0();
  if ((lVar2 != 5) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
    func_0x00010be98ac0(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    *(undefined1 *)(param_1 + 0x28) = 1;
    puVar4 = PTR_PTR_1126c0388;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c085320(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b40(puVar4,param_2,uVar3,&PTR____CFConstantStringClassReference_110e10958);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfdebe0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c085320(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5bc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110e0f758,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105944008;
    puStack_68 = &UNK_1108c0f60;
    lStack_60 = param_1;
    uStack_58 = param_3;
    _objc_retainBlock(&puStack_80);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257a60();
    _objc_release(uVar5);
    _objc_release(ppuVar7);
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 105944008; end: 1059440c3;  */

void FUN_105944008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 1059440c4; end: 105944467;  */

void FUN_1059440c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfac5e0();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 10) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(lVar5 + 0x98);
    *(long *)(lVar5 + 0x98) = lVar1;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x98);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    puVar6 = PTR_PTR_1126bd088;
    func_0x00010c0d4fe0(PTR_PTR_1126bd088,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be767c0(lVar1,param_2,uVar2,uVar3,puVar6);
    _objc_release(puVar6);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bd088;
    func_0x00010c0d4fe0(PTR_PTR_1126bd088,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c085320(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c298be0();
    puVar6 = PTR_PTR_1126c0480;
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c0ee500(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272440(puVar6,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010c0b4ca0();
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010bf706a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7e00(uVar3,param_2,0,1,0,0,puVar7,uVar8,uVar12,puVar10,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar11);
    _objc_release(puVar6);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar3);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = 0;
    return;
  }
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40();
  func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110e0ea58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7580();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6e340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bd088;
  func_0x00010c0d4fe0(PTR_PTR_1126bd088,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  ppuVar13 = *(undefined ***)(lVar1 + 0x10);
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e10358;
  }
  else {
    ppuVar4 = ppuVar13;
    func_0x00010c085320(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(lVar1 + 0x10);
    if (lVar5 != 0) {
      func_0x00010c298be0();
      lVar1 = *(long *)(param_1 + 0x20);
      goto LAB_1059443c0;
    }
  }
  lVar5 = 9999;
LAB_1059443c0:
  uVar12 = *(undefined8 *)(lVar1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf706a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7e00(uVar2,param_2,0,0,uVar3,0,puVar7,ppuVar4,lVar5,9999,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar12);
  if (ppuVar13 != (undefined **)0x0) {
    _objc_release(ppuVar4);
  }
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105944468; end: 105944477; +[SCFideliusManager isLoadingFinished:] */

bool FUN_105944468(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 5U < 3;
}



/* Entry: 105944478; end: 10594472b; -[SCFideliusManager isIdentityValid:source:] */

undefined8 FUN_105944478(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
LAB_105944648:
    func_0x00010c0a8e20();
LAB_105944650:
    uVar4 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf19880();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c1142a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0xb8);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105944648;
    }
    lVar2 = param_3;
    func_0x00010bf19880();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c1142a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar3 == 0) {
      lVar2 = *(long *)(param_1 + 0xb8);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105944648;
    }
    lVar2 = param_3;
    func_0x00010bf19880();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0xb8);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105944648;
    }
    lVar2 = param_3;
    func_0x00010bf19880();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar3 == 0) {
      lVar2 = *(long *)(param_1 + 0xb8);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105944648;
    }
    lVar2 = param_1;
    func_0x00010bfac5e0();
    if (lVar2 == 5) {
      uVar4 = 1;
      goto LAB_10594465c;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bfdebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c291bc0(lVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((lVar2 == 0) || (lVar1 = lVar2, func_0x00010c26b200(), (int)lVar1 != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a8e20();
      _objc_release(uVar4);
      goto LAB_105944650;
    }
    uVar4 = 1;
  }
  _objc_release(lVar2);
LAB_10594465c:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10594472c; end: 1059447c7; -[SCFideliusManager reInitialize] */

void FUN_10594472c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x0001000ba800(&UNK_10f310918);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059447c8;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_58);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059447c8; end: 1059447cf;  */

void FUN_1059447c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reInitialize_11257f170);
  return;
}



/* Entry: 1059447d0; end: 105944833; -[SCFideliusManager _reInitialize] */

void FUN_1059447d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ba800(&UNK_10f310937);
  func_0x00010be971c0(param_1,param_2,4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105944834; end: 105944927; -[SCFideliusManager _reuseAndUpload:] */

void FUN_105944834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x0001000ba800(&UNK_10f310957);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c085320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010c19b7a0(param_1,param_2,2);
    func_0x00010bde1240(param_1);
    func_0x00010be1a9e0(param_1,param_2,param_3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    FUN_105949cfc(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b7a0(param_1,param_2,9);
    func_0x00010bde14a0(param_1,param_2,uVar3,param_3);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105944928; end: 10594495f; -[SCFideliusManager _shouldReuseAndUploadOnWarmStart] */

void FUN_105944928(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 100.0;
  func_0x00010bfb2cc0(0x42c80000,*(undefined8 *)(param_1 + 0xb0),param_2,
                      &PTR____CFConstantStringClassReference_110e10398,0);
                    /* WARNING: Could not recover jumptable at 0x00010c11f190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)fVar1,PTR_PTR_1126c0388,PTR_s_randomEventSampling__112625680);
  return;
}



/* Entry: 105944960; end: 105944b8f; -[SCFideliusManager getCurrentIdentityFullReadySync] */

void FUN_105944960(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = &UNK_10f310979;
  func_0x0001000ba800(&UNK_10f310979);
  uVar2 = 0;
  _dispatch_time(0,10000000000);
  lVar3 = *(long *)(param_1 + 0x78);
  _dispatch_semaphore_wait(lVar3,uVar2);
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar3 = param_1;
      func_0x00010bfac5e0();
      if (lVar3 == 5) {
        uVar2 = *(undefined8 *)(param_1 + 0xb8);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126bd088;
        func_0x00010bfac5e0(param_1);
        func_0x00010c0d4fc0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a77e0(uVar2);
        _objc_release(puVar4);
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        _objc_retain(uVar2);
        goto LAB_105944b50;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0xb8);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126bd088;
        func_0x00010bfac5e0(param_1);
        func_0x00010c0d4fc0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a77e0(uVar2);
        goto LAB_105944b3c;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bd088;
    func_0x00010bfac5e0(param_1);
    func_0x00010c0d4fc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a77e0(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bd088;
    func_0x00010bfac5e0(param_1);
    func_0x00010c0d4fc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a77e0(uVar2);
  }
LAB_105944b3c:
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = 0;
LAB_105944b50:
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105944b90; end: 105944f47; -[SCFideliusManager registerCurrentUserKeyWithServer:] */

void FUN_105944b90(long param_1,ulong param_2,long param_3)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar20 = &UNK_10f310a06;
  func_0x0001000ba800();
  lVar1 = param_1;
  func_0x00010c0d4de0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c0e3ee0(param_3);
    puVar13 = *(undefined **)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR_PTR_1126bd088;
    func_0x00010c0d4fe0(PTR_PTR_1126bd088);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7580(puVar13);
    _objc_release(puVar21);
  }
  else {
    puVar13 = PTR_PTR_1126c05e8;
    _objc_alloc();
    lVar2 = lVar1;
    func_0x00010c085320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf19880(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1142a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf19880(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf19880(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c11a4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0(lVar1);
    lVar9 = lVar1;
    func_0x00010bfdebe0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020660();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar21 = PTR_PTR_1126c0388;
    puVar10 = puVar13;
    func_0x00010bfdebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar12;
    func_0x00010bf70640();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010c0b7460(puVar21);
    _objc_release(uVar17);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(param_3);
    _objc_release(param_3);
  }
  _objc_release(puVar13);
  _objc_release(lVar1);
  func_0x0001000e2a84(puVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(0);
  __Unwind_Resume();
  _objc_terminate();
  _objc_retain(param_2);
  uVar14 = param_2;
  func_0x00010c085320();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar14 = param_2;
  func_0x00010bfded60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar16 = uVar14;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c085320(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar15;
  func_0x00010c0720c0();
  if ((uVar14 & 1) == 0) {
    _objc_release(uVar17);
  }
  else {
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfdebe0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar16;
    func_0x00010c0720c0();
    _objc_release(uVar12);
    _objc_release(uVar17);
    if ((int)uVar14 != 0) {
      puVar21 = PTR_PTR_1126c05c0;
      _objc_alloc(PTR_PTR_1126c05c0);
      uVar18 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010bf19880(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar18;
      func_0x00010c11a480();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010bf19880(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar19;
      func_0x00010c1142a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298be0(*(undefined8 *)(param_3 + 0x20));
      func_0x00010c03bc20(puVar21);
      _objc_release(uVar12);
      _objc_release(uVar19);
      _objc_release(uVar17);
      _objc_release(uVar18);
      func_0x00010c0e6c80(*(undefined8 *)(param_3 + 0x28));
      puVar20 = *(undefined **)(*(long *)(param_3 + 0x30) + 0xb8);
      func_0x00010c269d40(puVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126bd088;
      func_0x00010c0d4fe0(PTR_PTR_1126bd088);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac7c0(puVar20);
      _objc_release(puVar13);
      goto LAB_105945190;
    }
  }
  func_0x00010c0e3ee0(*(undefined8 *)(param_3 + 0x28));
  puVar21 = *(undefined **)(*(long *)(param_3 + 0x30) + 0xb8);
  func_0x00010c269d40(puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126bd088;
  func_0x00010c0d4fe0(PTR_PTR_1126bd088);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac7c0(puVar21);
LAB_105945190:
  _objc_release(puVar20);
  _objc_release(puVar21);
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 105944f48; end: 1059451c3;  */

void FUN_105944f48(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c085320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfded60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c085320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    _objc_release(uVar4);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfdebe0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((int)uVar1 != 0) {
      puVar10 = PTR_PTR_1126c05c0;
      _objc_alloc(PTR_PTR_1126c05c0);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf19880(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c11a480();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf19880(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c1142a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298be0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c03bc20(puVar10);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar6);
      func_0x00010c0e6c80(*(undefined8 *)(param_1 + 0x28));
      puVar8 = *(undefined **)(*(long *)(param_1 + 0x30) + 0xb8);
      func_0x00010c269d40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bd088;
      func_0x00010c0d4fe0(PTR_PTR_1126bd088);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac7c0(puVar8);
      _objc_release(puVar9);
      goto LAB_105945190;
    }
  }
  func_0x00010c0e3ee0(*(undefined8 *)(param_1 + 0x28));
  puVar10 = *(undefined **)(*(long *)(param_1 + 0x30) + 0xb8);
  func_0x00010c269d40(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126bd088;
  func_0x00010c0d4fe0(PTR_PTR_1126bd088);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac7c0(puVar10);
LAB_105945190:
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059451c4; end: 10594523f;  */

void FUN_1059451c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0e3ee0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd088;
  func_0x00010c0d4fe0(PTR_PTR_1126bd088,param_2,0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac7c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e10b18,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105945240; end: 105945313; -[SCFideliusManager resyncBetaIfNecessary:] */

void FUN_105945240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f310a9d;
  func_0x0001000ba800(&UNK_10f310a9d);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105945314;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_70);
  _objc_release(uStack_48);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105945314; end: 10594547f;  */

void FUN_105945314(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfac5e0();
  if (lVar2 == 10) {
    return;
  }
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  if (uVar3 == 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bd088;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfac5e0(uVar6);
    func_0x00010c0d4fc0(puVar7,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    uVar9 = 9999;
    bVar1 = false;
  }
  else {
    func_0x00010bf19880();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11a4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar8 & 1) == 0) {
      func_0x00010be85f40(*(undefined8 *)(param_1 + 0x20));
    }
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bd088;
    uVar9 = (uint)uVar8 ^ 1;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfac5e0(uVar6);
    func_0x00010c0d4fc0(puVar7,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bfac5e0(lVar2);
    bVar1 = lVar2 == 5;
  }
  func_0x00010c0af360(uVar5,param_2,uVar8,uVar9,puVar7,bVar1);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105945480; end: 105945487; -[SCFideliusManager performer] */

undefined8 FUN_105945480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105945488; end: 1059454b7; -[SCFideliusManager setPerformer:] */

void FUN_105945488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059454b8; end: 1059454bf; -[SCFideliusManager keyProviderPerformer] */

undefined8 FUN_1059454b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1059454c0; end: 1059454ef; -[SCFideliusManager setKeyProviderPerformer:] */

void FUN_1059454c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059454f0; end: 1059454f7; -[SCFideliusManager userDatabaseManager] */

undefined8 FUN_1059454f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1059454f8; end: 105945527; -[SCFideliusManager setUserDatabaseManager:] */

void FUN_1059454f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105945528; end: 10594552f; -[SCFideliusManager snapchatterServices] */

undefined8 FUN_105945528(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105945530; end: 10594555f; -[SCFideliusManager setSnapchatterServices:] */

void FUN_105945530(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105945560; end: 105945567; -[SCFideliusManager grpcFideliusIdentityService] */

undefined8 FUN_105945560(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105945568; end: 105945597; -[SCFideliusManager setGrpcFideliusIdentityService:] */

void FUN_105945568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105945598; end: 10594559f; -[SCFideliusManager circumstanceEngine] */

undefined8 FUN_105945598(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1059455a0; end: 1059455cf; -[SCFideliusManager setCircumstanceEngine:] */

void FUN_1059455a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059455d0; end: 1059455d7; -[SCFideliusManager logger] */

undefined8 FUN_1059455d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1059455d8; end: 105945607; -[SCFideliusManager setLogger:] */

void FUN_1059455d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105945608; end: 10594560f; -[SCFideliusManager userPreferences] */

undefined8 FUN_105945608(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105945610; end: 105945617; -[SCFideliusManager appGroupPlistStorage] */

undefined8 FUN_105945610(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105945618; end: 105945647; -[SCFideliusManager setAppGroupPlistStorage:] */

void FUN_105945618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105945648; end: 105945773; -[SCFideliusManager .cxx_destruct] */

void FUN_105945648(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105945774; end: 1059457cb; +[SCFideliusPerformerInitializer batchExecutorPerformerWithLabelName:] */

void FUN_105945774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059457cc; end: 10594583b; +[SCFideliusPerformerInitializer loggedOutManagerPerformer] */

void FUN_1059457cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310c76);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0,0,0x18);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10594583c; end: 1059458ab; +[SCFideliusPerformerInitializer cloudKVStoreSyncPerformer] */

void FUN_10594583c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310d66);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0x18);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059458ac; end: 10594597b; -[SCFideliusReEncryptionDelegateImpl persistKeyForMessage:messageId:key:] */

undefined8
FUN_1059458ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10594597c;
  puStack_50 = &UNK_1108c0fc8;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  func_0x00010bfab320(*(undefined8 *)(param_1 + 8),param_2,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return 1;
}



/* Entry: 10594597c; end: 105945ac7;  */

void FUN_10594597c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c05f0;
  _objc_alloc(PTR_PTR_1126c05f0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0051a0(puVar1);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bf93ec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65a40(param_2);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105945ac8; end: 105945be3; -[SCFideliusReEncryptionDelegateImpl removeKeyForMessage:messageId:] */

undefined8 FUN_105945ac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105945b70;
  puStack_48 = &UNK_1108c0f60;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  func_0x00010bfab320(*(undefined8 *)(param_1 + 8),param_2,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return 1;
}



/* Entry: 105945be4; end: 105945cd7; -[SCFideliusReEncryptionDelegateImpl requestReEncryptionForMessage:messageId:reset:] */

undefined8 FUN_105945be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c05f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfe5d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c005160(puVar1,param_2,uVar2,param_4);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c0600;
  func_0x00010bf0a340(PTR_PTR_1126c0600,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c0608;
  _objc_alloc(PTR_PTR_1126c0608);
  func_0x00010c03ff80();
  func_0x00010c134f00(*(undefined8 *)(param_1 + 0x10),param_2,puVar4,
                      &PTR____CFConstantStringClassReference_110de9e38);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 105945cd8; end: 105945d07; -[SCFideliusReEncryptionDelegateImpl .cxx_destruct] */

void FUN_105945cd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105945d08; end: 105945e8f; +[SCFideliusRecryptUtils makeMeshRecryptAssistantRequest:grpcFideliusRecryptService:circumstanceEngine:hashedPublicKey:successCallback:failureCallback:] */

void FUN_105945d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x0001059546d4(param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100614684();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0b5020(param_5);
  _objc_release(param_5);
  uVar3 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = 0;
  func_0x000100623bf8(0,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c124480(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105945e90; end: 105945eaf;  */

void FUN_105945e90(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105945ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105945eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105945eb0; end: 10594603f; +[SCFideliusRecryptUtils makeMeshAcknowledgeRecryptRequest:grpcFideliusRecryptService:circumstanceEngine:fideliusKeyVersion:publicKey:successCallback:failureCallback:] */

void FUN_105945eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x0001059547a0(param_6,param_7,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x000100614684();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0b5020(param_5);
  _objc_release(param_5);
  uVar3 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = 0;
  func_0x000100623bf8(0,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010beedba0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(uVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 105946040; end: 10594605f;  */

void FUN_105946040(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105946050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010594605c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105946060; end: 1059461e7; +[SCFideliusRecryptUtils makeMeshInitiateRecryptRequest:grpcFideliusRecryptService:circumstanceEngine:hashedPublicKey:successCallback:failureCallback:] */

void FUN_105946060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000105954850(param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100614684();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0b5020(param_5);
  _objc_release(param_5);
  uVar3 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = 0;
  func_0x000100623bf8(0,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c064de0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1059461e8; end: 105946207;  */

void FUN_1059461e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (param_3 != 0) {
    lVar1 = 0x20;
    param_2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000105946204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + lVar1) + 0x10))(*(long *)(param_1 + lVar1),param_2);
  return;
}



/* Entry: 105946208; end: 10594625b; +[SCFideliusRecryptUtils ackRetrySourceDictionary] */

void FUN_105946208(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c1790 != -1) {
    func_0x00010002a2fc(0x1136c1790,&PTR___NSConcreteGlobalBlock_1108c1088);
  }
  uVar1 = uRam00000001136c1788;
  _objc_retain(uRam00000001136c1788);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10594625c; end: 105946273;  */

void FUN_10594625c(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c1788;
  ppuRam00000001136c1788 = &PTR__OBJC_CLASS___NSConstantDictionary_1111749f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105946274; end: 10594635f;  */

void FUN_105946274(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c0610;
  func_0x00010c0cb140(PTR_PTR_1126c0610);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100576d08();
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c183b80(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0cb5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1c6f00(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105946360; end: 1059465c7;  */

void FUN_105946360(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfac5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010bfac5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126c0428;
      _objc_alloc_init();
      ppuVar5 = (undefined **)PTR_PTR_1126c03a0;
      func_0x00010beedae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c13f9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2050;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar1 = ppuVar6;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar6);
      _objc_release(lVar2);
      _objc_release(ppuVar5);
      func_0x00010c067fc0(ppuVar1);
      _objc_release(ppuVar1);
      func_0x00010c1edb60(puVar8);
      func_0x00010c1edbc0(puVar8);
      lVar2 = param_1;
      func_0x00010bf0a360(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      FUN_105946274();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c6f00(puVar8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c18ca60(puVar8);
      _objc_release(puVar7);
      lVar2 = param_1;
      func_0x00010bfac5a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010bfac5c0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar8);
      func_0x00010bf97ce0(lVar2);
      _objc_release(lVar2);
      _objc_release(puVar8);
      _objc_release(lVar4);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1059465c8; end: 1059467f7;  */

void FUN_1059465c8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0x7c) {
    puVar6 = PTR_PTR_1126c0388;
    func_0x00010c12c580(PTR_PTR_1126c0388);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126c0388;
  func_0x00010bff6b40(PTR_PTR_1126c0388);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0430;
  _objc_alloc_init(PTR_PTR_1126c0430);
  func_0x00010c1e5720();
  uVar5 = param_3;
  func_0x00010c122ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c1b6d20(puVar3);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126c0388;
  uVar5 = param_3;
  func_0x00010c0faa60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2273c0(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126c0388;
  uVar5 = param_3;
  func_0x00010c0d4f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f52c0(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126c0388;
  uVar5 = param_3;
  func_0x00010c268120(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff6b40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2200e0(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf70920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059467f8; end: 1059468f7;  */

void FUN_1059467f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126c0618;
  _objc_retain();
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010c137fe0(param_1);
  func_0x00010c1e8ce0(puVar1,param_2,uVar2);
  puVar3 = PTR_PTR_1126c0610;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13f740(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059468fc;
  puStack_40 = &UNK_1108c10f8;
  puStack_38 = puVar3;
  _objc_retain(puVar3);
  func_0x00010c0bff40(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108c10d8,&puStack_58);
  _objc_release(uVar2);
  func_0x00010c1c6f00(puVar1,param_2,puVar3);
  _objc_release(puStack_38);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059468f8; end: 1059468fb;  */

void FUN_1059468f8(void)

{
  return;
}



/* Entry: 1059468fc; end: 105946a0b;  */

void FUN_1059468fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c057e80();
  puVar3 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000100576d08();
  if ((int)puVar4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c183b80(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  func_0x00010c0cb5a0(param_2);
  func_0x00010c1c6f00(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  return;
}


