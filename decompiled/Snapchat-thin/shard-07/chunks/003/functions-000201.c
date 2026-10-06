/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053a1efc; end: 1053a1f5f;  */

void FUN_1053a1efc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1053a1f60; end: 1053a1fcf;  */

undefined1 * FUN_1053a1f60(undefined8 param_1)

{
  undefined1 *puStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1;
  func_0x000100100fec(&stack0x00000068);
  func_0x000100100fec(&stack0x00000048);
  func_0x000100c1bab8(&stack0x00000030);
  puStack_28 = &stack0x00000018;
  func_0x000100c1baf8(&puStack_28);
  return &stack0x00000018;
}



/* Entry: 1053a1fd0; end: 1053a207b;  */

void FUN_1053a1fd0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c252d60();
  func_0x00010c0cb140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_48);
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 4) = uStack_40;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  *(undefined8 *)(param_1 + 6) = uStack_38;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(param_2);
  FUN_1053a20f4();
  return;
}



/* Entry: 1053a207c; end: 1053a20f3;  */

void FUN_1053a207c(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  puVar2 = PTR_PTR_1126b80c0;
  _objc_alloc(PTR_PTR_1126b80c0);
  piVar3 = param_1 + 2;
  iVar1 = *param_1;
  func_0x0001001011a4(piVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c340(puVar2,param_2,(long)iVar1,piVar3);
  FUN_1053a20f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053a20f4; end: 1053a20fb;  */

void FUN_1053a20f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a20fc; end: 1053a216b;  */

void FUN_1053a20fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c15eae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1053a216c; end: 1053a21cb;  */

void FUN_1053a216c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b80d0;
  _objc_alloc(PTR_PTR_1126b80d0);
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044a40(puVar1,param_2,param_1);
  FUN_1053a21cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053a21cc; end: 1053a21d7;  */

void FUN_1053a21cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a21d8; end: 1053a2293;  */

void FUN_1053a21d8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x30);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    lVar3 = lVar4;
    func_0x00010b28d494(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    _objc_release(lVar3);
  }
  func_0x00010bf51e00(puVar2);
  func_0x0001004a2120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053a2294; end: 1053a229b;  */

void FUN_1053a2294(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1053a229c; end: 1053a230b;  */

void FUN_1053a229c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c15eb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1053a230c; end: 1053a236b;  */

void FUN_1053a230c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b80e0;
  _objc_alloc(PTR_PTR_1126b80e0);
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044a60(puVar1,param_2,param_1);
  FUN_1053a236c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053a236c; end: 1053a2377;  */

void FUN_1053a236c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a2378; end: 1053a23e7;  */

void FUN_1053a2378(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c15eb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1053a23e8; end: 1053a2447;  */

void FUN_1053a23e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b80e8;
  _objc_alloc(PTR_PTR_1126b80e8);
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044a80(puVar1,param_2,param_1);
  FUN_1053a2448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053a2448; end: 1053a2453;  */

void FUN_1053a2448(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a2454; end: 1053a24c3;  */

void FUN_1053a2454(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c15eb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1053a24c4; end: 1053a2523;  */

void FUN_1053a24c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b80f0;
  _objc_alloc(PTR_PTR_1126b80f0);
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044ac0(puVar1,param_2,param_1);
  FUN_1053a2524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053a2524; end: 1053a252f;  */

void FUN_1053a2524(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a2530; end: 1053a259f;  */

void FUN_1053a2530(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c15eba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1053a25a0; end: 1053a25ab;  */

void FUN_1053a25a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a25ac; end: 1053a2733;  */

void FUN_1053a25ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c28d760(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a2734(auStack_68);
  func_0x00010bf6d000(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a2848(auStack_80);
  func_0x00010c2667e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100c1ab30(auStack_98);
  uVar2 = param_2;
  func_0x00010bf3c1c0(param_2);
  func_0x00010c294e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a2454(auStack_b0);
  func_0x000100c1b9f8(param_1,auStack_68,auStack_80,auStack_98,uVar2,auStack_b0);
  func_0x000100100fec(auStack_b0);
  func_0x0001053a33e8();
  func_0x000100100fec(auStack_98);
  func_0x0001053a3298();
  func_0x000100c1bab8(auStack_80);
  func_0x0001053a33a8();
  func_0x000100c1bb30(auStack_68);
  _objc_release(uVar1);
  func_0x0001053a31a4();
  return;
}



/* Entry: 1053a2734; end: 1053a2847;  */

void FUN_1053a2734(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_278 [40];
  long *plStack_250;
  undefined1 auStack_138 [40];
  long *plStack_110;
  
  func_0x0001053a32a0();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  puVar2 = unaff_x20;
  FUN_1053a2b4c();
  func_0x0001053a3318();
  func_0x0001053a315c();
  if (puVar2 != (undefined8 *)0x0) {
    lVar8 = *plStack_110;
    do {
      puVar9 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation();
        }
        func_0x0001053a3408();
        FUN_1053a229c(auStack_138);
        puVar3 = unaff_x20;
        func_0x0001053a2da8();
        func_0x0001053a33f0();
        func_0x0001053a3308();
        puVar9 = (undefined8 *)((long)puVar9 + 1);
        in_ZR = puVar9 == puVar2;
      } while (puVar9 < puVar2);
      func_0x0001053a315c();
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  uVar4 = 0;
  func_0x0001053a31a4();
  func_0x0001053a31a4();
  func_0x0001053a3428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001053a31a4();
    func_0x000100c1bb30();
    func_0x0001053a31a4();
    __Unwind_Resume(uVar4);
    func_0x0001053a32a0();
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    func_0x00010bf529e0();
    puVar2 = unaff_x20;
    FUN_1053a2e54();
    func_0x0001053a3318();
    func_0x0001053a315c();
    if (puVar2 != (undefined8 *)0x0) {
      lVar8 = *plStack_250;
      do {
        puVar9 = (undefined8 *)0x0;
        do {
          if (*plStack_250 != lVar8) {
            _objc_enumerationMutation();
          }
          func_0x0001053a3408();
          FUN_1053a2378(auStack_278);
          puVar3 = unaff_x20;
          func_0x0001053a30b0();
          func_0x0001053a33f0();
          func_0x0001053a3308();
          puVar9 = (undefined8 *)((long)puVar9 + 1);
          in_ZR = puVar9 == puVar2;
        } while (puVar9 < puVar2);
        func_0x0001053a315c();
        puVar2 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
    plVar5 = (long *)0x0;
    func_0x0001053a31a4();
    func_0x0001053a31a4();
    func_0x0001053a3428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001053a31a4();
      func_0x000100c1bab8();
      func_0x0001053a31a4();
      __Unwind_Resume();
      puVar6 = PTR_PTR_1126b8108;
      _objc_alloc(PTR_PTR_1126b8108);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = plVar5[1];
      for (lVar8 = *plVar5; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
        FUN_1053a230c(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        func_0x0001053a3298();
      }
      func_0x00010bf51e00(puVar7);
      func_0x0001053a3308();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = plVar5[4];
      for (lVar8 = plVar5[3]; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
        FUN_1053a23e8(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        func_0x0001053a33e8();
      }
      func_0x00010bf51e00(puVar7);
      func_0x0001053a3298();
      FUN_1053a349c(plVar5 + 6);
      _objc_retainAutoreleasedReturnValue();
      FUN_1053a24c4(plVar5 + 10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059940(puVar6);
      func_0x0001053a33a8();
      func_0x0001053a3298();
      func_0x0001053a3308();
      func_0x0001053a31a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
      return;
    }
  }
  return;
}



/* Entry: 1053a2848; end: 1053a295b;  */

void FUN_1053a2848(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [40];
  long *plStack_110;
  
  func_0x0001053a32a0();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  puVar2 = unaff_x20;
  FUN_1053a2e54();
  func_0x0001053a3318();
  func_0x0001053a315c();
  if (puVar2 != (undefined8 *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation();
        }
        func_0x0001053a3408();
        FUN_1053a2378(auStack_138);
        puVar3 = unaff_x20;
        func_0x0001053a30b0();
        func_0x0001053a33f0();
        func_0x0001053a3308();
        puVar8 = (undefined8 *)((long)puVar8 + 1);
        in_ZR = puVar8 == puVar2;
      } while (puVar8 < puVar2);
      func_0x0001053a315c();
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  plVar4 = (long *)0x0;
  func_0x0001053a31a4();
  func_0x0001053a31a4();
  func_0x0001053a3428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001053a31a4();
    func_0x000100c1bab8();
    func_0x0001053a31a4();
    __Unwind_Resume();
    puVar5 = PTR_PTR_1126b8108;
    _objc_alloc(PTR_PTR_1126b8108);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = plVar4[1];
    for (lVar7 = *plVar4; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
      FUN_1053a230c(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      func_0x0001053a3298();
    }
    func_0x00010bf51e00(puVar6);
    func_0x0001053a3308();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = plVar4[4];
    for (lVar7 = plVar4[3]; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
      FUN_1053a23e8(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      func_0x0001053a33e8();
    }
    func_0x00010bf51e00(puVar6);
    func_0x0001053a3298();
    FUN_1053a349c(plVar4 + 6);
    _objc_retainAutoreleasedReturnValue();
    FUN_1053a24c4(plVar4 + 10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059940(puVar5);
    func_0x0001053a33a8();
    func_0x0001053a3298();
    func_0x0001053a3308();
    func_0x0001053a31a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1053a295c; end: 1053a2b4b;  */

void FUN_1053a295c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126b8108;
  _objc_alloc(PTR_PTR_1126b8108);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x18);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar7 = *param_1; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
    lVar5 = lVar7;
    FUN_1053a230c(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar5);
    func_0x0001053a3298();
  }
  func_0x00010bf51e00(puVar3);
  func_0x0001053a3308();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[4] - param_1[3]) / 0x18);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[4];
  for (lVar7 = param_1[3]; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
    lVar5 = lVar7;
    FUN_1053a23e8(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,lVar5);
    func_0x0001053a33e8();
  }
  func_0x00010bf51e00(puVar4);
  func_0x0001053a3298();
  plVar6 = param_1 + 6;
  FUN_1053a349c(plVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1[9];
  param_1 = param_1 + 10;
  FUN_1053a24c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059940(puVar2,param_2,puVar3,puVar4,plVar6,(char)lVar7,param_1);
  func_0x0001053a33a8();
  func_0x0001053a3298();
  func_0x0001053a3308();
  func_0x0001053a31a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053a2b4c; end: 1053a2b93;  */

void FUN_1053a2b4c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x0001053a332c();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0001053a3488();
    if ((bool)in_CY) {
      FUN_1053a2b94();
      func_0x0001053a33f8();
      func_0x0001053a3300();
      func_0x0001053a344c();
      func_0x0001053a32bc();
      FUN_1053a2c44();
      func_0x0001053a31e8();
      return;
    }
    func_0x0001053a33cc();
    FUN_1053a2bc4();
    func_0x0001053a3464();
    func_0x0001053a33f8();
  }
  return;
}



/* Entry: 1053a2b94; end: 1053a2b9f;  */

void FUN_1053a2b94(void)

{
  func_0x0001053a344c();
  func_0x0001053a32bc();
  FUN_1053a2c44();
  func_0x0001053a31e8();
  return;
}



/* Entry: 1053a2ba0; end: 1053a2bc3;  */

void FUN_1053a2ba0(void)

{
  func_0x0001053a32bc();
  FUN_1053a2c44();
  func_0x0001053a31e8();
  return;
}



/* Entry: 1053a2bc4; end: 1053a2c1f;  */

void FUN_1053a2bc4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001053a2bfc(param_4);
  }
  func_0x0001053a338c();
  return;
}



/* Entry: 1053a2c20; end: 1053a2c43;  */

void FUN_1053a2c20(undefined8 param_1,ulong param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001053a336c();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x0001053a3268();
    lVar1 = extraout_x8_00;
  }
  uStack_48 = 1;
  FUN_1053a2c94();
  FUN_1053a2cc4(auStack_60);
  return;
}



/* Entry: 1053a2c44; end: 1053a2c93;  */

void FUN_1053a2c44(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  func_0x0001053a336c();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x0001053a3268();
    lVar1 = extraout_x8_00;
  }
  uStack_38 = 1;
  FUN_1053a2c94();
  FUN_1053a2cc4(auStack_50);
  return;
}



/* Entry: 1053a2c94; end: 1053a2cc3;  */

void FUN_1053a2c94(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a2cc4; end: 1053a2cf3;  */

long FUN_1053a2cc4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1053a2cf4(param_1);
  }
  return param_1;
}



/* Entry: 1053a2cf4; end: 1053a2d13;  */

void FUN_1053a2cf4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a2d14; end: 1053a2d6f;  */

void FUN_1053a2d14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a2d70; end: 1053a2d77;  */

void FUN_1053a2d70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    func_0x0001053a347c();
  }
  return;
}



/* Entry: 1053a2d78; end: 1053a2de3;  */

void FUN_1053a2d78(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    func_0x0001053a347c();
  }
  return;
}



/* Entry: 1053a2de4; end: 1053a2de7;  */

void FUN_1053a2de4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1053a2de8; end: 1053a2e33;  */

undefined8 FUN_1053a2de8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001053a334c();
  FUN_1053a2e34();
  func_0x0001053a33b0();
  FUN_1053a2bc4();
  func_0x0001053a322c();
  func_0x0001053a3464();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001053a33f8();
  return uVar1;
}



/* Entry: 1053a2e34; end: 1053a2e53;  */

long * FUN_1053a2e34(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  
  uVar2 = (long *)0xaaaaaaaaaaaaaa9 < param_2;
  uVar3 = param_2 == (long *)0xaaaaaaaaaaaaaaa;
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar4 = (long *)(uVar1 * 2);
    if (plVar4 < param_2 || (long)plVar4 - (long)param_2 == 0) {
      plVar4 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar4 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar4;
  }
  FUN_1053a2b94();
  func_0x0001053a332c();
  if ((bool)uVar2 && !(bool)uVar3) {
    func_0x0001053a3488();
    if ((bool)uVar2) {
      FUN_1053a2e9c();
      func_0x0001053a3400();
      func_0x0001053a3300();
      func_0x0001053a344c();
      func_0x0001053a32bc();
      FUN_1053a2f4c();
      func_0x0001053a31e8();
      return param_1;
    }
    func_0x0001053a33cc();
    FUN_1053a2ecc();
    func_0x0001053a3458();
    func_0x0001053a3400();
  }
  return param_1;
}



/* Entry: 1053a2e54; end: 1053a2e9b;  */

void FUN_1053a2e54(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x0001053a332c();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0001053a3488();
    if ((bool)in_CY) {
      FUN_1053a2e9c();
      func_0x0001053a3400();
      func_0x0001053a3300();
      func_0x0001053a344c();
      func_0x0001053a32bc();
      FUN_1053a2f4c();
      func_0x0001053a31e8();
      return;
    }
    func_0x0001053a33cc();
    FUN_1053a2ecc();
    func_0x0001053a3458();
    func_0x0001053a3400();
  }
  return;
}



/* Entry: 1053a2e9c; end: 1053a2ea7;  */

void FUN_1053a2e9c(void)

{
  func_0x0001053a344c();
  func_0x0001053a32bc();
  FUN_1053a2f4c();
  func_0x0001053a31e8();
  return;
}



/* Entry: 1053a2ea8; end: 1053a2ecb;  */

void FUN_1053a2ea8(void)

{
  func_0x0001053a32bc();
  FUN_1053a2f4c();
  func_0x0001053a31e8();
  return;
}



/* Entry: 1053a2ecc; end: 1053a2f27;  */

void FUN_1053a2ecc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001053a2f04(param_4);
  }
  func_0x0001053a338c();
  return;
}



/* Entry: 1053a2f28; end: 1053a2f4b;  */

void FUN_1053a2f28(undefined8 param_1,ulong param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001053a336c();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x0001053a3268();
    lVar1 = extraout_x8_00;
  }
  uStack_48 = 1;
  FUN_1053a2f9c();
  FUN_1053a2fcc(auStack_60);
  return;
}



/* Entry: 1053a2f4c; end: 1053a2f9b;  */

void FUN_1053a2f4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  func_0x0001053a336c();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x0001053a3268();
    lVar1 = extraout_x8_00;
  }
  uStack_38 = 1;
  FUN_1053a2f9c();
  FUN_1053a2fcc(auStack_50);
  return;
}



/* Entry: 1053a2f9c; end: 1053a2fcb;  */

void FUN_1053a2f9c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a2fcc; end: 1053a2ffb;  */

long FUN_1053a2fcc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1053a2ffc(param_1);
  }
  return param_1;
}



/* Entry: 1053a2ffc; end: 1053a301b;  */

void FUN_1053a2ffc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a301c; end: 1053a3077;  */

void FUN_1053a301c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a3078; end: 1053a307f;  */

void FUN_1053a3078(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    func_0x0001053a347c();
  }
  return;
}



/* Entry: 1053a3080; end: 1053a30eb;  */

void FUN_1053a3080(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    func_0x0001053a347c();
  }
  return;
}



/* Entry: 1053a30ec; end: 1053a30ef;  */

void FUN_1053a30ec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1053a30f0; end: 1053a313b;  */

undefined8 FUN_1053a30f0(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001053a334c();
  FUN_1053a313c();
  func_0x0001053a33b0();
  FUN_1053a2ecc();
  func_0x0001053a322c();
  func_0x0001053a3458();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001053a3400();
  return uVar1;
}



/* Entry: 1053a313c; end: 1053a315b;  */

ulong FUN_1053a313c(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    FUN_1053a2e9c();
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    uVar2 = 0xaaaaaaaaaaaaaaa;
  }
  return uVar2;
}



/* Entry: 1053a315c; end: 1053a349b;  */

void FUN_1053a315c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1053a349c; end: 1053a34fb;  */

void FUN_1053a349c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8110;
  _objc_alloc(PTR_PTR_1126b8110);
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031b20(puVar1,param_2,param_1);
  FUN_1053a34fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053a34fc; end: 1053a3507;  */

void FUN_1053a34fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a3508; end: 1053a357f; -[SCNDeltaforceUpdateCallbackCppProxy initWithCpp:] */

undefined1 * FUN_1053a3508(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7d78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1053a3b14();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001053a1f38(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053a3580; end: 1053a3617; -[SCNDeltaforceUpdateCallbackCppProxy onSuccess:] */

void FUN_1053a3580(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x0001053a3b3c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1053a43ac(auStack_48);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  func_0x000100100fec(auStack_48);
  func_0x0001053a3b24();
  return;
}



/* Entry: 1053a3618; end: 1053a36b7; -[SCNDeltaforceUpdateCallbackCppProxy onError:] */

void FUN_1053a3618(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  func_0x0001053a3b3c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1053a1fd0(auStack_50);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0001053a3b24();
  return;
}



/* Entry: 1053a36b8; end: 1053a37a7;  */

void FUN_1053a36b8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b8118;
    _objc_opt_class(PTR_PTR_1126b8118);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_1108808c8;
      uStack_40 = param_2;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_1053a3844);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_1053a3aec(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_1053a3b14();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x0001053a3b24();
  return;
}



/* Entry: 1053a37a8; end: 1053a3803; -[SCNDeltaforceUpdateCallbackCppProxy .cxx_destruct] */

void FUN_1053a37a8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108809a8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001053a1f38((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1053a3804; end: 1053a3843; -[SCNDeltaforceUpdateCallbackCppProxy .cxx_construct] */

undefined8 * FUN_1053a3804(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1053a3b14();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1053a3844; end: 1053a3937;  */

void FUN_1053a3844(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110880908;
  puVar1[3] = &PTR_DAT_110880988;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_1053a3b14();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110880958;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1053a3aec(&uStack_50);
  return;
}



/* Entry: 1053a3938; end: 1053a393b;  */

void FUN_1053a3938(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880908;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a393c; end: 1053a394f;  */

void FUN_1053a393c(void)

{
  FUN_1053a3adc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a3950; end: 1053a395b;  */

long FUN_1053a3950(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108808c8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1053a395c; end: 1053a3997;  */

void FUN_1053a395c(void)

{
  func_0x0001053a3b7c();
  return;
}



/* Entry: 1053a3998; end: 1053a39ef;  */

void FUN_1053a3998(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001053a3b68();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1053a441c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6c80(uVar1,param_2,unaff_x20);
  func_0x0001053a3b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1053a39f0; end: 1053a3a47;  */

void FUN_1053a39f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001053a3b68();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1053a207c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3f00(uVar1,param_2,unaff_x20);
  func_0x0001053a3b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1053a3a48; end: 1053a3adb;  */

long FUN_1053a3a48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108808c8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1053a3adc; end: 1053a3aeb;  */

void FUN_1053a3adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880908;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a3aec; end: 1053a3b13;  */

long FUN_1053a3aec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1053a3b14; end: 1053a3b9b;  */

void FUN_1053a3b14(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1053a3b9c; end: 1053a3cef;  */

void FUN_1053a3b9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c084700(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a2378(auStack_58);
  uVar2 = param_2;
  func_0x00010bf45d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a1130(auStack_70);
  uVar3 = param_2;
  func_0x00010c118d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a3cf0(auStack_88);
  func_0x00010c13fb80(param_2);
  FUN_1053a3e6c(param_1,auStack_58,auStack_70,auStack_88,param_2);
  func_0x0001053a1e80(auStack_88);
  _objc_release(uVar3);
  FUN_1053a12ec(auStack_70);
  _objc_release(uVar2);
  func_0x000100100fec(auStack_58);
  _objc_release(uVar1);
  FUN_1053a4368();
  return;
}



/* Entry: 1053a3cf0; end: 1053a3e6b;  */

void FUN_1053a3cf0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 auStack_138 [3];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x00010bf529e0();
  FUN_1053a3ed4(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x0001053a4370();
  uVar3 = (undefined1)param_6;
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        puVar4 = *(undefined8 **)(lStack_118 + (long)puVar6 * 8);
        _objc_retain(puVar4);
        FUN_1053a2530(auStack_138,puVar4);
        puVar1 = auStack_138;
        func_0x0001053a4224(param_1);
        func_0x000100100fec(auStack_138);
        _objc_release();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
      } while (puVar6 < puVar2);
      func_0x0001053a4370();
      uVar3 = (undefined1)param_6;
      puVar2 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  puVar2 = (undefined8 *)0x0;
  func_0x0001053a4368();
  func_0x0001053a4368();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001053a4368();
  func_0x0001053a1e80(param_1);
  func_0x0001053a4368();
  __Unwind_Resume();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar7 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  puVar2[2] = puVar1[2];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  uVar7 = *param_4;
  puVar2[4] = param_4[1];
  puVar2[3] = uVar7;
  puVar2[5] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  uVar7 = *param_5;
  puVar2[7] = param_5[1];
  puVar2[6] = uVar7;
  puVar2[8] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  *(undefined1 *)(puVar2 + 9) = uVar3;
  return;
}



/* Entry: 1053a3e6c; end: 1053a3ed3;  */

void FUN_1053a3e6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  param_1[8] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined1 *)(param_1 + 9) = param_5;
  return;
}



/* Entry: 1053a3ed4; end: 1053a3f57;  */

void FUN_1053a3ed4(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x18) < param_2) {
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1053a3f58();
      func_0x0001053a438c();
      __Unwind_Resume(param_1);
      pcVar1 = "vector";
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x18) * 0x18;
      FUN_1053a4094((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2)
      ;
      param_2[1] = lVar2;
      lVar2 = *(long *)pcVar1;
      *(long *)((long)pcVar1 + 8) = lVar2;
      *(undefined8 *)pcVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 8);
      *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
      param_2[2] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 0x10);
      *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_1053a3ff8(auStack_48,param_2,(param_1[1] - *param_1) / 0x18);
    func_0x0001053a4394();
    func_0x0001053a438c();
  }
  return;
}



/* Entry: 1053a3f58; end: 1053a3f6b;  */

void FUN_1053a3f58(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x18) * 0x18;
  FUN_1053a4094((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2);
  param_2[1] = lVar2;
  lVar2 = *(long *)pcVar1;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(undefined8 *)pcVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 8);
  *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
  param_2[2] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 0x10);
  *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1053a3f6c; end: 1053a3ff7;  */

void FUN_1053a3f6c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1053a4094(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1053a3ff8; end: 1053a4067;  */

long * FUN_1053a3ff8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001053a4044();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1053a4068; end: 1053a4093;  */

void FUN_1053a4068(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 3) {
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar2 = *puVar1;
    puStack_38[1] = puVar1[1];
    *puStack_38 = uVar2;
    puStack_38[2] = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x000100100fec(param_2);
  }
  FUN_1053a4130(&uStack_60);
  return;
}



/* Entry: 1053a4094; end: 1053a412f;  */

void FUN_1053a4094(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar2 = *puVar1;
    puStack_28[1] = puVar1[1];
    *puStack_28 = uVar2;
    puStack_28[2] = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x000100100fec(param_2);
  }
  FUN_1053a4130(&uStack_50);
  return;
}



/* Entry: 1053a4130; end: 1053a415f;  */

long FUN_1053a4130(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1053a4160(param_1);
  }
  return param_1;
}



/* Entry: 1053a4160; end: 1053a417f;  */

void FUN_1053a4160(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a4180; end: 1053a41df;  */

void FUN_1053a4180(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a41e0; end: 1053a41e7;  */

void FUN_1053a41e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a41e8; end: 1053a425f;  */

void FUN_1053a41e8(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1053a4260; end: 1053a428f;  */

void FUN_1053a4260(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1053a4290; end: 1053a4367;  */

long * FUN_1053a4290(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  uVar1 = (param_1[1] - *param_1) / 0x18 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    FUN_1053a3f58();
    func_0x0001053a438c();
    __Unwind_Resume(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return param_1;
  }
  uVar2 = (param_1[2] - *param_1) / 0x18;
  uVar3 = uVar2 * 2;
  if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
    uVar3 = uVar1;
  }
  if (0x555555555555554 < uVar2) {
    uVar3 = 0xaaaaaaaaaaaaaaa;
  }
  FUN_1053a3ff8(auStack_48,uVar3);
  *puStack_38 = 0;
  puStack_38[1] = 0;
  puStack_38[2] = 0;
  uVar5 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar5;
  puStack_38[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puStack_38 = puStack_38 + 3;
  func_0x0001053a4394();
  plVar4 = (long *)param_1[1];
  func_0x0001053a438c();
  return plVar4;
}



/* Entry: 1053a4368; end: 1053a43ab;  */

void FUN_1053a4368(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a43ac; end: 1053a441b;  */

void FUN_1053a43ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bfcf2e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1053a20fc(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1053a441c; end: 1053a447b;  */

void FUN_1053a441c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8128;
  _objc_alloc(PTR_PTR_1126b8128);
  FUN_1053a216c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019240(puVar1,param_2,param_1);
  FUN_1053a447c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053a447c; end: 1053a4487;  */

void FUN_1053a447c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053a4488; end: 1053a4503;  */

void FUN_1053a4488(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
  
  func_0x00010028c284(param_1 + 0x90);
  lVar3 = param_3;
  func_0x00010b56a490();
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + lVar3;
  ppuVar2 = &PTR_PTR_11339af30;
  if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_1 + 0x28);
  }
  FUN_1053ab050(param_3,param_2,*(undefined1 *)(param_1 + 0x45),param_1 + 0x68,
                (ulong)ppuVar2[2] & 0xfffffffffffffffc);
  plVar1 = (long *)(param_1 + 0x90);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    plVar4 = plVar1;
    func_0x0001002acb18();
    *plVar1 = *plVar1 + (long)plVar4;
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}



/* Entry: 1053a4504; end: 1053a453f;  */

void FUN_1053a4504(long *param_1)

{
  long *plVar1;
  
  if ((char)param_1[2] == '\x01') {
    plVar1 = param_1;
    func_0x0001002acb18();
    *param_1 = *param_1 + (long)plVar1;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 1053a4540; end: 1053a4737;  */

void FUN_1053a4540(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined1 auStack_168 [40];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001053a5288();
  uStack_48 = extraout_x8;
  FUN_1053a4738();
  uStack_80 = CONCAT44(uStack_80._4_4_,*param_3);
  uVar1 = SUB84(&uStack_80,0);
  func_0x0001053ab348();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b8,param_3 + 2);
  uStack_90 = uStack_b0;
  uStack_98 = uStack_b8;
  uStack_88 = uStack_a8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  auStack_a0[0] = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b8);
  puVar9 = *(undefined8 **)(unaff_x19 + 0x48);
  uStack_e8 = *(undefined8 *)(unaff_x19 + 0x60);
  uStack_f0 = *(undefined8 *)(unaff_x19 + 0x58);
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    do {
      func_0x000100c1be8c();
    } while (extraout_w10 != 0);
  }
  puVar2 = auStack_e0;
  FUN_1053a4dac(puVar2,auStack_a0);
  func_0x00010028c49c();
  lVar10 = puVar9[2];
  __ZNSt3__15mutex4lockEv(lVar10 + 8);
  lVar11 = *(long *)(lVar10 + 0x70);
  uStack_80 = 0x1053a50e0;
  ppuStack_78 = &PTR_FUN_110880a78;
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  puVar3[1] = uStack_e8;
  *puVar3 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  *(undefined4 *)(puVar3 + 2) = auStack_e0[0];
  puVar3[4] = uStack_d0;
  puVar3[3] = uStack_d8;
  puVar3[5] = uStack_c8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar8 = &uStack_80;
  puStack_70 = puVar3;
  puStack_50 = puVar2;
  func_0x0001005760fc(lVar10 + 0x48,puVar8);
  uVar7 = (uint)puVar8;
  func_0x0001053a51a4(ppuStack_78);
  __ZNSt3__15mutex6unlockEv(lVar10 + 8);
  if (lVar11 == 0) {
    plVar4 = (long *)*puVar9;
    ppuStack_78 = (undefined **)puVar9[3];
    uStack_80 = puVar9[2];
    if (puVar9[3] != 0) {
      do {
        func_0x000100c1be8c();
      } while (extraout_w10_00 != 0);
    }
    uVar7 = 0;
    (**(code **)(*plVar4 + 0x10))();
    func_0x000100576684(&uStack_80);
  }
  FUN_1053a4b50(&uStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001053a5274(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100576684(&uStack_80);
    FUN_1053a4b50(&uStack_f0);
    puVar9 = &uStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001053a51b0();
    func_0x0001002acb3c(puVar9 + 0x12);
    func_0x0001002acb3c(puVar9 + 0xf);
    uStack_180 = 0;
    uStack_178 = 0;
    ppuStack_190 = &PTR_FUN_110880ab8;
    uStack_188 = 0;
    uStack_170 = 0;
    func_0x00010002b838(auStack_1a8,"kind");
    func_0x0001053a5230(puVar9[5]);
    func_0x0001053a5260(auStack_1c0);
    func_0x000100c220c4(&ppuStack_190,auStack_1a8,auStack_1c0);
    func_0x00010002b838(auStack_1d8,"success");
    func_0x0001053a5218();
    puVar5 = auStack_1f0;
    func_0x00010002b838(puVar5,"compress");
    func_0x0001053a5218();
    func_0x000100c22244(auStack_168,puVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    func_0x000100c22280(&ppuStack_190);
    func_0x000100c222a0();
    func_0x0001053a529c();
    (**(code **)(extraout_x8_00 + 0x10))();
    func_0x000100c222a0();
    func_0x0001053a529c();
    (**(code **)(extraout_x8_01 + 8))();
    uStack_208 = 0;
    uStack_200 = 0;
    ppuStack_218 = &PTR_FUN_110880ab8;
    uStack_210 = 0;
    uStack_1f8 = 5;
    func_0x00010002b838(auStack_230,"kind");
    func_0x0001053a5230(puVar9[5]);
    func_0x0001053a5260(auStack_248);
    func_0x000100c220c4(&ppuStack_218,auStack_230,auStack_248);
    func_0x00010002b838(auStack_260,"success");
    func_0x0001053a5218();
    puVar5 = auStack_278;
    func_0x00010002b838(puVar5,"compress");
    func_0x0001053a5218();
    func_0x000100c22244(&ppuStack_190,puVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_248);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_230);
    func_0x000100c22280(&ppuStack_218);
    func_0x000100c222a0();
    func_0x0001053a529c();
    (*(code *)*extraout_x8_02)();
    uStack_290 = 0;
    uStack_288 = 0;
    ppuStack_2a0 = &PTR_FUN_110880ab8;
    uStack_298 = 0;
    uStack_280 = 7;
    func_0x00010002b838(auStack_2b8,"kind");
    func_0x0001053a5230(puVar9[5]);
    func_0x0001053a5260(auStack_2d0);
    pppuVar6 = &ppuStack_2a0;
    func_0x000100c220c4(pppuVar6,auStack_2b8,auStack_2d0);
    func_0x00010002b838(auStack_2e8,"success");
    func_0x000100c22114(pppuVar6,auStack_2e8,uVar7 & 1);
    func_0x00010002b838(auStack_300,"compress");
    func_0x000100c22114(pppuVar6,auStack_300,*(undefined1 *)((long)puVar9 + 0x45));
    func_0x000100c22244(&ppuStack_218,pppuVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_300);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b8);
    func_0x000100c22280(&ppuStack_2a0);
    func_0x000100c222a0();
    func_0x0001053a529c();
    (*(code *)*extraout_x8_03)();
    func_0x000100c22280(&ppuStack_218);
    func_0x000100c22280(&ppuStack_190);
    func_0x000100c22280(auStack_168);
    return;
  }
  return;
}



/* Entry: 1053a4738; end: 1053a4b4f;  */

void FUN_1053a4738(long param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [40];
  
  func_0x0001002acb3c(param_1 + 0x90);
  func_0x0001002acb3c(param_1 + 0x78);
  uStack_90 = 0;
  uStack_88 = 0;
  ppuStack_a0 = &PTR_FUN_110880ab8;
  uStack_98 = 0;
  uStack_80 = 0;
  func_0x00010002b838(auStack_b8,"kind");
  func_0x0001053a5230(*(undefined8 *)(param_1 + 0x28));
  func_0x0001053a5260(auStack_d0);
  func_0x000100c220c4(&ppuStack_a0,auStack_b8,auStack_d0);
  func_0x00010002b838(auStack_e8,"success");
  func_0x0001053a5218();
  puVar1 = auStack_100;
  func_0x00010002b838(puVar1,"compress");
  func_0x0001053a5218();
  func_0x000100c22244(auStack_78,puVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  func_0x000100c22280(&ppuStack_a0);
  func_0x000100c222a0();
  func_0x0001053a529c();
  (**(code **)(extraout_x8 + 0x10))();
  func_0x000100c222a0();
  func_0x0001053a529c();
  (**(code **)(extraout_x8_00 + 8))();
  uStack_118 = 0;
  uStack_110 = 0;
  ppuStack_128 = &PTR_FUN_110880ab8;
  uStack_120 = 0;
  uStack_108 = 5;
  func_0x00010002b838(auStack_140,"kind");
  func_0x0001053a5230(*(undefined8 *)(param_1 + 0x28));
  func_0x0001053a5260(auStack_158);
  func_0x000100c220c4(&ppuStack_128,auStack_140,auStack_158);
  func_0x00010002b838(auStack_170,"success");
  func_0x0001053a5218();
  puVar1 = auStack_188;
  func_0x00010002b838(puVar1,"compress");
  func_0x0001053a5218();
  func_0x000100c22244(&ppuStack_a0,puVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  func_0x000100c22280(&ppuStack_128);
  func_0x000100c222a0();
  func_0x0001053a529c();
  (*(code *)*extraout_x8_01)();
  uStack_1a0 = 0;
  uStack_198 = 0;
  ppuStack_1b0 = &PTR_FUN_110880ab8;
  uStack_1a8 = 0;
  uStack_190 = 7;
  func_0x00010002b838(auStack_1c8,"kind");
  func_0x0001053a5230(*(undefined8 *)(param_1 + 0x28));
  func_0x0001053a5260(auStack_1e0);
  pppuVar2 = &ppuStack_1b0;
  func_0x000100c220c4(pppuVar2,auStack_1c8,auStack_1e0);
  func_0x00010002b838(auStack_1f8,"success");
  func_0x000100c22114(pppuVar2,auStack_1f8,param_2 & 1);
  func_0x00010002b838(auStack_210,"compress");
  func_0x000100c22114(pppuVar2,auStack_210,*(undefined1 *)(param_1 + 0x45));
  func_0x000100c22244(&ppuStack_128,pppuVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_210);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  func_0x000100c22280(&ppuStack_1b0);
  func_0x000100c222a0();
  func_0x0001053a529c();
  (*(code *)*extraout_x8_02)();
  func_0x000100c22280(&ppuStack_128);
  func_0x000100c22280(&ppuStack_a0);
  func_0x000100c22280(auStack_78);
  return;
}



/* Entry: 1053a4b50; end: 1053a4b77;  */

long FUN_1053a4b50(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}


