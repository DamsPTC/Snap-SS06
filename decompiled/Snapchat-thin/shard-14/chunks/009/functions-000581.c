/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6cb1f0; end: 10b6cb3af; +[SCGallerySnap fetchGallerySnapsForEntryHighlighted:dataObjectContext:] */

void FUN_10b6cb1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b6c5c80;
  uStack_80 = 0x10b6c5c90;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6cb3b0; end: 10b6cb613;  */

void FUN_10b6cb3b0(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_2;
    func_0x00010bf9b3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (lVar15 != 0) {
      lVar7 = lVar15;
      func_0x00010bfe35a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar13 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126af4d0);
          func_0x00010bfe9d60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6);
          _objc_release(uVar4);
          lVar14 = lVar14 + 1;
        } while (lVar13 != lVar14);
        lVar13 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
    }
  }
  uVar4 = 0;
  puVar8 = puVar6;
  func_0x00010bf51e00();
  lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar12 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined **)(lVar13 + 0x28) = puVar8;
  _objc_release(uVar12);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70e98;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar15);
  _objc_release(0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar4);
    _objc_retain(ppuVar10);
    puStack_1e8 = &uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x3032000000;
    pcStack_1d8 = FUN_10b6c5c80;
    uStack_1d0 = 0x10b6c5c90;
    uStack_1c8 = 0;
    puStack_208 = &uStack_210;
    uStack_210 = 0;
    uStack_200 = 0x2020000000;
    uStack_1f8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar5 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar5);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar4);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar4);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_208 + 3) & 1) != 0);
    uVar12 = puStack_1e8[5];
    _objc_retain(uVar12);
    __Block_object_dispose(&uStack_210,8);
    __Block_object_dispose(&uStack_1f0,8);
    _objc_release(uStack_1c8);
    _objc_release(ppuVar10);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
    return;
  }
  return;
}



/* Entry: 10b6cb614; end: 10b6cb7d3; +[SCGallerySnap fetchGallerySnapsForSyncedEntry:dataObjectContext:] */

void FUN_10b6cb614(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b6c5c80;
  uStack_80 = 0x10b6c5c90;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6cb7d4; end: 10b6cba37;  */

void FUN_10b6cb7d4(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_2;
    func_0x00010bf9b3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (lVar15 != 0) {
      lVar7 = lVar15;
      func_0x00010c266ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar13 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126af4d0);
          func_0x00010bfe9d60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6);
          _objc_release(uVar4);
          lVar14 = lVar14 + 1;
        } while (lVar13 != lVar14);
        lVar13 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
    }
  }
  uVar4 = 0;
  puVar8 = puVar6;
  func_0x00010bf51e00();
  lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar12 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined **)(lVar13 + 0x28) = puVar8;
  _objc_release(uVar12);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70eb8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar15);
  _objc_release(0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar4);
    _objc_retain(ppuVar10);
    puStack_1e8 = &uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x3032000000;
    pcStack_1d8 = FUN_10b6c5c80;
    uStack_1d0 = 0x10b6c5c90;
    uStack_1c8 = 0;
    puStack_208 = &uStack_210;
    uStack_210 = 0;
    uStack_200 = 0x2020000000;
    uStack_1f8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar5 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar5);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar4);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar4);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_208 + 3) & 1) != 0);
    uVar12 = puStack_1e8[5];
    _objc_retain(uVar12);
    __Block_object_dispose(&uStack_210,8);
    __Block_object_dispose(&uStack_1f0,8);
    _objc_release(uStack_1c8);
    _objc_release(ppuVar10);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
    return;
  }
  return;
}



/* Entry: 10b6cba38; end: 10b6cbbf7; +[SCGallerySnap fetchGallerySnapsForSyncedEntryHighlighted:dataObjectContext:] */

void FUN_10b6cba38(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b6c5c80;
  uStack_80 = 0x10b6c5c90;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6cbbf8; end: 10b6cbe5b;  */

void FUN_10b6cbbf8(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_2;
    func_0x00010bf9b3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (lVar15 != 0) {
      lVar7 = lVar15;
      func_0x00010c266a60();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar13 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126af4d0);
          func_0x00010bfe9d60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6);
          _objc_release(uVar4);
          lVar14 = lVar14 + 1;
        } while (lVar13 != lVar14);
        lVar13 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
    }
  }
  uVar4 = 0;
  puVar8 = puVar6;
  func_0x00010bf51e00();
  lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar12 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined **)(lVar13 + 0x28) = puVar8;
  _objc_release(uVar12);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70ed8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar15);
  _objc_release(0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar4);
    _objc_retain(ppuVar10);
    puStack_1e8 = &uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x3032000000;
    pcStack_1d8 = FUN_10b6cc020;
    uStack_1d0 = 0x10b6cc030;
    uStack_1c8 = 0;
    puStack_208 = &uStack_210;
    uStack_210 = 0;
    uStack_200 = 0x2020000000;
    uStack_1f8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar5 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar5);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar4);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar4);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_208 + 3) & 1) != 0);
    uVar12 = puStack_1e8[5];
    _objc_retain(uVar12);
    __Block_object_dispose(&uStack_210,8);
    __Block_object_dispose(&uStack_1f0,8);
    _objc_release(uStack_1c8);
    _objc_release(ppuVar10);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
    return;
  }
  return;
}



/* Entry: 10b6cbe5c; end: 10b6cc01f; +[SCGallerySnapDetail fetchGallerySnapDetailsWithOptions:dataObjectContext:] */

void FUN_10b6cbe5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b6cc020;
  uStack_80 = 0x10b6cc030;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6cc020; end: 10b6cc037;  */

void FUN_10b6cc020(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6cc038; end: 10b6cc37b;  */

long FUN_10b6cc038(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar5 = PTR_PTR_1126e0568;
  func_0x00010bf96ec0(PTR_PTR_1126e0568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(uVar6);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar4);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar4);
  func_0x00010c1edca0(puVar4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c118bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar12 != 0) {
    func_0x00010c1ed520(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c118bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5060(puVar4);
    _objc_release(uVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (lVar7 != 0) {
    if (lVar12 == 0) {
      _objc_retain(lVar7);
      lVar12 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126bc7b8);
          func_0x00010bfe9d60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar6);
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar8 = puVar5;
      func_0x00010bf51e00();
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined **)(lVar12 + 0x28) = puVar8;
    }
    else {
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(lVar7);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar7;
    }
    _objc_release(uVar6);
  }
  uVar6 = 0;
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70ef8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(ppuVar10);
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x2020000000;
    uStack_1c8 = 0;
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x2020000000;
    uStack_1e8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar4);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar6);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar6);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_1f8 + 3) & 1) != 0);
    lVar12 = puStack_1d8[3];
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(ppuVar10);
    _objc_release(uVar6);
    return lVar12;
  }
  return param_2;
}



/* Entry: 10b6cc37c; end: 10b6cc50f; +[SCGallerySnapDetail countOfGallerySnapDetailsWithOptions:dataObjectContext:] */

undefined8 FUN_10b6cc37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_a8 + 3) & 1) != 0);
  uVar4 = puStack_88[3];
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6cc510; end: 10b6cc66b;  */

void FUN_10b6cc510(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0568;
  func_0x00010bf96ec0(PTR_PTR_1126e0568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar2);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar2);
  uVar4 = param_2;
  func_0x00010bf52ae0();
  _objc_release(param_2);
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(0);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b6cc66c; end: 10b6cc8b3; +[SCGallerySnapDetail fetchGallerySnapDetailForSnap:options:dataObjectContext:] */

void FUN_10b6cc66c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6cc020;
  uStack_88 = 0x10b6cc030;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6cc020;
  uStack_d8 = 0x10b6cc030;
  uStack_d0 = 0;
  do {
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  lVar4 = puStack_a0[5];
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puStack_a0[5];
    func_0x00010bfb1920(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10b6cc8b4; end: 10b6ccc9b;  */

void FUN_10b6cc8b4(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0568;
  func_0x00010bf96ec0(PTR_PTR_1126e0568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar9 == 0) {
    func_0x00010c1dfc80(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar6);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar6);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar6);
  func_0x00010c1edca0(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  lVar9 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = uVar14;
  _objc_release(uVar4);
  if ((lVar9 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0)) {
    _objc_retain(lVar9);
    lVar15 = lVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(PTR_PTR_1126bc7b8);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      lVar15 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  puVar10 = puVar7;
  func_0x00010bf51e00();
  lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar10;
  _objc_release(uVar4);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70f58;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  puStack_208 = &uStack_210;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_10b6cce60;
  uStack_1f0 = 0x10b6cce70;
  uStack_1e8 = 0;
  puStack_228 = &uStack_230;
  uStack_230 = 0;
  uStack_220 = 0x2020000000;
  uStack_218 = 0;
  do {
    _objc_retain(ppuVar12);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    ppuVar11 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar7);
    ppuVar1 = ppuVar12;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar12);
    _objc_retain(uVar4);
    _objc_retain(ppuVar1);
    func_0x00010c0f8240(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(uVar4);
    _objc_release(ppuVar1);
  } while ((*(byte *)(puStack_228 + 3) & 1) != 0);
  uVar14 = puStack_208[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_230,8);
  __Block_object_dispose(&uStack_210,8);
  _objc_release(uStack_1e8);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6ccc9c; end: 10b6cce5f; +[SCGallerySnapDoc fetchGallerySnapDocsWithOptions:dataObjectContext:] */

void FUN_10b6ccc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b6cce60;
  uStack_80 = 0x10b6cce70;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6cce60; end: 10b6cce77;  */

void FUN_10b6cce60(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6cce78; end: 10b6cd1bb;  */

long FUN_10b6cce78(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar5 = PTR_PTR_1126e0570;
  func_0x00010bf96ec0(PTR_PTR_1126e0570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(uVar6);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar4);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar4);
  func_0x00010c1edca0(puVar4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c118bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar12 != 0) {
    func_0x00010c1ed520(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c118bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5060(puVar4);
    _objc_release(uVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (lVar7 != 0) {
    if (lVar12 == 0) {
      _objc_retain(lVar7);
      lVar12 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126bc800);
          func_0x00010bfe9d60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar6);
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar8 = puVar5;
      func_0x00010bf51e00();
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined **)(lVar12 + 0x28) = puVar8;
    }
    else {
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(lVar7);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar7;
    }
    _objc_release(uVar6);
  }
  uVar6 = 0;
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70f78;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(ppuVar10);
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x2020000000;
    uStack_1c8 = 0;
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x2020000000;
    uStack_1e8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar4);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar6);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar6);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_1f8 + 3) & 1) != 0);
    lVar12 = puStack_1d8[3];
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(ppuVar10);
    _objc_release(uVar6);
    return lVar12;
  }
  return param_2;
}



/* Entry: 10b6cd1bc; end: 10b6cd34f; +[SCGallerySnapDoc countOfGallerySnapDocsWithOptions:dataObjectContext:] */

undefined8 FUN_10b6cd1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_a8 + 3) & 1) != 0);
  uVar4 = puStack_88[3];
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6cd350; end: 10b6cd4ab;  */

void FUN_10b6cd350(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0570;
  func_0x00010bf96ec0(PTR_PTR_1126e0570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar2);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar2);
  uVar4 = param_2;
  func_0x00010bf52ae0();
  _objc_release(param_2);
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(0);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b6cd4ac; end: 10b6cd6f3; +[SCGallerySnapDoc fetchGallerySnapDocForEntry:options:dataObjectContext:] */

void FUN_10b6cd4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6cce60;
  uStack_88 = 0x10b6cce70;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6cce60;
  uStack_d8 = 0x10b6cce70;
  uStack_d0 = 0;
  do {
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  lVar4 = puStack_a0[5];
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puStack_a0[5];
    func_0x00010bfb1920(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10b6cd6f4; end: 10b6cdadb;  */

void FUN_10b6cd6f4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0570;
  func_0x00010bf96ec0(PTR_PTR_1126e0570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar9 == 0) {
    func_0x00010c1dfc80(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar6);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar6);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar6);
  func_0x00010c1edca0(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  lVar9 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = uVar14;
  _objc_release(uVar4);
  if ((lVar9 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0)) {
    _objc_retain(lVar9);
    param_5 = 0x10;
    lVar15 = lVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(PTR_PTR_1126bc800);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = 0x10;
      lVar15 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  puVar10 = puVar7;
  func_0x00010bf51e00();
  lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar10;
  _objc_release(uVar4);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70fb8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  _objc_retain(param_5);
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_10b6cce60;
  uStack_1f8 = 0x10b6cce70;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6cce60;
  uStack_248 = 0x10b6cce70;
  uStack_240 = 0;
  do {
    _objc_retain(param_5);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar7);
    uVar1 = param_5;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_230 + 3) & 1) != 0);
  lVar9 = puStack_210[5];
  func_0x00010bf529e0();
  if (lVar9 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = puStack_210[5];
    func_0x00010bfb1920(uVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(param_5);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6cdadc; end: 10b6cdd23; +[SCGallerySnapDoc fetchGallerySnapDocForSyncedEntry:options:dataObjectContext:] */

void FUN_10b6cdadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6cce60;
  uStack_88 = 0x10b6cce70;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6cce60;
  uStack_d8 = 0x10b6cce70;
  uStack_d0 = 0;
  do {
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  lVar4 = puStack_a0[5];
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puStack_a0[5];
    func_0x00010bfb1920(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10b6cdd24; end: 10b6ce10b;  */

void FUN_10b6cdd24(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0570;
  func_0x00010bf96ec0(PTR_PTR_1126e0570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar9 == 0) {
    func_0x00010c1dfc80(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar6);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar6);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar6);
  func_0x00010c1edca0(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  lVar9 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = uVar14;
  _objc_release(uVar4);
  if ((lVar9 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0)) {
    _objc_retain(lVar9);
    lVar15 = lVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(PTR_PTR_1126bc800);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      lVar15 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  puVar10 = puVar7;
  func_0x00010bf51e00();
  lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar10;
  _objc_release(uVar4);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70fd8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  puStack_208 = &uStack_210;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_10b6ce2d0;
  uStack_1f0 = 0x10b6ce2e0;
  uStack_1e8 = 0;
  puStack_228 = &uStack_230;
  uStack_230 = 0;
  uStack_220 = 0x2020000000;
  uStack_218 = 0;
  do {
    _objc_retain(ppuVar12);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    ppuVar11 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar7);
    ppuVar1 = ppuVar12;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar12);
    _objc_retain(uVar4);
    _objc_retain(ppuVar1);
    func_0x00010c0f8240(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(uVar4);
    _objc_release(ppuVar1);
  } while ((*(byte *)(puStack_228 + 3) & 1) != 0);
  uVar14 = puStack_208[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_230,8);
  __Block_object_dispose(&uStack_210,8);
  _objc_release(uStack_1e8);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6ce10c; end: 10b6ce2cf; +[SCGallerySnapMiniThumbnail fetchGallerySnapMiniThumbnailsWithOptions:dataObjectContext:] */

void FUN_10b6ce10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b6ce2d0;
  uStack_80 = 0x10b6ce2e0;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6ce2d0; end: 10b6ce2e7;  */

void FUN_10b6ce2d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6ce2e8; end: 10b6ce62b;  */

long FUN_10b6ce2e8(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar5 = PTR_PTR_1126e0578;
  func_0x00010bf96ec0(PTR_PTR_1126e0578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(uVar6);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar4);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar4);
  func_0x00010c1edca0(puVar4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c118bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar12 != 0) {
    func_0x00010c1ed520(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c118bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5060(puVar4);
    _objc_release(uVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (lVar7 != 0) {
    if (lVar12 == 0) {
      _objc_retain(lVar7);
      lVar12 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126bc7c8);
          func_0x00010bfe9d60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar6);
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar8 = puVar5;
      func_0x00010bf51e00();
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined **)(lVar12 + 0x28) = puVar8;
    }
    else {
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(lVar7);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar7;
    }
    _objc_release(uVar6);
  }
  uVar6 = 0;
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70ff8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(ppuVar10);
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x2020000000;
    uStack_1c8 = 0;
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x2020000000;
    uStack_1e8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar4);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar6);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar6);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_1f8 + 3) & 1) != 0);
    lVar12 = puStack_1d8[3];
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(ppuVar10);
    _objc_release(uVar6);
    return lVar12;
  }
  return param_2;
}



/* Entry: 10b6ce62c; end: 10b6ce7bf; +[SCGallerySnapMiniThumbnail countOfGallerySnapMiniThumbnailsWithOptions:dataObjectContext:] */

undefined8 FUN_10b6ce62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_a8 + 3) & 1) != 0);
  uVar4 = puStack_88[3];
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6ce7c0; end: 10b6ce91b;  */

void FUN_10b6ce7c0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0578;
  func_0x00010bf96ec0(PTR_PTR_1126e0578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar2);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar2);
  uVar4 = param_2;
  func_0x00010bf52ae0();
  _objc_release(param_2);
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(0);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b6ce91c; end: 10b6ceb63; +[SCGallerySnapMiniThumbnail fetchGallerySnapMiniThumbnailForSnap:options:dataObjectContext:] */

void FUN_10b6ce91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6ce2d0;
  uStack_88 = 0x10b6ce2e0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6ce2d0;
  uStack_d8 = 0x10b6ce2e0;
  uStack_d0 = 0;
  do {
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  lVar4 = puStack_a0[5];
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puStack_a0[5];
    func_0x00010bfb1920(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10b6ceb64; end: 10b6cef4b;  */

void FUN_10b6ceb64(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0578;
  func_0x00010bf96ec0(PTR_PTR_1126e0578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar9 == 0) {
    func_0x00010c1dfc80(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar6);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar6);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar6);
  func_0x00010c1edca0(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  lVar9 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = uVar14;
  _objc_release(uVar4);
  if ((lVar9 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0)) {
    _objc_retain(lVar9);
    lVar15 = lVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(PTR_PTR_1126bc7c8);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      lVar15 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  puVar10 = puVar7;
  func_0x00010bf51e00();
  lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar10;
  _objc_release(uVar4);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f71038;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  puStack_208 = &uStack_210;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_10b6cf110;
  uStack_1f0 = 0x10b6cf120;
  uStack_1e8 = 0;
  puStack_228 = &uStack_230;
  uStack_230 = 0;
  uStack_220 = 0x2020000000;
  uStack_218 = 0;
  do {
    _objc_retain(ppuVar12);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    ppuVar11 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar7);
    ppuVar1 = ppuVar12;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar12);
    _objc_retain(uVar4);
    _objc_retain(ppuVar1);
    func_0x00010c0f8240(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(uVar4);
    _objc_release(ppuVar1);
  } while ((*(byte *)(puStack_228 + 3) & 1) != 0);
  uVar14 = puStack_208[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_230,8);
  __Block_object_dispose(&uStack_210,8);
  _objc_release(uStack_1e8);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6cef4c; end: 10b6cf10f; +[SCGallerySnapTransientState fetchGallerySnapTransientStatesWithOptions:dataObjectContext:] */

void FUN_10b6cef4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b6cf110;
  uStack_80 = 0x10b6cf120;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6cf110; end: 10b6cf127;  */

void FUN_10b6cf110(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6cf128; end: 10b6cf46b;  */

long FUN_10b6cf128(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar5 = PTR_PTR_1126e0580;
  func_0x00010bf96ec0(PTR_PTR_1126e0580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(uVar6);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar4);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar4);
  func_0x00010c1edca0(puVar4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c118bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar12 != 0) {
    func_0x00010c1ed520(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c118bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5060(puVar4);
    _objc_release(uVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (lVar7 != 0) {
    if (lVar12 == 0) {
      _objc_retain(lVar7);
      lVar12 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126bc810);
          func_0x00010bfe9d60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar6);
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar8 = puVar5;
      func_0x00010bf51e00();
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined **)(lVar12 + 0x28) = puVar8;
    }
    else {
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(lVar7);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar7;
    }
    _objc_release(uVar6);
  }
  uVar6 = 0;
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f71058;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(ppuVar10);
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x2020000000;
    uStack_1c8 = 0;
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x2020000000;
    uStack_1e8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar4);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar6);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar6);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_1f8 + 3) & 1) != 0);
    lVar12 = puStack_1d8[3];
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(ppuVar10);
    _objc_release(uVar6);
    return lVar12;
  }
  return param_2;
}



/* Entry: 10b6cf46c; end: 10b6cf5ff; +[SCGallerySnapTransientState countOfGallerySnapTransientStatesWithOptions:dataObjectContext:] */

undefined8 FUN_10b6cf46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_a8 + 3) & 1) != 0);
  uVar4 = puStack_88[3];
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6cf600; end: 10b6cf75b;  */

void FUN_10b6cf600(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0580;
  func_0x00010bf96ec0(PTR_PTR_1126e0580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar2);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar2);
  uVar4 = param_2;
  func_0x00010bf52ae0();
  _objc_release(param_2);
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(0);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b6cf75c; end: 10b6cf91f; +[SCGalleryUserDefaults fetchGalleryUserDefaultsWithOptions:dataObjectContext:] */

void FUN_10b6cf75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b6cf920;
  uStack_80 = 0x10b6cf930;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6cf920; end: 10b6cf937;  */

void FUN_10b6cf920(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6cf938; end: 10b6cfc7b;  */

long FUN_10b6cf938(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar5 = PTR_PTR_1126e0588;
  func_0x00010bf96ec0(PTR_PTR_1126e0588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(uVar6);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar4);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar4);
  func_0x00010c1edca0(puVar4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c118bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar12 != 0) {
    func_0x00010c1ed520(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c118bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5060(puVar4);
    _objc_release(uVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (lVar7 != 0) {
    if (lVar12 == 0) {
      _objc_retain(lVar7);
      lVar12 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126e0530);
          func_0x00010bfe9d60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar6);
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar8 = puVar5;
      func_0x00010bf51e00();
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined **)(lVar12 + 0x28) = puVar8;
    }
    else {
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(lVar7);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar7;
    }
    _objc_release(uVar6);
  }
  uVar6 = 0;
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f71098;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(ppuVar10);
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x2020000000;
    uStack_1c8 = 0;
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x2020000000;
    uStack_1e8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar4);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar6);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar6);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_1f8 + 3) & 1) != 0);
    lVar12 = puStack_1d8[3];
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(ppuVar10);
    _objc_release(uVar6);
    return lVar12;
  }
  return param_2;
}



/* Entry: 10b6cfc7c; end: 10b6cfe0f; +[SCGalleryUserDefaults countOfGalleryUserDefaultsWithOptions:dataObjectContext:] */

undefined8 FUN_10b6cfc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_a8 + 3) & 1) != 0);
  uVar4 = puStack_88[3];
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6cfe10; end: 10b6cff6b;  */

void FUN_10b6cfe10(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0588;
  func_0x00010bf96ec0(PTR_PTR_1126e0588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar2);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar2);
  uVar4 = param_2;
  func_0x00010bf52ae0();
  _objc_release(param_2);
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(0);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b6cff6c; end: 10b6d01b3; +[SCGalleryUserDefaults fetchGalleryUserDefaultsForProfile:options:dataObjectContext:] */

void FUN_10b6cff6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6cf920;
  uStack_88 = 0x10b6cf930;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6cf920;
  uStack_d8 = 0x10b6cf930;
  uStack_d0 = 0;
  do {
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  lVar4 = puStack_a0[5];
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puStack_a0[5];
    func_0x00010bfb1920(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10b6d01b4; end: 10b6d059b;  */

void FUN_10b6d01b4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126e0498;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar6 = PTR_PTR_1126e0588;
  func_0x00010bf96ec0(PTR_PTR_1126e0588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar8 == 0) {
    func_0x00010c1dfc80(puVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar5);
  _objc_release(uVar3);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar5);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar5);
  func_0x00010c1edca0(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar12 = *(undefined8 *)(lVar13 + 0x28);
  lVar8 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar12);
  uVar3 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = uVar12;
  _objc_release(uVar3);
  if ((lVar8 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0)) {
    _objc_retain(lVar8);
    param_5 = 0x10;
    lVar13 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(PTR_PTR_1126e0530);
        func_0x00010bfe9d60(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(uVar3);
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      param_5 = 0x10;
      lVar13 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
  }
  puVar9 = puVar6;
  func_0x00010bf51e00();
  lVar13 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined **)(lVar13 + 0x28) = puVar9;
  _objc_release(uVar3);
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f710d8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar2;
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126bc7e0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(ppuVar10);
  _objc_retain(uVar3);
  _objc_alloc(puVar6);
  func_0x00010c030860();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(ppuVar10);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6d059c; end: 10b6d0673; +[SCCloudSyncOperationSnapshot cloudSyncOperationSnapshotWithCreateTimeUtc:payload:requestID:seqNum:tacomaOperationId_DEPRECATED:targetEntryId:] */

void FUN_10b6d059c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc7e0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030860();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6d0674; end: 10b6d06e7; -[SCCloudSyncOperationSnapshotChangeRequest initWithCloudSyncOperationSnapshot:] */

undefined1 * FUN_10b6d0674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d10;
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



/* Entry: 10b6d06e8; end: 10b6d0833; +[SCCloudSyncOperationSnapshotChangeRequest changeRequestForCloudSyncOperationSnapshot:] */

void FUN_10b6d06e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b7f80(puVar3,param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    lVar7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    lStack_48 = 0;
    puVar5 = puVar1;
    func_0x00010bf9b3a0(puVar1,param_2,puVar3,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lStack_48;
    _objc_retain(lStack_48);
    if (puVar5 != (undefined *)0x0 && lVar7 == 0) {
      puVar4 = PTR_PTR_1126e0498;
      func_0x00010bf5e560(PTR_PTR_1126e0498);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35000();
      puVar6 = PTR_PTR_1126bc838;
      _objc_alloc(PTR_PTR_1126bc838);
      func_0x00010bfff380();
      _objc_release(puVar4);
      lVar7 = 0;
      goto LAB_10b6d07f8;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10b6d07f8:
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6d0834; end: 10b6d09f3; +[SCCloudSyncOperationSnapshotChangeRequest creationRequestWithCloudSyncOperationSnapshot:] */

void FUN_10b6d0834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0548;
  func_0x00010c0668a0(PTR_PTR_1126e0548,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5e560(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0e0160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35000(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar5 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0f6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9a60(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c1356e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebce0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c15e520(param_3);
  func_0x00010c1fce80(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c2680a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211700(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c269ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c212340(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126bc838;
  _objc_alloc(PTR_PTR_1126bc838);
  func_0x00010bfff380();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6d09f4; end: 10b6d0bc7; +[SCCloudSyncOperationSnapshotChangeRequest deleteCloudSyncOperationSnapshots:] */

void FUN_10b6d09f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar9 = PTR_PTR_1126e0498;
      uVar3 = *(undefined8 *)(lVar11 * 8);
      func_0x00010c0e0160(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (puVar9 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar2;
        func_0x00010bf9b3a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        if (puVar7 != (undefined *)0x0) {
          func_0x00010bf6c4a0(puVar2);
        }
      }
      _objc_release(puVar7);
      _objc_release(0);
      _objc_release(puVar9);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
    lVar8 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0548;
  func_0x00010bf96ec0(PTR_PTR_1126e0548);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  func_0x00010c1abe60(puVar9);
  puVar7 = puVar2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar4 = puVar7;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar8 = *plStack_250;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_250 != lVar8) {
          _objc_enumerationMutation(puVar7);
        }
        func_0x00010bf6c4a0(puVar2);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar7;
      puVar5 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar7 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar4 = (undefined *)puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar9);
  puVar9 = PTR_DAT_1126a5c70;
  if (((ulong)puVar4 & 1) == 0) {
    if (puVar5 == (undefined8 *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(puVar2 + 8));
      goto LAB_10b6d0eb8;
    }
    _objc_retain(puVar5);
    puVar4 = (undefined *)puVar5;
    func_0x000107c318f8(puVar5,puVar9);
    puVar9 = (undefined *)puVar5;
    if ((int)puVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126e0498;
    puVar10 = puVar9;
    func_0x00010c0e0160(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar7;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar9 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(puVar2 + 8));
      }
    }
    _objc_release(puVar9);
    _objc_release(0);
  }
  else {
    puVar4 = (undefined *)puVar5;
    func_0x00010c0b7f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(puVar2 + 8));
  }
  _objc_release(puVar4);
LAB_10b6d0eb8:
  _objc_release(puVar7);
  _objc_release(puVar5);
  return;
}



/* Entry: 10b6d0bc8; end: 10b6d0d43; +[SCCloudSyncOperationSnapshotChangeRequest deleteAllCloudSyncOperationSnapshots] */

void FUN_10b6d0bc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126e0548;
  func_0x00010bf96ec0(PTR_PTR_1126e0548);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar2);
  func_0x00010c1abe60(puVar6);
  puVar2 = puVar1;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010bf6c4a0(puVar1);
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar3 = (undefined *)puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar6);
  puVar6 = PTR_DAT_1126a5c70;
  if (((ulong)puVar3 & 1) == 0) {
    if (puVar4 == (undefined8 *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(puVar1 + 8));
      goto LAB_10b6d0eb8;
    }
    _objc_retain(puVar4);
    puVar3 = (undefined *)puVar4;
    func_0x000107c318f8(puVar4,puVar6);
    puVar6 = (undefined *)puVar4;
    if ((int)puVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126e0498;
    puVar7 = puVar6;
    func_0x00010c0e0160(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar2;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(puVar1 + 8));
      }
    }
    _objc_release(puVar6);
    _objc_release(0);
  }
  else {
    puVar3 = (undefined *)puVar4;
    func_0x00010c0b7f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(puVar1 + 8));
  }
  _objc_release(puVar3);
LAB_10b6d0eb8:
  _objc_release(puVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 10b6d0d44; end: 10b6d0edf; -[SCCloudSyncOperationSnapshotChangeRequest setOwner:] */

void FUN_10b6d0d44(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a5c70;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6d0eb8;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6d0eb8:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6d0ee0; end: 10b6d0f5f; -[SCCloudSyncOperationSnapshotChangeRequest placeholderForCreatedCloudSyncOperationSnapshot] */

void FUN_10b6d0ee0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126e0520;
    _objc_alloc();
    func_0x00010c028260();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b6d0f60; end: 10b6d0fc7; -[SCCloudSyncOperationSnapshotChangeRequest objectID] */

void FUN_10b6d0f60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6d0fc8; end: 10b6d10d7; -[SCCloudSyncOperationSnapshotChangeRequest setWithCloudSyncOperationSnapshot:] */

void FUN_10b6d0fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0f6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9a60(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c1356e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebce0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c15e520(param_3);
  func_0x00010c1fce80(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c2680a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211700(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c269ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c212340(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6d10d8; end: 10b6d10df; -[SCCloudSyncOperationSnapshotChangeRequest createTimeUtc] */

void FUN_10b6d10d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_createTimeUtc_1125b4000)
  ;
  return;
}



/* Entry: 10b6d10e0; end: 10b6d10e7; -[SCCloudSyncOperationSnapshotChangeRequest setCreateTimeUtc:] */

void FUN_10b6d10e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c185370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCreateTimeUtc__11263eef8);
  return;
}



/* Entry: 10b6d10e8; end: 10b6d10ef; -[SCCloudSyncOperationSnapshotChangeRequest payload] */

void FUN_10b6d10e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f6430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_payload_11261b328);
  return;
}



/* Entry: 10b6d10f0; end: 10b6d10f7; -[SCCloudSyncOperationSnapshotChangeRequest setPayload:] */

void FUN_10b6d10f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setPayload__1126540c0);
  return;
}



/* Entry: 10b6d10f8; end: 10b6d10ff; -[SCCloudSyncOperationSnapshotChangeRequest requestID] */

void FUN_10b6d10f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1356f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_requestID_11262afd8);
  return;
}



/* Entry: 10b6d1100; end: 10b6d1107; -[SCCloudSyncOperationSnapshotChangeRequest setRequestID:] */

void FUN_10b6d1100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ebcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setRequestID__112658960)
  ;
  return;
}



/* Entry: 10b6d1108; end: 10b6d110f; -[SCCloudSyncOperationSnapshotChangeRequest seqNum] */

void FUN_10b6d1108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_seqNumValue_112635370);
  return;
}



/* Entry: 10b6d1110; end: 10b6d1117; -[SCCloudSyncOperationSnapshotChangeRequest setSeqNum:] */

void FUN_10b6d1110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setSeqNumValue__11265cdc8);
  return;
}



/* Entry: 10b6d1118; end: 10b6d111f; -[SCCloudSyncOperationSnapshotChangeRequest tacomaOperationId_DEPRECATED] */

void FUN_10b6d1118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2680b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_tacomaOperationId_DEPRECATED_112677a50);
  return;
}



/* Entry: 10b6d1120; end: 10b6d1127; -[SCCloudSyncOperationSnapshotChangeRequest setTacomaOperationId_DEPRECATED:] */

void FUN_10b6d1120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c211710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setTacomaOperationId_DEPRECATED__112661fe8);
  return;
}



/* Entry: 10b6d1128; end: 10b6d112f; -[SCCloudSyncOperationSnapshotChangeRequest targetEntryId] */

void FUN_10b6d1128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_targetEntryId_1126781e0)
  ;
  return;
}



/* Entry: 10b6d1130; end: 10b6d1137; -[SCCloudSyncOperationSnapshotChangeRequest setTargetEntryId:] */

void FUN_10b6d1130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setTargetEntryId__1126622f8);
  return;
}



/* Entry: 10b6d1138; end: 10b6d1167; -[SCCloudSyncOperationSnapshotChangeRequest .cxx_destruct] */

void FUN_10b6d1138(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6d1168; end: 10b6d1247; +[SCGalleryEntryAsset galleryEntryAssetWithAssetId:assetType:assetUrl:encryptIV:encryptKey:hasSynced:localCreationId:] */

void FUN_10b6d1168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc808;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0307c0();
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6d1248; end: 10b6d12bb; -[SCGalleryEntryAssetChangeRequest initWithGalleryEntryAsset:] */

undefined1 * FUN_10b6d1248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d18;
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



/* Entry: 10b6d12bc; end: 10b6d1407; +[SCGalleryEntryAssetChangeRequest changeRequestForGalleryEntryAsset:] */

void FUN_10b6d12bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b7f80(puVar3,param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    lVar7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    lStack_48 = 0;
    puVar5 = puVar1;
    func_0x00010bf9b3a0(puVar1,param_2,puVar3,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lStack_48;
    _objc_retain(lStack_48);
    if (puVar5 != (undefined *)0x0 && lVar7 == 0) {
      puVar4 = PTR_PTR_1126e0498;
      func_0x00010bf5e560(PTR_PTR_1126e0498);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35000();
      puVar6 = PTR_PTR_1126bc820;
      _objc_alloc(PTR_PTR_1126bc820);
      func_0x00010c016e40();
      _objc_release(puVar4);
      lVar7 = 0;
      goto LAB_10b6d13cc;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10b6d13cc:
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6d1408; end: 10b6d15db; +[SCGalleryEntryAssetChangeRequest creationRequestWithGalleryEntryAsset:] */

void FUN_10b6d1408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0550;
  func_0x00010c0668a0(PTR_PTR_1126e0550,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5e560(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0e0160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35000(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar5 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a880(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf0b760(param_3);
  func_0x00010c16a980(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf0b8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16aa40(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf938c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1958e0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf93900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195900(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfdd120(param_3);
  func_0x00010c1a7080(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c09d860(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1bf0c0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126bc820;
  _objc_alloc(PTR_PTR_1126bc820);
  func_0x00010c016e40();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6d15dc; end: 10b6d17af; +[SCGalleryEntryAssetChangeRequest deleteGalleryEntryAssets:] */

void FUN_10b6d15dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar9 = PTR_PTR_1126e0498;
      uVar3 = *(undefined8 *)(lVar11 * 8);
      func_0x00010c0e0160(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (puVar9 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar2;
        func_0x00010bf9b3a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        if (puVar7 != (undefined *)0x0) {
          func_0x00010bf6c4a0(puVar2);
        }
      }
      _objc_release(puVar7);
      _objc_release(0);
      _objc_release(puVar9);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
    lVar8 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0550;
  func_0x00010bf96ec0(PTR_PTR_1126e0550);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  func_0x00010c1abe60(puVar9);
  puVar7 = puVar2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar4 = puVar7;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar8 = *plStack_250;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_250 != lVar8) {
          _objc_enumerationMutation(puVar7);
        }
        func_0x00010bf6c4a0(puVar2);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar7;
      puVar5 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar7 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar4 = (undefined *)puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar9);
  puVar9 = PTR_DAT_1126a4ec8;
  if (((ulong)puVar4 & 1) == 0) {
    if (puVar5 == (undefined8 *)0x0) {
      func_0x00010c196760(*(undefined8 *)(puVar2 + 8));
      goto LAB_10b6d1aa0;
    }
    _objc_retain(puVar5);
    puVar4 = (undefined *)puVar5;
    func_0x000107c318f8(puVar5,puVar9);
    puVar9 = (undefined *)puVar5;
    if ((int)puVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126e0498;
    puVar10 = puVar9;
    func_0x00010c0e0160(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar7;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar9 != (undefined *)0x0) {
        func_0x00010c196760(*(undefined8 *)(puVar2 + 8));
      }
    }
    _objc_release(puVar9);
    _objc_release(0);
  }
  else {
    puVar4 = (undefined *)puVar5;
    func_0x00010c0b7f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196760(*(undefined8 *)(puVar2 + 8));
  }
  _objc_release(puVar4);
LAB_10b6d1aa0:
  _objc_release(puVar7);
  _objc_release(puVar5);
  return;
}



/* Entry: 10b6d17b0; end: 10b6d192b; +[SCGalleryEntryAssetChangeRequest deleteAllGalleryEntryAssets] */

void FUN_10b6d17b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126e0550;
  func_0x00010bf96ec0(PTR_PTR_1126e0550);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar2);
  func_0x00010c1abe60(puVar6);
  puVar2 = puVar1;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010bf6c4a0(puVar1);
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar3 = (undefined *)puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar6);
  puVar6 = PTR_DAT_1126a4ec8;
  if (((ulong)puVar3 & 1) == 0) {
    if (puVar4 == (undefined8 *)0x0) {
      func_0x00010c196760(*(undefined8 *)(puVar1 + 8));
      goto LAB_10b6d1aa0;
    }
    _objc_retain(puVar4);
    puVar3 = (undefined *)puVar4;
    func_0x000107c318f8(puVar4,puVar6);
    puVar6 = (undefined *)puVar4;
    if ((int)puVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126e0498;
    puVar7 = puVar6;
    func_0x00010c0e0160(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar2;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c196760(*(undefined8 *)(puVar1 + 8));
      }
    }
    _objc_release(puVar6);
    _objc_release(0);
  }
  else {
    puVar3 = (undefined *)puVar4;
    func_0x00010c0b7f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196760(*(undefined8 *)(puVar1 + 8));
  }
  _objc_release(puVar3);
LAB_10b6d1aa0:
  _objc_release(puVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 10b6d192c; end: 10b6d1ac7; -[SCGalleryEntryAssetChangeRequest setEntry:] */

void FUN_10b6d192c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a4ec8;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c196760(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6d1aa0;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c196760(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196760(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6d1aa0:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6d1ac8; end: 10b6d1c63; -[SCGalleryEntryAssetChangeRequest setSyncedEntry:] */

void FUN_10b6d1ac8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a4ec8;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c210e20(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6d1c3c;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c210e20(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210e20(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6d1c3c:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6d1c64; end: 10b6d1ce3; -[SCGalleryEntryAssetChangeRequest placeholderForCreatedGalleryEntryAsset] */

void FUN_10b6d1c64(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126e0520;
    _objc_alloc();
    func_0x00010c028260();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b6d1ce4; end: 10b6d1d4b; -[SCGalleryEntryAssetChangeRequest objectID] */

void FUN_10b6d1ce4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6d1d4c; end: 10b6d1e6f; -[SCGalleryEntryAssetChangeRequest setWithGalleryEntryAsset:] */

void FUN_10b6d1d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a880(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf0b760(param_3);
  func_0x00010c16a980(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf0b8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16aa40(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf938c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1958e0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf93900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195900(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfdd120(param_3);
  func_0x00010c1a7080(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c09d860(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1bf0c0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6d1e70; end: 10b6d1e77; -[SCGalleryEntryAssetChangeRequest assetId] */

void FUN_10b6d1e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_assetId_1125a0640);
  return;
}



/* Entry: 10b6d1e78; end: 10b6d1e7f; -[SCGalleryEntryAssetChangeRequest setAssetId:] */

void FUN_10b6d1e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16a890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setAssetId__112638440);
  return;
}



/* Entry: 10b6d1e80; end: 10b6d1e87; -[SCGalleryEntryAssetChangeRequest assetType] */

void FUN_10b6d1e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_assetTypeValue_1125a0798);
  return;
}



/* Entry: 10b6d1e88; end: 10b6d1e8f; -[SCGalleryEntryAssetChangeRequest setAssetType:] */

void FUN_10b6d1e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setAssetTypeValue__112638480);
  return;
}



/* Entry: 10b6d1e90; end: 10b6d1e97; -[SCGalleryEntryAssetChangeRequest assetUrl] */

void FUN_10b6d1e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_assetUrl_1125a07e0);
  return;
}



/* Entry: 10b6d1e98; end: 10b6d1e9f; -[SCGalleryEntryAssetChangeRequest setAssetUrl:] */

void FUN_10b6d1e98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setAssetUrl__1126384b0);
  return;
}



/* Entry: 10b6d1ea0; end: 10b6d1ea7; -[SCGalleryEntryAssetChangeRequest encryptIV] */

void FUN_10b6d1ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf938d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_encryptIV_1125c27d8);
  return;
}



/* Entry: 10b6d1ea8; end: 10b6d1eaf; -[SCGalleryEntryAssetChangeRequest setEncryptIV:] */

void FUN_10b6d1ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1958f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setEncryptIV__112643058)
  ;
  return;
}



/* Entry: 10b6d1eb0; end: 10b6d1eb7; -[SCGalleryEntryAssetChangeRequest encryptKey] */

void FUN_10b6d1eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_encryptKey_1125c27e8);
  return;
}



/* Entry: 10b6d1eb8; end: 10b6d1ebf; -[SCGalleryEntryAssetChangeRequest setEncryptKey:] */

void FUN_10b6d1eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setEncryptKey__112643060);
  return;
}



/* Entry: 10b6d1ec0; end: 10b6d1ec7; -[SCGalleryEntryAssetChangeRequest hasSynced] */

void FUN_10b6d1ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdd190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hasSyncedValue_1125d4e20);
  return;
}



/* Entry: 10b6d1ec8; end: 10b6d1ecf; -[SCGalleryEntryAssetChangeRequest setHasSynced:] */

void FUN_10b6d1ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setHasSyncedValue__112647640);
  return;
}



/* Entry: 10b6d1ed0; end: 10b6d1ed7; -[SCGalleryEntryAssetChangeRequest localCreationId] */

void FUN_10b6d1ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_localCreationId_112605028);
  return;
}



/* Entry: 10b6d1ed8; end: 10b6d1edf; -[SCGalleryEntryAssetChangeRequest setLocalCreationId:] */

void FUN_10b6d1ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bf0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLocalCreationId__11264d658);
  return;
}



/* Entry: 10b6d1ee0; end: 10b6d1f0f; -[SCGalleryEntryAssetChangeRequest .cxx_destruct] */

void FUN_10b6d1ee0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6d1f10; end: 10b6d246f; +[SCGalleryEntry galleryEntryWithAutosaveTimeUtc:bitmojiComicId:clientGenStoryItemOrders:clientGenStoryRetryCount:clientProcessingBitMaskType:clientProcessingType:collageUCOLensId:collectionAttributes:createTimeUtc:creatorUserId:dataVaultEncryption:duplicateTimeUtc:earliestSnapCreateTimeUtc:encryption:entryId:entrySource:expectedClientGenSnapsCount:externalId:fallbackFeaturedStoryCategory:featuredExpirationTimeUtc:featuredStoryActivationDateUtc:featuredStoryLoggingInfo:featuredStoryTemplateName:folderType:galleryType:isAutoClusterPrototype:isHidden:isPrivate:isTemporary:latestSnapCaptureTimeUtc:memDataId:pendingSyncs:priority:retryFromEntryId:saverUserId:seenInCarousel:seqNum:snapFeedViewedItemIds:snapsHash:snapsInfo:snapsOrder:snapsViewed:sources:subtitle:syncedAutosaveTimeUtc:syncedIsPrivate:syncedTitle:templateId:thumbnailEncrypted:thumbnailUrl:thumbnailUrlType:title:titleOverlayUrl:titleOverlayUrlType:viewType:] */

void FUN_10b6d1f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
                  undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined4 param_28,
                  undefined4 param_29,undefined8 param_30,undefined8 param_31,undefined4 param_32,
                  undefined4 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined *puVar1;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  puVar1 = PTR_PTR_1126af4c0;
  _objc_retain();
  _objc_retain(in_stack_00000130);
  _objc_retain(in_stack_00000120);
  _objc_retain(in_stack_00000110);
  _objc_retain(in_stack_00000108);
  _objc_retain(in_stack_000000f8);
  _objc_retain(in_stack_000000f0);
  _objc_retain(in_stack_000000e0);
  _objc_retain(in_stack_000000d8);
  _objc_retain(in_stack_000000d0);
  _objc_retain(in_stack_000000c8);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_20);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030800();
  _objc_release(in_stack_00000138);
  _objc_release(in_stack_00000130);
  _objc_release(in_stack_00000120);
  _objc_release(in_stack_00000110);
  _objc_release(in_stack_00000108);
  _objc_release(in_stack_000000f8);
  _objc_release(in_stack_000000f0);
  _objc_release(in_stack_000000e0);
  _objc_release(in_stack_000000d8);
  _objc_release(in_stack_000000d0);
  _objc_release(in_stack_000000c8);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6d2470; end: 10b6d24e3; -[SCGalleryEntryChangeRequest initWithGalleryEntry:] */

undefined1 * FUN_10b6d2470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d20;
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



/* Entry: 10b6d24e4; end: 10b6d262f; +[SCGalleryEntryChangeRequest changeRequestForGalleryEntry:] */

void FUN_10b6d24e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b7f80(puVar3,param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    lVar7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    lStack_48 = 0;
    puVar5 = puVar1;
    func_0x00010bf9b3a0(puVar1,param_2,puVar3,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lStack_48;
    _objc_retain(lStack_48);
    if (puVar5 != (undefined *)0x0 && lVar7 == 0) {
      puVar4 = PTR_PTR_1126e0498;
      func_0x00010bf5e560(PTR_PTR_1126e0498);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35000();
      puVar6 = PTR_PTR_1126bc830;
      _objc_alloc(PTR_PTR_1126bc830);
      func_0x00010c016de0();
      _objc_release(puVar4);
      lVar7 = 0;
      goto LAB_10b6d25f4;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10b6d25f4:
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6d2630; end: 10b6d2e0b; +[SCGalleryEntryChangeRequest creationRequestWithGalleryEntry:] */

void FUN_10b6d2630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0538;
  func_0x00010c0668a0(PTR_PTR_1126e0538,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5e560(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0e0160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35000(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar5 = param_3;
  func_0x00010bf12220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d500(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf1b100(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170c20(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf3cec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cca0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf3cf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ccc0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf3d240(param_3);
  func_0x00010c17cf00(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf3d2a0(param_3);
  func_0x00010c17cf80(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf3f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e440(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf3fcc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e4e0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf5bbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185e60(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf64980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189960(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf8b0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf8be20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193320(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf93d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195c20(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf977c0(param_3);
  func_0x00010c196b40(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf9c1c0(param_3);
  func_0x00010c1988e0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf9e140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfa0420(param_3);
  func_0x00010c19a120(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bfa3220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ada0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfa32e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ade0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfa3440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae20(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfa34a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae80(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfb3860(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e3a0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfbdda0(param_3);
  func_0x00010c1a1e20(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c06cbe0(param_3);
  func_0x00010c1af540(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c074c20(param_3);
  func_0x00010c1b1aa0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c07b240(param_3);
  func_0x00010c1b3980(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c080ca0(param_3);
  func_0x00010c1b4f20(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c08b1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b94c0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0c7500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5800(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0f7a20(param_3);
  func_0x00010c1da500(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c113c80(param_3);
  func_0x00010c1e33e0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c13f6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eda60(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c14be80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5ce0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c1577e0(param_3);
  func_0x00010c1f9ec0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c15e520(param_3);
  func_0x00010c1fce80(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c241100(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2045e0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c245780(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c2457c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2062c0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c245800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2062e0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c245cc0(param_3);
  func_0x00010c206420(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c247f00(param_3);
  func_0x00010c207360(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c266980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210e00(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c266aa0(param_3);
  func_0x00010c210ee0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c266b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210f40(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212c20(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c26daa0(param_3);
  func_0x00010c214020(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144c0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c26e540();
  func_0x00010c214500(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c271540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216480(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c271560(param_3);
  func_0x00010c2164c0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c29e660(param_3);
  _objc_release(param_3);
  func_0x00010c222de0(puVar2,param_2,uVar5);
  puVar4 = PTR_PTR_1126bc830;
  _objc_alloc(PTR_PTR_1126bc830);
  func_0x00010c016de0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6d2e0c; end: 10b6d2fdf; +[SCGalleryEntryChangeRequest deleteGalleryEntries:] */

void FUN_10b6d2e0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined **unaff_x24;
  undefined **ppuVar18;
  ulong uVar19;
  undefined *unaff_x26;
  undefined *puVar20;
  long unaff_x27;
  undefined *puVar21;
  undefined1 auStack_4a0 [128];
  long lStack_420;
  undefined1 *puStack_410;
  long lStack_408;
  undefined *puStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 ***pppuStack_3c0;
  code *pcStack_3b8;
  undefined **ppuStack_3a8;
  undefined1 *puStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2d0;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar18 = &PTR_PTR_1126e0000;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar17 = param_3;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    unaff_x26 = (undefined *)*puStack_120;
    do {
      unaff_x27 = 0;
      do {
        if ((undefined *)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126e0498;
        uVar2 = *(undefined8 *)(lStack_128 + unaff_x27 * 8);
        func_0x00010c0e0160(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (puVar3 == (undefined *)0x0) {
          unaff_x24 = (undefined **)0x0;
          puVar16 = (undefined *)0x0;
        }
        else {
          ppuStack_138 = (undefined **)0x0;
          puVar16 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = ppuStack_138;
          _objc_retain(ppuStack_138);
          if (puVar16 != (undefined *)0x0 && unaff_x24 == (undefined **)0x0) {
            func_0x00010bf6c4a0(puVar1);
            unaff_x24 = (undefined **)0x0;
          }
        }
        _objc_release(puVar16);
        _objc_release(unaff_x24);
        _objc_release(puVar3);
        unaff_x27 = unaff_x27 + 1;
      } while (lVar17 != unaff_x27);
      lVar17 = param_3;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_260;
  pcStack_148 = FUN_10b6d2fe0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined **)PTR_PTR_1126e0498;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar3);
  func_0x00010c1abe60(puVar1);
  ppuVar5 = ppuVar4;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar6 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    lVar17 = *plStack_250;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if (*plStack_250 != lVar17) {
          _objc_enumerationMutation(ppuVar5);
        }
        func_0x00010bf6c4a0(ppuVar4);
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar6 != unaff_x24);
      ppuVar6 = ppuVar5;
      puVar13 = &uStack_260;
      func_0x00010bf52a60();
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_10b6d315c;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3a8 = ppuVar4;
  ppuStack_270 = &puStack_150;
  _objc_retain(puVar13);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  _objc_retain(puVar13);
  puVar7 = (undefined1 *)puVar13;
  puStack_3a0 = (undefined1 *)puVar13;
  func_0x00010bf52a60();
  if (puVar7 != (undefined1 *)0x0) {
    lVar17 = *plStack_380;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_380 != lVar17) {
          _objc_enumerationMutation(puStack_3a0);
        }
        ppuVar18 = *(undefined ***)(lStack_388 + (long)puVar13 * 8);
        puVar16 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        ppuVar4 = ppuVar18;
        _objc_opt_isKindOfClass(ppuVar18,puVar16);
        puVar16 = PTR_DAT_1126a5c78;
        unaff_x24 = ppuVar18;
        if (((ulong)ppuVar4 & 1) == 0) {
          _objc_retain(ppuVar18);
          ppuVar4 = ppuVar18;
          func_0x000107c318f8(ppuVar18,puVar16);
          if ((int)ppuVar4 == 0) {
            unaff_x24 = (undefined **)0x0;
          }
          _objc_retain(unaff_x24);
          _objc_release(ppuVar18);
          ppuVar18 = (undefined **)PTR_PTR_1126e0498;
          ppuVar4 = unaff_x24;
          func_0x00010c0e0160(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          if (ppuVar18 == (undefined **)0x0) {
            unaff_x27 = 0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            lStack_398 = 0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = lStack_398;
            _objc_retain(lStack_398);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == 0) {
              func_0x00010befa120(puVar3);
              unaff_x27 = 0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(ppuVar18);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
        }
        _objc_release(unaff_x24);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while ((undefined8 *)puVar7 != puVar13);
      puVar7 = puStack_3a0;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined1 *)0x0);
  }
  puVar7 = puStack_3a0;
  _objc_release(puStack_3a0);
  puVar15 = ppuStack_3a8[1];
  puVar16 = puVar3;
  func_0x00010bf51e00();
  puVar11 = puVar16;
  func_0x00010bef7fc0(puVar15);
  _objc_release(puVar16);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar8 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
    ___stack_chk_fail();
    puStack_410 = puVar7;
    pcStack_3b8 = FUN_10b6d3408;
    lStack_420 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_408 = unaff_x27;
    puStack_400 = unaff_x26;
    ppuStack_3f8 = ppuVar18;
    ppuStack_3f0 = unaff_x24;
    puStack_3e8 = puVar16;
    puStack_3e0 = puVar3;
    puStack_3d8 = puVar15;
    puStack_3d0 = puVar1;
    puStack_3c8 = (undefined1 *)puVar13;
    pppuStack_3c0 = &ppuStack_270;
    _objc_retain(puVar11);
    puVar3 = PTR_PTR_1126e0498;
    func_0x00010bf5f5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar11);
    puVar7 = auStack_4a0;
    puVar1 = puVar11;
    func_0x00010bf52a60();
    lVar17 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar17) {
          _objc_enumerationMutation(puVar11);
        }
        uVar19 = *(ulong *)((long)puVar15 * 8);
        puVar14 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        uVar9 = uVar19;
        _objc_opt_isKindOfClass(uVar19,puVar14);
        puVar14 = PTR_DAT_1126a5c78;
        if ((uVar9 & 1) == 0) {
          _objc_retain(uVar19);
          uVar10 = uVar19;
          func_0x000107c318f8(uVar19,puVar14);
          uVar9 = uVar19;
          if ((int)uVar10 == 0) {
            uVar9 = 0;
          }
          _objc_retain(uVar9);
          _objc_release(uVar19);
          puVar14 = PTR_PTR_1126e0498;
          uVar19 = uVar9;
          func_0x00010c0e0160(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar19);
          if (puVar14 == (undefined *)0x0) {
            puVar20 = (undefined *)0x0;
          }
          else {
            puVar20 = puVar3;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(0);
            if (puVar20 != (undefined *)0x0) {
              func_0x00010befa120(puVar16);
            }
          }
          _objc_release(puVar20);
          _objc_release(0);
          _objc_release(puVar14);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar16);
          uVar9 = uVar19;
        }
        _objc_release(uVar9);
        puVar15 = puVar15 + 1;
      } while (puVar1 != puVar15);
      puVar7 = auStack_4a0;
      puVar1 = puVar11;
      func_0x00010bf52a60();
    }
    _objc_release(puVar11);
    uVar2 = *(undefined8 *)(puVar8 + 8);
    puVar1 = puVar16;
    func_0x00010bf51e00();
    puVar15 = puVar1;
    func_0x00010c12c1a0(uVar2);
    _objc_release(puVar1);
    _objc_release(puVar16);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_420) {
      return;
    }
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar15);
    _objc_retain(puVar7);
    puVar3 = PTR_PTR_1126e0498;
    func_0x00010bf5f5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar15);
    puVar1 = puVar15;
    func_0x00010bf52a60();
    lVar17 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar17) {
          _objc_enumerationMutation(puVar15);
        }
        uVar19 = *(ulong *)((long)puVar14 * 8);
        puVar20 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        uVar9 = uVar19;
        _objc_opt_isKindOfClass(uVar19,puVar20);
        puVar20 = PTR_DAT_1126a5c78;
        if ((uVar9 & 1) == 0) {
          _objc_retain(uVar19);
          uVar10 = uVar19;
          func_0x000107c318f8(uVar19,puVar20);
          uVar9 = uVar19;
          if ((int)uVar10 == 0) {
            uVar9 = 0;
          }
          _objc_retain(uVar9);
          _objc_release(uVar19);
          puVar20 = PTR_PTR_1126e0498;
          uVar19 = uVar9;
          func_0x00010c0e0160(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar19);
          if (puVar20 == (undefined *)0x0) {
            puVar21 = (undefined *)0x0;
          }
          else {
            puVar21 = puVar3;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(0);
            if (puVar21 != (undefined *)0x0) {
              func_0x00010befa120(puVar16);
            }
          }
          _objc_release(puVar21);
          _objc_release(0);
          _objc_release(puVar20);
        }
        else {
          func_0x00010c0b7f60(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar16);
          uVar9 = uVar19;
        }
        _objc_release(uVar9);
        puVar14 = puVar14 + 1;
      } while (puVar1 != puVar14);
      puVar1 = puVar15;
      func_0x00010bf52a60();
    }
    _objc_release(puVar15);
    uVar2 = *(undefined8 *)(puVar11 + 8);
    puVar1 = puVar16;
    func_0x00010bf51e00(puVar16);
    puVar11 = puVar1;
    func_0x00010c066780(uVar2);
    _objc_release(puVar1);
    _objc_release(puVar16);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      return;
    }
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126e0498;
    _objc_retain(puVar11);
    func_0x00010bf5f5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c1c0(*(undefined8 *)(puVar15 + 8));
    _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b6d2fe0; end: 10b6d315b; +[SCGalleryEntryChangeRequest deleteAllGalleryEntries] */

void FUN_10b6d2fe0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong uVar15;
  undefined *unaff_x26;
  undefined *puVar16;
  long unaff_x27;
  undefined *puVar17;
  undefined1 auStack_360 [128];
  long lStack_2e0;
  undefined1 *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined1 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_268;
  undefined1 *puStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar3);
  func_0x00010c1abe60(puVar2);
  puVar3 = puVar1;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar14 = *plStack_110;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar14) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010bf6c4a0(puVar1);
        unaff_x24 = unaff_x24 + 1;
      } while (puVar4 != unaff_x24);
      puVar4 = puVar3;
      puVar10 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10b6d315c;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_268 = puVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(puVar10);
  puVar5 = (undefined1 *)puVar10;
  puStack_260 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar5 != (undefined1 *)0x0) {
    lVar14 = *plStack_240;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        if (*plStack_240 != lVar14) {
          _objc_enumerationMutation(puStack_260);
        }
        unaff_x25 = *(undefined **)(lStack_248 + (long)puVar10 * 8);
        puVar3 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar4 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar3);
        puVar3 = PTR_DAT_1126a5c78;
        unaff_x24 = unaff_x25;
        if (((ulong)puVar4 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar4 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar3);
          if ((int)puVar4 == 0) {
            unaff_x24 = (undefined *)0x0;
          }
          _objc_retain(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar3 = unaff_x24;
          func_0x00010c0e0160(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = 0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            lStack_258 = 0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = lStack_258;
            _objc_retain(lStack_258);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = 0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x24);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while ((undefined8 *)puVar5 != puVar10);
      puVar5 = puStack_260;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined1 *)0x0);
  }
  puVar5 = puStack_260;
  _objc_release(puStack_260);
  uVar13 = *(undefined8 *)(puStack_268 + 8);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  puVar4 = puVar3;
  func_0x00010bef7fc0(uVar13);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
    ___stack_chk_fail();
    puStack_2d0 = puVar5;
    pcStack_278 = FUN_10b6d3408;
    lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_2c8 = unaff_x27;
    puStack_2c0 = unaff_x26;
    puStack_2b8 = unaff_x25;
    puStack_2b0 = unaff_x24;
    puStack_2a8 = puVar3;
    puStack_2a0 = puVar2;
    uStack_298 = uVar13;
    puStack_290 = puVar1;
    puStack_288 = (undefined1 *)puVar10;
    ppuStack_280 = &puStack_130;
    _objc_retain(puVar4);
    puVar2 = PTR_PTR_1126e0498;
    func_0x00010bf5f5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    puVar5 = auStack_360;
    puVar1 = puVar4;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(puVar4);
        }
        uVar15 = *(ulong *)((long)puVar11 * 8);
        puVar12 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        uVar7 = uVar15;
        _objc_opt_isKindOfClass(uVar15,puVar12);
        puVar12 = PTR_DAT_1126a5c78;
        if ((uVar7 & 1) == 0) {
          _objc_retain(uVar15);
          uVar8 = uVar15;
          func_0x000107c318f8(uVar15,puVar12);
          uVar7 = uVar15;
          if ((int)uVar8 == 0) {
            uVar7 = 0;
          }
          _objc_retain(uVar7);
          _objc_release(uVar15);
          puVar12 = PTR_PTR_1126e0498;
          uVar15 = uVar7;
          func_0x00010c0e0160(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
          if (puVar12 == (undefined *)0x0) {
            puVar16 = (undefined *)0x0;
          }
          else {
            puVar16 = puVar2;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(0);
            if (puVar16 != (undefined *)0x0) {
              func_0x00010befa120(puVar3);
            }
          }
          _objc_release(puVar16);
          _objc_release(0);
          _objc_release(puVar12);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          uVar7 = uVar15;
        }
        _objc_release(uVar7);
        puVar11 = puVar11 + 1;
      } while (puVar1 != puVar11);
      puVar5 = auStack_360;
      puVar1 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    uVar13 = *(undefined8 *)(puVar6 + 8);
    puVar1 = puVar3;
    func_0x00010bf51e00();
    puVar11 = puVar1;
    func_0x00010c12c1a0(uVar13);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e0) {
      ___stack_chk_fail();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar11);
      _objc_retain(puVar5);
      puVar2 = PTR_PTR_1126e0498;
      func_0x00010bf5f5e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar11);
      puVar1 = puVar11;
      func_0x00010bf52a60();
      lVar14 = lRam0000000000000000;
      while (puVar1 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar14) {
            _objc_enumerationMutation(puVar11);
          }
          uVar15 = *(ulong *)((long)puVar12 * 8);
          puVar16 = PTR_PTR_1126e0520;
          _objc_opt_class(PTR_PTR_1126e0520);
          uVar7 = uVar15;
          _objc_opt_isKindOfClass(uVar15,puVar16);
          puVar16 = PTR_DAT_1126a5c78;
          if ((uVar7 & 1) == 0) {
            _objc_retain(uVar15);
            uVar8 = uVar15;
            func_0x000107c318f8(uVar15,puVar16);
            uVar7 = uVar15;
            if ((int)uVar8 == 0) {
              uVar7 = 0;
            }
            _objc_retain(uVar7);
            _objc_release(uVar15);
            puVar16 = PTR_PTR_1126e0498;
            uVar15 = uVar7;
            func_0x00010c0e0160(uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b7f80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar15);
            if (puVar16 == (undefined *)0x0) {
              puVar17 = (undefined *)0x0;
            }
            else {
              puVar17 = puVar2;
              func_0x00010bf9b3a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(0);
              if (puVar17 != (undefined *)0x0) {
                func_0x00010befa120(puVar3);
              }
            }
            _objc_release(puVar17);
            _objc_release(0);
            _objc_release(puVar16);
          }
          else {
            func_0x00010c0b7f60(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            uVar7 = uVar15;
          }
          _objc_release(uVar7);
          puVar12 = puVar12 + 1;
        } while (puVar1 != puVar12);
        puVar1 = puVar11;
        func_0x00010bf52a60();
      }
      _objc_release(puVar11);
      uVar13 = *(undefined8 *)(puVar4 + 8);
      puVar1 = puVar3;
      func_0x00010bf51e00(puVar3);
      puVar4 = puVar1;
      func_0x00010c066780(uVar13);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return;
      }
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126e0498;
      _objc_retain(puVar4);
      func_0x00010bf5f5e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c1c0(*(undefined8 *)(puVar11 + 8));
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b6d315c; end: 10b6d3407; -[SCGalleryEntryChangeRequest addEntryAssets:] */

void FUN_10b6d315c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong uVar13;
  undefined *unaff_x26;
  undefined *puVar14;
  long unaff_x27;
  undefined *puVar15;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  long lStack_140;
  long lStack_138;
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
  lStack_148 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    do {
      param_3 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x25 = *(undefined **)(lStack_128 + param_3 * 8);
        puVar4 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar5 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar4);
        puVar4 = PTR_DAT_1126a5c78;
        unaff_x24 = unaff_x25;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar5 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar4);
          if ((int)puVar5 == 0) {
            unaff_x24 = (undefined *)0x0;
          }
          _objc_retain(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar4 = unaff_x24;
          func_0x00010c0e0160(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = 0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            lStack_138 = 0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = lStack_138;
            _objc_retain(lStack_138);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = 0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x24);
        param_3 = param_3 + 1;
      } while (lVar3 != param_3);
      lVar3 = lStack_140;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = lStack_140;
  _objc_release(lStack_140);
  uVar12 = *(undefined8 *)(lStack_148 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar4;
  func_0x00010bef7fc0(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar11 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = lVar3;
  pcStack_158 = FUN_10b6d3408;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = puVar4;
  puStack_180 = puVar2;
  uStack_178 = uVar12;
  puStack_170 = puVar1;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar8 = auStack_240;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar5);
      }
      uVar13 = *(ulong *)((long)puVar9 * 8);
      puVar10 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar10);
      puVar10 = PTR_DAT_1126a5c78;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar10);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar10 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar10 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar8 = auStack_240;
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(lVar11 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00();
  puVar9 = puVar1;
  func_0x00010c12c1a0(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar9);
      }
      uVar13 = *(ulong *)((long)puVar10 * 8);
      puVar14 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar14);
      puVar14 = PTR_DAT_1126a5c78;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar14);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar14 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar14 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar14);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar1 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  uVar12 = *(undefined8 *)(puVar5 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar5 = puVar1;
  func_0x00010c066780(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar5);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c1c0(*(undefined8 *)(puVar9 + 8));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d3408; end: 10b6d36b3; -[SCGalleryEntryChangeRequest removeEntryAssets:] */

void FUN_10b6d3408(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar8 = auStack_f0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar10 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar4);
      puVar4 = PTR_DAT_1126a5c78;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar4);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar4 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar4 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    puVar8 = auStack_f0;
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar14 = puVar4;
  func_0x00010c12c1a0(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar14);
      }
      uVar13 = *(ulong *)((long)puVar11 * 8);
      puVar7 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar7);
      puVar7 = PTR_DAT_1126a5c78;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar7);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar7 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar7 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar7);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar12 = *(undefined8 *)(param_3 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar11 = puVar1;
  func_0x00010c066780(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar11);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c1c0(*(undefined8 *)(puVar14 + 8));
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d36b4; end: 10b6d397f; -[SCGalleryEntryChangeRequest insertEntryAssets:atIndexes:] */

void FUN_10b6d36b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(ulong *)(lVar9 * 8);
      puVar5 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar5);
      puVar5 = PTR_DAT_1126a5c78;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar11);
        uVar7 = uVar11;
        func_0x000107c318f8(uVar11,puVar5);
        uVar6 = uVar11;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar11);
        puVar5 = PTR_PTR_1126e0498;
        uVar11 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (puVar5 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar12 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar12);
        _objc_release(0);
        _objc_release(puVar5);
      }
      else {
        func_0x00010c0b7f60(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar11;
      }
      _objc_release(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar12 = puVar5;
  func_0x00010c066780(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126e0498;
    _objc_retain(puVar12);
    func_0x00010bf5f5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c1c0(*(undefined8 *)(param_3 + 8));
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b6d3980; end: 10b6d39e3; -[SCGalleryEntryChangeRequest removeEntryAssetsAtIndexes:] */

void FUN_10b6d3980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c1c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


