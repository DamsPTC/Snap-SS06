/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c0af08; end: 108c0af2f;  */

void FUN_108c0af08(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108c0af30; end: 108c0b04f;  */

void FUN_108c0af30(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c0b050; end: 108c0bef7;  */

void FUN_108c0b050(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puStack_4f0;
  undefined1 auStack_360 [8];
  long lStack_358;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c261ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c31914();
  _objc_release(uVar1);
  uVar3 = param_2;
  func_0x00010c261ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(uVar3);
      }
      uVar17 = *(undefined8 *)(uVar18 * 8);
      uVar4 = uVar17;
      func_0x00010c2923e0(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c245ee0(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100c40c30(param_1,uVar4,uVar17);
      _objc_release(uVar17);
      _objc_release(uVar4);
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar1 = uVar3;
    func_0x00010bf52a60();
  }
  _objc_release(uVar3);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010bf15480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (uVar1 != 0) {
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(uVar3);
      }
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    uVar1 = uVar3;
    func_0x00010bf52a60();
  }
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b1568;
  func_0x00010bfb94c0();
  puStack_4f0 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((int)puVar5 == 0) {
    uVar1 = param_2;
    func_0x00010bf15480(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_2;
    func_0x00010bf15480();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf529e0();
    if (uVar3 < 6) {
      uVar3 = param_2;
      func_0x00010bf15480(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
    uVar3 = param_2;
    func_0x00010bf15480(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puStack_4f0 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bef8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(uVar3);
      }
      lVar15 = *(long *)(uVar18 * 8);
      lVar7 = lVar15;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 != 0) {
        _objc_retain(lVar15);
        _objc_retain(puStack_4f0);
        lVar8 = lVar15;
        func_0x00010c2923e0(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(puStack_4f0);
        _objc_release(lVar8);
        puVar16 = PTR_PTR_1126bb3f8;
        _objc_alloc(PTR_PTR_1126bb3f8);
        lVar8 = lVar15;
        func_0x00010c262580(lVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar15;
        func_0x00010c2625a0(lVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar15;
        func_0x00010c2626c0(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04f5a0(puVar16);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(puStack_4f0);
        _objc_release(lVar15);
        func_0x00010b656760(auStack_360,0);
        _objc_retain(lVar7);
        lVar15 = lStack_358;
        auStack_360[0] = 0;
        lStack_358 = lVar7;
        _objc_release(lVar15);
        func_0x00010b657278(auStack_360,puVar16);
        func_0x00010befa120(puVar5);
        puVar11 = auStack_360;
        func_0x00010b656cf8(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar11);
        FUN_108c0bf38(auStack_360);
        _objc_release(puVar16);
      }
      _objc_release(lVar7);
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar1 = uVar3;
    func_0x00010bf52a60();
  }
  _objc_release(uVar3);
  _objc_retain(puVar6);
  puVar16 = puVar6;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (puVar16 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(puVar6);
      }
      uVar17 = *(undefined8 *)((long)puVar19 * 8);
      uVar4 = uVar17;
      func_0x00010c2923e0(uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_108c1eefc(param_1,uVar1,uVar17);
      _objc_release(uVar1);
      _objc_release(uVar4);
      puVar19 = puVar19 + 1;
    } while (puVar16 != puVar19);
    puVar16 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bef8d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107c31908();
  _objc_release(uVar1);
  puVar16 = PTR_PTR_1126db000;
  _objc_alloc(PTR_PTR_1126db000);
  func_0x00010c032e00();
  func_0x00010c1d0640(puVar12);
  _objc_release(puVar16);
  puVar16 = PTR_PTR_1126db000;
  _objc_alloc(PTR_PTR_1126db000);
  uVar1 = param_2;
  func_0x00010c15d380(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar1;
  func_0x000107c31908();
  func_0x00010c032e00(puVar16);
  func_0x00010c1d0640(puVar12);
  _objc_release(puVar16);
  _objc_release(uVar18);
  _objc_release(uVar1);
  puVar16 = PTR_PTR_1126db000;
  _objc_alloc(PTR_PTR_1126db000);
  uVar1 = param_2;
  func_0x00010bfa40a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar1;
  func_0x000107c31908();
  func_0x00010c032e00(puVar16);
  func_0x00010c1d0640(puVar12);
  _objc_release(puVar16);
  _objc_release(uVar18);
  _objc_release(uVar1);
  puVar16 = PTR_PTR_1126db000;
  _objc_alloc(PTR_PTR_1126db000);
  uVar1 = param_2;
  func_0x00010c153d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar1;
  func_0x000107c31908();
  func_0x00010c032e00(puVar16);
  func_0x00010c1d0640(puVar12);
  _objc_release(puVar16);
  _objc_release(uVar18);
  _objc_release(uVar1);
  puVar16 = PTR_PTR_1126db000;
  _objc_alloc(PTR_PTR_1126db000);
  uVar1 = param_2;
  func_0x00010c154020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar1;
  func_0x000107c31908();
  func_0x00010c032e00(puVar16);
  func_0x00010c1d0640(puVar12);
  _objc_release(puVar16);
  _objc_release(uVar18);
  _objc_release(uVar1);
  puVar16 = PTR_PTR_1126db000;
  _objc_alloc(PTR_PTR_1126db000);
  uVar1 = param_2;
  func_0x00010bfba420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar1;
  func_0x000107c31908();
  func_0x00010c032e00(puVar16);
  func_0x00010c1d0640(puVar12);
  _objc_release(puVar16);
  _objc_release(uVar18);
  _objc_release(uVar1);
  puVar16 = PTR_PTR_1126db000;
  _objc_alloc(PTR_PTR_1126db000);
  uVar1 = param_2;
  func_0x00010c2588c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar1;
  func_0x000107c31908();
  func_0x00010c032e00(puVar16);
  func_0x00010c1d0640(puVar12);
  _objc_release(puVar16);
  _objc_release(uVar18);
  _objc_release(uVar1);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar12;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (puVar19 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(puVar12);
      }
      FUN_108c113e0(param_1,*(undefined8 *)((long)puVar16 * 8));
      puVar16 = puVar16 + 1;
    } while (puVar19 != puVar16);
    puVar19 = puVar12;
    func_0x00010bf52a60();
  }
  _objc_release(puVar12);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  lVar13 = param_3;
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    func_0x00010befa160(puVar5);
  }
  uVar4 = param_1;
  FUN_108c1c600(param_1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c13e6c(param_1,puVar5);
  uVar14 = uVar4;
  FUN_108c7b0c8(param_1,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puStack_4f0);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  uVar17 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puVar16);
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(uVar17);
    func_0x00010c2923e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c0bef8; end: 108c0bf37;  */

void FUN_108c0bef8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c0bf38; end: 108c0c05f;  */

long FUN_108c0bf38(long param_1)

{
  long lVar1;
  
  _objc_release(*(undefined8 *)(param_1 + 0x1e0));
  _objc_release(*(undefined8 *)(param_1 + 0x1c8));
  _objc_release(*(undefined8 *)(param_1 + 0x1b8));
  _objc_release(*(undefined8 *)(param_1 + 0x1b0));
  _objc_release(*(undefined8 *)(param_1 + 0x1a0));
  _objc_release(*(undefined8 *)(param_1 + 400));
  _objc_release(*(undefined8 *)(param_1 + 0x170));
  _objc_release(*(undefined8 *)(param_1 + 0x160));
  _objc_release(*(undefined8 *)(param_1 + 0x150));
  _objc_release(*(undefined8 *)(param_1 + 0x148));
  _objc_release(*(undefined8 *)(param_1 + 0x140));
  _objc_release(*(undefined8 *)(param_1 + 0x130));
  _objc_release(*(undefined8 *)(param_1 + 0x110));
  _objc_release(*(undefined8 *)(param_1 + 0x108));
  _objc_release(*(undefined8 *)(param_1 + 0x100));
  _objc_release(*(undefined8 *)(param_1 + 200));
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  _objc_release(*(undefined8 *)(param_1 + 0x60));
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 108c0c060; end: 108c0c1c7;  */

uint FUN_108c0c060(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c0eea80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c266860();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 1) {
    lVar4 = param_2;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010c0eea80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0d9140();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c0720c0(param_2);
      uVar5 = (uint)lVar4 ^ 1;
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  else {
    uVar5 = (uint)((int)uVar3 == 2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 108c0c1c8; end: 108c0c25b;  */

bool FUN_108c0c1c8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 != 0;
}



/* Entry: 108c0c25c; end: 108c0c2f7;  */

void FUN_108c0c25c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c0c2f8; end: 108c0d383;  */

undefined *
FUN_108c0c2f8(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = param_1;
  func_0x000107c2a774(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
  FUN_108c0c060(param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = param_2;
  func_0x00010c0eea80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfb9ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000107c31908();
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x000107c2a78c(param_1,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar6 = param_1;
  func_0x000107c2a774(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar9 = param_2;
  func_0x00010c0eea80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar9;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar14;
  func_0x00010c266860();
  if ((int)puVar13 == 1) {
    puVar13 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar8);
    if (puVar13 == (undefined *)0x0) {
      puVar8 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a6fe0();
      _objc_release(puVar8);
      goto LAB_108c0ccc0;
    }
  }
  else {
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar8);
  }
  puVar8 = puVar6;
  func_0x00010c272ec0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_2;
  FUN_108c0c060(param_2,puVar8);
  _objc_release(puVar8);
  if ((int)puVar9 != 0) {
    puVar8 = param_2;
    func_0x00010c0eea80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfb9ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar9;
    func_0x000107c31908();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar14);
    func_0x00010c0a6fc0(puVar8);
    _objc_release(puVar8);
    puVar9 = param_1;
    func_0x000107c2a78c(param_1,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_2;
    func_0x00010c0eea80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar8;
    func_0x00010bfb9ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar13;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar13);
        }
        uVar16 = *(undefined8 *)((long)puVar17 * 8);
        FUN_108c144b8(param_1,uVar16,puVar9,param_4,param_6);
        func_0x00010af532f4(param_1,uVar16);
        puVar17 = puVar17 + 1;
      } while (puVar8 != puVar17);
      puVar8 = puVar13;
      func_0x00010bf52a60();
    }
    _objc_release(puVar13);
    puVar8 = param_2;
    func_0x00010c0eea80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar8;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x00010c266860();
    _objc_release(puVar13);
    _objc_release(puVar8);
    if ((int)puVar17 == 2) {
      puVar8 = param_1;
      FUN_108c1b5c0(param_1,puVar14);
      _objc_retainAutoreleasedReturnValue();
      FUN_108c13bb4(param_1,puVar14);
      FUN_108c13fc8(param_1,puVar14);
      func_0x00010af533a8(param_1,puVar14);
      FUN_108c7b0c8(param_1,puVar8);
      _objc_release(puVar8);
    }
    puVar8 = param_2;
    func_0x00010c0eea80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar8;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x00010c0d9140();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar17;
    func_0x000100c40dcc();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c40f54(param_1,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar17);
    _objc_release(puVar13);
    _objc_release(puVar8);
    puVar8 = param_1;
    func_0x000100c42ffc(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    puVar13 = puVar8;
    func_0x000107c31910(puVar8,&PTR___NSConcreteGlobalBlock_110ab84e0);
    func_0x00010bf529e0();
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126db128;
    _objc_alloc(PTR_PTR_1126db128);
    func_0x00010c0563a0();
    func_0x000100c44078(param_1,puVar13);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126db128;
    _objc_alloc(PTR_PTR_1126db128);
    func_0x00010c0563a0();
    func_0x000100c44078(param_1,puVar13);
    _objc_release(puVar13);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar14);
  }
  puVar8 = param_2;
  func_0x00010bfd4a40();
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = param_2;
    func_0x00010bf197a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf19620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar8);
    if (puVar9 != (undefined *)0x0) goto LAB_108c0c8c8;
  }
  else {
LAB_108c0c8c8:
    puVar8 = param_2;
    func_0x00010bf197a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf19620();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar9;
    func_0x000107c31908();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar9 = param_2;
    func_0x00010bf197a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010bf9db80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x000107c31908();
    puVar8 = PTR____NSArray0__struct_11034ab48;
    if (puVar17 != (undefined *)0x0) {
      puVar8 = puVar17;
    }
    _objc_retain(puVar8);
    _objc_release(puVar17);
    _objc_release(puVar13);
    _objc_release(puVar9);
    puVar9 = PTR____NSArray0__struct_11034ab48;
    func_0x000100c46690(PTR____NSArray0__struct_11034ab48,puVar14,puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c469b0(param_1,puVar9);
    _objc_release(puVar9);
    puVar9 = puVar14;
    func_0x00010bf529e0();
    if (puVar9 != (undefined *)0x0) {
      func_0x000100c47ffc(param_1,puVar14);
    }
    _objc_release(puVar8);
    _objc_release(puVar14);
  }
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar9 = param_2;
  func_0x00010bf197a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar9;
  func_0x00010bf93660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(puVar14);
  _objc_release(puVar9);
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = param_2;
    func_0x00010bf197a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf93660();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c49b30(param_1,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  puVar8 = param_2;
  func_0x00010bf197a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c078ea0();
  if (((ulong)puVar9 & 1) == 0) {
    _objc_release(puVar8);
LAB_108c0cb2c:
    func_0x000100c51a94(param_1,0);
  }
  else {
    puVar9 = param_2;
    func_0x00010bf197a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar9;
    func_0x00010bf19640();
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (puVar14 == (undefined *)0x0) goto LAB_108c0cb2c;
    puVar8 = param_2;
    func_0x00010bf197a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf19620();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar9;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar14;
    FUN_108c0c25c();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c51a94(param_1,puVar13);
    _objc_release(puVar13);
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_retain(param_5);
  puVar8 = param_2;
  func_0x00010c0eea80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  func_0x00010c06ab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar9 = puVar14;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar14);
      }
      uVar18 = *(undefined8 *)((long)puVar13 * 8);
      puVar17 = PTR_PTR_1126b8710;
      _objc_alloc(PTR_PTR_1126b8710);
      uVar16 = uVar18;
      func_0x00010c2923e0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar16;
      FUN_108c0c25c();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar18;
      func_0x00010c0faf60(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf85d80(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05b840(puVar17);
      _objc_release(uVar18);
      _objc_release(uVar15);
      _objc_release(uVar11);
      _objc_release(uVar16);
      puVar8 = param_5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28f080();
      _objc_release(puVar8);
      _objc_release(puVar17);
      puVar13 = puVar13 + 1;
    } while (puVar9 != puVar13);
    puVar9 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  _objc_release(param_5);
LAB_108c0ccc0:
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  if ((int)puVar5 != 0) {
    puVar8 = param_2;
    func_0x00010c0eea80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfb9ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar5 = puVar9;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar9);
        }
        uVar15 = *(undefined8 *)((long)puVar14 * 8);
        uVar16 = uVar15;
        func_0x00010c2923e0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar16;
        FUN_108c0c25c();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar16);
        if ((puVar8 != (undefined *)0x0) &&
           (uVar16 = uVar15, func_0x00010bfb83c0(), (int)uVar16 == 2)) {
          puVar13 = puVar8;
          FUN_108c23754(puVar8,uVar15,param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar13;
          func_0x00010c25bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar2);
          _objc_release(puVar17);
          _objc_release(puVar13);
        }
        _objc_release(puVar8);
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
      puVar5 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
  }
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_release(*(undefined8 *)(puVar5 + 0x18));
  _objc_release(*(undefined8 *)(puVar5 + 0x10));
  _objc_release(*(undefined8 *)(puVar5 + 8));
  return puVar5;
}



/* Entry: 108c0d384; end: 108c0d3bb;  */

long FUN_108c0d384(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 108c0d3bc; end: 108c0d5a7;  */

void FUN_108c0d3bc(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db278);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_108c3c4f8();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_110ab8570;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_FUN_110ab8510;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  uStack_148 = param_2;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x000107c310cc(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_110ab8510;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110ab8570;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c0d5a8; end: 108c0d683;  */

undefined8 * FUN_108c0d5a8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ab8510;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108c0d684; end: 108c0d8bb;  */

void FUN_108c0d684(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db278);
  if (param_1 == (undefined8 *)0x0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_1);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar2 = &uStack_110;
  func_0x000107c310d0(puVar2,&lStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      uVar6 = *(undefined8 *)((long)puVar7 * 8);
      _objc_retain(param_1);
      puVar4 = PTR_PTR_1126db280;
      FUN_108c3c660(PTR_PTR_1126db280,uVar6);
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(puVar4);
      _objc_release(param_1);
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar3 != puVar7);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  __Unwind_Resume();
  *puVar3 = &PTR_DAT_110ab8570;
  plVar5 = (long *)puVar3[0xd];
  puVar3[0xd] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = (long *)puVar3[0xc];
  puVar3[0xc] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (puVar3[9] != 0) {
    puVar3[10] = puVar3[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 108c0d8bc; end: 108c0d92b;  */

void FUN_108c0d8bc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110ab8570;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c0d92c; end: 108c0dfe7;  */

void FUN_108c0d92c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000108c0df8c;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108c0dfac;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108c0dfac;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000108c0df20:
                    /* WARNING: Could not recover jumptable at 0x000108c0df44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108c0df20;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000108c0dfac;
    }
    goto code_r0x000108c0dfa0;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108c0dfa0;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000108c0dfac;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108c0dfac;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_108c0dfbc;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108c0df8c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108c0dfa0:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108c0dfac:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108c0dfbc:
  return;
}



/* Entry: 108c0dfe8; end: 108c0e06f;  */

void FUN_108c0dfe8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c0e05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108c0e070; end: 108c0e1a3;  */

void FUN_108c0e070(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108c0e198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108c0e1a4; end: 108c0e253;  */

ulong FUN_108c0e1a4(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108c0e254; end: 108c0e28f;  */

undefined8 FUN_108c0e254(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_108c0e290(uVar1,param_1);
  return uVar1;
}



/* Entry: 108c0e290; end: 108c0e43b;  */

void FUN_108c0e290(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000108c0e4d0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000108c0e43c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_108c0e37c:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_108c0e5d0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_108c0e37c;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110ab8570;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 108c0e43c; end: 108c0e5cf;  */

undefined8 * FUN_108c0e43c(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110ab8570;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c0e5d0; end: 108c0e667;  */

undefined8 * FUN_108c0e5d0(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110ab8570;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_108c0e668(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c0e668; end: 108c0e6df;  */

void FUN_108c0e668(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_108c0e6e0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 108c0e6e0; end: 108c0e71b;  */

void FUN_108c0e6e0(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1 + 2;
    FUN_108c0e730();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    return;
  }
  FUN_108c0e71c();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110ab8510;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 108c0e71c; end: 108c0e72f;  */

void FUN_108c0e71c(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110ab8510;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 108c0e730; end: 108c0e7cf;  */

void FUN_108c0e730(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab8510;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c0e7d0; end: 108c0ee8b;  */

void FUN_108c0e7d0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000108c0ee30;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108c0ee50;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108c0ee50;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000108c0edc4:
                    /* WARNING: Could not recover jumptable at 0x000108c0ede8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108c0edc4;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000108c0ee50;
    }
    goto code_r0x000108c0ee44;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108c0ee44;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000108c0ee50;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108c0ee50;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_108c0ee60;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108c0ee30:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108c0ee44:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108c0ee50:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108c0ee60:
  return;
}



/* Entry: 108c0ee8c; end: 108c0ef13;  */

void FUN_108c0ee8c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c0ef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108c0ef14; end: 108c0f047;  */

void FUN_108c0ef14(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108c0f03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108c0f048; end: 108c0f253;  */

uint FUN_108c0f048(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        _objc_release(param_3);
        goto LAB_108c0f22c;
      }
      goto LAB_108c0f178;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_108c0f22c;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_108c0f22c;
    }
LAB_108c0f178:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_108c0f22c;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_108c0f22c:
  _objc_release(param_3);
  return uVar11 & 1;
}



/* Entry: 108c0f254; end: 108c0f4cf;  */

undefined8 * FUN_108c0f254(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_110ab8510;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_108c0e668(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_110ab8510;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_110ab8510;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_108c0f37c;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_108c0f37c;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_108c0f37c:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110ab8510;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 108c0f4d0; end: 108c0f7ef;  */

void FUN_108c0f4d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_2a4;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined4 uStack_270;
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_211;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  byte bStack_1f6;
  byte bStack_1f5;
  undefined1 *puStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined *apuStack_1a0 [3];
  undefined1 uStack_181;
  undefined **appuStack_180 [3];
  byte bStack_166;
  byte bStack_165;
  undefined *apuStack_138 [3];
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_181;
  func_0x000107c2a7f8(puVar2);
  FUN_108c0f7f0(apuStack_1a0,param_2);
  func_0x000107c281a0(appuStack_180,0xc,puVar2,apuStack_1a0);
  puVar2 = &uStack_211;
  func_0x000107c2a7fc();
  uStack_280 = 0xf;
  uStack_270 = 0x100;
  uStack_258 = 1;
  ppuStack_288 = &PTR_SUB_1108629c8;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  plStack_220 = (long *)0x0;
  bStack_1f6 = puVar2[0x1a];
  bStack_1f5 = puVar2[0x1b];
  uStack_208 = 10;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_SUB_1108629c8;
  plStack_1a8 = (long *)0x0;
  uStack_1c0 = 0;
  lStack_1c8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  bStack_f6 = bStack_166 | bStack_1f6;
  bStack_f5 = bStack_165 & bStack_1f5;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d0 = &ppuStack_210;
  uStack_c0 = 0;
  lStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  lStack_2a0 = 0;
  lStack_298 = 0;
  uStack_290 = 0;
  uStack_2a4 = 0;
  puVar3 = &uStack_a0;
  puStack_1d8 = puVar2;
  pppuStack_1d0 = &ppuStack_288;
  pppuStack_d8 = appuStack_180;
  func_0x000107c310cc(puVar3,&ppuStack_110,&lStack_2a0,&uStack_2a4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2a0 != 0) {
    lStack_298 = lStack_2a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_1a8;
  ppuStack_210 = &PTR_SUB_1108629c8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_SUB_1108629c8;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_240 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_118;
  appuStack_180[0] = &PTR_SUB_110862700;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_210 = apuStack_138;
  func_0x000107c27dd4(&ppuStack_210);
  ppuStack_210 = apuStack_1a0;
  func_0x000107c27dd4(&ppuStack_210);
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c0f7f0; end: 108c0f953;  */

void FUN_108c0f7f0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uStack_3c4;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined **ppuStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_390;
  undefined1 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 uStack_331;
  undefined **ppuStack_330;
  undefined4 uStack_328;
  undefined2 uStack_318;
  byte bStack_316;
  byte bStack_315;
  undefined1 *puStack_2f8;
  undefined ***pppuStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined *apuStack_2c0 [3];
  undefined1 uStack_2a1;
  undefined **appuStack_2a0 [3];
  byte bStack_286;
  byte bStack_285;
  undefined *apuStack_258 [3];
  long *plStack_240;
  long *plStack_238;
  undefined **ppuStack_230;
  undefined4 uStack_228;
  undefined2 uStack_218;
  byte bStack_216;
  byte bStack_215;
  undefined ***pppuStack_1f8;
  undefined ***pppuStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar3 = param_2;
  func_0x00010bf529e0();
  func_0x000107c281a4(param_1);
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)((long)puVar7 * 8);
      _objc_retain(uVar6);
      puVar3 = auStack_e0;
      auStack_e0[0] = uVar6;
      func_0x000107c281a8(param_1);
      _objc_release(auStack_e0[0]);
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar4 != puVar7);
    puVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_2 == (undefined8 *)0x0) {
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1c0,param_2);
  }
  puVar5 = &uStack_2a1;
  func_0x000107c2a7f8(puVar5);
  FUN_108c0f7f0(apuStack_2c0,puVar3);
  func_0x000107c281a0(appuStack_2a0,0xd,puVar5,apuStack_2c0);
  puVar5 = &uStack_331;
  func_0x000107c2a7fc();
  uStack_3a0 = 0xf;
  uStack_390 = 0x100;
  uStack_378 = 1;
  ppuStack_3a8 = &PTR_SUB_1108629c8;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  lStack_360 = 0;
  plStack_348 = (long *)0x0;
  uStack_350 = 0;
  plStack_340 = (long *)0x0;
  bStack_316 = puVar5[0x1a];
  bStack_315 = puVar5[0x1b];
  uStack_328 = 10;
  uStack_318 = 0x100;
  ppuStack_330 = &PTR_SUB_1108629c8;
  plStack_2c8 = (long *)0x0;
  uStack_2e0 = 0;
  lStack_2e8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2d8 = 0;
  bStack_216 = bStack_286 | bStack_316;
  bStack_215 = bStack_285 & bStack_315;
  uStack_228 = 4;
  uStack_218 = 0x100;
  ppuStack_230 = &PTR_SUB_1108629c8;
  pppuStack_1f0 = &ppuStack_330;
  uStack_1e0 = 0;
  lStack_1e8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1d8 = 0;
  plStack_1c8 = (long *)0x0;
  lStack_3c0 = 0;
  lStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3c4 = 0;
  puVar4 = &uStack_1c0;
  puStack_2f8 = puVar5;
  pppuStack_2f0 = &ppuStack_3a8;
  pppuStack_1f8 = appuStack_2a0;
  func_0x000107c310cc(puVar4,&ppuStack_230,&lStack_3c0,&uStack_3c4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3c0 != 0) {
    lStack_3b8 = lStack_3c0;
    __ZdlPv();
  }
  plVar2 = plStack_1c8;
  ppuStack_230 = &PTR_SUB_1108629c8;
  plStack_1c8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_1e8 != 0) {
    __ZdlPv();
  }
  plVar2 = plStack_2c8;
  ppuStack_330 = &PTR_SUB_1108629c8;
  plStack_2c8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_2d0;
  plStack_2d0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_2e8 != 0) {
    __ZdlPv();
  }
  plVar2 = plStack_340;
  ppuStack_3a8 = &PTR_SUB_1108629c8;
  plStack_340 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_348;
  plStack_348 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_360 != 0) {
    __ZdlPv();
  }
  plVar2 = plStack_238;
  appuStack_2a0[0] = &PTR_SUB_110862700;
  plStack_238 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_240;
  plStack_240 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  ppuStack_330 = apuStack_258;
  func_0x000107c27dd4(&ppuStack_330);
  ppuStack_330 = apuStack_2c0;
  func_0x000107c27dd4(&ppuStack_330);
  func_0x000107c27da8(&uStack_198);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c0f954; end: 108c0fc73;  */

void FUN_108c0f954(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_2a4;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined4 uStack_270;
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_211;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  byte bStack_1f6;
  byte bStack_1f5;
  undefined1 *puStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined *apuStack_1a0 [3];
  undefined1 uStack_181;
  undefined **appuStack_180 [3];
  byte bStack_166;
  byte bStack_165;
  undefined *apuStack_138 [3];
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_181;
  func_0x000107c2a7f8(puVar2);
  FUN_108c0f7f0(apuStack_1a0,param_2);
  func_0x000107c281a0(appuStack_180,0xd,puVar2,apuStack_1a0);
  puVar2 = &uStack_211;
  func_0x000107c2a7fc();
  uStack_280 = 0xf;
  uStack_270 = 0x100;
  uStack_258 = 1;
  ppuStack_288 = &PTR_SUB_1108629c8;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  plStack_220 = (long *)0x0;
  bStack_1f6 = puVar2[0x1a];
  bStack_1f5 = puVar2[0x1b];
  uStack_208 = 10;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_SUB_1108629c8;
  plStack_1a8 = (long *)0x0;
  uStack_1c0 = 0;
  lStack_1c8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  bStack_f6 = bStack_166 | bStack_1f6;
  bStack_f5 = bStack_165 & bStack_1f5;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d0 = &ppuStack_210;
  uStack_c0 = 0;
  lStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  lStack_2a0 = 0;
  lStack_298 = 0;
  uStack_290 = 0;
  uStack_2a4 = 0;
  puVar3 = &uStack_a0;
  puStack_1d8 = puVar2;
  pppuStack_1d0 = &ppuStack_288;
  pppuStack_d8 = appuStack_180;
  func_0x000107c310cc(puVar3,&ppuStack_110,&lStack_2a0,&uStack_2a4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2a0 != 0) {
    lStack_298 = lStack_2a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_1a8;
  ppuStack_210 = &PTR_SUB_1108629c8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_SUB_1108629c8;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_240 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_118;
  appuStack_180[0] = &PTR_SUB_110862700;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_210 = apuStack_138;
  func_0x000107c27dd4(&ppuStack_210);
  ppuStack_210 = apuStack_1a0;
  func_0x000107c27dd4(&ppuStack_210);
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c0fc74; end: 108c0fe8f;  */

void FUN_108c0fc74(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_268 [8];
  ulong uStack_260;
  undefined1 uStack_1f8;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010b656760(auStack_268,param_2);
    uVar4 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar3 = uStack_260;
    auStack_268[0] = 0;
    uStack_260 = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar4);
    auStack_268[0] = 0;
    uStack_1f8 = 1;
    func_0x00010b657190(auStack_268,0);
    auStack_268[0] = 0;
    func_0x00010b6564bc(auStack_78,0);
    uVar1 = uStack_1a0;
    uStack_1a8 = auStack_78[0];
    uStack_1a0 = uStack_70;
    _objc_release(uVar1);
    uStack_190 = uStack_60;
    uStack_198 = uStack_68;
    uStack_180 = uStack_50;
    uStack_188 = uStack_58;
    uStack_178 = uStack_48;
    puVar5 = auStack_268;
    func_0x00010b656cf8(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2820;
    FUN_108c2ff54(PTR_PTR_1126c2820,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    FUN_108c0bf38(auStack_268);
  }
  else {
    uVar3 = param_2;
    func_0x00010c06d560();
    if ((uVar3 & 1) == 0) {
      puVar2[0x15] = 1;
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_setProperty_nonatomic_copy(puVar2);
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c0fe90; end: 108c0ff47;  */

void FUN_108c0fe90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 != (undefined *)0x0) && (uVar2 = param_2, func_0x00010c06d560(), (int)uVar2 != 0)) {
    puVar1[0x15] = 0;
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c0ff48; end: 108c10023;  */

undefined8 * FUN_108c0ff48(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ab85e0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108c10024; end: 108c100ff;  */

void FUN_108c10024(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000107c2a754(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  if (0 < (int)uVar2 + param_3) {
    func_0x00010c296d80(uVar1);
  }
  puVar3 = PTR_PTR_1126db128;
  _objc_alloc(PTR_PTR_1126db128);
  func_0x00010c0563a0();
  func_0x000100c44078(param_1,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c10100; end: 108c10267;  */

void FUN_108c10100(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x000107c2a7d4(param_1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    FUN_108c10024(param_1,0,1);
    lVar1 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      FUN_108c10024(param_1,1,1);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c10268; end: 108c103b7;  */

void FUN_108c10268(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x000107c2a7d4(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    FUN_108c10024(param_1,0,0xffffffff);
    lVar2 = lVar1;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      FUN_108c10024(param_1,1,0xffffffff);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c103b8; end: 108c105cb;  */

undefined8 * FUN_108c103b8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  undefined8 *puVar11;
  long lStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  plVar6 = &lStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db128);
  if (param_1 == (undefined8 *)0x0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_1);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_110;
  plVar8 = &lStack_128;
  func_0x000107c310d0(puVar3,plVar8,&uStack_12c);
  iVar7 = (int)plVar8;
  _objc_retainAutoreleasedReturnValue();
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  lStack_168 = 0;
  lStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = *plStack_160;
    do {
      puVar11 = (undefined8 *)0x0;
      do {
        if (*plStack_160 != lVar10) {
          _objc_enumerationMutation(puVar3);
        }
        iVar7 = (int)*(undefined8 *)(lStack_168 + (long)puVar11 * 8);
        puVar5 = PTR_PTR_1126db288;
        FUN_108c3ace4(PTR_PTR_1126db288);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar4 != puVar11);
      puVar4 = puVar3;
      plVar6 = &lStack_170;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar10 = *plVar6;
  uVar1 = *(undefined1 *)(lVar10 + 0x19);
  uVar2 = *(undefined1 *)(lVar10 + 0x1a);
  if (iVar7 == 0) {
    bVar9 = 1;
  }
  else {
    bVar9 = *(byte *)(lVar10 + 0x1b);
  }
  *(int *)(puVar4 + 1) = iVar7;
  *(undefined1 *)(puVar4 + 3) = 0;
  *(undefined1 *)((long)puVar4 + 0x19) = uVar1;
  *(undefined1 *)((long)puVar4 + 0x1a) = uVar2;
  *(byte *)((long)puVar4 + 0x1b) = bVar9 & 1;
  *puVar4 = &PTR_DAT_110ab8640;
  puVar4[7] = lVar10;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  lVar10 = *plVar6;
  *plVar6 = 0;
  plVar6 = (long *)puVar4[0xc];
  puVar4[0xc] = lVar10;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  return puVar4;
}



/* Entry: 108c105cc; end: 108c1075f;  */

undefined8 * FUN_108c105cc(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110ab8640;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c10760; end: 108c107f7;  */

undefined8 * FUN_108c10760(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110ab8640;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_108c107f8(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c107f8; end: 108c1086f;  */

void FUN_108c107f8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_108c10870(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 108c10870; end: 108c108ab;  */

void FUN_108c10870(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined *puStack_88;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1 + 2;
    FUN_108c108c0();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    return;
  }
  FUN_108c108ac();
  puVar3 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  puVar4 = auStack_90;
  _objc_retain();
  func_0x000100c40e68(auStack_90,0);
  uStack_8c = 1;
  _objc_retain(puVar3);
  puVar1 = puStack_88;
  auStack_90[0] = 0;
  puStack_88 = puVar3;
  _objc_release(puVar1);
  func_0x000100c40f0c(auStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_88);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c108ac; end: 108c108bf;  */

void FUN_108c108ac(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined *puStack_68;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  puVar3 = auStack_70;
  _objc_retain();
  func_0x000100c40e68(auStack_70,0);
  uStack_6c = 1;
  _objc_retain(puVar2);
  puVar1 = puStack_68;
  auStack_70[0] = 0;
  puStack_68 = puVar2;
  _objc_release(puVar1);
  func_0x000100c40f0c(auStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_68);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c108c0; end: 108c108f3;  */

void FUN_108c108c0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  puVar2 = auStack_60;
  _objc_retain();
  func_0x000100c40e68(auStack_60,0);
  uStack_5c = 1;
  _objc_retain(param_1);
  uVar1 = uStack_58;
  auStack_60[0] = 0;
  uStack_58 = param_1;
  _objc_release(uVar1);
  func_0x000100c40f0c(auStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c108f4; end: 108c10993;  */

void FUN_108c108f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  puVar2 = auStack_40;
  _objc_retain();
  func_0x000100c40e68(auStack_40,0);
  uStack_3c = 1;
  _objc_retain(param_1);
  uVar1 = uStack_38;
  auStack_40[0] = 0;
  uStack_38 = param_1;
  _objc_release(uVar1);
  func_0x000100c40f0c(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c10994; end: 108c10a73;  */

void FUN_108c10994(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  _objc_retain();
  _objc_retain(param_3);
  func_0x000100c40e68(auStack_50,0);
  auStack_50[0] = 0;
  uStack_4c = 2;
  uVar1 = param_2;
  func_0x00010c0b4ca0();
  auStack_50[0] = 0;
  uStack_40 = uVar1;
  if (param_3 == 0) {
    param_1 = 0x10000000000000;
  }
  else {
    func_0x00010c26f320(param_3);
  }
  auStack_50[0] = 0;
  uStack_38 = param_1;
  func_0x000100c40f0c(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c10a74; end: 108c10b4f;  */

undefined8 * FUN_108c10a74(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ab86b0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108c10b50; end: 108c10bdf;  */

void FUN_108c10b50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db290;
  FUN_108c3abf8(PTR_PTR_1126db290,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c10be0; end: 108c10dab;  */

ulong FUN_108c10be0(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 uStack_11c;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db130);
  if (param_1 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_100,param_1);
  }
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  uStack_11c = 0;
  puVar2 = &uStack_100;
  plVar9 = &lStack_118;
  func_0x000107c310d0(puVar2,plVar9,&uStack_11c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      plVar9 = *(long **)((long)puVar11 * 8);
      FUN_108c10b50(param_1);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar3 != puVar11);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  uVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(plVar9);
  plVar5 = plVar9;
  func_0x00010c08fa60();
  if (plVar5 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar6 = uVar4;
    func_0x000107c2a774(uVar4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    if ((uVar10 & 1) != 0) {
      uVar8 = 0;
      func_0x000100c40dcc(0);
      _objc_retainAutoreleasedReturnValue();
      FUN_108c10b50(uVar4,uVar8);
      _objc_release(uVar8);
    }
    _objc_release(uVar6);
  }
  _objc_release(plVar9);
  _objc_release(uVar4);
  return uVar10;
}



/* Entry: 108c10dac; end: 108c10ec3;  */

ulong FUN_108c10dac(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x000107c2a774(param_1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      func_0x000100c40dcc(0);
      _objc_retainAutoreleasedReturnValue();
      FUN_108c10b50(param_1,uVar4);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 108c10ec4; end: 108c11057;  */

undefined8 * FUN_108c10ec4(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110ab8710;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c11058; end: 108c110ef;  */

undefined8 * FUN_108c11058(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110ab8710;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_108c110f0(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c110f0; end: 108c11167;  */

void FUN_108c110f0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_108c11168(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 108c11168; end: 108c111a3;  */

void FUN_108c11168(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1e4;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1b0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined1 uStack_151;
  undefined **ppuStack_150;
  undefined4 uStack_148;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined1 *puStack_118;
  undefined ***pppuStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = param_1 + 2;
    FUN_108c111b8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 4;
    return;
  }
  FUN_108c111a4();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db000);
  if (puVar2 == (undefined *)0x0) {
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_e0,puVar2);
  }
  puVar3 = &uStack_151;
  FUN_108c39ba8();
  uStack_1c0 = 0xf;
  uStack_1b0 = 0x100;
  uStack_198 = (undefined4)param_2;
  ppuStack_1c8 = &PTR_DAT_110ab79c0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_178 = 0;
  lStack_180 = 0;
  plStack_168 = (long *)0x0;
  uStack_170 = 0;
  plStack_160 = (long *)0x0;
  uStack_136 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_148 = 10;
  uStack_138 = 0x100;
  ppuStack_150 = &PTR_FUN_110ab7960;
  lStack_100 = 0;
  lStack_108 = 0;
  plStack_f0 = (long *)0x0;
  uStack_f8 = 0;
  plStack_e8 = (long *)0x0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1e4 = 0;
  puVar4 = &uStack_e0;
  puStack_118 = puVar3;
  pppuStack_110 = &ppuStack_1c8;
  func_0x000107c310cc(puVar4,&ppuStack_150,&lStack_1e0,&uStack_1e4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1e0 != 0) {
    lStack_1d8 = lStack_1e0;
    __ZdlPv();
  }
  plVar1 = plStack_e8;
  ppuStack_150 = &PTR_FUN_110ab7960;
  plStack_e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_f0;
  plStack_f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  plVar1 = plStack_160;
  ppuStack_1c8 = &PTR_DAT_110ab79c0;
  plStack_160 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_168;
  plStack_168 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_180 != 0) {
    lStack_178 = lStack_180;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_b8);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c111a4; end: 108c111b7;  */

void FUN_108c111a4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1c4;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_190;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined1 uStack_131;
  undefined **ppuStack_130;
  undefined4 uStack_128;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined1 *puStack_f8;
  undefined ***pppuStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db000);
  if (puVar2 == (undefined *)0x0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_c0,puVar2);
  }
  puVar3 = &uStack_131;
  FUN_108c39ba8();
  uStack_1a0 = 0xf;
  uStack_190 = 0x100;
  uStack_178 = (undefined4)param_2;
  ppuStack_1a8 = &PTR_DAT_110ab79c0;
  uStack_168 = 0;
  uStack_170 = 0;
  lStack_158 = 0;
  lStack_160 = 0;
  plStack_148 = (long *)0x0;
  uStack_150 = 0;
  plStack_140 = (long *)0x0;
  uStack_116 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_128 = 10;
  uStack_118 = 0x100;
  ppuStack_130 = &PTR_FUN_110ab7960;
  lStack_e0 = 0;
  lStack_e8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_d8 = 0;
  plStack_c8 = (long *)0x0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1c4 = 0;
  puVar4 = &uStack_c0;
  puStack_f8 = puVar3;
  pppuStack_f0 = &ppuStack_1a8;
  func_0x000107c310cc(puVar4,&ppuStack_130,&lStack_1c0,&uStack_1c4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  plVar1 = plStack_c8;
  ppuStack_130 = &PTR_FUN_110ab7960;
  plStack_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_d0;
  plStack_d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_e8 != 0) {
    lStack_e0 = lStack_e8;
    __ZdlPv();
  }
  plVar1 = plStack_140;
  ppuStack_1a8 = &PTR_DAT_110ab79c0;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_148;
  plStack_148 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c111b8; end: 108c111eb;  */

void FUN_108c111b8(long param_1,ulong param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_1b4;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db000);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_121;
  FUN_108c39ba8();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  uStack_168 = (undefined4)param_2;
  ppuStack_198 = &PTR_DAT_110ab79c0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_148 = 0;
  lStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_FUN_110ab7960;
  lStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b4 = 0;
  puVar3 = &uStack_b0;
  puStack_e8 = puVar2;
  pppuStack_e0 = &ppuStack_198;
  func_0x000107c310cc(puVar3,&ppuStack_120,&lStack_1b0,&uStack_1b4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_FUN_110ab7960;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_DAT_110ab79c0;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c111ec; end: 108c113df;  */

void FUN_108c111ec(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db000);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_108c39ba8();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  ppuStack_178 = &PTR_DAT_110ab79c0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_FUN_110ab7960;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  uStack_148 = param_2;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x000107c310cc(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_110ab7960;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110ab79c0;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c113e0; end: 108c114e3;  */

void FUN_108c113e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126db298;
  FUN_108c3a018(PTR_PTR_1126db298,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126db298;
    FUN_108c39e98(PTR_PTR_1126db298,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_2;
    func_0x00010c292720(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c114e4; end: 108c11893;  */

void FUN_108c114e4(undefined *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x21;
  undefined8 uVar8;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar9;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uStack_45c;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined *puStack_3e8;
  undefined1 **ppuStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_38c;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1cc;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puStack_258 = param_1;
  _objc_opt_class(PTR_PTR_1126db000);
  if (param_1 == (undefined *)0x0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0,param_1);
  }
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar7 = &uStack_1b0;
  func_0x000107c310d0(puVar7,&lStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = puVar7;
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  puVar7 = puStack_260;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  _objc_retain(puStack_260);
  puVar1 = puVar7;
  func_0x00010bf52a60();
  if (puVar1 != (undefined8 *)0x0) {
    lVar11 = *plStack_200;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        if (*plStack_200 != lVar11) {
          _objc_enumerationMutation(puStack_260);
        }
        unaff_x23 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        uVar9 = *(undefined8 *)(lStack_208 + (long)puVar10 * 8);
        uVar8 = uVar9;
        func_0x00010c292720(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ecd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        plStack_240 = (long *)0x0;
        _objc_retain(param_2);
        puVar2 = param_2;
        func_0x00010bf52a60();
        if (puVar2 != (undefined8 *)0x0) {
          unaff_x21 = *plStack_240;
          do {
            puVar7 = (undefined8 *)0x0;
            do {
              if (*plStack_240 != unaff_x21) {
                _objc_enumerationMutation(param_2);
              }
              puVar3 = unaff_x23;
              func_0x00010bf4b900();
              if ((int)puVar3 != 0) {
                func_0x00010c12d360(unaff_x23);
              }
              func_0x00010c066b00(unaff_x23);
              puVar7 = (undefined8 *)((long)puVar7 + 1);
            } while (puVar2 != puVar7);
            puVar2 = param_2;
            func_0x00010bf52a60();
          } while (puVar2 != (undefined8 *)0x0);
        }
        _objc_release(param_2);
        unaff_x25 = PTR_PTR_1126db000;
        _objc_alloc();
        func_0x00010c0f0be0(uVar9);
        unaff_x26 = unaff_x23;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x25;
        func_0x00010c032e00();
        _objc_release(unaff_x26);
        FUN_108c113e0(puStack_258,unaff_x24);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar10 != puVar1);
      puVar1 = puStack_260;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined8 *)0x0);
  }
  _objc_release(puStack_260);
  _objc_release(puStack_260);
  _objc_release(param_2);
  puVar3 = puStack_258;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_260);
  _objc_release(puStack_260);
  _objc_release(param_2);
  _objc_release(puStack_258);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_268 = FUN_108c11894;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2b0 = unaff_x26;
  puStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar3;
  lStack_288 = unaff_x21;
  puStack_280 = param_2;
  puStack_278 = puVar7;
  puStack_270 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db000);
  if (puVar4 == (undefined *)0x0) {
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_370,puVar4);
  }
  lStack_388 = 0;
  lStack_380 = 0;
  uStack_378 = 0;
  uStack_38c = 0;
  puVar7 = &uStack_370;
  func_0x000107c310d0(puVar7,&lStack_388,&uStack_38c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_348);
  _objc_release(uStack_358);
  _objc_release(uStack_360);
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  _objc_retain(puVar7);
  puVar1 = puVar7;
  func_0x00010bf52a60();
  if (puVar1 != (undefined8 *)0x0) {
    lVar11 = *plStack_3c0;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        if (*plStack_3c0 != lVar11) {
          _objc_enumerationMutation(puVar7);
        }
        uVar8 = *(undefined8 *)(lStack_3c8 + (long)puVar10 * 8);
        _objc_retain(puVar4);
        puVar3 = PTR_PTR_1126db298;
        FUN_108c3a360(PTR_PTR_1126db298,uVar8);
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010c25ed40(puVar4);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(puVar3);
        _objc_release(puVar4);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar1 != puVar10);
      puVar1 = puVar7;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined8 *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar5 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_3d8 = FUN_108c11acc;
  puStack_400 = puVar3;
  puStack_3f8 = puVar5;
  puStack_3f0 = puVar7;
  puStack_3e8 = puVar4;
  ppuStack_3e0 = &puStack_270;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db270);
  if (puVar6 == (undefined *)0x0) {
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_440,puVar6);
  }
  lStack_458 = 0;
  lStack_450 = 0;
  uStack_448 = 0;
  uStack_45c = 0;
  puVar7 = &uStack_440;
  func_0x000107c310d0(puVar7,&lStack_458,&uStack_45c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_458 != 0) {
    lStack_450 = lStack_458;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_418);
  _objc_release(uStack_428);
  _objc_release(uStack_430);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108c11894; end: 108c11acb;  */

void FUN_108c11894(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *unaff_x22;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uStack_1fc;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db000);
  if (param_1 == 0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_1);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar1 = &uStack_110;
  func_0x000107c310d0(puVar1,&lStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(puVar1);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = *plStack_160;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_160 != lVar5) {
          _objc_enumerationMutation(puVar1);
        }
        uVar4 = *(undefined8 *)(lStack_168 + (long)puVar6 * 8);
        _objc_retain(param_1);
        unaff_x22 = PTR_PTR_1126db298;
        FUN_108c3a360(PTR_PTR_1126db298,uVar4);
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x22 != (undefined *)0x0) {
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(unaff_x22);
        _objc_release(param_1);
        puVar6 = (undefined8 *)((long)puVar6 + 1);
      } while (puVar2 != puVar6);
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  lVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  lVar3 = lVar5;
  __Unwind_Resume();
  pcStack_178 = FUN_108c11acc;
  puStack_1a0 = unaff_x22;
  lStack_198 = lVar5;
  puStack_190 = puVar1;
  lStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db270);
  if (lVar3 == 0) {
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1e0,lVar3);
  }
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1fc = 0;
  puVar1 = &uStack_1e0;
  func_0x000107c310d0(puVar1,&lStack_1f8,&uStack_1fc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1f8 != 0) {
    lStack_1f0 = lStack_1f8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_1b8);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c11acc; end: 108c11ba3;  */

void FUN_108c11acc(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db270);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x000107c310d0(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c11ba4; end: 108c11dd3;  */

void FUN_108c11ba4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126db270);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_108c38158();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x000107c310cc(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000107c27dd4(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000107c27dd4(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c11dd4; end: 108c12087;  */

undefined8 * FUN_108c11dd4(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined **appuStack_d8 [9];
  undefined1 auStack_90 [24];
  long *plStack_78;
  long *plStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126db270);
  if (param_1 == 0) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_160,param_1);
  }
  puVar2 = &uStack_161;
  FUN_108c38158(puVar2);
  _objc_retain(param_2);
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  lVar3 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x000107c281a4(&uStack_180,lVar3);
  dVar9 = 0.0;
  puStack_118 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        uVar6 = *(ulong *)((long)puStack_118 + lVar8 * 8);
        _objc_retain(uVar6);
        uStack_e0 = uVar6;
        func_0x000107c281a8(&uStack_180,&uStack_e0);
        _objc_release(uStack_e0);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x000107c281a0(appuStack_d8,0xc,puVar2,&uStack_180);
  puStack_120 = (undefined1 *)0x0;
  puStack_118 = (undefined1 *)0x0;
  plStack_110 = (long *)0x0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  puVar5 = &uStack_160;
  pppuVar4 = appuStack_d8;
  func_0x000107c310cc(puVar5,pppuVar4,&puStack_120,&uStack_e0);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_120 != (undefined1 *)0x0) {
    puStack_118 = puStack_120;
    __ZdlPv();
  }
  plVar1 = plStack_70;
  appuStack_d8[0] = &PTR_SUB_110862700;
  plStack_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_120 = auStack_90;
  func_0x000107c27dd4(&puStack_120);
  puStack_120 = (undefined1 *)&uStack_180;
  func_0x000107c27dd4(&puStack_120);
  func_0x000107c27da8(&uStack_138);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(param_2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(lVar3);
  func_0x000104bd46a0();
  _objc_retain();
  _objc_retain(pppuVar4);
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)0x1;
  }
  else {
    func_0x00010c088b80(lVar3);
    dVar10 = dVar9;
    FUN_1090216c8(pppuVar4);
    puVar5 = (undefined8 *)(ulong)(300.0 <= ABS(dVar10 - dVar9));
  }
  _objc_release(pppuVar4);
  _objc_release(lVar3);
  return puVar5;
}



/* Entry: 108c12088; end: 108c12127;  */

bool FUN_108c12088(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  double dVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_2 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010c088b80(param_2);
    dVar2 = param_1;
    FUN_1090216c8(param_3);
    bVar1 = 300.0 <= ABS(dVar2 - param_1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108c12128; end: 108c121af;  */

void FUN_108c12128(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_108c3887c(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c121b0; end: 108c1223f;  */

void FUN_108c121b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db2a0;
  FUN_108c38808(PTR_PTR_1126db2a0,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c12240; end: 108c12393;  */

void FUN_108c12240(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uStack_1c8;
  undefined1 uStack_1c1;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined4 uStack_14c;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  FUN_108c11acc();
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        param_2 = (undefined4)*(undefined8 *)(lStack_108 + lVar7 * 8);
        FUN_108c121b0(param_1);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  __Unwind_Resume();
  pcStack_118 = FUN_108c12394;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_130 = lVar1;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db058);
  if (lVar2 == 0) {
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_190,lVar2);
  }
  puVar3 = &uStack_1c1;
  FUN_108c33a80();
  uStack_158 = *(undefined8 *)(puVar3 + 0x10);
  uStack_150 = puVar3[0x19];
  uStack_14f = puVar3[0x18];
  uStack_140 = *(undefined8 *)(puVar3 + 0x28);
  uStack_14c = 1;
  pcStack_148 = FUN_108c129cc;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  lStack_1c0 = 0;
  func_0x000100c435d0(&lStack_1c0,&uStack_158,&lStack_138,1);
  func_0x000100c436b8(&lStack_1a8,&lStack_1c0);
  puVar4 = &uStack_190;
  plVar5 = &lStack_1a8;
  uStack_1c8 = param_2;
  func_0x000107c310d0(puVar4,plVar5,&uStack_1c8);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1a8 != 0) {
    lStack_1a0 = lStack_1a8;
    __ZdlPv();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_168);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  lVar1 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&uStack_190);
  _objc_release(lVar2);
  __Unwind_Resume(lVar1);
  _objc_retain();
  FUN_108c34780(plVar5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108c12394; end: 108c12517;  */

void FUN_108c12394(long param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 uStack_b8;
  undefined1 uStack_b1;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined4 uStack_3c;
  code *pcStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db058);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar1 = &uStack_b1;
  FUN_108c33a80();
  uStack_48 = *(undefined8 *)(puVar1 + 0x10);
  uStack_40 = puVar1[0x19];
  uStack_3f = puVar1[0x18];
  uStack_30 = *(undefined8 *)(puVar1 + 0x28);
  uStack_3c = 1;
  pcStack_38 = FUN_108c129cc;
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  func_0x000100c435d0(&lStack_b0,&uStack_48,&lStack_28,1);
  func_0x000100c436b8(&lStack_98,&lStack_b0);
  puVar2 = &uStack_80;
  plVar4 = &lStack_98;
  uStack_b8 = param_2;
  func_0x000107c310d0(puVar2,plVar4,&uStack_b8);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&uStack_80);
  _objc_release(param_1);
  __Unwind_Resume(lVar3);
  _objc_retain();
  FUN_108c34780(plVar4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 108c12518; end: 108c1259f;  */

void FUN_108c12518(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_108c34780(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c125a0; end: 108c1262f;  */

void FUN_108c125a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db2a8;
  FUN_108c3470c(PTR_PTR_1126db2a8,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c12630; end: 108c129cb;  */

ulong FUN_108c12630(ulong param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  code *pcVar12;
  code *pcVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  byte bStack_1f2;
  byte bStack_1f1;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint uStack_168;
  undefined1 uStack_161;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  pcVar13 = (code *)&uStack_1b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  _objc_opt_class(PTR_PTR_1126db058);
  if (param_1 == 0) {
    uStack_100 = 0;
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,param_1);
  }
  puVar7 = &uStack_161;
  FUN_108c33a80();
  uStack_78 = *(undefined8 *)(puVar7 + 0x10);
  uStack_70 = puVar7[0x19];
  uStack_6f = puVar7[0x18];
  uStack_60 = *(undefined8 *)(puVar7 + 0x28);
  uStack_6c = 1;
  pcStack_68 = FUN_108c129cc;
  lStack_158 = 0;
  uStack_150 = 0;
  lStack_160 = 0;
  func_0x000100c435d0(&lStack_160,&uStack_78,&lStack_58,1);
  func_0x000100c436b8(&lStack_148,&lStack_160);
  uStack_168 = 0;
  puVar8 = &uStack_130;
  plVar11 = &lStack_148;
  pcVar12 = (code *)&uStack_168;
  func_0x000107c310d0(puVar8,plVar11);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(param_1);
  puVar9 = puVar8;
  func_0x00010bf529e0();
  if ((undefined8 *)(long)(int)param_2 < puVar9) {
    puVar9 = puVar8;
    func_0x00010bf529e0();
    uVar3 = (int)puVar9 - (int)param_2;
    param_2 = (undefined8 *)(ulong)uVar3;
    if (0 < (int)uVar3) {
      _objc_opt_class(PTR_PTR_1126db058);
      if (param_1 == 0) {
        uStack_100 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_130,param_1);
      }
      puVar7 = &uStack_161;
      FUN_108c33a80();
      uStack_78 = *(undefined8 *)(puVar7 + 0x10);
      uStack_70 = puVar7[0x19];
      uStack_6f = puVar7[0x18];
      uStack_60 = *(undefined8 *)(puVar7 + 0x28);
      uStack_6c = 0;
      pcStack_68 = FUN_108c129cc;
      lStack_158 = 0;
      uStack_150 = 0;
      lStack_160 = 0;
      func_0x000100c435d0(&lStack_160,&uStack_78,&lStack_58,1);
      func_0x000100c436b8(&lStack_148,&lStack_160);
      param_2 = &uStack_130;
      plVar11 = &lStack_148;
      uStack_168 = uVar3;
      func_0x000107c310d0(param_2,plVar11,&uStack_168);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_148 != 0) {
        lStack_140 = lStack_148;
        __ZdlPv();
      }
      if (lStack_160 != 0) {
        lStack_158 = lStack_160;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_108);
      _objc_release(uStack_118);
      _objc_release(uStack_120);
      in_b0 = 0;
      in_register_00005001 = 0;
      in_register_00005002 = 0;
      in_register_00005003 = 0;
      in_register_00005004 = 0;
      in_register_00005005 = 0;
      in_register_00005006 = 0;
      in_register_00005007 = 0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      _objc_retain(param_2);
      puVar9 = param_2;
      func_0x00010bf52a60();
      if (puVar9 != (undefined8 *)0x0) {
        lVar15 = *plStack_1a0;
        do {
          puVar16 = (undefined8 *)0x0;
          do {
            if (*plStack_1a0 != lVar15) {
              _objc_enumerationMutation(param_2);
            }
            plVar11 = *(long **)(lStack_1a8 + (long)puVar16 * 8);
            FUN_108c125a0(param_1,plVar11);
            puVar16 = (undefined8 *)((long)puVar16 + 1);
          } while (puVar9 != puVar16);
          puVar9 = param_2;
          pcVar13 = (code *)&uStack_1b0;
          func_0x00010bf52a60();
        } while (puVar9 != (undefined8 *)0x0);
      }
      _objc_release(param_2);
      _objc_release(param_2);
      pcVar12 = pcVar13;
    }
  }
  _objc_release(puVar8);
  uVar10 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar10;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar8);
  _objc_release(param_1);
  __Unwind_Resume(uVar10);
  _objc_retain();
  _objc_retain(plVar11);
  (*pcVar12)(uVar10,&bStack_1f1);
  dVar4 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  (*pcVar12)(plVar11,&bStack_1f2);
  uVar14 = 2;
  uVar3 = uVar14;
  if (bStack_1f2 == 0) {
    uVar3 = 0;
  }
  if (bStack_1f1 == 0) {
    uVar3 = 1;
  }
  bVar5 = false;
  bVar6 = false;
  bVar1 = NAN((double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))));
  if (!NAN(dVar4) && !bVar1) {
    bVar5 = dVar4 < (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
    bVar6 = dVar4 == (double)CONCAT17(in_register_00005007,
                                      CONCAT16(in_register_00005006,
                                               CONCAT15(in_register_00005005,
                                                        CONCAT14(in_register_00005004,
                                                                 CONCAT13(in_register_00005003,
                                                                          CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
  }
  if (!bVar6 && bVar5 == (NAN(dVar4) || bVar1)) {
    uVar14 = 1;
  }
  uVar2 = 0;
  if (!bVar5) {
    uVar2 = uVar14;
  }
  uVar14 = uVar3;
  if ((bStack_1f2 & 1) == 0) {
    uVar14 = uVar2;
  }
  if ((bStack_1f1 & 1) == 0) {
    uVar3 = uVar14;
  }
  _objc_release(plVar11);
  _objc_release(uVar10);
  return (ulong)uVar3;
}



/* Entry: 108c129cc; end: 108c12a7f;  */

undefined4 FUN_108c129cc(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108c12a80; end: 108c12b63;  */

void FUN_108c12a80(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uStack_64;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bb3f0);
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_48,param_1);
  }
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_64 = 0;
  puVar1 = &uStack_48;
  FUN_108c7f714(puVar1,&lStack_60,&uStack_64);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c12b64; end: 108c12c3b;  */

void FUN_108c12b64(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126bb3f0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x000107c310d0(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c12c3c; end: 108c12eef;  */

void FUN_108c12c3c(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 uStack_324;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined ***pppuStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  undefined2 uStack_276;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined **appuStack_d8 [9];
  undefined1 auStack_90 [24];
  long *plStack_78;
  long *plStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bb3f0);
  if (param_1 == 0) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_160,param_1);
  }
  puVar2 = &uStack_161;
  FUN_108c3ad58(puVar2);
  _objc_retain(param_2);
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  lVar3 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x000107c281a4(&uStack_180,lVar3);
  puStack_118 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(ulong *)((long)puStack_118 + lVar9 * 8);
        _objc_retain(uVar7);
        uStack_e0 = uVar7;
        func_0x000107c281a8(&uStack_180,&uStack_e0);
        _objc_release(uStack_e0);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x000107c281a0(appuStack_d8,0xd,puVar2,&uStack_180);
  puStack_120 = (undefined1 *)0x0;
  puStack_118 = (undefined1 *)0x0;
  plStack_110 = (long *)0x0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  puVar4 = &uStack_160;
  pppuVar6 = appuStack_d8;
  func_0x000107c310cc(puVar4,pppuVar6,&puStack_120,&uStack_e0);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_120 != (undefined1 *)0x0) {
    puStack_118 = puStack_120;
    __ZdlPv();
  }
  plVar1 = plStack_70;
  appuStack_d8[0] = &PTR_SUB_110862700;
  plStack_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_120 = auStack_90;
  func_0x000107c27dd4(&puStack_120);
  puStack_120 = (undefined1 *)&uStack_180;
  func_0x000107c27dd4(&puStack_120);
  func_0x000107c27da8(&uStack_138);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(param_2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(lVar3);
    func_0x000104bd46a0();
    _objc_retain();
    _objc_retain(pppuVar6);
    _objc_opt_class(PTR_PTR_1126bb3f0);
    if (lVar3 == 0) {
      uStack_1f0 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_220,lVar3);
    }
    puVar2 = &uStack_291;
    FUN_108c3ad58();
    uStack_300 = 0xf;
    uStack_2f0 = 0x100;
    _objc_retain(pppuVar6);
    ppuStack_308 = &PTR_DAT_110862760;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    plStack_2a8 = (long *)0x0;
    uStack_2b0 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_276 = *(undefined2 *)(puVar2 + 0x1a);
    uStack_288 = 10;
    uStack_278 = 0x100;
    ppuStack_290 = &PTR_SUB_110862700;
    uStack_240 = 0;
    uStack_248 = 0;
    plStack_230 = (long *)0x0;
    uStack_238 = 0;
    plStack_228 = (long *)0x0;
    puStack_320 = (undefined8 *)0x0;
    puStack_318 = (undefined8 *)0x0;
    uStack_310 = 0;
    uStack_324 = 0;
    puVar5 = &uStack_220;
    pppuStack_2d8 = pppuVar6;
    puStack_258 = puVar2;
    pppuStack_250 = &ppuStack_308;
    func_0x000107c310cc(puVar5,&ppuStack_290,&puStack_320,&uStack_324);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puStack_320 != (undefined8 *)0x0) {
      puStack_318 = puStack_320;
      __ZdlPv();
    }
    plVar1 = plStack_228;
    ppuStack_290 = &PTR_SUB_110862700;
    plStack_228 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_230;
    plStack_230 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_320 = &uStack_248;
    func_0x000107c27dd4(&puStack_320);
    plVar1 = plStack_2a0;
    ppuStack_308 = &PTR_DAT_110862760;
    plStack_2a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2a8;
    plStack_2a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_320 = &uStack_2c0;
    func_0x000107c27dd4(&puStack_320);
    _objc_release(pppuStack_2d8);
    func_0x000107c27da8(&uStack_1f8);
    _objc_release(uStack_208);
    _objc_release(uStack_210);
    _objc_release(pppuVar6);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c12ef0; end: 108c13173;  */

void FUN_108c12ef0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bb3f0);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_108c3ad58();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x000107c310cc(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000107c27dd4(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000107c27dd4(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c13174; end: 108c13283;  */

void FUN_108c13174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db2b0;
  FUN_108c3b648(PTR_PTR_1126db2b0,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126db2b0;
    FUN_108c3b294(PTR_PTR_1126db2b0,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    func_0x00010c0891c0(param_3);
    *(undefined8 *)(puVar1 + 0x30) = param_1;
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c13284; end: 108c1331b;  */

void FUN_108c13284(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db2b0;
  FUN_108c3b648(PTR_PTR_1126db2b0,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    *(undefined4 *)(puVar1 + 0x18) = param_3;
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1331c; end: 108c133bb;  */

void FUN_108c1331c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db2b0;
  FUN_108c3b648(PTR_PTR_1126db2b0,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    *(undefined8 *)(puVar1 + 0x38) = param_1;
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c133bc; end: 108c134e7;  */

void FUN_108c133bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126db2b0;
  FUN_108c3b648(PTR_PTR_1126db2b0,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
    *(undefined8 *)(puVar1 + 0x40) = param_1;
    _objc_setProperty_nonatomic_copy(puVar1);
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c134e8; end: 108c13577;  */

void FUN_108c134e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db2b0;
  FUN_108c3bbc0(PTR_PTR_1126db2b0,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c13578; end: 108c136cb;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000108c1376c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_108c13578(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  FUN_108c12b64();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain();
  puVar6 = auStack_c8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        param_2 = *(undefined8 *)(lStack_108 + lVar8 * 8);
        FUN_108c134e8(param_1,param_2);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      puVar6 = auStack_c8;
      lVar2 = lVar1;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  __Unwind_Resume(lVar2);
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  puVar3 = PTR_PTR_1126bb3f0;
  _objc_alloc(PTR_PTR_1126bb3f0);
  uVar4 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befd5e0(param_2);
  func_0x00010c0359a0(CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(
                                                  uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))
                              ),0,
                      CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(
                                                  uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))
                              ),puVar3);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c136cc; end: 108c137f7;  */

void FUN_108c136cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bb3f0;
  _objc_alloc(PTR_PTR_1126bb3f0);
  uVar2 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befd5e0(param_2);
  func_0x00010c0359a0(puVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c137f8; end: 108c13bb3;  */

void FUN_108c137f8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(lVar2);
  if (((ulong)puVar3 & 1) != 0) goto LAB_108c138e0;
  lVar2 = param_2;
  func_0x00010c27e060();
  uVar1 = (int)lVar2 + 1;
  if (7 < uVar1) goto LAB_108c138e0;
  uVar1 = 1 << (ulong)(uVar1 & 0x1f);
  lVar2 = param_2;
  lVar4 = param_3;
  if ((uVar1 & 0x79) == 0) {
    if ((uVar1 & 0x84) == 0) {
      lVar4 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar2 != 0) {
        lVar5 = lVar2;
        func_0x00010bfebe20(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c073820();
        lVar7 = lVar2;
        func_0x00010bfebe20(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bfdadc0();
        lVar9 = lVar2;
        func_0x00010bfebe20(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11fc60();
        lVar4 = param_2;
        FUN_108c14a3c(param_2,lVar6,lVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        _objc_release(lVar7);
        _objc_release(lVar5);
        func_0x00010b6564bc(auStack_98,lVar4);
        lVar5 = lVar2;
        func_0x00010bfebe20();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0737e0();
        auStack_98[0] = 0;
        uStack_80 = (undefined1)lVar6;
        _objc_release(lVar5);
        puVar10 = auStack_98;
        func_0x00010b65659c(puVar10);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c20148(param_1,lVar2,puVar10);
        _objc_release(puVar10);
        _objc_release(uStack_90);
        goto LAB_108c138d0;
      }
    }
    else {
      lVar5 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar6 != 0) {
        func_0x00010c2923e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c1e744(param_1,param_2,lVar4);
        goto LAB_108c138d0;
      }
      func_0x000108c15974(param_2);
      _objc_retainAutoreleasedReturnValue();
      FUN_108c1d01c(param_1,lVar2);
    }
  }
  else {
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_108c20264(param_1,lVar4);
LAB_108c138d0:
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
LAB_108c138e0:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c13bb4; end: 108c13d0f;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000108c13ee8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_108c13bb4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar4 = param_1;
  FUN_108c1b5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      param_2 = *(long *)(lVar6 * 8);
      FUN_108c1fea4(param_1);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar5 = lVar1;
  FUN_108c1b990();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar5);
      }
      param_2 = *(long *)(lVar7 * 8);
      FUN_108c20264(lVar1);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar5 = lVar2;
  FUN_108c1c600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar5);
      }
      param_2 = *(long *)(lVar7 * 8);
      FUN_108c203b8(lVar2);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  lVar1 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar2);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar5 = lVar1;
  FUN_108c0f954();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar5);
      }
      param_2 = *(long *)(lVar7 * 8);
      FUN_108c1d494(lVar1);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_release(lVar5);
    _objc_release(lVar5);
    _objc_release(lVar1);
    __Unwind_Resume();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        FUN_108c1e164(lVar2,*(undefined8 *)(lVar6 * 8),0);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    lVar7 = param_2;
    func_0x000107c31908(param_2,&PTR___NSConcreteGlobalBlock_110ab87f0);
    lVar3 = lVar2;
    lVar4 = lVar7;
    FUN_108c1b5c0(lVar2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = *(long *)(lVar8 * 8);
        FUN_108c1e164(lVar2,lVar4,1);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(param_2);
    lVar1 = lVar2;
    _objc_release(lVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(param_2);
    _objc_release(lVar2);
    __Unwind_Resume(lVar1);
    func_0x00010c2923e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 108c13d10; end: 108c13e6b;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000108c13ee8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_108c13d10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar4 = param_1;
  FUN_108c1b990();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      param_2 = *(long *)(lVar6 * 8);
      FUN_108c20264(param_1);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar5 = lVar1;
  FUN_108c1c600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar5);
      }
      param_2 = *(long *)(lVar7 * 8);
      FUN_108c203b8(lVar1);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar5 = lVar2;
  FUN_108c0f954();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar5);
      }
      param_2 = *(long *)(lVar7 * 8);
      FUN_108c1d494(lVar2);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  lVar1 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar2);
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_2);
      }
      FUN_108c1e164(lVar1,*(undefined8 *)(lVar6 * 8),0);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  lVar7 = param_2;
  func_0x000107c31908(param_2,&PTR___NSConcreteGlobalBlock_110ab87f0);
  lVar3 = lVar1;
  lVar4 = lVar7;
  FUN_108c1b5c0(lVar1,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar3);
      }
      lVar4 = *(long *)(lVar8 * 8);
      FUN_108c1e164(lVar1,lVar4,1);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(param_2);
  lVar2 = lVar1;
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(param_2);
  _objc_release(lVar1);
  __Unwind_Resume(lVar2);
  func_0x00010c2923e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c13e6c; end: 108c13fc7;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000108c13ee8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_108c13e6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar4 = param_1;
  FUN_108c1c600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      param_2 = *(long *)(lVar6 * 8);
      FUN_108c203b8(param_1);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar5 = lVar1;
  FUN_108c0f954();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar5);
      }
      param_2 = *(long *)(lVar7 * 8);
      FUN_108c1d494(lVar1);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_release(lVar5);
    _objc_release(lVar5);
    _objc_release(lVar1);
    __Unwind_Resume();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        FUN_108c1e164(lVar2,*(undefined8 *)(lVar6 * 8),0);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    lVar7 = param_2;
    func_0x000107c31908(param_2,&PTR___NSConcreteGlobalBlock_110ab87f0);
    lVar3 = lVar2;
    lVar4 = lVar7;
    FUN_108c1b5c0(lVar2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = *(long *)(lVar8 * 8);
        FUN_108c1e164(lVar2,lVar4,1);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(param_2);
    lVar1 = lVar2;
    _objc_release(lVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(param_2);
    _objc_release(lVar2);
    __Unwind_Resume(lVar1);
    func_0x00010c2923e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 108c13fc8; end: 108c14123;  */

void FUN_108c13fc8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar5 = param_1;
  FUN_108c0f954();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar5);
      }
      param_2 = *(long *)(lVar7 * 8);
      FUN_108c1d494(param_1);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_2);
      }
      FUN_108c1e164(lVar1,*(undefined8 *)(lVar7 * 8),0);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  lVar3 = param_2;
  func_0x000107c31908(param_2,&PTR___NSConcreteGlobalBlock_110ab87f0);
  lVar4 = lVar1;
  lVar5 = lVar3;
  FUN_108c1b5c0(lVar1,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar4);
      }
      lVar5 = *(long *)(lVar8 * 8);
      FUN_108c1e164(lVar1,lVar5,1);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_2);
  lVar2 = lVar1;
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_2);
  _objc_release(lVar1);
  __Unwind_Resume(lVar2);
  func_0x00010c2923e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c14124; end: 108c1437f;  */

void FUN_108c14124(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_2);
      }
      FUN_108c1e164(param_1,*(undefined8 *)(lVar6 * 8),0);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  lVar2 = param_2;
  func_0x000107c31908(param_2,&PTR___NSConcreteGlobalBlock_110ab87f0);
  lVar3 = param_1;
  lVar4 = lVar2;
  FUN_108c1b5c0(param_1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar3);
      }
      lVar4 = *(long *)(lVar7 * 8);
      FUN_108c1e164(param_1,lVar4,1);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  lVar1 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(lVar1);
  func_0x00010c2923e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c14380; end: 108c1439f;  */

void FUN_108c14380(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c143a0; end: 108c143fb;  */

void FUN_108c143a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_108c143fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c143fc; end: 108c14497;  */

void FUN_108c143fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c14498; end: 108c144b7;  */

void FUN_108c14498(undefined8 param_1,undefined8 param_2)

{
  FUN_108c143fc(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c144b8; end: 108c14913;  */

void FUN_108c144b8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_108c143fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar4 & 1) != 0) goto LAB_108c147e8;
  lVar2 = param_2;
  func_0x00010bfb83c0();
  uVar1 = (uint)lVar2;
  lVar2 = param_3;
  if ((int)uVar1 < 5) {
    if (uVar1 - 2 < 3) {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        lVar2 = param_2;
        FUN_108c17e60(param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c1d01c(param_1,lVar2);
      }
      else {
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c20e00(param_1,param_2,lVar2,param_4);
      }
      goto LAB_108c147e0;
    }
    if ((1 < uVar1) && (uVar1 != 0xfbadbeef)) goto LAB_108c147e8;
LAB_108c14600:
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_108c1fea4(param_1,lVar2);
  }
  else {
    if (uVar1 - 7 < 2) goto LAB_108c14600;
    if (uVar1 == 5) {
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        lVar2 = param_2;
        FUN_108c17e84(param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c1d01c(param_1,lVar2);
      }
      else {
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c21530(param_1,param_2,lVar2,param_4);
      }
    }
    else {
      if (uVar1 != 6) goto LAB_108c147e8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_5;
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar2);
      if (lVar2 != 0) {
        lVar6 = lVar2;
        func_0x00010bfebe20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 == 0) {
          lVar6 = lVar2;
          func_0x00010c262240();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 == 0) {
            func_0x00010bf4a3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
          }
          else {
            _objc_release();
          }
        }
      }
      _objc_release(lVar2);
      func_0x00010c0a4d00(uVar5);
      _objc_release(uVar5);
      if (lVar2 == 0) goto LAB_108c147e0;
      lVar6 = lVar2;
      func_0x00010bfebe20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        lVar6 = lVar2;
        func_0x00010c262240();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) goto LAB_108c147c0;
        lVar6 = lVar2;
        func_0x00010bf4a3a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 == 0) {
          FUN_108c1d494(param_1,lVar2);
          goto LAB_108c147e0;
        }
      }
      else {
LAB_108c147c0:
        _objc_release();
      }
      FUN_108c1f79c(param_1,lVar2,0);
      FUN_108c1fea4(param_1,lVar2);
    }
  }
LAB_108c147e0:
  _objc_release(lVar2);
LAB_108c147e8:
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c14914; end: 108c149eb;  */

void FUN_108c14914(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ba270;
  _objc_alloc(PTR_PTR_1126ba270);
  lVar2 = param_2;
  func_0x00010bf33560(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf9c800(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b4ca0();
  func_0x00010bffd140((double)lVar4 / 1000.0,puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c149ec; end: 108c14a3b;  */

long FUN_108c149ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108c14a3c; end: 108c14c17;  */

void FUN_108c14a3c(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2818;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010befb8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c27d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b4ca0();
  lVar5 = param_2;
  func_0x00010bfe6920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  if ((param_3 & 1) == 0) {
    func_0x00010c0756c0(param_2);
  }
  lVar6 = param_2;
  func_0x00010c074d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  lVar7 = param_2;
  func_0x00010bf490c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010bff2420((double)lVar4 / 1000.0,param_1,puVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


