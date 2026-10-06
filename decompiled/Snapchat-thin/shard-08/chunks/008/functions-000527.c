/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065e8ce8; end: 1065e93af; -[SCRemixOperaPlugin _presentRemixWithSnapUsingPage:params:] */

void FUN_1065e8ce8(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = param_3;
  FUN_1065e93b0(param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010c247d00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e80();
    lVar7 = param_1;
    func_0x00010be0d7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar7;
    _objc_release(uVar17);
    _objc_release(puVar5);
    uVar1 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar6 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    lVar7 = *(long *)(param_1 + 0x18);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    lVar7 = *(long *)(param_1 + 0x28);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar2 = uVar1;
    func_0x00010c25a6e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c25b160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010853a0e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar6 = uVar1;
    func_0x00010c08bda0();
    FUN_1065e94bc();
    uVar8 = param_4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar5);
    uVar2 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar8);
    if (uVar2 == 0) {
      uVar9 = param_1 + 0x38;
      _objc_loadWeakRetained();
      uVar10 = uVar9;
      func_0x00010c27f040();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010c27f020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar9);
    }
    else {
      _objc_retain(uVar8);
    }
    uVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf1f3c0();
    _objc_release(uVar9);
    if ((int)uVar10 == 0) {
      puVar5 = puVar4;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126b2d20;
      func_0x00010c1298c0(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
      _objc_release(puVar13);
      puStack_b0 = puVar5;
      if ((int)uVar9 != 0) {
        puStack_b0 = PTR_PTR_1126b23b8;
        func_0x00010c258f40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      uVar18 = *(undefined8 *)(param_1 + 0x20);
      uVar17 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010bfc54a0(uVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c247de0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010c247b80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar4;
      func_0x00010c247d00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1298a0();
      uVar6 = uVar1;
      func_0x00010c15ffa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23640(uVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar5);
      _objc_release(uVar17);
      lVar7 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar7);
      lVar15 = lVar7;
      func_0x00010c29e000();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6200(lVar15);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar7);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
      _objc_release(uVar18);
      _objc_release(puStack_b0);
    }
    else {
      puVar5 = PTR_PTR_1126b5ba8;
      _objc_alloc();
      func_0x00010c0044c0();
      puVar13 = puVar5;
      func_0x00010c131ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c0748c0();
      _objc_release(puVar13);
      uVar9 = uVar1;
      func_0x00010c15ffa0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      FUN_1065ecd38(puVar5,(ulong)puVar14 & 0xffffffff,0,0,0,0,uVar9,*(undefined8 *)(param_1 + 0x68)
                    ,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar14 = puVar4;
      FUN_1065e953c(puVar4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126cbfd8;
      _objc_alloc(PTR_PTR_1126cbfd8);
      func_0x00010c03dde0();
      func_0x00010c1e9f60(puVar13);
      puVar12 = puVar13;
      func_0x00010c271be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_70,param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1065e9630;
      puStack_90 = &UNK_110848218;
      _objc_copyWeak(auStack_78,auStack_70);
      uStack_88 = uVar8;
      puStack_80 = puVar12;
      func_0x0001000d76cc("APPSTORE",&puStack_a8);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar5);
    }
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e93b0; end: 1065e94bb;  */

void FUN_1065e93b0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010be36bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126b23b0;
    _objc_opt_class(PTR_PTR_1126b23b0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar7 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1065e94bc; end: 1065e953b;  */

undefined8 FUN_1065e94bc(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 7;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1c:
  case 0x1e:
  case 0x20:
  case 0x22:
    uVar1 = 0;
    break;
  case 9:
  case 0x1b:
  case 0x21:
    return 6;
  case 10:
    uVar1 = 1;
    if (param_2 != 0) {
      uVar1 = 2;
    }
    return uVar1;
  case 0x10:
    return 9;
  case 0x14:
    return 8;
  case 0x15:
    return 3;
  case 0x19:
  case 0x23:
    return 10;
  case 0x1a:
    return 0xb;
  case 0x1d:
    return 0xe;
  case 0x1f:
    return 0xd;
  }
  return uVar1;
}



/* Entry: 1065e953c; end: 1065e962f;  */

void FUN_1065e953c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cbff8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c131e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c247de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c247b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1298a0(param_1);
  _objc_release(param_1);
  func_0x00010c03e640(0x40af400000000000,0x40b3880000000000,0x408f400000000000,puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065e9630; end: 1065e9717;  */

void FUN_1065e9630(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf23680(uVar2,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),lVar1,2,0,0,0,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    _objc_opt_class(lVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(lVar4,param_2,0,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x28),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065e9718; end: 1065e9a57; -[SCRemixOperaPlugin _presentRemixAfterTheSnapUsingPage:params:] */

void FUN_1065e9718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = param_3;
  FUN_1065e93b0(param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c247d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277e80();
  lVar5 = param_1;
  func_0x00010be0d7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar5;
  _objc_release(uVar9);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bfc54a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar8 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar7);
  uVar1 = uVar2;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c25a6e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010853a0e0();
  _objc_release(uVar8);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08bda0(uVar1);
  FUN_1065e94bc();
  uVar9 = uVar4;
  FUN_1065e953c(uVar4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1065e9a58;
  uStack_88 = 0x1065e9a68;
  uStack_80 = 0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1065e9a74;
  puStack_b8 = &UNK_110870178;
  puStack_a0 = puStack_b0;
  func_0x00010c0be4e0(uVar6);
  if (puStack_a0[5] != 0) {
    _objc_initWeak(auStack_d8,param_1);
    uVar10 = puStack_a0[5];
    _objc_copyWeak(auStack_e0,auStack_d8);
    func_0x00010c297280(uVar10);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d8);
  }
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar9);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e9a58; end: 1065e9a73;  */

void FUN_1065e9a58(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065e9a74; end: 1065e9aab;  */

void FUN_1065e9a74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065e9aac; end: 1065e9b17;  */

void FUN_1065e9aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be823a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065e9b18; end: 1065e9c4b; -[SCRemixOperaPlugin _processSnapVideoWithRemixMetadata:URL:error:] */

void FUN_1065e9b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010be7f120(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e9c4c; end: 1065e9caf;  */

void FUN_1065e9c4c(long param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 1) == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7b080();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1065e9cb0; end: 1065e9f1f; -[SCRemixOperaPlugin _presentTrimViewControllerWithAsset:completion:] */

void FUN_1065e9cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126cbfe0;
  uVar10 = param_3;
  _objc_retain(param_3);
  func_0x0001065ec3dc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x0001065ec3c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46460(0x3ff0000000000000,0x404e000000000000,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar10);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  puVar8 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar9 = PTR_PTR_1126c6738;
  uVar10 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar10);
  _objc_alloc(puVar9);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065e9f20;
  puStack_90 = &UNK_11092edb8;
  puStack_88 = puVar8;
  uStack_80 = uVar10;
  uStack_78 = param_4;
  _objc_retain(param_4);
  func_0x00010c01d380(puVar9);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1065e9fa0;
  puStack_c0 = &UNK_110841f80;
  lStack_b8 = lVar5;
  lStack_b0 = param_1;
  _objc_retain();
  func_0x000100162d98("APPSTORE",&puStack_d8);
  func_0x00010bf9d620(uVar10);
  _objc_release(lStack_b0);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(uStack_78);
  _objc_release(uVar10);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(puVar3);
  return;
}



/* Entry: 1065e9f20; end: 1065e9f9f;  */

void FUN_1065e9f20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    uStack_48 = param_4[3];
    uStack_50 = param_4[2];
    uStack_38 = param_4[5];
    uStack_40 = param_4[4];
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,&uStack_60);
  }
  return;
}



/* Entry: 1065e9fa0; end: 1065e9faf;  */

void FUN_1065e9fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f6210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pauseWithOverlay_caller__11261b2a0,0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065e9fb0; end: 1065ea363; -[SCRemixOperaPlugin _presentDirectorModeWithTrimmedTimeRange:remixMetadata:asset:] */

void FUN_1065e9fb0(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **unaff_x27;
  ulong uStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_retain(param_5);
    _objc_opt_class(puVar6);
    uVar7 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    uVar7 = uVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126aff28;
    func_0x00010c129800();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar8;
    if (uVar8 == 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar8);
    }
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126aff30;
    func_0x00010c29be40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126aff40;
    _objc_alloc();
    uStack_a8 = param_3[1];
    uStack_b0 = *param_3;
    uStack_98 = param_3[3];
    uStack_a0 = param_3[2];
    uStack_88 = param_3[5];
    uStack_90 = param_3[4];
    puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d3c0();
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126cbfe8;
    _objc_alloc();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c028ec0();
    _objc_release(puVar12);
    uVar14 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(uVar14);
    uVar13 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010bf235e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(&uStack_b0,param_1);
    uVar15 = *(undefined8 *)(param_1 + 0x40);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1065ea364;
    puStack_d0 = &UNK_110848218;
    unaff_x27 = &puStack_e8;
    _objc_copyWeak(auStack_b8,&uStack_b0);
    uStack_c8 = uVar14;
    _objc_retain(uVar13);
    uStack_c0 = uVar13;
    func_0x00010c0f7fc0(uVar15);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(&uStack_b0);
    _objc_release(uVar13);
    _objc_release(uVar14);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uStack_f8);
    _objc_release(puVar6);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 6);
  _objc_destroyWeak(&uStack_b0);
  __Unwind_Resume();
  lVar3 = param_4 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar14 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bf7f580();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar14;
    func_0x00010c076220();
    _objc_release(uVar14);
    if ((int)uVar13 != 0) {
      uVar13 = *(undefined8 *)(param_4 + 0x20);
      func_0x00010bf7f580(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94c20();
      _objc_release(uVar13);
    }
    uVar13 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bf7f580(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1065ea364; end: 1065ea40b;  */

void FUN_1065ea364(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf7f580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c076220();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf7f580(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94c20();
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf7f580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065ea40c; end: 1065ea557; -[SCRemixOperaPlugin _externalMediaItemProviderForPage:shouldMuteVideo:] */

void FUN_1065ea40c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = PTR_PTR_1126b2340;
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083240(puVar5,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar4;
  func_0x00010c0e00e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f0c1b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126cbff0;
  _objc_alloc(PTR_PTR_1126cbff0);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar8 = param_1;
  func_0x00010c22b5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fb40(puVar7,param_2,puVar5,param_4,uVar6,uVar4,uVar2,uVar1,uVar3,uVar9,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1065ea558; end: 1065ea6db; -[SCRemixOperaPlugin remixScopeDidComplete] */

void FUN_1065ea558(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0cfb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b60();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x2) {
      _objc_initWeak(auStack_38,param_1);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      uStack_50 = 0x1065ea678;
      puStack_48 = &UNK_1108434b0;
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x000100162d98("APPSTORE",&puStack_60);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 1065ea6dc; end: 1065ea833; -[SCRemixOperaPlugin captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1065ea6dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf07b60();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x2) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x1065ea7d0;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1065ea834; end: 1065ea87b; -[SCRemixOperaPlugin dismissCameraScope:] */

void FUN_1065ea834(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065ea87c; end: 1065ea8f3; -[SCRemixOperaPlugin directorModeScopeDidComplete] */

void FUN_1065ea87c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bf7f580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1065ea8f4; end: 1065ea963; -[SCRemixOperaPlugin _logRemixSelectionType:] */

void FUN_1065ea8f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cc000;
    _objc_opt_new(PTR_PTR_1126cc000);
    func_0x00010c1ea1a0();
    func_0x00010c0b2e60(lVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065ea964; end: 1065eaaaf; -[SCRemixOperaPlugin .cxx_destruct] */

void FUN_1065ea964(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 1065eaab0; end: 1065eab9f;  */

void FUN_1065eaab0(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126cc008;
  _objc_alloc(PTR_PTR_1126cc008);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065eaba0;
  puStack_50 = &UNK_11092ede8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c03de00(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065eaba0; end: 1065eac1f;  */

void FUN_1065eaba0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf57600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065eac20; end: 1065eb077; -[SCRemixOperaPluginEntryPoint createOperaRemixPlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065eac20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
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
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uStack_100;
  
  puVar1 = PTR_PTR_1126cc018;
  _objc_alloc();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11274b914;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar13;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11274b918;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11274b91c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar15;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11274b920;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar16;
  func_0x00010bf21e60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11274b924;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar17;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11274b928;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar18;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11274b92c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar19;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11274b934;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar20;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_100 = 0;
    lVar21 = 0;
  }
  else {
    uStack_100 = param_1 + _DAT_11274b930;
    _objc_loadWeakRetained();
    lVar21 = param_1 + _DAT_11274b93c;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar21;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
    lVar26 = 0;
    lVar22 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11274b940;
    _objc_loadWeakRetained();
    lVar27 = param_1 + _DAT_11274b944;
    _objc_loadWeakRetained();
    lVar22 = param_1 + _DAT_11274b948;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar22;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11274b938;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar23;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    lVar25 = 0;
    lVar30 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar24 = 0;
  }
  else {
    uVar28 = *(undefined8 *)(param_1 + _DAT_11274b954);
    _objc_retain(uVar28);
    lVar30 = param_1 + _DAT_11274b94c;
    _objc_loadWeakRetained();
    uVar29 = *(undefined8 *)(param_1 + _DAT_11274b958);
    _objc_retain(uVar29);
    lVar25 = param_1 + _DAT_11274b95c;
    _objc_loadWeakRetained();
    uVar24 = *(undefined8 *)(param_1 + _DAT_11274b960);
  }
  func_0x00010c05d200(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,uStack_100,
                      lVar10,lVar26,lVar27,lVar11,lVar12,uVar28,lVar30,uVar29,lVar25,uVar24);
  _objc_release(uVar29);
  _objc_release(lVar25);
  _objc_release(lVar30);
  _objc_release(uVar28);
  _objc_release(lVar12);
  _objc_release(lVar23);
  _objc_release(lVar11);
  _objc_release(lVar22);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar10);
  _objc_release(lVar21);
  _objc_release(uStack_100);
  _objc_release(lVar9);
  _objc_release(lVar20);
  _objc_release(lVar8);
  _objc_release(lVar19);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar5);
  _objc_release(lVar16);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(lVar14);
  _objc_release(lVar2);
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065eb078; end: 1065eb0bb; -[SCRemixOperaPluginEntryPoint createOperaAIRemixPlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065eb078(void)

{
  _objc_alloc(PTR_PTR_1126cc020);
  func_0x00010bfefb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065eb0bc; end: 1065eb1f7; -[SCRemixOperaPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065eb0bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b964,0);
  _objc_storeStrong(param_1 + _DAT_11274b960,0);
  _objc_destroyWeak(param_1 + _DAT_11274b95c);
  _objc_storeStrong(param_1 + _DAT_11274b958,0);
  _objc_storeStrong(param_1 + _DAT_11274b954,0);
  _objc_storeStrong(param_1 + _DAT_11274b950,0);
  _objc_destroyWeak(param_1 + _DAT_11274b94c);
  _objc_destroyWeak(param_1 + _DAT_11274b948);
  _objc_destroyWeak(param_1 + _DAT_11274b944);
  _objc_destroyWeak(param_1 + _DAT_11274b940);
  _objc_destroyWeak(param_1 + _DAT_11274b93c);
  _objc_destroyWeak(param_1 + _DAT_11274b938);
  _objc_destroyWeak(param_1 + _DAT_11274b934);
  _objc_destroyWeak(param_1 + _DAT_11274b930);
  _objc_destroyWeak(param_1 + _DAT_11274b92c);
  _objc_destroyWeak(param_1 + _DAT_11274b928);
  _objc_destroyWeak(param_1 + _DAT_11274b924);
  _objc_destroyWeak(param_1 + _DAT_11274b920);
  _objc_destroyWeak(param_1 + _DAT_11274b91c);
  _objc_destroyWeak(param_1 + _DAT_11274b918);
  _objc_destroyWeak(param_1 + _DAT_11274b914);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b910);
  return;
}



/* Entry: 1065eb1f8; end: 1065eb2a3; -[SCRemixOperaPluginProvider initWithRemixProviderBlock:aiRemixProviderBlock:] */

undefined1 *
FUN_1065eb1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065eb2a4; end: 1065eb2af; -[SCRemixOperaPluginProvider createRemixOperaPlugin] */

void FUN_1065eb2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001065eb2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 1065eb2b0; end: 1065eb2bb; -[SCRemixOperaPluginProvider createAIRemixOperaPlugin] */

void FUN_1065eb2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001065eb2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1065eb2bc; end: 1065eb2eb; -[SCRemixOperaPluginProvider .cxx_destruct] */

void FUN_1065eb2bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065eb2ec; end: 1065eb377; -[SCRemixOperaPromptChoiceView initWithImage:title:] */

undefined1 *
FUN_1065eb2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2038;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bdf4500(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065eb378; end: 1065eb3c7; -[SCRemixOperaPromptChoiceView doesContainGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065eb378(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c09ef00(param_3,param_2,param_1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11274b970));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1065eb3c8; end: 1065eb50f; -[SCRemixOperaPromptChoiceView _createSubviewsWithImage:title:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065eb3c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01bf60();
  _objc_release(param_3);
  lVar3 = (long)_DAT_11274b970;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11274b974;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be5b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__makeConstraints_112574768);
  return;
}



/* Entry: 1065eb510; end: 1065eb7ab; -[SCRemixOperaPromptChoiceView _makeConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065eb510(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11274b970;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11274b974;
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar17);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + _DAT_11274b974,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_11274b970,0);
  return;
}



/* Entry: 1065eb7ac; end: 1065eb7eb; -[SCRemixOperaPromptChoiceView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065eb7ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b974,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b970,0);
  return;
}



/* Entry: 1065eb7ec; end: 1065eb86f; -[SCRemixOperaPromptView initWithHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1065eb7ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f2040;
  uStack_40 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274b978) = param_1;
    func_0x00010bdf44e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1065eb870; end: 1065ebb57; -[SCRemixOperaPromptView _createSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065eb870(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar6 = (long)_DAT_11274b97c;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x0001065ec37c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar5,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar6),param_2,5);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar6),param_2,1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar8 = (long)_DAT_11274b980;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x0001065ec394();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar5,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar8),param_2,0x14);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar8),param_2,1);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar8));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  puVar1 = PTR_PTR_1126cc028;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e56a58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0001065ec364();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c3e0(puVar1,param_2,puVar2,puVar3);
  lVar9 = (long)_DAT_11274b984;
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
  puVar1 = PTR_PTR_1126cc028;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e56a78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0001065ec3ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c3e0(puVar1,param_2,puVar2,puVar3);
  lVar7 = (long)_DAT_11274b988;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1,param_2,puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar9));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
  func_0x00010be5b720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065ebb58; end: 1065ec22f; -[SCRemixOperaPromptView _makeConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065ebb58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined *puVar46;
  ulong uVar47;
  undefined8 uVar48;
  undefined *puVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lStack_108;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49420(*(undefined8 *)(param_1 + _DAT_11274b978));
  _objc_retainAutoreleasedReturnValue();
  lVar51 = (long)_DAT_11274b97c;
  uVar4 = *(undefined8 *)(param_1 + lVar51);
  lStack_108 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar51);
  uStack_100 = uVar48;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar51);
  uStack_f8 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar51);
  uStack_f0 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493c0(0x4035000000000000,uVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar50 = (long)_DAT_11274b980;
  uVar14 = *(undefined8 *)(param_1 + lVar50);
  uStack_e8 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar50);
  uStack_e0 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar50);
  uStack_d8 = uVar19;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar50);
  uStack_d0 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar51);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar22;
  func_0x00010bf493c0(0x4008000000000000,uVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  lVar52 = (long)_DAT_11274b984;
  uVar25 = *(undefined8 *)(param_1 + lVar52);
  uStack_c8 = uVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,lVar51);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar52);
  uStack_c0 = uVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_11274b988;
  uVar28 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar27;
  func_0x00010bf493a0(uVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar52);
  uStack_b8 = uVar29;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493a0(uVar30,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar52);
  uStack_b0 = uVar32;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar50);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493c0(0x4034000000000000,uVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar52);
  uStack_a8 = uVar35;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar36;
  func_0x00010bf493c0(0xc040000000000000,uVar36,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_1 + lVar53);
  uStack_a0 = uVar38;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar39;
  func_0x00010bf493a0(uVar39,param_2,lVar52);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar53);
  uStack_98 = uVar40;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar50);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar41;
  func_0x00010bf493c0(0x4034000000000000,uVar41,param_2,uVar42);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + lVar53);
  uStack_90 = uVar43;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar44;
  func_0x00010bf493c0(0xc040000000000000,uVar44,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar46 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar45;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_108,0x11);
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar46;
  func_0x00010beef8c0(puVar1,param_2,puVar46);
  _objc_release(puVar46);
  _objc_release(uVar45);
  _objc_release(param_1);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(lVar52);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(lVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(lVar51);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar48);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar49);
  uVar47 = *(ulong *)(lVar2 + _DAT_11274b984);
  func_0x00010bf87920(uVar47,param_2,puVar49);
  if ((uVar47 & 1) == 0) {
    uVar48 = *(undefined8 *)(lVar2 + _DAT_11274b988);
    func_0x00010bf87920(uVar48,param_2,puVar49);
    if ((int)uVar48 == 0) goto LAB_1065ec2b0;
  }
  lVar2 = lVar2 + _DAT_11274b98c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf7ae00();
  _objc_release(lVar2);
LAB_1065ec2b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar49);
  return;
}



/* Entry: 1065ec230; end: 1065ec2c3; -[SCRemixOperaPromptView _tappedPromptView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065ec230(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11274b984);
  func_0x00010bf87920(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274b988);
    func_0x00010bf87920(uVar2,param_2,param_3);
    if ((int)uVar2 == 0) goto LAB_1065ec2b0;
  }
  param_1 = param_1 + _DAT_11274b98c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7ae00();
  _objc_release(param_1);
LAB_1065ec2b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065ec2c4; end: 1065ec2e3; -[SCRemixOperaPromptView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065ec2c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274b98c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065ec2e4; end: 1065ec2f7; -[SCRemixOperaPromptView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065ec2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274b98c,param_3);
  return;
}



/* Entry: 1065ec2f8; end: 1065ec363; -[SCRemixOperaPromptView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065ec2f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b98c);
  _objc_storeStrong(param_1 + _DAT_11274b988,0);
  _objc_storeStrong(param_1 + _DAT_11274b984,0);
  _objc_storeStrong(param_1 + _DAT_11274b980,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b97c,0);
  return;
}



/* Entry: 1065ec364; end: 1065ec40b;  */

void FUN_1065ec364(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e56a98;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e56a98,
                      &PTR____CFConstantStringClassReference_110e56ab8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1065ec40c; end: 1065ec6ef;  */

void FUN_1065ec40c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar4 = param_1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar3 == 0) {
      lVar4 = 0;
      goto LAB_1065ec688;
    }
  }
  else {
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  lVar4 = param_1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if (lVar2 == 0) {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1065ec6f0;
    uStack_80 = 0x1065ec700;
    lStack_78 = 0;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_1065ec6f0;
    uStack_b0 = 0x1065ec700;
    uStack_a8 = 0;
    lVar4 = param_1;
    func_0x00010c290fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(param_2);
    func_0x00010c0c12a0(lVar1);
    _objc_release(lVar1);
    _objc_release(lVar4);
    lVar4 = puStack_c8[5];
    if (lVar4 == 0) {
LAB_1065ec640:
      lVar4 = puStack_98[5];
      _objc_retain(lVar4);
    }
    else {
      func_0x00010901d7c4();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) goto LAB_1065ec640;
    }
    _objc_release(param_2);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    lVar1 = lStack_78;
  }
  else {
    lVar1 = param_1;
    func_0x00010c290fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
LAB_1065ec688:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1065ec6f0; end: 1065ec707;  */

void FUN_1065ec6f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065ec708; end: 1065ec8e7;  */

void FUN_1065ec708(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x23;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  if (lVar4 == 0) {
    unaff_x23 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = unaff_x23;
    func_0x00010bfebfc0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(lVar3);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar1);
  if (lVar4 == 0) {
    _objc_release(lVar3);
    _objc_release(unaff_x23);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ec8e8; end: 1065eccaf;  */

void FUN_1065ec8e8(undefined8 param_1,undefined8 param_2,double param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar18 = param_4;
  func_0x00010c0748c0();
  if ((int)lVar18 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_4;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar19 = lVar18;
  func_0x00010c08fa60();
  if (lVar19 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar19;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    lVar19 = lVar1;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar19;
    func_0x00010c08fa60();
    _objc_release(lVar19);
    lVar19 = lVar1;
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf1ecc0(0x4033000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126b15c8;
      _objc_retain(param_6);
      _objc_retain(param_7);
      _objc_alloc();
      uVar5 = param_6;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_6);
      uVar6 = param_7;
      func_0x00010c2946e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_7;
      func_0x00010bf85f80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_7;
      func_0x00010c2946e0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_7;
      func_0x00010c2946e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      uVar16 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05c0e0();
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      func_0x000108ef2eb4(param_3 + -60.0 + -17.0 + -5.0,lVar1,puVar3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      func_0x00010bfcef60(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar18);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar19);
  return;
}



/* Entry: 1065eccb0; end: 1065ecd37;  */

void FUN_1065eccb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char in_stack_00000018;
  
  FUN_1065ecd38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2220();
  if (in_stack_00000018 != '\0') {
    func_0x00010c1e6d00(param_1,param_2,0);
    func_0x00010c1cba40(param_1,param_2,0x2b);
  }
  uVar1 = param_1;
  func_0x00010c271be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065ecd38; end: 1065ed2d7;  */

void FUN_1065ecd38(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lStack_148;
  long lStack_118;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar5 = param_1;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08bda0();
  func_0x000108435ff0();
  _objc_release(lVar5);
  puVar1 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  if (param_2 == 1) {
    lVar5 = param_1;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = lVar5;
    FUN_1065ec8e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lStack_148 = 0;
  }
  else if (param_2 == 0) {
    lVar5 = param_1;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = lVar5;
    FUN_1065ec40c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lStack_148 = lVar3;
    func_0x000108437e88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar5);
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1065ec6f0;
    uStack_88 = 0x1065ec700;
    uStack_80 = 0;
    lVar5 = param_1;
    func_0x00010c131ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    _objc_retain(param_8);
    func_0x00010c0c12a0(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar5);
    lVar5 = puStack_a0[5];
    if (lVar5 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010901cdb0(lVar5,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(param_8);
    _objc_release(param_8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  else {
    lStack_118 = 0;
    lStack_148 = 0;
    lVar6 = 0;
  }
  lVar5 = lVar6;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c1eb300(puVar1);
    func_0x00010c1eb080(puVar1);
    func_0x00010c1eb2e0(puVar1);
    func_0x00010c1af8a0(puVar1);
    func_0x00010c1eb220(puVar1);
    func_0x00010c1b2900(puVar1);
    func_0x00010c1d86a0(puVar1);
    func_0x00010c0f1ce0(puVar1);
    func_0x00010c1b3e00(puVar1);
    func_0x00010c1b13e0(puVar1);
    func_0x00010c1eb2c0(puVar1);
    func_0x00010c1833c0(puVar1);
    func_0x00010c176a00(puVar1);
    lVar5 = param_1;
    func_0x00010c241400(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf36f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6d00(puVar1);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(lStack_148);
  _objc_release(lStack_118);
  _objc_release(lVar6);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065ed2d8; end: 1065ed47f;  */

void FUN_1065ed2d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x23;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (lVar2 == 0) {
    unaff_x23 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = unaff_x23;
    func_0x00010bfebfc0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  if (lVar2 == 0) {
    _objc_release(lVar3);
    _objc_release(unaff_x23);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ed480; end: 1065ed5ff;  */

void FUN_1065ed480(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  _objc_alloc_init(PTR_PTR_1126afca8);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c5a0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1f218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(ppuVar3);
  func_0x00010c1a7f60(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065ed600; end: 1065ed63b;  */

void FUN_1065ed600(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e56b98;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e56b98,
                      &PTR____CFConstantStringClassReference_110e56bb8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1065ed63c; end: 1065ed713;  */

void FUN_1065ed63c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c07c500();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_1;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c290fa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_1065ed6f8;
    }
  }
  uVar3 = 0;
LAB_1065ed6f8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1065ed714; end: 1065ed753;  */

bool FUN_1065ed714(long param_1)

{
  long lVar1;
  
  FUN_1065ed63c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1065ed754; end: 1065ee047;  */

void FUN_1065ed754(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  func_0x0001084365e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc030;
  _objc_alloc_init();
  lVar3 = lVar1;
  func_0x00010bf51e00(lVar1);
  func_0x00010c182ee0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0d3c80();
    func_0x00010c1bbde0(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar7 = lVar1;
  func_0x00010c269920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_1);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar8);
      }
      uVar21 = *(undefined8 *)(lVar19 * 8);
      uVar9 = uVar21;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf31ca0();
      _objc_release(uVar9);
      if ((int)uVar10 == 2) {
        func_0x00010beedca0(uVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar21;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar9);
        _objc_release(uVar21);
      }
      lVar19 = lVar19 + 1;
    } while (lVar3 != lVar19);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  lVar3 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar8 != 0) {
    lVar3 = param_1;
    func_0x00010bf4bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  puVar6 = puVar5;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar7);
  puVar5 = puVar6;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010c0d3c80(puVar6);
    func_0x00010c2208e0(puVar2);
    _objc_release(puVar5);
  }
  lVar3 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010c0d3c80();
    func_0x00010c19c140(puVar2);
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar7 != 0) {
    lVar3 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010c0d3c80();
    func_0x00010c16b3e0(puVar2);
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar7 != 0) {
    lVar3 = param_1;
    func_0x00010bf4bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bd60(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    lVar3 = param_1;
    func_0x00010bf4bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar12 = PTR_PTR_1126c0328;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar14 = puVar12;
    func_0x00010c098320();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar14);
        }
        uVar22 = *(ulong *)((long)puVar20 * 8);
        uVar15 = uVar22;
        func_0x00010bef2c20();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010c08fa60();
        _objc_release(uVar15);
        if (uVar16 != 0) {
          func_0x00010bef2c20();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar22;
          func_0x000100576d08();
          if ((uVar15 & 1) == 0) {
            _objc_release(uVar22);
          }
          else {
            puVar17 = PTR_PTR_1126afad0;
            _objc_alloc_init();
            func_0x00010c1a85a0();
            func_0x00010c1c0fe0(puVar17);
            _objc_release(uVar22);
            if (puVar17 != (undefined *)0x0) {
              func_0x00010befa120(puVar13);
              _objc_release(puVar17);
              goto LAB_1065ede50;
            }
          }
        }
        puVar20 = puVar20 + 1;
      } while (puVar5 != puVar20);
      puVar5 = puVar14;
      func_0x00010bf52a60();
    }
LAB_1065ede50:
    _objc_release(puVar14);
    func_0x00010c163780(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(0);
    _objc_release(puVar11);
  }
  lVar3 = param_1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar7 != 0) {
    lVar3 = param_1;
    func_0x00010c290fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f760(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x000108437e88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar2);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c25a6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a020();
  func_0x00010c2051c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d2c0();
  func_0x00010c1f6340(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010843715c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129760();
  func_0x00010c1e9f20(puVar2);
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126cc038;
    _objc_retain();
    _objc_alloc_init(puVar2);
    lVar1 = param_1;
    func_0x00010c25b200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20db00(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x0001084369dc(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17b920(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c08bda0(param_1);
    _objc_release(param_1);
    func_0x000108435ff0(lVar1);
    func_0x00010c205be0(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065ee048; end: 1065ee127;  */

void FUN_1065ee048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc038;
  _objc_retain();
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010c25b200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c259cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x0001084369dc(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b920(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08bda0(param_1);
  _objc_release(param_1);
  func_0x000108435ff0(uVar2);
  func_0x00010c205be0(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065ee128; end: 1065ee2b3;  */

void FUN_1065ee128(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  func_0x0001084365e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c242d00();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c242ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126cc040;
    _objc_alloc(PTR_PTR_1126cc040);
    lVar1 = lVar2;
    func_0x00010bfdb2c0();
    if ((int)lVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar2;
      func_0x00010c135700(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = lVar2;
    func_0x00010bfdcc80();
    if ((int)lVar3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar2;
      func_0x00010c259cc0(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = lVar2;
    func_0x00010c136a20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      func_0x00010c01eae0(puVar7,param_2,lVar6,lVar8,0);
    }
    else {
      lVar5 = lVar2;
      func_0x00010c136a20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01eae0(puVar7,param_2,lVar6,lVar8,lVar5);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    if ((int)lVar3 != 0) {
      _objc_release(lVar8);
    }
    if ((int)lVar1 != 0) {
      _objc_release(lVar6);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1065ee2b4; end: 1065ee3d3;  */

void FUN_1065ee2b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar3 = param_1;
  func_0x00010c25b200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  lVar3 = param_1;
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf36f80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar1 = param_1;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        lVar1 = param_1;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c08fa60();
        _objc_release(lVar1);
        if (lVar2 == 0) {
          lVar3 = 0;
        }
        else {
          func_0x00010c259cc0(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bf36f80();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1065ee3d4; end: 1065ee523; -[SCContextSnapParams initWithContextData:] */

undefined8 FUN_1065ee3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b5c60;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0044c0();
  puVar2 = PTR_PTR_1126b5ba0;
  _objc_alloc(PTR_PTR_1126b5ba0);
  func_0x00010c0044c0();
  uVar3 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c25a6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar5;
  func_0x00010c25b160(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047f80(param_1,param_2,puVar1,puVar2,uVar4,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1065ee524; end: 1065ee68b; -[SCContextSnapParams initWithContextData:groupConversationIdOverride:] */

undefined8
FUN_1065ee524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b5c60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0044c0();
  puVar2 = PTR_PTR_1126b5ba0;
  _objc_alloc(PTR_PTR_1126b5ba0);
  func_0x00010c0044e0();
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c25a6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar5;
  func_0x00010c25b160(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047f80(param_1,param_2,puVar1,puVar2,uVar4,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1065ee68c; end: 1065ee81f; -[SCContextSnapParams initWithContextData:groupConversationIdOverride:replyParamsOverride:] */

undefined8
FUN_1065ee68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b5ba0;
  if (param_5 == (undefined *)0x0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    func_0x00010c0044e0();
    _objc_release(param_4);
  }
  else {
    _objc_retain(param_5);
    puVar1 = param_5;
  }
  puVar2 = PTR_PTR_1126b5c60;
  _objc_alloc(PTR_PTR_1126b5c60);
  func_0x00010c0044c0();
  uVar3 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c25a6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047f80(param_1,param_2,puVar2,puVar1,uVar4,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1065ee820; end: 1065eea0f; -[SCContextReplyParams initWithContextData:groupConversationIdOverride:] */

undefined8 FUN_1065ee820(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1065eea10;
  uStack_50 = 0x1065eea20;
  uStack_48 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  lVar2 = param_3;
  func_0x00010c08bda0();
  if (lVar2 != 0xf) {
    func_0x00010c08bda0(param_3);
  }
  lVar2 = param_3;
  func_0x00010bfa29a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    *(undefined1 *)(puStack_88 + 3) = 1;
    puVar1 = puStack_68;
    _objc_retain(param_4);
    uVar3 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar3);
  }
  lVar2 = param_3;
  func_0x00010c290fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a6a0(param_1);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1065eea10; end: 1065eea27;  */

void FUN_1065eea10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065eea28; end: 1065eeabf;  */

void FUN_1065eea28(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010c08fa60();
    lVar3 = param_2;
    if (lVar2 == 0) goto LAB_1065eeaa4;
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    lVar3 = param_4;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(lVar3);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = lVar3;
  _objc_release(uVar1);
LAB_1065eeaa4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065eeac0; end: 1065eeac7; -[SCContextReplyParams initWithContextData:] */

void FUN_1065eeac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0044f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithContextData_groupConvers_1125deb00,param_3,0);
  return;
}



/* Entry: 1065eeac8; end: 1065eef7b; -[SCContextSnapIdentity initWithContextData:] */

undefined8 FUN_1065eeac8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_e8;
  long lStack_d8;
  long lStack_c8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x0001084369dc();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1065eea10;
  uStack_78 = 0x1065eea20;
  uStack_70 = 0;
  lVar2 = param_3;
  func_0x00010bfa29a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22e6a0();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x000108436938();
  lStack_c8 = param_3;
  lVar4 = param_3;
  if ((int)lVar2 == 0) {
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = lVar4;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c0d21c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      func_0x00010c25b200();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = param_3;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_c8 = lVar3;
      func_0x00010c0d21c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar7);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720();
    _objc_release(lVar2);
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = lVar4;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  lVar2 = param_3;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c25b1c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar7 = param_3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c25b160();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar5;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar7);
  }
  else {
    _objc_retain(lVar4);
    lStack_d8 = lVar4;
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c08fa60();
  lVar2 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c08fa60();
  func_0x00010c08bda0(param_3);
  lVar3 = param_3;
  func_0x00010c25a6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c082620();
  func_0x00010c08fa60();
  lVar5 = param_3;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff0c0(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  if (lVar4 != 0) {
    _objc_release(lVar7);
  }
  _objc_release(lVar2);
  _objc_release(lStack_d8);
  _objc_release(lStack_e8);
  _objc_release(lStack_c8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1065eef7c; end: 1065eefb3;  */

void FUN_1065eef7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065eefb4; end: 1065ef083; -[SCContextSnapReplyInfo initWithInviteId:storyId:storyName:] */

undefined1 *
FUN_1065eefb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f2048;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065ef084; end: 1065ef08b; -[SCContextSnapReplyInfo inviteId] */

undefined8 FUN_1065ef084(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1065ef08c; end: 1065ef0bb; -[SCContextSnapReplyInfo setInviteId:] */

void FUN_1065ef08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065ef0bc; end: 1065ef0c3; -[SCContextSnapReplyInfo storyId] */

undefined8 FUN_1065ef0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1065ef0c4; end: 1065ef0f3; -[SCContextSnapReplyInfo setStoryId:] */

void FUN_1065ef0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065ef0f4; end: 1065ef0fb; -[SCContextSnapReplyInfo storyName] */

undefined8 FUN_1065ef0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1065ef0fc; end: 1065ef103; -[SCContextSnapReplyInfo setStoryName:] */

void FUN_1065ef0fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1065ef104; end: 1065ef13f; -[SCContextSnapReplyInfo .cxx_destruct] */

void FUN_1065ef104(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065ef140; end: 1065ef177; -[SnapContextSnapIdentity isDirectSnap] */

void FUN_1065ef140(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c243e60();
  if ((int)uVar1 != 1) {
    func_0x00010c243e60(param_1);
  }
  return;
}



/* Entry: 1065ef178; end: 1065ef283; -[SCContextHeroCardPosterAvatarMetadata initWithProfileLogoUrl:bitmojiAvatarId:bitmojiSelfieId:userId:] */

undefined1 *
FUN_1065ef178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f2050;
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
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065ef284; end: 1065ef2a7; -[SCContextHeroCardPosterAvatarMetadata copyWithZone:] */

undefined8 FUN_1065ef284(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1065ef2a8; end: 1065ef333; -[SCContextHeroCardPosterAvatarMetadata hash] */

undefined8 * FUN_1065ef2a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1065ef3e4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1065ef3f0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_1065ef3f0;
            }
            goto LAB_1065ef3e4;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1065ef3f0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1065ef334; end: 1065ef40b; -[SCContextHeroCardPosterAvatarMetadata isEqual:] */

long FUN_1065ef334(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1065ef3e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1065ef3f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_1065ef3f0;
            }
            goto LAB_1065ef3e4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1065ef3f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1065ef40c; end: 1065ef413; -[SCContextHeroCardPosterAvatarMetadata profileLogoUrl] */

undefined8 FUN_1065ef40c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1065ef414; end: 1065ef41b; -[SCContextHeroCardPosterAvatarMetadata bitmojiAvatarId] */

undefined8 FUN_1065ef414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1065ef41c; end: 1065ef423; -[SCContextHeroCardPosterAvatarMetadata bitmojiSelfieId] */

undefined8 FUN_1065ef41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1065ef424; end: 1065ef42b; -[SCContextHeroCardPosterAvatarMetadata userId] */

undefined8 FUN_1065ef424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1065ef42c; end: 1065ef473; -[SCContextHeroCardPosterAvatarMetadata .cxx_destruct] */

void FUN_1065ef42c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065ef474; end: 1065ef607; -[SCContextHeroContextCardDataModel initWithCardType:priority:friendUserIdsArray:friendCount:cardAction:contextCardTitle:contextCardSubtitle:contextCardThumbnail:isLensPlusExclusive:posterAvatarMetadata:] */

undefined8 *
FUN_1065ef474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f2058;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    puVar1[5] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_11;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 1065ef608; end: 1065ef62b; -[SCContextHeroContextCardDataModel copyWithZone:] */

undefined8 FUN_1065ef608(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1065ef62c; end: 1065ef6eb; -[SCContextHeroContextCardDataModel hash] */

undefined8 * FUN_1065ef62c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_80,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1065ef80c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1065ef818;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x20);
      if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x30);
        if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x38);
          if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x40);
            if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x48);
              if ((lVar5 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x50);
                if (puVar6 != *(undefined1 **)(param_3 + 0x50)) {
                  func_0x00010c071ae0();
                  goto LAB_1065ef818;
                }
                goto LAB_1065ef80c;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1065ef818:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1065ef6ec; end: 1065ef833; -[SCContextHeroContextCardDataModel isEqual:] */

long FUN_1065ef6ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1065ef80c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1065ef818;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if (lVar3 != *(long *)(param_3 + 0x50)) {
                  func_0x00010c071ae0();
                  goto LAB_1065ef818;
                }
                goto LAB_1065ef80c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1065ef818:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1065ef834; end: 1065ef83b; -[SCContextHeroContextCardDataModel cardType] */

undefined8 FUN_1065ef834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1065ef83c; end: 1065ef843; -[SCContextHeroContextCardDataModel priority] */

undefined8 FUN_1065ef83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1065ef844; end: 1065ef84b; -[SCContextHeroContextCardDataModel friendUserIdsArray] */

undefined8 FUN_1065ef844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1065ef84c; end: 1065ef853; -[SCContextHeroContextCardDataModel friendCount] */

undefined8 FUN_1065ef84c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1065ef854; end: 1065ef85b; -[SCContextHeroContextCardDataModel cardAction] */

undefined8 FUN_1065ef854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1065ef85c; end: 1065ef863; -[SCContextHeroContextCardDataModel contextCardTitle] */

undefined8 FUN_1065ef85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1065ef864; end: 1065ef86b; -[SCContextHeroContextCardDataModel contextCardSubtitle] */

undefined8 FUN_1065ef864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1065ef86c; end: 1065ef873; -[SCContextHeroContextCardDataModel contextCardThumbnail] */

undefined8 FUN_1065ef86c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1065ef874; end: 1065ef87b; -[SCContextHeroContextCardDataModel isLensPlusExclusive] */

undefined1 FUN_1065ef874(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


