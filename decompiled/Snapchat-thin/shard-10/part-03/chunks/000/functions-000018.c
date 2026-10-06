/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d4b354; end: 107d4b3df; -[SCUnifiedActionMenuPresenter _didDismissActionMenu] */

void FUN_107d4b354(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110eba218,0,0);
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c27fda0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,0);
  return;
}



/* Entry: 107d4b3e0; end: 107d4b44b; -[SCUnifiedActionMenuPresenter _createPresentedUIContainer] */

void FUN_107d4b3e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c10f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107d4b44c; end: 107d4b463; -[SCUnifiedActionMenuPresenter delegate] */

void FUN_107d4b44c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d4b464; end: 107d4b46f; -[SCUnifiedActionMenuPresenter setDelegate:] */

void FUN_107d4b464(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 107d4b470; end: 107d4b477; -[SCUnifiedActionMenuPresenter menuActionSheet] */

undefined8 FUN_107d4b470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107d4b478; end: 107d4b4a7; -[SCUnifiedActionMenuPresenter setMenuActionSheet:] */

void FUN_107d4b478(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107d4b4a8; end: 107d4b573; -[SCUnifiedActionMenuPresenter .cxx_destruct] */

void FUN_107d4b4a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 107d4b574; end: 107d4b68f;  */

void FUN_107d4b574(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar3 = param_2;
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    _objc_release(param_3);
    _objc_release(param_2);
    param_3 = param_1;
    func_0x00010c04e840();
    _objc_release(param_1);
    _objc_release(puVar1);
    param_2 = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_retain(param_2);
    _objc_retain(puVar1);
    if ((param_3 & 1) == 0) {
      func_0x00010bf6d680(0x4030000000000000,puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf1ecc0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = puVar1;
    FUN_107d4b574(puVar1,puVar2,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d4b690; end: 107d4b957;  */

void FUN_107d4b690(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_2);
  _objc_retain(param_1);
  if ((param_3 & 1) == 0) {
    func_0x00010bf6d680(0x4030000000000000,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1ecc0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  FUN_107d4b574(param_1,puVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d4b958; end: 107d4ba6b;  */

void FUN_107d4b958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d79e0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x000107d4b8a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bff4ea0(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b4748;
  func_0x00010c26cde0(PTR_PTR_1126b4748);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d4ba6c; end: 107d4bc37;  */

void FUN_107d4ba6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000107d4b738(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b4dc0;
    _objc_alloc(PTR_PTR_1126b4dc0);
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6758,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x000108f5d5cc(ppuVar1,puVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6820(puVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  puVar2 = PTR_PTR_1126d79e8;
  _objc_alloc(PTR_PTR_1126d79e8);
  func_0x00010bff4e80();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b4748;
  func_0x00010bf25c20(PTR_PTR_1126b4748);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d4bc38; end: 107d4bf03;  */

void FUN_107d4bc38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000107d4b738(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_107d4b958();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d4bf04; end: 107d4c01f;  */

void FUN_107d4bf04(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar2;
  FUN_107d4b574(ppuVar2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  ppuVar6 = ppuVar5;
  FUN_107d4b958(ppuVar5,puVar1,1,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 107d4c020; end: 107d4c793;  */

void FUN_107d4c020(undefined *param_1,undefined *param_2,undefined **param_3,undefined **param_4,
                  undefined *param_5,int param_6,long param_7,undefined **param_8,byte param_9)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_4);
  ppuVar7 = param_4;
  if ((param_7 == 5) &&
     (ppuVar3 = param_4, func_0x00010c08fa60(),
     ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0, ppuVar3 != (undefined **)0x0)) {
    func_0x00010bcbeb30();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    ppuVar7 = ppuVar4;
  }
  puVar22 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar7;
  FUN_107d4b574(ppuVar7,puVar22,puVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar4;
  func_0x00010c0d3c80();
  _objc_release(ppuVar4);
  _objc_release(puVar5);
  if (param_7 == 5) {
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar6 = puVar5;
    func_0x000107d4cdd4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar5);
    _objc_release(puVar6);
    func_0x00010bf069e0(ppuVar3);
    _objc_release(puVar5);
    _objc_release(puVar21);
  }
  ppuVar4 = ppuVar3;
  func_0x00010bf51e00();
  _objc_release(ppuVar3);
  _objc_release(puVar22);
  _objc_release();
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar7;
  func_0x00010bfb3e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_7 < 3) {
    if (param_7 == 1) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110ea86d8;
    }
    else {
      if (param_7 == 2) {
        func_0x000107d4cdbc();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107d4c3c8;
      }
LAB_107d4c340:
      ppuVar7 = &PTR____CFConstantStringClassReference_110eba178;
    }
    func_0x00010bcbeaa8(ppuVar7,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_7 == 3) {
    ppuVar7 = param_3;
    func_0x00010c09f760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c08fa60();
    _objc_release(ppuVar7);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110eba158;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eba158,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar7 = param_3;
      func_0x00010c09f760();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (param_7 != 5) goto LAB_107d4c340;
    _objc_retain(param_8);
    ppuVar7 = param_8;
  }
LAB_107d4c3c8:
  puVar22 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  ppuVar12 = ppuVar3;
  FUN_107d4b574(ppuVar7,ppuVar3,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  dVar23 = 6.0;
  puVar22 = PTR_PTR_1126c7300;
  func_0x00010c26cce0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c72f8;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044860();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  if ((param_9 & 1) != 0) {
LAB_107d4c4a4:
    puVar21 = (undefined *)0x0;
    goto LAB_107d4c5cc;
  }
  puVar21 = param_1;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar21;
  func_0x00010bf1ae20();
  _objc_retainAutoreleasedReturnValue();
  if ((param_7 == 5) || (puVar9 != (undefined *)0x0)) {
    _objc_release();
    _objc_release(puVar21);
    func_0x00010b816218();
    dVar27 = (double)(long)(dVar23 * 2.6666666666666665) / dVar23;
    if (param_7 == 5) {
      puVar21 = param_1;
      func_0x00010bf1ac80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar21;
      func_0x00010bf1ae20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar21);
      if (puVar9 != (undefined *)0x0) goto LAB_107d4c570;
      dVar27 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
      dVar28 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
      dVar24 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
      dVar25 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    }
    else {
LAB_107d4c570:
      dVar28 = dVar27;
      dVar24 = dVar27;
      dVar25 = dVar27;
      if (param_6 == 0) {
        dVar28 = 0.0;
        dVar24 = dVar27 + dVar27;
      }
    }
    puVar21 = PTR_PTR_1126cc220;
    _objc_alloc();
  }
  else {
    puVar9 = param_1;
    func_0x00010c233ea0();
    _objc_release(puVar21);
    if (((ulong)puVar9 & 1) != 0) {
      func_0x00010b816218();
      dVar27 = (double)(long)(dVar23 * 2.6666666666666665) / dVar23;
      goto LAB_107d4c570;
    }
    puVar21 = param_1;
    func_0x00010bf1ac80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar21;
    func_0x00010bfce6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar21);
    if (puVar9 == (undefined *)0x0) goto LAB_107d4c4a4;
    puVar21 = PTR_PTR_1126cc220;
    _objc_alloc();
    dVar24 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    dVar25 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    dVar28 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    dVar27 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  dVar23 = 40.0;
  func_0x00010bff6300(0x4044000000000000,0x4044000000000000,dVar24,dVar25,dVar28,dVar27,
                      0x3ff0000000000000);
LAB_107d4c5cc:
  puVar9 = PTR_PTR_1126d79d0;
  ppuVar1 = param_4;
  if (param_7 != 5) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_alloc();
  bVar2 = param_5 != (undefined *)0x0;
  puVar13 = param_2;
  ppuVar14 = param_3;
  ppuVar16 = ppuVar1;
  puVar18 = puVar5;
  func_0x00010c049220();
  _objc_release(ppuVar1);
  _objc_release(param_2);
  puVar10 = PTR_PTR_1126b4748;
  puVar11 = puVar9;
  func_0x00010bf13380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(param_4);
  _objc_release(puVar21);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar22);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(ppuVar14);
    _objc_retain(ppuVar16);
    puVar22 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(bVar2);
    _objc_retain(puVar18);
    _objc_retain(puVar13);
    _objc_retain(puVar11);
    _objc_retain(ppuVar12);
    func_0x00010c23ba80(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    puVar6 = puVar13;
    FUN_107d4b574(puVar11,puVar13,puVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar22);
    puVar21 = puVar5;
    if (param_5 != (undefined *)0x0) {
      func_0x000108f472f8(puVar5,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar22 = puVar5;
      puVar6 = param_5;
    }
    if (ppuVar14 == (undefined **)0x0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      func_0x00010052bbec();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar22;
      func_0x00010bfb3e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      puVar22 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar14;
      puVar6 = puVar5;
      FUN_107d4b574(ppuVar14,puVar5,puVar22);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      dVar23 = 6.0;
      puVar9 = PTR_PTR_1126c7300;
      func_0x00010c26cce0(0x4018000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR_PTR_1126c72f8;
      _objc_alloc();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c044860();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(ppuVar7);
      _objc_release(puVar5);
    }
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010bf1ac80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf1ae20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar9);
    if (puVar10 == (undefined *)0x0) {
      puVar9 = PTR_PTR_1126cc220;
      _objc_alloc();
      dVar28 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
      dVar23 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
      uVar26 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
      dVar27 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    }
    else {
      func_0x00010b816218();
      dVar23 = (double)(long)(dVar23 * 2.6666666666666665) / dVar23;
      dVar28 = dVar23 + dVar23;
      puVar9 = PTR_PTR_1126cc220;
      _objc_alloc();
      uVar26 = 0;
      dVar27 = dVar23;
    }
    func_0x00010bff6300(0x4044000000000000,0x4044000000000000,dVar28,dVar23,uVar26,dVar27,
                        0x3ff0000000000000);
    puVar11 = PTR_PTR_1126d79d0;
    _objc_alloc();
    uVar26 = 0;
    uVar17 = 0;
    ppuVar7 = ppuVar12;
    puVar15 = puVar21;
    puVar19 = puVar22;
    func_0x00010c049220();
    _objc_release(bVar2);
    _objc_release(puVar18);
    _objc_release(ppuVar12);
    puVar10 = PTR_PTR_1126b4748;
    puVar13 = puVar11;
    func_0x00010bf13380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(ppuVar16);
    _objc_release(ppuVar14);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
      ___stack_chk_fail();
      puVar22 = PTR__OBJC_CLASS___UIFont_1126aec38;
      _objc_retain(uVar17);
      _objc_retain(puVar15);
      _objc_retain(ppuVar7);
      _objc_retain(puVar13);
      _objc_retain(puVar6);
      _objc_retain(param_1);
      func_0x00010bf1ecc0(0x4030000000000000,puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1;
      FUN_107d4c794(param_1,puVar6,puVar13,puVar22,ppuVar7,uVar26,puVar15,uVar17,puVar19,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      _objc_release(puVar15);
      _objc_release(ppuVar7);
      _objc_release(puVar13);
      _objc_release(puVar6);
      _objc_release(param_1);
      _objc_release(puVar22);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107d4c794; end: 107d4cb9f;  */

void FUN_107d4c794(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined *param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c23ba80(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  puVar7 = param_5;
  FUN_107d4b574(param_4,param_5,puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar14);
  puVar2 = puVar1;
  if (param_10 != (undefined *)0x0) {
    func_0x000108f472f8(puVar1,param_10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar14 = puVar1;
    puVar7 = param_10;
  }
  if (param_6 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar14;
    func_0x00010bfb3e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_6;
    puVar7 = puVar1;
    FUN_107d4b574(param_6,puVar1,puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    param_1 = 6.0;
    puVar4 = PTR_PTR_1126c7300;
    func_0x00010c26cce0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c72f8;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044860();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_2;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf1ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126cc220;
    _objc_alloc();
    dVar17 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    param_1 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    dVar16 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  else {
    func_0x00010b816218();
    param_1 = (double)(long)(param_1 * 2.6666666666666665) / param_1;
    dVar17 = param_1 + param_1;
    puVar4 = PTR_PTR_1126cc220;
    _objc_alloc();
    uVar15 = 0;
    dVar16 = param_1;
  }
  func_0x00010bff6300(0x4044000000000000,0x4044000000000000,dVar17,param_1,uVar15,dVar16,
                      0x3ff0000000000000);
  puVar5 = PTR_PTR_1126d79d0;
  _objc_alloc();
  uVar9 = 0;
  uVar11 = 0;
  uVar15 = param_3;
  puVar10 = puVar2;
  puVar12 = puVar14;
  func_0x00010c049220();
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_3);
  puVar6 = PTR_PTR_1126b4748;
  puVar8 = puVar5;
  func_0x00010bf13380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    puVar14 = PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_retain(uVar11);
    _objc_retain(puVar10);
    _objc_retain(uVar15);
    _objc_retain(puVar8);
    _objc_retain(puVar7);
    _objc_retain(param_2);
    func_0x00010bf1ecc0(0x4030000000000000,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    FUN_107d4c794(param_2,puVar7,puVar8,puVar14,uVar15,uVar9,puVar10,uVar11,puVar12,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar15);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(param_2);
    _objc_release(puVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d4cba0; end: 107d4ccbf;  */

void FUN_107d4cba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf1ecc0(0x4030000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_107d4c794(param_1,param_2,param_3,puVar1,param_4,param_5,param_6,param_7,param_8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d4ccc0; end: 107d4cdbb;  */

void FUN_107d4ccc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_2);
  FUN_107d4b690(param_1,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d79e0;
  _objc_alloc(PTR_PTR_1126d79e0);
  uVar2 = param_6;
  func_0x000107d4b8a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010bff4ea0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b4748;
  func_0x00010c26cde0(PTR_PTR_1126b4748);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d4cdbc; end: 107d4cdeb;  */

void FUN_107d4cdbc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eba198;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eba198,
                      &PTR____CFConstantStringClassReference_110eba1b8,0);
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



/* Entry: 107d4cdec; end: 107d4cf23; -[SCUnifiedActionMenuButtonItemViewModel initWithAttributedLabel:detailText:buttonIconAsset:actionModel:badgeViewModel:] */

undefined1 *
FUN_107d4cdec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fac90;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d4cf24; end: 107d4cf47; -[SCUnifiedActionMenuButtonItemViewModel copyWithZone:] */

undefined8 FUN_107d4cf24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d4cf48; end: 107d4cfdf; -[SCUnifiedActionMenuButtonItemViewModel hash] */

undefined8 * FUN_107d4cf48(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d4d0a8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d4d0b4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_107d4d0b4;
              }
              goto LAB_107d4d0a8;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d4d0b4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d4cfe0; end: 107d4d0cf; -[SCUnifiedActionMenuButtonItemViewModel isEqual:] */

long FUN_107d4cfe0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d4d0a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d4d0b4;
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
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_107d4d0b4;
              }
              goto LAB_107d4d0a8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d4d0b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d4d0d0; end: 107d4d0d7; -[SCUnifiedActionMenuButtonItemViewModel attributedLabel] */

undefined8 FUN_107d4d0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d4d0d8; end: 107d4d0df; -[SCUnifiedActionMenuButtonItemViewModel detailText] */

undefined8 FUN_107d4d0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d4d0e0; end: 107d4d0e7; -[SCUnifiedActionMenuButtonItemViewModel buttonIconAsset] */

undefined8 FUN_107d4d0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d4d0e8; end: 107d4d0ef; -[SCUnifiedActionMenuButtonItemViewModel actionModel] */

undefined8 FUN_107d4d0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d4d0f0; end: 107d4d0f7; -[SCUnifiedActionMenuButtonItemViewModel badgeViewModel] */

undefined8 FUN_107d4d0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d4d0f8; end: 107d4d14b; -[SCUnifiedActionMenuButtonItemViewModel .cxx_destruct] */

void FUN_107d4d0f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d4d14c; end: 107d4d293; -[SCUnifiedActionMenuTextItemViewModel initWithAttributedLabel:subtitle:descriptionText:shouldCenterLabel:actionModel:badgeViewModel:] */

undefined1 *
FUN_107d4d14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126fac98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d4d294; end: 107d4d2b7; -[SCUnifiedActionMenuTextItemViewModel copyWithZone:] */

undefined8 FUN_107d4d294(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d4d2b8; end: 107d4d353; -[SCUnifiedActionMenuTextItemViewModel hash] */

undefined8 * FUN_107d4d2b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107d4d42c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d4d438;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_107d4d438;
              }
              goto LAB_107d4d42c;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d4d438:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d4d354; end: 107d4d453; -[SCUnifiedActionMenuTextItemViewModel isEqual:] */

long FUN_107d4d354(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d4d42c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d4d438;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_107d4d438;
              }
              goto LAB_107d4d42c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d4d438:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d4d454; end: 107d4d45b; -[SCUnifiedActionMenuTextItemViewModel attributedLabel] */

undefined8 FUN_107d4d454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d4d45c; end: 107d4d463; -[SCUnifiedActionMenuTextItemViewModel subtitle] */

undefined8 FUN_107d4d45c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d4d464; end: 107d4d46b; -[SCUnifiedActionMenuTextItemViewModel descriptionText] */

undefined8 FUN_107d4d464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d4d46c; end: 107d4d473; -[SCUnifiedActionMenuTextItemViewModel shouldCenterLabel] */

undefined1 FUN_107d4d46c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d4d474; end: 107d4d47b; -[SCUnifiedActionMenuTextItemViewModel actionModel] */

undefined8 FUN_107d4d474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d4d47c; end: 107d4d483; -[SCUnifiedActionMenuTextItemViewModel badgeViewModel] */

undefined8 FUN_107d4d47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d4d484; end: 107d4d4d7; -[SCUnifiedActionMenuTextItemViewModel .cxx_destruct] */

void FUN_107d4d484(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d4d4d8; end: 107d4d543; +[SCUnifiedActionMenuItemViewModel avatarWithAvatarItemViewModel:] */

void FUN_107d4d4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4748;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d4d544; end: 107d4d5af; +[SCUnifiedActionMenuItemViewModel buttonWithButtonViewModel:] */

void FUN_107d4d544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4748;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d4d5b0; end: 107d4d60b; +[SCUnifiedActionMenuItemViewModel pluginWithPosition:] */

void FUN_107d4d5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b4748;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  *(undefined8 *)(puVar2 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d4d60c; end: 107d4d677; +[SCUnifiedActionMenuItemViewModel selectionWithSelectionItemViewModel:] */

void FUN_107d4d60c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4748;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d4d678; end: 107d4d6db; +[SCUnifiedActionMenuItemViewModel textWithTextViewModel:] */

void FUN_107d4d678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4748;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d4d6dc; end: 107d4d747; +[SCUnifiedActionMenuItemViewModel toggleWithToggleViewModel:] */

void FUN_107d4d6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4748;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d4d748; end: 107d4d76b; -[SCUnifiedActionMenuItemViewModel copyWithZone:] */

undefined8 FUN_107d4d748(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d4d76c; end: 107d4d813; -[SCUnifiedActionMenuItemViewModel hash] */

void FUN_107d4d76c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126faca0;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d4d814; end: 107d4d857; -[SCUnifiedActionMenuItemViewModel internalInit] */

void FUN_107d4d814(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126faca0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d4d858; end: 107d4d967; -[SCUnifiedActionMenuItemViewModel isEqual:] */

long FUN_107d4d858(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d4d940:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d4d94c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_107d4d94c;
              }
              goto LAB_107d4d940;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d4d94c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d4d968; end: 107d4dabf; -[SCUnifiedActionMenuItemViewModel matchText:button:toggle:avatar:selection:plugin:] */

void FUN_107d4d968(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_107d4da7c;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_107d4da7c;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 2) || (param_5 == 0)) goto LAB_107d4da7c;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
  }
  else if (lVar2 == 3) {
    if (param_6 == 0) goto LAB_107d4da7c;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  else if (lVar2 == 4) {
    if (param_7 == 0) goto LAB_107d4da7c;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    pcVar3 = *(code **)(param_7 + 0x10);
    lVar2 = param_7;
  }
  else {
    if ((lVar2 != 5) || (param_8 == 0)) goto LAB_107d4da7c;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar2 = param_8;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_107d4da7c:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d4dac0; end: 107d4db13; -[SCUnifiedActionMenuItemViewModel .cxx_destruct] */

void FUN_107d4dac0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d4db14; end: 107d4dbc7; -[SCUnifiedActionMenuToggleItemViewModel initWithAttributedLabel:toggleState:actionModel:] */

undefined1 *
FUN_107d4db14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126faca8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d4dbc8; end: 107d4dbeb; -[SCUnifiedActionMenuToggleItemViewModel copyWithZone:] */

undefined8 FUN_107d4dbc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d4dbec; end: 107d4dc6b; -[SCUnifiedActionMenuToggleItemViewModel hash] */

undefined8 * FUN_107d4dbec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_107d4dcfc:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d4dd08;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d4dd08;
        }
        goto LAB_107d4dcfc;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_107d4dd08:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 107d4dc6c; end: 107d4dd23; -[SCUnifiedActionMenuToggleItemViewModel isEqual:] */

long FUN_107d4dc6c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d4dcfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d4dd08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d4dd08;
        }
        goto LAB_107d4dcfc;
      }
    }
    lVar3 = 0;
  }
LAB_107d4dd08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d4dd24; end: 107d4dd2b; -[SCUnifiedActionMenuToggleItemViewModel attributedLabel] */

undefined8 FUN_107d4dd24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d4dd2c; end: 107d4dd33; -[SCUnifiedActionMenuToggleItemViewModel toggleState] */

undefined8 FUN_107d4dd2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d4dd34; end: 107d4dd3b; -[SCUnifiedActionMenuToggleItemViewModel actionModel] */

undefined8 FUN_107d4dd34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d4dd3c; end: 107d4dd6b; -[SCUnifiedActionMenuToggleItemViewModel .cxx_destruct] */

void FUN_107d4dd3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d4dd6c; end: 107d4df3f; -[SCUnifiedActionMenuAvatarItemViewModel initWithSnapchatterAvatarViewModel:snapchatterAccessoryViewModel:snapchatterMapViewModel:displayName:displayNameSubstringToTruncate:subtitle:tapActionModel:showSubtitleArrow:bodyText:] */

undefined1 *
FUN_107d4dd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126facb0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d4df40; end: 107d4df63; -[SCUnifiedActionMenuAvatarItemViewModel copyWithZone:] */

undefined8 FUN_107d4df40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d4df64; end: 107d4e023; -[SCUnifiedActionMenuAvatarItemViewModel hash] */

undefined8 * FUN_107d4df64(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d4e144:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d4e150;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_107d4e150;
                    }
                    goto LAB_107d4e144;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d4e150:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d4e024; end: 107d4e16b; -[SCUnifiedActionMenuAvatarItemViewModel isEqual:] */

long FUN_107d4e024(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d4e144:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d4e150;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_107d4e150;
                    }
                    goto LAB_107d4e144;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d4e150:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d4e16c; end: 107d4e173; -[SCUnifiedActionMenuAvatarItemViewModel snapchatterAvatarViewModel] */

undefined8 FUN_107d4e16c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d4e174; end: 107d4e17b; -[SCUnifiedActionMenuAvatarItemViewModel snapchatterAccessoryViewModel] */

undefined8 FUN_107d4e174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d4e17c; end: 107d4e183; -[SCUnifiedActionMenuAvatarItemViewModel snapchatterMapViewModel] */

undefined8 FUN_107d4e17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d4e184; end: 107d4e18b; -[SCUnifiedActionMenuAvatarItemViewModel displayName] */

undefined8 FUN_107d4e184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d4e18c; end: 107d4e193; -[SCUnifiedActionMenuAvatarItemViewModel displayNameSubstringToTruncate] */

undefined8 FUN_107d4e18c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d4e194; end: 107d4e19b; -[SCUnifiedActionMenuAvatarItemViewModel subtitle] */

undefined8 FUN_107d4e194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d4e19c; end: 107d4e1a3; -[SCUnifiedActionMenuAvatarItemViewModel tapActionModel] */

undefined8 FUN_107d4e19c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d4e1a4; end: 107d4e1ab; -[SCUnifiedActionMenuAvatarItemViewModel showSubtitleArrow] */

undefined1 FUN_107d4e1a4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d4e1ac; end: 107d4e1b3; -[SCUnifiedActionMenuAvatarItemViewModel bodyText] */

undefined8 FUN_107d4e1ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d4e1b4; end: 107d4e22b; -[SCUnifiedActionMenuAvatarItemViewModel .cxx_destruct] */

void FUN_107d4e1b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d4e22c; end: 107d4e2df; -[SCUnifiedActionMenuSelectionItemViewModel initWithLabel:isSelected:actionModel:] */

undefined1 *
FUN_107d4e22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126facb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d4e2e0; end: 107d4e303; -[SCUnifiedActionMenuSelectionItemViewModel copyWithZone:] */

undefined8 FUN_107d4e2e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d4e304; end: 107d4e37b; -[SCUnifiedActionMenuSelectionItemViewModel hash] */

undefined8 * FUN_107d4e304(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d4e40c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d4e418;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d4e418;
        }
        goto LAB_107d4e40c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d4e418:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d4e37c; end: 107d4e433; -[SCUnifiedActionMenuSelectionItemViewModel isEqual:] */

long FUN_107d4e37c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d4e40c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d4e418;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d4e418;
        }
        goto LAB_107d4e40c;
      }
    }
    lVar3 = 0;
  }
LAB_107d4e418:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d4e434; end: 107d4e43b; -[SCUnifiedActionMenuSelectionItemViewModel label] */

undefined8 FUN_107d4e434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d4e43c; end: 107d4e443; -[SCUnifiedActionMenuSelectionItemViewModel isSelected] */

undefined1 FUN_107d4e43c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d4e444; end: 107d4e44b; -[SCUnifiedActionMenuSelectionItemViewModel actionModel] */

undefined8 FUN_107d4e444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d4e44c; end: 107d4e47b; -[SCUnifiedActionMenuSelectionItemViewModel .cxx_destruct] */

void FUN_107d4e44c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d4e47c; end: 107d4e587; -[SCUnifiedActionMenuViewModel initWithHeader:title:items:footer:] */

undefined1 *
FUN_107d4e47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126facc0;
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



/* Entry: 107d4e588; end: 107d4e5ab; -[SCUnifiedActionMenuViewModel copyWithZone:] */

undefined8 FUN_107d4e588(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d4e5ac; end: 107d4e637; -[SCUnifiedActionMenuViewModel hash] */

undefined8 * FUN_107d4e5ac(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d4e6e8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d4e6f4;
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
              goto LAB_107d4e6f4;
            }
            goto LAB_107d4e6e8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d4e6f4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d4e638; end: 107d4e70f; -[SCUnifiedActionMenuViewModel isEqual:] */

long FUN_107d4e638(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d4e6e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d4e6f4;
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
              goto LAB_107d4e6f4;
            }
            goto LAB_107d4e6e8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d4e6f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d4e710; end: 107d4e717; -[SCUnifiedActionMenuViewModel header] */

undefined8 FUN_107d4e710(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d4e718; end: 107d4e71f; -[SCUnifiedActionMenuViewModel title] */

undefined8 FUN_107d4e718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d4e720; end: 107d4e727; -[SCUnifiedActionMenuViewModel items] */

undefined8 FUN_107d4e720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d4e728; end: 107d4e72f; -[SCUnifiedActionMenuViewModel footer] */

undefined8 FUN_107d4e728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d4e730; end: 107d4e777; -[SCUnifiedActionMenuViewModel .cxx_destruct] */

void FUN_107d4e730(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d4e778; end: 107d4e8cf; -[SCFriendActionScope initWithPlugInRegistry:context:snapchatter:conversationId:saveableSnapMessageId:groupConversationId:] */

undefined1 *
FUN_107d4e778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126facc8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d4e8d0; end: 107d4e8d7; -[SCFriendActionScope plugInRegistry] */

undefined8 FUN_107d4e8d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d4e8d8; end: 107d4e8df; -[SCFriendActionScope snapchatter] */

undefined8 FUN_107d4e8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d4e8e0; end: 107d4e8e7; -[SCFriendActionScope conversationId] */

undefined8 FUN_107d4e8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d4e8e8; end: 107d4e8ef; -[SCFriendActionScope context] */

undefined8 FUN_107d4e8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d4e8f0; end: 107d4e8f7; -[SCFriendActionScope saveableSnapMessageId] */

undefined8 FUN_107d4e8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d4e8f8; end: 107d4e8ff; -[SCFriendActionScope setSaveableSnapMessageId:] */

void FUN_107d4e8f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d4e900; end: 107d4e907; -[SCFriendActionScope groupConversationId] */

undefined8 FUN_107d4e900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d4e908; end: 107d4e90f; -[SCFriendActionScope setGroupConversationId:] */

void FUN_107d4e908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d4e910; end: 107d4e96f; -[SCFriendActionScope .cxx_destruct] */

void FUN_107d4e910(long param_1)

{
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


