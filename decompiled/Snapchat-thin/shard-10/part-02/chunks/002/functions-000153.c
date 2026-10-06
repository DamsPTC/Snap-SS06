/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cf6e3c; end: 107cf6f37;  */

void FUN_107cf6e3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107cf6f38;
  uStack_40 = 0x107cf6f48;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf50940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcde0();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf6f38; end: 107cf6f4f;  */

void FUN_107cf6f38(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cf6f50; end: 107cf6f87;  */

void FUN_107cf6f50(long param_1,undefined8 param_2)

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



/* Entry: 107cf6f88; end: 107cf7083;  */

void FUN_107cf6f88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107cf6f38;
  uStack_40 = 0x107cf6f48;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf50940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcde0();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf7084; end: 107cf70bb;  */

void FUN_107cf7084(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  long lVar2;
  
  _objc_retain(in_x5);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_x5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cf70bc; end: 107cf7657;  */

undefined *
FUN_107cf70bc(long param_1,undefined **param_2,long param_3,undefined8 param_4,undefined *param_5,
             undefined8 param_6,undefined *param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 == 0) {
    ppuVar2 = param_2;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(ppuVar2);
    ppuVar3 = ppuVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar3 != (undefined **)0x0) {
      ppuVar11 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar2);
        }
        lVar12 = *(long *)((long)ppuVar11 * 8);
        lVar4 = lVar12;
        func_0x00010c252440();
        if ((lVar4 == 1) || (func_0x00010c252440(), lVar12 == 2)) {
          _objc_release(ppuVar2);
          _objc_release(ppuVar2);
          _objc_release(ppuVar2);
          ppuVar5 = param_2;
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar5;
          func_0x000100504554();
          _objc_release(ppuVar5);
          ppuVar5 = &PTR___NSConcreteGlobalBlock_110a07c88;
          ppuVar2 = ppuVar3;
          func_0x0001006372a4(ppuVar3,&PTR___NSConcreteGlobalBlock_110a07c88);
          puVar6 = PTR_PTR_1126d7800;
          _objc_alloc();
          func_0x00010c0343a0();
          puVar7 = PTR_PTR_1126d77e8;
          func_0x00010c27e320(PTR_PTR_1126d77e8);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126d77f0;
          _objc_alloc();
          func_0x00010c038800();
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(ppuVar2);
          _objc_release(ppuVar3);
          goto LAB_107cf74b4;
        }
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar3 != ppuVar11);
      ppuVar3 = ppuVar2;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    puVar6 = param_5;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    _objc_release(puVar6);
    if (puVar7 == (undefined *)0x0) {
      puVar6 = param_7;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 == (undefined *)0x0) {
        if (param_3 == 0) {
          puVar8 = PTR_PTR_1126d77f0;
          _objc_alloc();
          func_0x00010c038800();
          goto LAB_107cf74b4;
        }
        puVar6 = PTR_PTR_1126d7800;
        _objc_alloc();
        func_0x00010c0343a0();
        puVar7 = PTR_PTR_1126d77e8;
        func_0x00010c27e320();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126d77f0;
        _objc_alloc();
        func_0x00010c038800();
        _objc_release(puVar7);
        goto LAB_107cf725c;
      }
      puVar7 = param_7;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR___NSConcreteGlobalBlock_110a07c68;
      puVar6 = puVar7;
      func_0x000100504554();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126d7820;
      _objc_alloc();
      func_0x00010c034300();
      puVar9 = PTR_PTR_1126d77e8;
      func_0x00010c10f180(PTR_PTR_1126d77e8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126d77f0;
      _objc_alloc();
    }
    else {
      puVar7 = param_5;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR___NSConcreteGlobalBlock_110a07c28;
      puVar6 = puVar7;
      func_0x000100504554();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126d7810;
      _objc_alloc();
      func_0x00010c034320();
      puVar9 = PTR_PTR_1126d77e8;
      func_0x00010bfbe440(PTR_PTR_1126d77e8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126d77f0;
      _objc_alloc();
    }
    func_0x00010c038800();
    _objc_release(puVar9);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c11af20();
    func_0x00010bf28140();
    puVar6 = PTR_PTR_1126d77e0;
    _objc_alloc(PTR_PTR_1126d77e0);
    func_0x00010c09dd40(param_1);
    lVar1 = param_1;
    func_0x00010bf28700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c12a2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar4;
    func_0x00010c140200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f5e0(puVar6);
    _objc_release(lVar12);
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126d77e8;
    func_0x00010bf28580();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d77f0;
    _objc_alloc();
    func_0x00010c038800();
    _objc_release(puVar7);
  }
LAB_107cf725c:
  _objc_release(puVar6);
LAB_107cf74b4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126d77f8;
  _objc_retain(ppuVar5);
  _objc_alloc(puVar6);
  ppuVar3 = ppuVar5;
  func_0x00010c2923e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(ppuVar5);
  func_0x00010bef1980(ppuVar5);
  _objc_release(ppuVar5);
  func_0x00010c05bd80(puVar6);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 107cf7658; end: 107cf77cf;  */

void FUN_107cf7658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d77f8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(param_2);
  func_0x00010bef1980(param_2);
  _objc_release(param_2);
  func_0x00010c05bd80(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cf77d0; end: 107cf7847;  */

void FUN_107cf77d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d7818;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05ac00(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cf7848; end: 107cf785b;  */

void FUN_107cf7848(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107cf785c; end: 107cf78f3;  */

void FUN_107cf785c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cf78f4; end: 107cf79d3;  */

undefined1 FUN_107cf78f4(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010c10ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcd20();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cf79d4; end: 107cf7a43;  */

void FUN_107cf79d4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c07cb80();
  if ((int)lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010bf28700();
    _objc_retainAutoreleasedReturnValue();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 == 0;
    _objc_release();
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cf7a44; end: 107cf7a63;  */

bool FUN_107cf7a44(undefined8 param_1,long param_2)

{
  func_0x00010c27e300(param_2);
  return param_2 != 3;
}



/* Entry: 107cf7a64; end: 107cf7ad3;  */

void FUN_107cf7a64(ulong param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  param_3 = param_3 | param_2 ^ 1;
  if ((param_1 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e81a98;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f48418;
    }
  }
  else {
    lVar1 = 0x38;
    if (param_3 == 0) {
      lVar1 = 0x28;
    }
    ppuVar2 = *(undefined ***)((long)&PTR_PTR_110ca9880 + lVar1);
  }
  _objc_retain(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107cf7ad4; end: 107cf7c5b;  */

void FUN_107cf7ad4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c15e080();
  puVar5 = PTR_PTR_1126d7828;
  puVar1 = PTR_PTR_1126d7850;
  _objc_alloc(PTR_PTR_1126d7850);
  func_0x00010c044800();
  puVar2 = puVar5;
  func_0x00010c0d1f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c15e080();
  if (uVar3 < 6) {
    puVar5 = *(undefined **)(&PTR_PTR_110a07ca8)[uVar3];
    _objc_retain(puVar5);
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c08a700(param_1);
  _objc_release(param_1);
  func_0x00010bf651a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d7848;
  _objc_alloc(PTR_PTR_1126d7848);
  func_0x00010c0052c0();
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107cf7c5c; end: 107cf7cdb;  */

void FUN_107cf7c5c(ulong param_1,int param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *unaff_x19;
  
  if (param_2 == 0) {
    if (5 < param_1) goto LAB_107cf7ccc;
    ppuVar3 = (undefined **)(&PTR_PTR_110a07cd8)[param_1];
  }
  else {
    lVar1 = 0x48;
    if ((param_3 & param_4) == 0) {
      lVar1 = 0x40;
    }
    ppuVar2 = &PTR_PTR_110ca9910;
    if (param_4 == 0) {
      ppuVar2 = &PTR_PTR_110ca98b8;
    }
    ppuVar3 = (undefined **)((long)&PTR_PTR_110ca98c0 + lVar1);
    if (param_3 == 0) {
      ppuVar3 = ppuVar2;
    }
  }
  unaff_x19 = *ppuVar3;
  _objc_retain(unaff_x19);
LAB_107cf7ccc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 107cf7cdc; end: 107cf7ddb;  */

void FUN_107cf7cdc(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = param_1;
    func_0x00010bfb8180();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126d78a0;
      func_0x00010bfe9040(PTR_PTR_1126d78a0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d78a8;
      _objc_alloc(PTR_PTR_1126d78a8);
      func_0x00010c01ae40();
      _objc_release(puVar3);
    }
  }
  else {
    puVar2 = PTR_PTR_1126d78a0;
    func_0x00010bf8ea40(PTR_PTR_1126d78a0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d78a8;
    _objc_alloc(PTR_PTR_1126d78a8);
    func_0x00010c01ae40();
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107cf7ddc; end: 107cf7eef;  */

void FUN_107cf7ddc(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar5 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c282760();
  _objc_release(uVar5);
  uVar1 = (int)uVar2 - 1;
  uVar5 = 0x4031000000000000;
  if (uVar1 < 3) {
    uVar5 = *(undefined8 *)(&UNK_10dee59e0 + (ulong)uVar1 * 8);
  }
  uVar2 = param_3;
  if (param_1 == 0) {
    func_0x000107d05584(uVar5,0x403f000000000000,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c282760();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) {
      func_0x000107d054ec(uVar5,0x403f000000000000,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107d05454();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107cf7ef0; end: 107cf80c7;  */

void FUN_107cf7ef0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar4 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  FUN_107cf6e3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    lVar4 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar3 != 0) {
      lVar4 = lVar2;
      func_0x00010bf85d80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107cf8078;
    }
    _objc_release(lVar2);
  }
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107cf80c8;
  uStack_50 = 0x107cf80d8;
  lStack_48 = 0;
  lVar4 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(lVar4);
  lVar4 = puStack_68[5];
  _objc_retain(lVar4);
  __Block_object_dispose(&uStack_70,8);
  lVar2 = lStack_48;
LAB_107cf8078:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107cf80c8; end: 107cf80df;  */

void FUN_107cf80c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cf80e0; end: 107cf8183;  */

void FUN_107cf80e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  lVar2 = param_2;
  if (lVar4 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cf8184; end: 107cf8217;  */

void FUN_107cf8184(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_1);
    puVar2 = param_1;
  }
  else {
    func_0x00010bcbeb30();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb80b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cf8218; end: 107cf83f7;  */

void FUN_107cf8218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f4541f8;
  func_0x0001000ba800();
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e820();
    puVar3 = puVar1;
  }
  else {
    uStack_78 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar5 = param_3;
    FUN_107cf7ddc(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    uStack_68 = param_2;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(param_2);
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    _objc_release(puVar3);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar3);
    lVar2 = param_1;
    __Unwind_Resume();
    pcStack_88 = FUN_107cf83f8;
    puStack_c0 = puVar3;
    puStack_b8 = puVar6;
    puStack_b0 = puVar3;
    uStack_a8 = param_4;
    uStack_a0 = param_3;
    lStack_98 = param_1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(uVar5);
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x3032000000;
    pcStack_d8 = FUN_107cf80c8;
    uStack_d0 = 0x107cf80d8;
    uStack_c8 = 0;
    lVar4 = lVar2;
    func_0x00010bf96da0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    _objc_retain(uVar5);
    func_0x00010c0c0020(lVar4);
    _objc_release(lVar4);
    puVar6 = (undefined *)puStack_e8[5];
    _objc_retain(puVar6);
    _objc_release(uVar5);
    _objc_release(lVar2);
    __Block_object_dispose(&uStack_f0,8);
    _objc_release(uStack_c8);
    _objc_release(uVar5);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107cf83f8; end: 107cf854b;  */

void FUN_107cf83f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107cf80c8;
  uStack_50 = 0x107cf80d8;
  uStack_48 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf854c; end: 107cf854f;  */

void FUN_107cf854c(void)

{
  return;
}



/* Entry: 107cf8550; end: 107cf86fb;  */

void FUN_107cf8550(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf529e0();
  _objc_release(uVar6);
  if (1 < uVar1) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    FUN_107cfe8cc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar6 = uVar1;
    func_0x00010c08fa60();
    if ((uVar6 != 0) && (uVar6 = uVar1, func_0x00010c0720c0(), (uVar6 & 1) == 0)) {
      uVar6 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar6 == 0) {
        uVar6 = param_2;
        func_0x00010c2925c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        if (*(char *)(param_1 + 0x38) == '\x01') {
          uVar6 = param_2;
          func_0x000107cfadc4(param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar6 = uVar2;
          func_0x00010c280540();
          _objc_retainAutoreleasedReturnValue();
        }
        lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        _objc_retain();
        uVar4 = *(undefined8 *)(lVar5 + 0x28);
        *(ulong *)(lVar5 + 0x28) = uVar6;
        _objc_release(uVar4);
      }
      else {
        uVar2 = param_2;
        func_0x00010c0cb080();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uVar6 = *(ulong *)(lVar5 + 0x28);
        *(ulong *)(lVar5 + 0x28) = uVar3;
      }
      _objc_release(uVar6);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cf86fc; end: 107cf86ff;  */

void FUN_107cf86fc(void)

{
  return;
}



/* Entry: 107cf8700; end: 107cf88c3;  */

void FUN_107cf8700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = &UNK_10f454223;
  func_0x0001000ba800(&UNK_10f454223);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_107cf80c8;
  uStack_70 = 0x107cf80d8;
  uStack_68 = 0;
  uVar2 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0c0020(uVar2);
  _objc_release(uVar2);
  uVar2 = puStack_88[5];
  _objc_retain(uVar2);
  _objc_release(param_1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107cf88c4; end: 107cf897b;  */

void FUN_107cf88c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c08fa60();
  lVar2 = param_2;
  if (lVar1 == 0) {
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126d78b0;
  func_0x00010bf86060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107cf897c; end: 107cf8bfb;  */

void FUN_107cf897c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d78b0;
  if (puVar2 == (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x1) {
      puVar2 = param_2;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c244340();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar6 != 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110eb7778;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7778,0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_2;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c244340();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar1);
        _objc_release(ppuVar7);
        puVar1 = PTR_PTR_1126d78b0;
        goto LAB_107cf89f0;
      }
    }
    else {
      _objc_release(puVar1);
    }
    func_0x000100bf377c(*(undefined8 *)(param_1 + 0x28));
    puVar1 = param_2;
    func_0x00010c0f4aa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000100504554();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126d78b0;
    func_0x00010c281a00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_2;
    func_0x00010bfcef60(param_2);
    _objc_retainAutoreleasedReturnValue();
LAB_107cf89f0:
    func_0x00010bf86060();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar1;
  _objc_release(uVar8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cf8bfc; end: 107cf8c43;  */

void FUN_107cf8bfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf8c44; end: 107cf8cd3;  */

void FUN_107cf8c44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126d78b0;
  func_0x00010bf860a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cf8cd4; end: 107cf8fbf;  */

void FUN_107cf8cd4(undefined8 param_1,undefined *param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  FUN_107cf8184();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = param_6;
  uVar8 = param_7;
  if (lVar2 != 1) {
    if (lVar2 == 2) {
      puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      puVar3 = puVar9;
      func_0x000107cffdec();
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      uVar4 = 0;
      FUN_107cf7ddc(0,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      uStack_78 = uVar4;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      puVar5 = puVar9;
      func_0x00010c0d3c80();
      puVar6 = param_3;
      FUN_107cf8218(param_3,param_2,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010bf069e0(puVar5);
      _objc_release(puVar6);
      goto LAB_107cf8f50;
    }
    if (lVar2 == 3) {
      func_0x000107cffdec();
      _objc_retainAutoreleasedReturnValue();
      lStack_a0 = lVar1;
      puStack_98 = param_3;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar6 = puVar9;
      FUN_107cf8218();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c0d3c80();
      _objc_release(puVar6);
      goto LAB_107cf8f50;
    }
  }
  puVar9 = param_3;
  FUN_107cf8218();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010c0d3c80();
LAB_107cf8f50:
  _objc_release(puVar9);
  puVar9 = puVar5;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_107cf8fc0;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    _objc_retain(uVar8);
    _objc_retain(param_2);
    func_0x000100bf377c(param_6);
    puVar9 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar5 = puVar9;
    func_0x00010c067fc0();
    _objc_release(puVar9);
    if (puVar5 + -2 < (undefined *)0x2) {
      puVar10 = (undefined *)0x0;
    }
    else {
      if (puVar5 == (undefined *)0x1) {
        func_0x000107cffe04();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar9;
        FUN_107cf8218();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        func_0x00010c0d3c80();
        _objc_release(puVar5);
        param_6 = puVar9;
      }
      else {
        FUN_107cf7ddc(param_6,puVar3,uVar8);
        _objc_retainAutoreleasedReturnValue();
        dVar11 = 14.0;
        uVar4 = uVar8;
        func_0x000107d05584(0x402c000000000000,0x403f000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uStack_128 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
        uStack_120 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0;
        uStack_118 = uVar4;
        func_0x00010c2be9e0(param_6);
        dVar12 = dVar11;
        func_0x00010c2be9e0(uVar4);
        func_0x00010c0df740((float)((dVar11 - dVar12) * 0.5));
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_110 = puVar9;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0d3c80();
        _objc_release(puVar5);
        _objc_release(puVar9);
        uVar7 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(uVar7);
        puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        puVar5 = puVar9;
        func_0x000107cffe04();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840(puVar9);
        puVar10 = puVar9;
        func_0x00010c0d3c80();
        _objc_release(puVar9);
        _objc_release(puVar5);
        _objc_release(puVar6);
        _objc_release(uVar4);
      }
      _objc_release(param_6);
    }
    puVar9 = puVar10;
    func_0x00010bf51e00(puVar10);
    _objc_release(puVar10);
    _objc_release(uVar8);
    puVar5 = puVar3;
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      pcStack_138 = FUN_107cf92c0;
      uStack_150 = uVar8;
      puStack_148 = puVar3;
      ppuStack_140 = &puStack_b0;
      _objc_retain();
      puStack_178 = &uStack_180;
      uStack_180 = 0;
      uStack_170 = 0x3032000000;
      pcStack_168 = FUN_107cf93d8;
      uStack_160 = 0x107cf93e8;
      uStack_158 = 0;
      func_0x00010c0c0020(puVar5);
      puVar9 = (undefined *)puStack_178[5];
      _objc_retain(puVar9);
      __Block_object_dispose(&uStack_180,8);
      _objc_release(uStack_158);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107cf8fc0; end: 107cf92bf;  */

void FUN_107cf8fc0(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x000100bf377c(param_1);
  puVar5 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar1 = puVar5;
  func_0x00010c067fc0();
  _objc_release(puVar5);
  if (puVar1 + -2 < (undefined *)0x2) {
    puVar6 = (undefined *)0x0;
  }
  else {
    if (puVar1 == (undefined *)0x1) {
      func_0x000107cffe04();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      FUN_107cf8218();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c0d3c80();
      _objc_release(puVar1);
      param_1 = puVar5;
    }
    else {
      FUN_107cf7ddc(param_1,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      dVar7 = 14.0;
      uVar2 = param_4;
      func_0x000107d05584(0x402c000000000000,0x403f000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      uStack_80 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0;
      uStack_78 = uVar2;
      func_0x00010c2be9e0(param_1);
      dVar8 = dVar7;
      func_0x00010c2be9e0(uVar2);
      func_0x00010c0df740((float)((dVar7 - dVar8) * 0.5));
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0d3c80();
      _objc_release(puVar1);
      _objc_release(puVar5);
      uVar4 = param_4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar1 = puVar5;
      func_0x000107cffe04();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar5);
      puVar6 = puVar5;
      func_0x00010c0d3c80();
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
    _objc_release(param_1);
  }
  puVar5 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar6);
  _objc_release(param_4);
  uVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_98 = FUN_107cf92c0;
    uStack_b0 = param_4;
    uStack_a8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x3032000000;
    pcStack_c8 = FUN_107cf93d8;
    uStack_c0 = 0x107cf93e8;
    uStack_b8 = 0;
    func_0x00010c0c0020(uVar2);
    puVar5 = (undefined *)puStack_d8[5];
    _objc_retain(puVar5);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(uStack_b8);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107cf92c0; end: 107cf93d7;  */

void FUN_107cf92c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cf93d8;
  uStack_30 = 0x107cf93e8;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf93d8; end: 107cf93ef;  */

void FUN_107cf93d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cf93f0; end: 107cf94af;  */

void FUN_107cf93f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cf94b0; end: 107cf9573;  */

undefined1 FUN_107cf94b0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cf9574; end: 107cf95e7;  */

void FUN_107cf9574(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_2);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010901cdb0(param_2,puVar1);
  _objc_release(param_2);
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107cf95e8; end: 107cf95ef;  */

void FUN_107cf95e8(void)

{
  return;
}



/* Entry: 107cf95f0; end: 107cf96cb;  */

undefined1 FUN_107cf95f0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cf96cc; end: 107cf96f7;  */

void FUN_107cf96cc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107cf96f8; end: 107cf97b3;  */

undefined1 FUN_107cf96f8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cf97b4; end: 107cf97e3;  */

void FUN_107cf97b4(long param_1,undefined1 param_2)

{
  func_0x00010901c618();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cf97e4; end: 107cf98a7;  */

undefined1 FUN_107cf97e4(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cf98a8; end: 107cf990f;  */

void FUN_107cf98a8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010901e0a4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010901e254(param_2,3);
    *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cf9910; end: 107cf9917;  */

void FUN_107cf9910(void)

{
  return;
}



/* Entry: 107cf9918; end: 107cf99ff;  */

void FUN_107cf9918(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cf93d8;
  uStack_30 = 0x107cf93e8;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf9a00; end: 107cf9a77;  */

void FUN_107cf9a00(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010901e0a4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010901e19c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cf9a78; end: 107cf9a7f;  */

void FUN_107cf9a78(void)

{
  return;
}



/* Entry: 107cf9a80; end: 107cf9b67;  */

void FUN_107cf9a80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cf93d8;
  uStack_30 = 0x107cf93e8;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf9b68; end: 107cf9ba7;  */

void FUN_107cf9b68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010901e044();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cf9ba8; end: 107cf9baf;  */

void FUN_107cf9ba8(void)

{
  return;
}



/* Entry: 107cf9bb0; end: 107cf9c8f;  */

void FUN_107cf9bb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cf93d8;
  uStack_30 = 0x107cf93e8;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf9c90; end: 107cf9d2b;  */

void FUN_107cf9c90(long param_1,undefined8 param_2)

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



/* Entry: 107cf9d2c; end: 107cf9e0b;  */

void FUN_107cf9d2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cf93d8;
  uStack_30 = 0x107cf93e8;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cf9e0c; end: 107cf9e43;  */

void FUN_107cf9e0c(long param_1,undefined8 param_2)

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



/* Entry: 107cf9e44; end: 107cf9f07;  */

undefined1 FUN_107cf9e44(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cf9f08; end: 107cf9f23;  */

void FUN_107cf9f08(void)

{
  return;
}



/* Entry: 107cf9f24; end: 107cf9fe7;  */

undefined1 FUN_107cf9f24(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cf9fe8; end: 107cfa003;  */

void FUN_107cf9fe8(void)

{
  return;
}



/* Entry: 107cfa004; end: 107cfa0c7;  */

undefined1 FUN_107cfa004(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfa0c8; end: 107cfa0df;  */

void FUN_107cfa0c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 107cfa0e0; end: 107cfa163;  */

void FUN_107cfa0e0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = uVar1;
  if (uVar2 < 2) {
    uVar3 = param_1;
    func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107cfa164; end: 107cfa263;  */

void FUN_107cfa164(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cf93d8;
  uStack_30 = 0x107cf93e8;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cfa264; end: 107cfa3f3;  */

void FUN_107cfa264(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  lVar2 = param_2;
  if (lVar4 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cfa3f4; end: 107cfa43b;  */

void FUN_107cfa3f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cfa43c; end: 107cfa43f;  */

void FUN_107cfa43c(void)

{
  return;
}



/* Entry: 107cfa440; end: 107cfa51f;  */

void FUN_107cfa440(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cf93d8;
  uStack_30 = 0x107cf93e8;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cfa520; end: 107cfa55f;  */

void FUN_107cfa520(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfa560; end: 107cfa61b;  */

undefined1 FUN_107cfa560(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfa61c; end: 107cfa64b;  */

void FUN_107cfa61c(long param_1,undefined1 param_2)

{
  func_0x000100bec434();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfa64c; end: 107cfa707;  */

undefined1 FUN_107cfa64c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfa708; end: 107cfa73b;  */

void FUN_107cfa708(long param_1,undefined8 param_2)

{
  func_0x000100bf0c60(param_2,0);
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 107cfa73c; end: 107cfa7f7;  */

undefined1 FUN_107cfa73c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfa7f8; end: 107cfa827;  */

void FUN_107cfa7f8(long param_1,undefined1 param_2)

{
  func_0x00010901ca64();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfa828; end: 107cfa907;  */

void FUN_107cfa828(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cf93d8;
  uStack_30 = 0x107cf93e8;
  uStack_28 = 0;
  func_0x00010c0c0020(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cfa908; end: 107cfa947;  */

void FUN_107cfa908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010901dae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cfa948; end: 107cfaaef;  */

void FUN_107cfa948(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar3 < 0x65) {
    uVar2 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    puVar7 = (undefined *)0x0;
    if (uVar3 != 0) {
      do {
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar2);
          }
          uVar4 = *(ulong *)(uVar8 * 8);
          FUN_107cfaaf0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
          _objc_opt_new();
          uVar5 = uVar4;
          func_0x00010901cfb4(uVar4,puVar7);
          _objc_release();
          if ((uVar5 & 1) != 0) {
            func_0x00010901de0c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            goto LAB_107cfaaa0;
          }
          _objc_release(uVar4);
          uVar8 = uVar8 + 1;
        } while (uVar3 != uVar8);
        uVar3 = uVar2;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
      puVar7 = (undefined *)0x0;
    }
LAB_107cfaaa0:
    _objc_release(uVar2);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126d78b8;
    _objc_retain();
    _objc_alloc(puVar7);
    uVar2 = param_1;
    func_0x00010bf1a5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d0e40();
    uVar3 = param_1;
    func_0x00010bf1a5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010bf65700(uVar3);
    func_0x00010c02c8c0(puVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107cfaaf0; end: 107cfab9b;  */

void FUN_107cfaaf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d78b8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bf1a5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d0e40();
  uVar4 = param_1;
  func_0x00010bf1a5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar5 = uVar4;
  func_0x00010bf65700(uVar4);
  func_0x00010c02c8c0(puVar1,param_2,(uint)uVar3 & 0xff,(uint)uVar5 & 0xff);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cfab9c; end: 107cfad2f;  */

ulong FUN_107cfab9c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar8 = param_1;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf529e0();
  _objc_release(uVar8);
  if (uVar2 < 0x65) {
    uVar2 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    uVar8 = 0;
    if (uVar3 != 0) {
      do {
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar2);
          }
          uVar4 = *(ulong *)(uVar8 * 8);
          FUN_107cfaaf0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
          _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
          uVar6 = uVar4;
          func_0x00010901cfb4(uVar4,puVar5);
          _objc_release(puVar5);
          _objc_release(uVar4);
          if ((uVar6 & 1) != 0) {
            uVar8 = 1;
            goto LAB_107cface0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar3 != uVar8);
        uVar3 = uVar2;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
      uVar8 = 0;
    }
LAB_107cface0:
    _objc_release(uVar2);
  }
  else {
    uVar8 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar8 = param_1;
  func_0x000100bf119c();
  if ((uVar8 & 1) == 0) {
    uVar8 = param_1;
    func_0x00010bf5b820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    _objc_release(uVar8);
    if (uVar3 != 0) {
      uVar8 = param_1;
      func_0x00010901df78(param_1);
      goto LAB_107cfada8;
    }
  }
  uVar8 = 0;
LAB_107cfada8:
  _objc_release(param_1);
  return uVar8;
}



/* Entry: 107cfad30; end: 107cfaea7;  */

ulong FUN_107cfad30(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x000100bf119c();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010bf5b820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    _objc_release(uVar3);
    if (uVar2 != 0) {
      uVar3 = param_1;
      func_0x00010901df78(param_1);
      goto LAB_107cfada8;
    }
  }
  uVar3 = 0;
LAB_107cfada8:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107cfaea8; end: 107cfaeef;  */

void FUN_107cfaea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cfaef0; end: 107cfafa3;  */

void FUN_107cfaef0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c244340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_2;
    func_0x00010c244340(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107cfafa4; end: 107cfb12f;  */

uint FUN_107cfafa4(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  long lVar6;
  
  _objc_retain();
  lVar3 = param_1;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x000100bf39e4();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  lVar5 = param_1;
  func_0x00010c258f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0560();
  _objc_release(lVar5);
  if ((int)lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)*(byte *)(puStack_68 + 3);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_1);
  lVar4 = param_1;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    lVar5 = param_1;
    func_0x00010c258f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    FUN_107cfbbc4();
    uVar2 = (uint)lVar6;
    _objc_release(lVar5);
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = param_2;
  }
  _objc_release(lVar4);
  _objc_release(param_1);
  return (uVar1 | uVar2 | uVar7) & 1;
}



/* Entry: 107cfb130; end: 107cfb34f;  */

ulong FUN_107cfb130(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain();
  uVar9 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bfd9160();
  _objc_release(uVar9);
  if ((uVar1 & 1) != 0) {
    uVar9 = 1;
    goto LAB_107cfb328;
  }
  uVar9 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107cfcd04();
  _objc_release(uVar1);
  _objc_release(uVar9);
  if ((int)uVar2 == 0) {
LAB_107cfb324:
    uVar9 = 0;
    goto LAB_107cfb328;
  }
  uVar9 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107cff210();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) != 0) {
LAB_107cfb268:
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_107cfb278;
    }
    uVar4 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    if ((uVar6 & 1) != 0) {
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_107cfb268;
    }
    uVar6 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar9);
    if ((uVar8 & 1) == 0) goto LAB_107cfb324;
  }
  else {
LAB_107cfb278:
    _objc_release(uVar1);
    _objc_release(uVar9);
  }
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  FUN_107cf95f0();
  _objc_release(uVar1);
LAB_107cfb328:
  _objc_release(param_1);
  return uVar9;
}



/* Entry: 107cfb350; end: 107cfb443;  */

ulong FUN_107cfb350(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107cf9bb0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 != 0) && (uVar3 = uVar1, FUN_107cfa64c(), (uVar3 & 1) == 0)) {
    uVar3 = uVar2;
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    if ((uVar4 == 0) && (uVar3 = uVar1, FUN_107cfa004(), (uVar3 & 1) == 0)) {
      uVar3 = uVar1;
      FUN_107cf96f8();
      if ((uVar3 & 1) == 0) {
        uVar3 = param_1;
        func_0x00010bef0c80(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c06f6a0();
        _objc_release(uVar3);
      }
      else {
        uVar4 = 1;
      }
      goto LAB_107cfb3d8;
    }
  }
  uVar4 = 0;
LAB_107cfb3d8:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107cfb444; end: 107cfb553;  */

void FUN_107cfb444(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cfb554; end: 107cfb627;  */

undefined8 FUN_107cfb554(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x000100bf39e4();
  if ((int)lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107cfb510();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_2;
      func_0x00010c269d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0f3e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010c0745c0(uVar3);
      _objc_release(uVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107cfb628; end: 107cfb78f;  */

undefined8 FUN_107cfb628(ulong param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x000107cfb48c();
  if ((int)uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x000107cff274();
    if (((((uVar1 & 1) == 0) && (uVar1 = uVar2, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
        (uVar1 = uVar2, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
       (((uVar1 = uVar2, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
         (uVar1 = uVar2, func_0x000107cff210(), (uVar1 & 1) == 0)) &&
        (uVar1 = uVar2, func_0x000107cff0a4(), (uVar1 & 1) == 0)))) {
      lVar3 = param_2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2827c0();
      if (lVar4 == 0) {
        uVar5 = param_3;
        func_0x00010c269d40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf1f3c0();
        _objc_release(uVar5);
      }
      else {
        uVar6 = 1;
      }
      _objc_release(lVar3);
    }
    else {
      uVar6 = 0;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 107cfb790; end: 107cfb7db;  */

bool FUN_107cfb790(long param_1)

{
  long lVar1;
  
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf50580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 107cfb7dc; end: 107cfb8d7;  */

undefined1 FUN_107cfb7dc(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bef0e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10ac80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcd20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfb8d8; end: 107cfb95b;  */

void FUN_107cfb8d8(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cfb95c; end: 107cfbbc3;  */

byte FUN_107cfb95c(long param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    bVar3 = 0;
    goto LAB_107cfbb44;
  }
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0560(param_1);
  if ((*(char *)(puStack_98 + 3) == '\x01') && ((*(byte *)(puStack_d8 + 3) & 1) == 0)) {
    cVar1 = *(char *)(puStack_78 + 3);
    bVar2 = 5;
    bVar3 = 3;
LAB_107cfbaf8:
    if (cVar1 == '\0') {
      bVar3 = bVar2;
    }
  }
  else {
    if (((*(byte *)(puStack_b8 + 3) & 1) != 0) || (*(char *)(puStack_d8 + 3) == '\x01')) {
      cVar1 = *(char *)(puStack_78 + 3);
      bVar2 = 4;
      bVar3 = 2;
      goto LAB_107cfbaf8;
    }
    bVar3 = *(byte *)(puStack_78 + 3) ^ 1;
  }
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
LAB_107cfbb44:
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar3;
}



/* Entry: 107cfbbc4; end: 107cfbcaf;  */

undefined1 FUN_107cfbbc4(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0560(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cfbcb0; end: 107cfbd47;  */

void FUN_107cfbcb0(long param_1,undefined1 param_2)

{
  func_0x00010bfddf20();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107cfbd48; end: 107cfbdb3;  */

ulong FUN_107cfbd48(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0741a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c25a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0741a0();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107cfbdb4; end: 107cfbec3;  */

void FUN_107cfbdb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cfbec4;
  uStack_30 = 0x107cfbed4;
  uStack_28 = 0;
  func_0x00010c0c0560(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cfbec4; end: 107cfbedb;  */

void FUN_107cfbec4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cfbedc; end: 107cfbfcb;  */

void FUN_107cfbedc(long param_1,undefined8 param_2)

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


