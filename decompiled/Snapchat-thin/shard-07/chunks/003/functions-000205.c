/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053af6c4; end: 1053af71b;  */

void FUN_1053af6c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1053ae890(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b85e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220320();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053af71c; end: 1053af7fb;  */

void FUN_1053af71c(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar5 = param_2;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar2 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_1053ae904();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar2 = param_2;
      func_0x00010bf529e0();
    } while (uVar5 < uVar2);
  }
  _objc_release(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c099a60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220380();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053af7fc; end: 1053af83f;  */

void FUN_1053af7fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1053aeb94(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053af840; end: 1053af84b;  */

void FUN_1053af840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ce950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNullVal__112651478,1);
  return;
}



/* Entry: 1053af84c; end: 1053af8af; +[SCDeltaforceSyncResponseV2Parser isV2Response:] */

bool FUN_1053af84c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c294e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c15eb40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2 != 0;
}



/* Entry: 1053af8b0; end: 1053afa0f; -[SCDeltaforceSyncResponseV2Parser parse:] */

void FUN_1053af8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar7;
  _objc_release(uVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c294e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be70340(param_1,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126b8150;
    _objc_alloc_init(PTR_PTR_1126b8150);
    func_0x00010be70640(param_1,param_2,lVar2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b8168;
    _objc_alloc(PTR_PTR_1126b8168);
    uVar3 = param_3;
    func_0x00010bf3c1c0(param_3);
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = param_3;
    func_0x00010c2667e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e8e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f0c0(puVar7,param_2,uVar3,uVar6,uVar1,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1053afa10; end: 1053afcaf; -[SCDeltaforceSyncResponseV2Parser _parseWithKind:andItemKey:] */

void FUN_1053afa10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = param_3;
  func_0x00010c086de0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &uStack_1b0;
  puVar13 = auStack_f0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar19 = *plStack_1a0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1a0 != lVar19) {
          _objc_enumerationMutation(lVar1);
        }
        lVar17 = *(long *)(lStack_1a8 + lVar15 * 8);
        lVar3 = lVar17;
        func_0x00010bf64c80();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar3;
        func_0x00010bf648a0();
        _objc_release(lVar3);
        if ((int)lVar18 == 1) {
          lVar3 = lVar17;
          func_0x00010bf64c80();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar3;
          func_0x00010bf34da0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_1;
          func_0x00010bdeedc0(param_1,param_2,param_3,lVar17,param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc7260(param_1,param_2,lVar18,uVar4);
          _objc_release(uVar4);
          _objc_release(lVar18);
          _objc_release(lVar3);
        }
        lVar3 = lVar17;
        func_0x00010bf38e20();
        if (lVar3 != 0) {
          uVar4 = param_1;
          func_0x00010bdeedc0(param_1,param_2,param_3,lVar17,param_4);
          _objc_retainAutoreleasedReturnValue();
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          func_0x00010bf38e00();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar17;
          func_0x00010bf52a60();
          if (lVar3 != 0) {
            lVar18 = *plStack_1e0;
            do {
              lVar14 = 0;
              do {
                if (*plStack_1e0 != lVar18) {
                  _objc_enumerationMutation(lVar17);
                }
                func_0x00010be70640(param_1,param_2,*(undefined8 *)(lStack_1e8 + lVar14 * 8),uVar4);
                lVar14 = lVar14 + 1;
              } while (lVar3 != lVar14);
              lVar3 = lVar17;
              func_0x00010bf52a60(lVar17,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar3 != 0);
          }
          _objc_release(lVar17);
          _objc_release(uVar4);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar2);
      puVar12 = &uStack_1b0;
      puVar13 = auStack_f0;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  puVar5 = PTR_PTR_1126b8140;
  _objc_alloc_init(PTR_PTR_1126b8140);
  puVar6 = puVar12;
  func_0x00010c0896c0(puVar12);
  func_0x00010c1b8320(puVar5,param_2,puVar6);
  puVar6 = puVar12;
  func_0x00010c0896a0(puVar12);
  func_0x00010c1b8300(puVar5,param_2,puVar6);
  func_0x00010c1b6b40(puVar5,param_2,puVar13);
  puVar6 = puVar12;
  func_0x00010c086e00();
  puVar16 = puVar12;
  func_0x00010c2973a0();
  if (puVar16 <= puVar6) {
    puVar6 = puVar16;
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
    do {
      puVar7 = puVar5;
      func_0x00010c118be0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar12;
      func_0x00010c297380(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar12;
      func_0x00010c086de0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar7,param_2,puVar9,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar16 = (undefined8 *)((long)puVar16 + 1);
    } while (puVar6 != puVar16);
  }
  _objc_release(puVar13);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053afcb0; end: 1053afe23; -[SCDeltaforceSyncResponseV2Parser _createItemFromWriteChange:andItemKey:] */

void FUN_1053afcb0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b8140;
  _objc_alloc_init(PTR_PTR_1126b8140);
  uVar2 = param_3;
  func_0x00010c0896c0(param_3);
  func_0x00010c1b8320(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0896a0(param_3);
  func_0x00010c1b8300(puVar1,param_2,uVar2);
  func_0x00010c1b6b40(puVar1,param_2,param_4);
  uVar2 = param_3;
  func_0x00010c086e00();
  uVar8 = param_3;
  func_0x00010c2973a0();
  if (uVar8 <= uVar2) {
    uVar2 = uVar8;
  }
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      puVar3 = puVar1;
      func_0x00010c118be0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c297380(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c086de0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar3,param_2,uVar5,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053afe24; end: 1053b0033; -[SCDeltaforceSyncResponseV2Parser _addItemFromChange:withItemKey:] */

void FUN_1053afe24(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf352c0();
  if ((int)uVar1 == 2) {
    puVar2 = param_4;
    func_0x00010c0f5880(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100504554();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b0440;
    _objc_alloc(PTR_PTR_1126b0440);
    puVar5 = param_4;
    func_0x00010bfce400(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c087060();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0438;
    puVar7 = param_4;
    func_0x00010bfce400(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5160(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021180(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c066b00(puVar4);
    puVar2 = PTR_PTR_1126b8158;
    _objc_alloc(PTR_PTR_1126b8158);
    func_0x00010c0346c0();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar2);
  }
  else {
    if ((int)uVar1 != 1) goto LAB_1053b000c;
    uVar1 = param_3;
    func_0x00010c2bd820(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bdeeda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = puVar4;
    FUN_1053ae36c(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
LAB_1053b000c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053b0034; end: 1053b01b7; -[SCDeltaforceSyncResponseV2Parser _createItemKeyWithKind:andKey:andBaseItemKey:] */

void FUN_1053b0034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  lVar1 = param_5;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_5;
    func_0x00010bfce400(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c087060(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1b7000(lVar1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar1);
    func_0x00010bea43e0(param_1,param_2,param_4,param_5);
  }
  else {
    puVar4 = PTR_PTR_1126b8178;
    _objc_alloc_init(PTR_PTR_1126b8178);
    uVar5 = param_3;
    func_0x00010c087060(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1b7000(puVar4,param_2,uVar5);
    _objc_release(uVar5);
    func_0x00010bea62e0(param_1,param_2,param_4,puVar4);
    _objc_release(param_4);
    lVar1 = param_5;
    func_0x00010c0f5880(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar1);
    param_4 = puVar4;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 1053b01b8; end: 1053b0247; -[SCDeltaforceSyncResponseV2Parser _parseKeysByKindFromDjinni:] */

void FUN_1053b01b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126b81b8;
  func_0x00010c15eb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c0f40e0(puVar2,param_2,param_3,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  _objc_release(param_3);
  puVar3 = (undefined *)0x0;
  if (lVar1 == 0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1053b0248; end: 1053b02e3; -[SCDeltaforceSyncResponseV2Parser _setPathWithKey:andPathComponent:] */

void FUN_1053b0248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfe5e20();
  if ((int)uVar1 == 2) {
    uVar1 = param_3;
    func_0x00010c0b4b80(param_3);
    func_0x00010c1a99c0(param_4,param_2,uVar1);
  }
  else if ((int)uVar1 == 1) {
    uVar1 = param_3;
    func_0x00010c25d620(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(param_4,param_2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053b02e4; end: 1053b03af; -[SCDeltaforceSyncResponseV2Parser _setGroupWithKey:andItemKey:] */

void FUN_1053b02e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfe5e20();
  uVar2 = param_4;
  if ((int)uVar1 == 2) {
    func_0x00010bfce400(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0b4b80(param_3);
    func_0x00010c1a99c0(uVar2,param_2,uVar1);
  }
  else {
    if ((int)uVar1 != 1) goto LAB_1053b0394;
    func_0x00010bfce400(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c25d620(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(uVar2,param_2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
LAB_1053b0394:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053b03b0; end: 1053b03df; -[SCDeltaforceSyncResponseV2Parser .cxx_destruct] */

void FUN_1053b03b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053b03e0; end: 1053b0523; -[SCDefaultDeltaSyncService observeLoginComplete:] */

void FUN_1053b03e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1053b0524;
  uStack_40 = 0x1053b0534;
  uStack_38 = 0;
  puStack_58 = &uStack_60;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1053b053c;
  puStack_88 = &UNK_110851b50;
  _objc_copyWeak(auStack_70,auStack_68);
  puStack_78 = &uStack_60;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010006eaa4(uVar1,&puStack_a0);
  uVar1 = puStack_58[5];
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053b0524; end: 1053b053b;  */

void FUN_1053b0524(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053b053c; end: 1053b0627;  */

void FUN_1053b053c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar2;
    _objc_release(uVar5);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
      puVar3 = PTR_PTR_1126ae560;
      _objc_opt_new();
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar2 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar3;
      _objc_release(uVar2);
      lVar6 = param_1 + 0x30;
      _objc_loadWeakRetained();
      lVar4 = lVar6;
      func_0x00010bfdd140();
      _objc_release(lVar6);
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      if ((int)lVar4 == 0) {
        func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x38),param_2,uVar2,
                            *(undefined8 *)(param_1 + 0x20));
      }
      else {
        func_0x00010bf43d60(uVar2,param_2,PTR____kCFBooleanTrue_11034ab68);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1053b0628; end: 1053b06db; -[SCDefaultDeltaSyncService syncGroupWithKey:client:processor:] */

void FUN_1053b0628(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bec9be0(param_1,param_2,&uStack_38,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010bec9a20(param_1,param_2,param_3,param_5,param_4);
  }
  uVar2 = uStack_38;
  func_0x00010bfbc3e0(uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053b06dc; end: 1053b0807; -[SCDefaultDeltaSyncService processLogInSyncData:] */

void FUN_1053b06dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c0b41c0(*(undefined8 *)(param_1 + 0x30));
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010be16440(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053b0808; end: 1053b082b;  */

uint FUN_1053b0808(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_respondsToSelector(param_2,PTR_s_logInDeltaSyncGroupKeys_112607aa8);
  return (uint)param_2 & 1;
}



/* Entry: 1053b082c; end: 1053b0b5b;  */

void FUN_1053b082c(long param_1,long param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_248;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lVar3 = param_2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = lVar3;
    func_0x00010bf52a60();
    if (lStack_248 != 0) {
      lVar10 = *plStack_1b0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1b0 != lVar10) {
            _objc_enumerationMutation(lVar3);
          }
          lVar15 = *(long *)(lStack_1b8 + lVar11 * 8);
          lVar4 = lVar15;
          func_0x00010c0a8260();
          _objc_retainAutoreleasedReturnValue();
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          lVar5 = lVar4;
          func_0x00010bf52a60();
          if (lVar5 != 0) {
            lVar13 = *plStack_1f0;
            do {
              lVar14 = 0;
              do {
                if (*plStack_1f0 != lVar13) {
                  _objc_enumerationMutation(lVar4);
                }
                uVar12 = *(undefined8 *)(lVar1 + 0x30);
                lVar6 = lVar15;
                func_0x00010c27dd80(lVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0b4200(uVar12);
                _objc_release(lVar6);
                lVar6 = param_1 + 0x30;
                _objc_loadWeakRetained(lVar6);
                uVar12 = *(undefined8 *)(param_1 + 0x20);
                func_0x00010bf6d560(uVar12);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = *(undefined8 *)(param_1 + 0x20);
                func_0x00010c1200a0(uVar7);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar6;
                func_0x00010be81520(lVar6);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar7);
                _objc_release(uVar12);
                _objc_release(lVar6);
                func_0x00010befa120(puVar2);
                _objc_release(lVar8);
                lVar14 = lVar14 + 1;
              } while (lVar5 != lVar14);
              lVar5 = lVar4;
              func_0x00010bf52a60();
            } while (lVar5 != 0);
          }
          _objc_release(lVar4);
          lVar11 = lVar11 + 1;
        } while (lVar11 != lStack_248);
        lStack_248 = lVar3;
        func_0x00010bf52a60();
      } while (lStack_248 != 0);
    }
    _objc_release(lVar3);
    puVar9 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_1053b0b5c;
    puStack_210 = &UNK_11084e010;
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar12);
    param_3 = &puStack_228;
    uStack_208 = uVar12;
    func_0x00010c297260(puVar9);
    _objc_release(puVar9);
    _objc_release(uStack_208);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (param_3 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1053b0b5c; end: 1053b0b73;  */

void FUN_1053b0b5c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1053b0b74; end: 1053b0bb3; -[SCDefaultDeltaSyncService hasSynced:] */

bool FUN_1053b0b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c266820(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1053b0bb4; end: 1053b0bb7; -[SCDefaultDeltaSyncService shutdown] */

void FUN_1053b0bb4(void)

{
  return;
}



/* Entry: 1053b0bb8; end: 1053b0c93; -[SCDefaultDeltaSyncService processLogout:] */

void FUN_1053b0bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c0b4840(*(undefined8 *)(param_1 + 0x30));
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be72080(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1053b0c94; end: 1053b0cd7;  */

void FUN_1053b0c94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0b4800(*(undefined8 *)(lVar1 + 0x30));
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1053b0cd8; end: 1053b0ddf; -[SCDefaultDeltaSyncService _performLogoutCleanUp:] */

void FUN_1053b0cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010be16440(param_1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1053b0de0; end: 1053b0e03;  */

uint FUN_1053b0de0(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_respondsToSelector(param_2,PTR_s_logoutCleanUpDeltaSyncGroupKeys_11260abd8);
  return (uint)param_2 & 1;
}



/* Entry: 1053b0e04; end: 1053b10d3;  */

void FUN_1053b0e04(long param_1,long param_2)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar4 = param_2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        lVar14 = *(long *)(lVar12 * 8);
        lVar6 = lVar14;
        func_0x00010c0b4720();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar6);
            }
            uVar15 = *(undefined8 *)(lVar3 + 0x30);
            lVar8 = lVar14;
            func_0x00010c27dd80(lVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4880(uVar15);
            _objc_release(lVar8);
            lVar8 = param_1 + 0x38;
            _objc_loadWeakRetained(lVar8);
            lVar9 = lVar8;
            func_0x00010be71820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
            _objc_release(lVar9);
            lVar13 = lVar13 + 1;
          } while (lVar7 != lVar13);
          lVar7 = lVar6;
          func_0x00010bf52a60();
        }
        _objc_release(lVar6);
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar5);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puVar10 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar15);
    func_0x00010c297260(puVar10);
    _objc_release(uVar15);
    _objc_release(puVar10);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001053b10dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
  return;
}



/* Entry: 1053b10d4; end: 1053b10df;  */

void FUN_1053b10d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053b10dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1053b10e0; end: 1053b1293; -[SCDefaultDeltaSyncService _performCleanUpIfNecessary:groupKey:isLogout:] */

void FUN_1053b10e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_68,param_1);
  func_0x00010be05940(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_70 = param_5;
  _objc_retain(puVar1);
  func_0x00010c0f8500(param_1);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053b1294; end: 1053b13db;  */

void FUN_1053b1294(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bee8840(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf3c2c0(*(undefined8 *)(lVar1 + 0x10));
    uVar2 = *(ulong *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      _objc_opt_respondsToSelector(uVar2,PTR_s_performLogoutCleanUp_transaction_11261bcb8);
      if ((uVar2 & 1) != 0) {
        func_0x00010c0f8a60(*(undefined8 *)(param_1 + 0x28));
      }
      uVar4 = *(undefined8 *)(lVar1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c27dd80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4820(uVar4);
    }
    else {
      _objc_opt_respondsToSelector(uVar2,PTR_s_performClearTokenRequestCleanUp__11261bb80);
      if ((uVar2 & 1) != 0) {
        func_0x00010c0f8580(*(undefined8 *)(param_1 + 0x28));
      }
      uVar4 = *(undefined8 *)(lVar1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c27dd80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3c2e0(uVar4);
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(lVar1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c27dd80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3c300(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053b13dc; end: 1053b1423;  */

void FUN_1053b13dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b1424; end: 1053b1583; -[SCDefaultDeltaSyncService clearSyncTokenForGroupKey:] */

void FUN_1053b1424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1053b1584;
  puStack_58 = &UNK_1108819a0;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_copyWeak(auStack_78,auStack_48);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010be16440(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_release(uStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053b1584; end: 1053b158f;  */

void FUN_1053b1584(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_canProcessDeltaSyncWithGroupKey__1125a8e20,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1053b1590; end: 1053b17bf;  */

void FUN_1053b1590(long param_1,long param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = param_2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar3);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar10 = *(undefined8 *)(lVar1 + 0x30);
          func_0x00010c27dd80(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3c320(uVar10);
          _objc_release(uVar9);
          lVar5 = lVar1;
          func_0x00010be71820(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(lVar5);
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    puVar6 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_1053b17c0;
    puStack_140 = &UNK_11084e010;
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar9);
    param_3 = &puStack_158;
    uStack_138 = uVar9;
    func_0x00010c297260(puVar6);
    _objc_release(puVar6);
    _objc_release(uStack_138);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (param_3 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1053b17c0; end: 1053b17d7;  */

void FUN_1053b17c0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1053b17d8; end: 1053b1887;  */

void FUN_1053b17d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053b1888; end: 1053b1a2f; -[SCDefaultDeltaSyncService _handleBatchSyncSuccessWithProcessor:processorVersion:groupKey:client:syncToken:response:] */

void FUN_1053b1888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  lVar1 = param_8;
  FUN_1053ae5f4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = lVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf6d120(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266440(uVar4,param_2,param_5,param_6,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = lVar1;
    func_0x00010bf6d120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  func_0x00010bfdd140(param_1,param_2,param_5);
  func_0x00010be3bec0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar1,param_8,0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1053b1a30; end: 1053b1be3; -[SCDefaultDeltaSyncService _initiateProcessOfSync:processorVersion:groupKey:client:previousSyncToken:deltaSyncResponse:rawResponse:isLoginProcessing:isInitialSync:isEmptyResponse:] */

void FUN_1053b1a30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,uint param_10)

{
  undefined1 auStack_78 [9];
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  if ((param_10 & 0x10000) == 0) {
    func_0x00010c266340(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_6f = (undefined1)param_10;
  func_0x00010be82620(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1053b1be4; end: 1053b1cb3;  */

void FUN_1053b1be4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      func_0x00010c266320(*(undefined8 *)(lVar1 + 0x30));
    }
    if (*(char *)(param_1 + 0x41) == '\x01') {
      func_0x00010c0b41a0(*(undefined8 *)(lVar1 + 0x30));
      uVar3 = *(undefined8 *)(lVar1 + 0x48);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1053b1cb4;
      puStack_50 = &UNK_110848ba8;
      uStack_48 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uStack_40 = uVar2;
      lStack_38 = lVar1;
      func_0x00010006eaa4(uVar3,&puStack_68);
      _objc_release(uStack_40);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1053b1cb4; end: 1053b1d0b;  */

void FUN_1053b1cb4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf43d60(lVar1,param_2,PTR____kCFBooleanTrue_11034ab68);
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),param_2,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1053b1d0c; end: 1053b1e73; -[SCDefaultDeltaSyncService _processInitialDeltaSyncIfNecessary:groupKey:deltaSyncResponse:rawResponse:] */

void FUN_1053b1d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be37f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053b1e74; end: 1053b1f9b;  */

void FUN_1053b1e74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010bee8840(lVar2,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    lVar4 = lVar2;
    func_0x00010bec9dc0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x30);
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf6d120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar7);
    }
    _objc_release(lVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = uVar7;
    func_0x00010c27dd80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3bec0(lVar2,param_2,uVar7,lVar3,uVar1,uVar8,lVar4,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),0x101);
    _objc_release(uVar8);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1053b1f9c; end: 1053b22fb; -[SCDefaultDeltaSyncService _processSync:processorVersion:groupKey:previousSyncToken:deltaSyncResponse:rawResponse:completion:] */

void FUN_1053b1f9c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_80,param_1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_processRawDeltaSyncWithGroupKey__112622e98);
  if ((uVar1 & 1) == 0) {
    func_0x00010be05940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_1053b22fc;
    puStack_e8 = &UNK_110881bb0;
    _objc_copyWeak(auStack_b8,auStack_80);
    _objc_retain(param_5);
    uStack_e0 = param_5;
    uStack_b0 = param_4;
    _objc_retain(param_6);
    puStack_c0 = &uStack_a0;
    uStack_d8 = param_6;
    _objc_retain(param_3);
    uStack_d0 = param_3;
    _objc_retain(param_7);
    uStack_c8 = param_7;
    _objc_retain(param_9);
    _objc_copyWeak(auStack_108,auStack_80);
    _objc_retain(param_5);
    func_0x00010c0f8500(param_1);
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_108);
    _objc_release(param_9);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_destroyWeak(auStack_b8);
  }
  else {
    uStack_a8 = 0;
    uVar2 = param_3;
    func_0x00010c1151e0(param_3);
    uVar1 = uStack_a8;
    _objc_retain(uStack_a8);
    if (param_9 != 0) {
      (**(code **)(param_9 + 0x10))(param_9,uVar2);
    }
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c071ae0();
      if ((uVar3 & 1) == 0) {
        _objc_release(uVar2);
      }
      else {
        uVar3 = uVar1;
        func_0x00010bf3ec40();
        _objc_release(uVar2);
        if (uVar3 == 3) {
          *(undefined1 *)(puStack_98 + 3) = 1;
        }
      }
    }
    puVar4 = auStack_80;
    _objc_loadWeakRetained(puVar4);
    func_0x00010be829c0();
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1053b22fc; end: 1053b244f;  */

void FUN_1053b22fc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(lVar1 + 0x10);
    func_0x00010c266840();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 == 0 && *(long *)(param_1 + 0x28) == 0) ||
       (uVar3 = uVar2, func_0x00010c071cc0(), (uVar3 & 1) != 0)) {
      uVar6 = *(undefined8 *)(lVar1 + 0x10);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c08b260(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fa220(uVar6);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0740a0(*(undefined8 *)(param_1 + 0x38));
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c28d760(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf6d120(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c114920(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar6);
    }
    else {
      func_0x00010beec4e0(param_2);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
    }
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053b2450; end: 1053b24f3;  */

void FUN_1053b2450(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 1053b24f4; end: 1053b2557;  */

void FUN_1053b24f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be829c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053b2558; end: 1053b267f; -[SCDefaultDeltaSyncService _inProgresSyncForGroupKey:orRun:] */

void FUN_1053b2558(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uStack_38 = 0;
  func_0x00010bec9be0(param_1,param_2,&uStack_38,param_3);
  if ((param_1 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  uVar1 = uStack_38;
  func_0x00010bfbc3e0(uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053b2680; end: 1053b2813; -[SCDefaultDeltaSyncService _processedSyncWithGroupKey:success:unexpectedSyncToken:] */

void FUN_1053b2680(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1053b0524;
  uStack_50 = 0x1053b0534;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1053b2814;
  puStack_90 = &UNK_11084fa08;
  lStack_88 = param_1;
  puStack_68 = puStack_78;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010006eaa4(uVar2,&puStack_a8);
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_5 == 0) {
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(puStack_68[5]);
    }
    else {
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(puStack_68[5]);
    }
    _objc_release(puVar1);
  }
  else {
    func_0x00010bf43d60(puStack_68[5]);
  }
  _objc_release(uStack_80);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1053b2814; end: 1053b2867;  */

void FUN_1053b2814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),
             PTR_s_setObject_forKeyedSubscript__112651bb8,0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b2868; end: 1053b2a2f; -[SCDefaultDeltaSyncService _handleSyncFailureForGroupKey:client:error:] */

void FUN_1053b2868(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (param_5 == 0) {
    func_0x00010c2663e0(uVar2);
  }
  else {
    func_0x00010c252d60(param_5);
    func_0x00010c0df780(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2663e0(uVar2);
    _objc_release(puVar1);
  }
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1053b0524;
  uStack_50 = 0x1053b0534;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1053b2a30;
  puStack_90 = &UNK_11084fa08;
  lStack_88 = param_1;
  puStack_68 = puStack_78;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010006eaa4(uVar2,&puStack_a8);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(puStack_68[5]);
  _objc_release(puVar1);
  _objc_release(uStack_80);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053b2a30; end: 1053b2a83;  */

void FUN_1053b2a30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),
             PTR_s_setObject_forKeyedSubscript__112651bb8,0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b2a84; end: 1053b2b13; -[SCDefaultDeltaSyncService .cxx_destruct] */

void FUN_1053b2a84(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1053b2b14; end: 1053b2b23; -[SCDeltaSyncBlockCallback onSuccess:] */

void FUN_1053b2b14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001053b2b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 1053b2b24; end: 1053b2b33; -[SCDeltaSyncBlockCallback onError:] */

void FUN_1053b2b24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001053b2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 1053b2b34; end: 1053b2b63; -[SCDeltaSyncBlockCallback .cxx_destruct] */

void FUN_1053b2b34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053b2b64; end: 1053b2bf3; -[SCDeltaSyncDuplexTriggerHandler endSubscribing] */

void FUN_1053b2b64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282120();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282120();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053b2bf4; end: 1053b2d7f; -[SCDeltaSyncDuplexTriggerHandler onReceivePayloadType:message:] */

void FUN_1053b2bf4(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x00010bf8b000(*(undefined8 *)(param_1 + 0x28));
  if (param_3 - 1U < 3) {
    uVar5 = *(undefined8 *)(&PTR_PTR_110881c70)[param_3 - 1U];
    _objc_retain(param_4);
    _objc_opt_class(uVar5);
    uVar1 = param_4;
    _objc_opt_isKindOfClass(param_4,uVar5);
    uVar2 = param_4;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    uVar1 = uVar2;
    func_0x00010c248120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x00010c087060(uVar1);
      FUN_1053b2de0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b0440;
      _objc_alloc(PTR_PTR_1126b0440);
      puVar4 = PTR_PTR_1126b0438;
      func_0x00010c0d5160(PTR_PTR_1126b0438);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021180(puVar3);
      _objc_release(puVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b0448;
      _objc_alloc(PTR_PTR_1126b0448);
      func_0x00010c02d480();
      func_0x00010c266020(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar5);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053b2d80; end: 1053b2ddf; -[SCDeltaSyncDuplexTriggerHandler .cxx_destruct] */

void FUN_1053b2d80(long param_1)

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



/* Entry: 1053b2de0; end: 1053b2e07;  */

undefined ** FUN_1053b2de0(int param_1)

{
  if (param_1 - 1U < 4) {
    return (undefined **)(&PTR_PTR_110881c88)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1053b2e08; end: 1053b2f27; -[SCDeltaSyncBootstrapResponseProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053b2e08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b81e0;
  _objc_alloc(PTR_PTR_1126b81e0);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112722584;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c293780(lVar4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272258c;
    _objc_loadWeakRetained(lVar5);
  }
  lVar3 = lVar5;
  func_0x00010c248100(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ee00(puVar1,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112722588;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c127e00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b2f28; end: 1053b2f6b; -[SCDeltaSyncBootstrapResponseProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053b2f28(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272258c);
  _objc_destroyWeak(param_1 + _DAT_112722588);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722584);
  return;
}



/* Entry: 1053b2f6c; end: 1053b300f; -[SCDeltaSyncBootstrapResponseProcessor initWithUserSessionContext:uploadService:] */

undefined1 *
FUN_1053b2f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7d98;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053b3010; end: 1053b315b; -[SCDeltaSyncBootstrapResponseProcessor processBootstrapResponse] */

void FUN_1053b3010(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1053b315c;
  uStack_50 = 0x1053b316c;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  _objc_retain(uVar1);
  func_0x00010c0bfac0(uVar2);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053b315c; end: 1053b3177;  */

void FUN_1053b315c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053b3178; end: 1053b327f;  */

void FUN_1053b3178(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b81e8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff92e0();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c114ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b3280; end: 1053b32af; -[SCDeltaSyncBootstrapResponseProcessor .cxx_destruct] */

void FUN_1053b3280(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053b32b0; end: 1053b3323; -[SCJanusLogInSyncData initWithBootstrapData:] */

undefined1 * FUN_1053b32b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7da0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053b3324; end: 1053b33fb; -[SCJanusLogInSyncData rawDeltaSyncResponseForSyncKey:] */

void FUN_1053b3324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd5fd8);
    if ((int)uVar1 == 0) {
      puVar3 = (undefined *)0x0;
      goto LAB_1053b33e0;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2629e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf52440(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b80b8;
  func_0x00010c0f4240(PTR_PTR_1126b80b8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
LAB_1053b33e0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1053b33fc; end: 1053b343f; -[SCJanusLogInSyncData deltaSyncResponseForSyncKey:] */

void FUN_1053b33fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_1053ae5f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053b3440; end: 1053b344b; -[SCJanusLogInSyncData .cxx_destruct] */

void FUN_1053b3440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053b344c; end: 1053b349f; -[SCDeltaSyncGrapheneMetricsReporter loginProcessingInitiated] */

void FUN_1053b344c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined **)(param_2 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053b34a0; end: 1053b35a3; -[SCDeltaSyncGrapheneMetricsReporter loginProcessingScheduledForGroupKey:client:] */

void FUN_1053b34a0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf5fd80(uVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df720(param_1,puVar1);
  fVar4 = SUB84(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  fVar5 = fVar4;
  func_0x00010bfb2c80(*(undefined8 *)(param_2 + 0x20));
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar2 = PTR_PTR_1126b81f8;
  func_0x00010c0b41e0(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60300(param_2,param_3,puVar2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010befbfe0(uVar3,param_3,param_2,(long)(fVar4 - fVar5));
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b35a4; end: 1053b36a7; -[SCDeltaSyncGrapheneMetricsReporter loginProcessingCompletedForGroupKey:client:] */

void FUN_1053b35a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf5fd80(uVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df720(param_1,puVar1);
  fVar4 = SUB84(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  fVar5 = fVar4;
  func_0x00010bfb2c80(*(undefined8 *)(param_2 + 0x20));
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar2 = PTR_PTR_1126b81f8;
  func_0x00010c0b4180(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60300(param_2,param_3,puVar2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010befbfe0(uVar3,param_3,param_2,(long)(fVar4 - fVar5));
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b36a8; end: 1053b36fb; -[SCDeltaSyncGrapheneMetricsReporter logoutProcessingInitiated] */

void FUN_1053b36a8(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined **)(param_2 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053b36fc; end: 1053b386b; -[SCDeltaSyncGrapheneMetricsReporter logoutProcessingScheduledForGroupKey:client:] */

void FUN_1053b36fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_5);
  func_0x00010bf5fd80(uVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df720(param_1);
  fVar4 = SUB84(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  fVar5 = fVar4;
  func_0x00010bfb2c80(*(undefined8 *)(param_2 + 0x28));
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053b386c;
  puStack_70 = &UNK_110848ba8;
  lStack_68 = param_2;
  uStack_60 = param_4;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar3,param_3,&puStack_88);
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar2 = PTR_PTR_1126b81f8;
  func_0x00010c0b4860(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60300(param_2,param_3,puVar2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010befbfe0(uVar3,param_3,param_2,(long)(fVar4 - fVar5));
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053b386c; end: 1053b387b;  */

void FUN_1053b386c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),
             PTR_s_setObject_forKeyedSubscript__112651bb8,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b387c; end: 1053b3a47; -[SCDeltaSyncGrapheneMetricsReporter logoutProcessingCompletedForGroupKey:client:] */

void FUN_1053b387c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c0df720(param_1 * 1000.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1053b3a48;
  uStack_60 = 0x1053b3a58;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar3);
  func_0x00010bfb2c80(puVar1);
  func_0x00010bfb2c80(puStack_78[5]);
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar2 = PTR_PTR_1126b81f8;
  func_0x00010c0b4800(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60300(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar3);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053b3a48; end: 1053b3a5f;  */

void FUN_1053b3a48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053b3a60; end: 1053b3aa3;  */

void FUN_1053b3a60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053b3aa4; end: 1053b3b4b; -[SCDeltaSyncGrapheneMetricsReporter logoutProcessingCompleted] */

void FUN_1053b3aa4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  param_1 = param_1 * 1000.0;
  func_0x00010c0df720(param_1,puVar1);
  fVar4 = SUB84(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  fVar5 = fVar4;
  func_0x00010bfb2c80(*(undefined8 *)(param_2 + 0x28));
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar2 = PTR_PTR_1126b81f8;
  func_0x00010c0b4740(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar3,param_3,puVar2,(long)(fVar4 - fVar5));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b3b4c; end: 1053b3bf7; -[SCDeltaSyncGrapheneMetricsReporter clearSyncTokenProcessedForGroupKey:client:] */

void FUN_1053b3b4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b81f8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf3a500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60300(param_1,param_2,puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bfec2a0(uVar2,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b3bf8; end: 1053b3ccb; -[SCDeltaSyncGrapheneMetricsReporter clearSyncTokenProcessingScheduledForGroupKey:client:] */

void FUN_1053b3bf8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1053b3ccc;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_2;
  uStack_40 = param_4;
  puStack_38 = puVar1;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar2,param_3,&puStack_68);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053b3ccc; end: 1053b3cdb;  */

void FUN_1053b3ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),
             PTR_s_setObject_forKeyedSubscript__112651bb8,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b3cdc; end: 1053b3ea7; -[SCDeltaSyncGrapheneMetricsReporter clearSyncTokenProcessingCompletedForGroupKey:client:] */

void FUN_1053b3cdc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c0df720(param_1 * 1000.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1053b3a48;
  uStack_60 = 0x1053b3a58;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar3);
  func_0x00010bfb2c80(puVar1);
  func_0x00010bfb2c80(puStack_78[5]);
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar2 = PTR_PTR_1126b81f8;
  func_0x00010bf3a4e0(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60300(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar3);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053b3ea8; end: 1053b3eeb;  */

void FUN_1053b3ea8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053b3eec; end: 1053b444f; -[SCDeltaSyncGrapheneMetricsReporter syncRequestSucceededForGroupKey:client:updates:deletions:] */

void FUN_1053b3eec(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1053b3a48;
  uStack_88 = 0x1053b3a58;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  dVar5 = 1.60807493534087e-314;
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar4);
  if (puStack_a0[5] != 0) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c2664e0(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be60320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0(puStack_a0[5]);
    func_0x00010befc000(param_1 - dVar5,uVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c266520(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be60320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c266540(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be60320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(param_6);
    func_0x00010bfec320(uVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c2664a0(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be60320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(param_7);
    func_0x00010bfec320(uVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c266500(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be60320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(param_6);
    func_0x00010bf529e0(param_7);
    func_0x00010bfec320(uVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    lVar2 = param_6;
    func_0x00010bf529e0();
    lVar3 = param_7;
    func_0x00010bf529e0();
    if (lVar2 + lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_2 + 8);
      puVar1 = PTR_PTR_1126b81f8;
      func_0x00010c265e40(PTR_PTR_1126b81f8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010be60320(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(uVar4);
      _objc_release(lVar2);
      _objc_release(puVar1);
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c266540(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be60320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(param_6);
    func_0x00010bef9180(uVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c2664a0(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be60320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(param_7);
    func_0x00010bef9180(uVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c266500(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be60320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(param_6);
    func_0x00010bf529e0(param_7);
    func_0x00010bef9180(uVar4);
    _objc_release(param_2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053b4450; end: 1053b44db;  */

/* WARNING: Possible PIC construction at 0x0001053b4494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001053b4498) */

void FUN_1053b4450(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b44dc; end: 1053b468f; -[SCDeltaSyncGrapheneMetricsReporter syncRequestFailedForGroupKey:client:errorStatus:] */

void FUN_1053b44dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c09fac0(uVar5);
  puVar1 = PTR_PTR_1126b81f8;
  func_0x00010c2664c0(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be60320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar4 = lVar2;
  if (param_5 != 0) {
    lVar3 = param_5;
    func_0x00010c25d700(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8));
  _objc_release(lVar4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053b4690; end: 1053b46ef;  */

/* WARNING: Possible PIC construction at 0x0001053b46a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001053b46ac) */

void FUN_1053b4690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b46f0; end: 1053b482f; -[SCDeltaSyncGrapheneMetricsReporter syncProcessingInitiatedForGroupKey:client:isInitial:] */

void FUN_1053b46f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1053b4784;
  puStack_50 = &UNK_11084d5f8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_3);
  func_0x00010c09fac0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053b4830; end: 1053b4aff; -[SCDeltaSyncGrapheneMetricsReporter syncProcessingCompletedForGroupKey:client:successfully:] */

void FUN_1053b4830(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_5 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1053b4b00;
    puStack_88 = &UNK_110841f80;
    lStack_80 = param_1;
    _objc_retain(param_3);
    puStack_78 = param_3;
    func_0x00010c09fac0(uVar4);
    puVar1 = puStack_78;
  }
  else {
    func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x2020000000;
    uStack_a8 = 0;
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x3032000000;
    pcStack_d8 = FUN_1053b3a48;
    uStack_d0 = 0x1053b3a58;
    uStack_c8 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    fVar5 = -32.0;
    _objc_retain(param_3);
    func_0x00010c09fac0(uVar4);
    if (puStack_e8[5] != 0) {
      func_0x00010bfb2c80(puVar1);
      fVar6 = fVar5;
      func_0x00010bfb2c80(puStack_e8[5]);
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar2 = PTR_PTR_1126b81f8;
      func_0x00010bf64d00(PTR_PTR_1126b81f8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010be60300(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc000((double)(fVar5 - fVar6),uVar4);
      _objc_release(lVar3);
      _objc_release(puVar2);
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar2 = PTR_PTR_1126b81f8;
      func_0x00010c265de0(PTR_PTR_1126b81f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be60320(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc000((double)(fVar5 - fVar6),uVar4);
      _objc_release(param_1);
      _objc_release(puVar2);
    }
    _objc_release(param_3);
    __Block_object_dispose(&uStack_f0,8);
    _objc_release(uStack_c8);
    __Block_object_dispose(&uStack_c0,8);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053b4b00; end: 1053b4bbb;  */

/* WARNING: Possible PIC construction at 0x0001053b4b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001053b4b1c) */

void FUN_1053b4b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b4bbc; end: 1053b4d87; -[SCDeltaSyncGrapheneMetricsReporter putRequestInitiatedForItem:client:] */

void FUN_1053b4bbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1053b4d88;
  puStack_78 = &UNK_110841f80;
  lStack_70 = param_1;
  uStack_68 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar4,param_2,&puStack_90);
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b81f8;
  func_0x00010c11c880(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c084700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfcecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be60300(param_1,param_2,puVar1,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar5,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b81f8;
  func_0x00010c11c8e0(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c084700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfcecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60300(param_1,param_2,puVar1,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfec2a0(uVar5,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053b4d88; end: 1053b4ddf;  */

void FUN_1053b4d88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5fd80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),param_2,puVar1,
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b4de0; end: 1053b503f; -[SCDeltaSyncGrapheneMetricsReporter putRequestSucceededForItem:client:] */

void FUN_1053b4de0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1053b3a48;
  uStack_80 = 0x1053b3a58;
  uStack_78 = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  dVar6 = 1.60807493534087e-314;
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar4);
  if (puStack_98[5] != 0) {
    uVar5 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c11c940(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c084700(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfcecc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010be60300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0(puStack_98[5]);
    func_0x00010befc000(param_1 - dVar6,uVar5);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c11c960(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c084700(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfcecc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be60300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar5);
    _objc_release(param_2);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053b5040; end: 1053b508f;  */

void FUN_1053b5040(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b5090; end: 1053b522b; -[SCDeltaSyncGrapheneMetricsReporter putRequestFailedForItem:client:errorStatus:] */

void FUN_1053b5090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053b522c;
  puStack_68 = &UNK_110841f80;
  lStack_60 = param_1;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar6,param_2,&puStack_80);
  puVar1 = PTR_PTR_1126b81f8;
  func_0x00010c11c920(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c084700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bfcecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be60300(param_1,param_2,puVar1,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar1);
  lVar5 = lVar3;
  if (param_5 != 0) {
    lVar4 = param_5;
    func_0x00010c25d700(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(lVar3,param_2,&PTR____CFConstantStringClassReference_110dd6078,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(uStack_58);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053b522c; end: 1053b5237;  */

void FUN_1053b522c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}


