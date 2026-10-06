/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6bb594; end: 10b6bb7d3; +[SCGalleryEntry fetchGalleryEntriesForOwnerFailed:options:error:dataObjectContext:] */

void FUN_10b6bb594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6b9698;
  uStack_88 = 0x10b6b96a8;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6b9698;
  uStack_d8 = 0x10b6b96a8;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6bb7d4; end: 10b6bbbbb;  */

void FUN_10b6bb7d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70638;
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
  pcStack_200 = FUN_10b6b9698;
  uStack_1f8 = 0x10b6b96a8;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6b9698;
  uStack_248 = 0x10b6b96a8;
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



/* Entry: 10b6bbbbc; end: 10b6bbe03; +[SCGalleryEntry fetchGalleryEntryForSnapDoc:options:dataObjectContext:] */

void FUN_10b6bbbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6b9698;
  uStack_88 = 0x10b6b96a8;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6b9698;
  uStack_d8 = 0x10b6b96a8;
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



/* Entry: 10b6bbe04; end: 10b6bc1eb;  */

void FUN_10b6bbe04(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70678;
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
  pcStack_200 = FUN_10b6b9698;
  uStack_1f8 = 0x10b6b96a8;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6b9698;
  uStack_248 = 0x10b6b96a8;
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



/* Entry: 10b6bc1ec; end: 10b6bc433; +[SCGalleryEntry fetchGalleryEntryForSnap:options:dataObjectContext:] */

void FUN_10b6bc1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6b9698;
  uStack_88 = 0x10b6b96a8;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6b9698;
  uStack_d8 = 0x10b6b96a8;
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



/* Entry: 10b6bc434; end: 10b6bc81b;  */

void FUN_10b6bc434(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f706b8;
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
  pcStack_200 = FUN_10b6b9698;
  uStack_1f8 = 0x10b6b96a8;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6b9698;
  uStack_248 = 0x10b6b96a8;
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



/* Entry: 10b6bc81c; end: 10b6bca63; +[SCGalleryEntry fetchGalleryEntryForSyncedEntryAsset:options:dataObjectContext:] */

void FUN_10b6bc81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6b9698;
  uStack_88 = 0x10b6b96a8;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6b9698;
  uStack_d8 = 0x10b6b96a8;
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



/* Entry: 10b6bca64; end: 10b6bce4b;  */

void FUN_10b6bca64(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f706f8;
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
  pcStack_200 = FUN_10b6b9698;
  uStack_1f8 = 0x10b6b96a8;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6b9698;
  uStack_248 = 0x10b6b96a8;
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



/* Entry: 10b6bce4c; end: 10b6bd093; +[SCGalleryEntry fetchGalleryEntryForSyncedHighlightedSnap:options:dataObjectContext:] */

void FUN_10b6bce4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6b9698;
  uStack_88 = 0x10b6b96a8;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6b9698;
  uStack_d8 = 0x10b6b96a8;
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



/* Entry: 10b6bd094; end: 10b6bd47b;  */

void FUN_10b6bd094(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70738;
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
  pcStack_200 = FUN_10b6b9698;
  uStack_1f8 = 0x10b6b96a8;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6b9698;
  uStack_248 = 0x10b6b96a8;
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



/* Entry: 10b6bd47c; end: 10b6bd6c3; +[SCGalleryEntry fetchGalleryEntryForSyncedSnapDoc:options:dataObjectContext:] */

void FUN_10b6bd47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6b9698;
  uStack_88 = 0x10b6b96a8;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6b9698;
  uStack_d8 = 0x10b6b96a8;
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



/* Entry: 10b6bd6c4; end: 10b6bdaab;  */

void FUN_10b6bd6c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70778;
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
  pcStack_200 = FUN_10b6b9698;
  uStack_1f8 = 0x10b6b96a8;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6b9698;
  uStack_248 = 0x10b6b96a8;
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



/* Entry: 10b6bdaac; end: 10b6bdcf3; +[SCGalleryEntry fetchGalleryEntryForSyncedSnap:options:dataObjectContext:] */

void FUN_10b6bdaac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6b9698;
  uStack_88 = 0x10b6b96a8;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6b9698;
  uStack_d8 = 0x10b6b96a8;
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



/* Entry: 10b6bdcf4; end: 10b6be0db;  */

long FUN_10b6bdcf4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
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
  puVar7 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f707b8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  _objc_retain(param_5);
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x2020000000;
  uStack_1f0 = 0;
  puStack_220 = &uStack_228;
  uStack_228 = 0;
  uStack_218 = 0x2020000000;
  uStack_210 = 0;
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
  } while ((*(byte *)(puStack_220 + 3) & 1) != 0);
  lVar9 = puStack_200[3];
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_208,8);
  _objc_release(param_5);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
  return lVar9;
}



/* Entry: 10b6be0dc; end: 10b6be297; +[SCGalleryEntry countOfGalleryEntriesForOwner:options:dataObjectContext:] */

undefined8
FUN_10b6be0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6be298; end: 10b6be523;  */

undefined8
FUN_10b6be298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f707d8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  do {
    _objc_retain(param_5);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar10 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar13);
    _objc_retain(ppuVar11);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar11);
    _objc_release(uVar13);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_130 + 3) & 1) != 0);
  uVar3 = puStack_110[3];
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
  return uVar3;
}



/* Entry: 10b6be524; end: 10b6be6df; +[SCGalleryEntry countOfGalleryEntriesForOwnerDeleted:options:dataObjectContext:] */

undefined8
FUN_10b6be524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6be6e0; end: 10b6be96b;  */

undefined8
FUN_10b6be6e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f707f8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  do {
    _objc_retain(param_5);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar10 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar13);
    _objc_retain(ppuVar11);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar11);
    _objc_release(uVar13);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_130 + 3) & 1) != 0);
  uVar3 = puStack_110[3];
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
  return uVar3;
}



/* Entry: 10b6be96c; end: 10b6beb27; +[SCGalleryEntry countOfGalleryEntriesForOwnerFailed:options:dataObjectContext:] */

undefined8
FUN_10b6be96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6beb28; end: 10b6bedb3;  */

void FUN_10b6beb28(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f70818;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_10b6bef78;
  uStack_100 = 0x10b6bef88;
  uStack_f8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  do {
    _objc_retain(ppuVar11);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    ppuVar10 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar6);
    ppuVar1 = ppuVar11;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar11);
    _objc_retain(uVar13);
    _objc_retain(ppuVar1);
    func_0x00010c0f8240(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(uVar13);
    _objc_release(ppuVar1);
  } while ((*(byte *)(puStack_138 + 3) & 1) != 0);
  uVar3 = puStack_118[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6bedb4; end: 10b6bef77; +[SCGalleryEntryAsset fetchGalleryEntryAssetsWithOptions:dataObjectContext:] */

void FUN_10b6bedb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  pcStack_88 = FUN_10b6bef78;
  uStack_80 = 0x10b6bef88;
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



/* Entry: 10b6bef78; end: 10b6bef8f;  */

void FUN_10b6bef78(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6bef90; end: 10b6bf2d3;  */

long FUN_10b6bef90(long param_1,long param_2)

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
  puVar5 = PTR_PTR_1126e0550;
  func_0x00010bf96ec0(PTR_PTR_1126e0550);
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
          _objc_opt_class(PTR_PTR_1126bc808);
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
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70838;
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



/* Entry: 10b6bf2d4; end: 10b6bf467; +[SCGalleryEntryAsset countOfGalleryEntryAssetsWithOptions:dataObjectContext:] */

undefined8 FUN_10b6bf2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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



/* Entry: 10b6bf468; end: 10b6bf5c3;  */

void FUN_10b6bf468(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0550;
  func_0x00010bf96ec0(PTR_PTR_1126e0550);
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



/* Entry: 10b6bf5c4; end: 10b6bf803; +[SCGalleryEntryAsset fetchGalleryEntryAssetsForEntry:options:error:dataObjectContext:] */

void FUN_10b6bf5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6bef78;
  uStack_88 = 0x10b6bef88;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6bef78;
  uStack_d8 = 0x10b6bef88;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6bf804; end: 10b6bfbeb;  */

void FUN_10b6bf804(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

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
  puVar7 = PTR_PTR_1126e0550;
  func_0x00010bf96ec0(PTR_PTR_1126e0550);
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
    param_5 = (undefined8 *)0x10;
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
        _objc_opt_class(PTR_PTR_1126bc808);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = (undefined8 *)0x10;
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70898;
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
  _objc_retain(param_6);
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_10b6bef78;
  uStack_1f8 = 0x10b6bef88;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6bef78;
  uStack_248 = 0x10b6bef88;
  uStack_240 = 0;
  do {
    _objc_retain(param_6);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar7);
    uVar1 = param_6;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_230 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar14 = puStack_260[5];
    _objc_retainAutorelease();
    *param_5 = uVar14;
  }
  uVar14 = puStack_210[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(param_6);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6bfbec; end: 10b6bfe2b; +[SCGalleryEntryAsset fetchGalleryEntryAssetsForSyncedEntry:options:error:dataObjectContext:] */

void FUN_10b6bfbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6bef78;
  uStack_88 = 0x10b6bef88;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6bef78;
  uStack_d8 = 0x10b6bef88;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6bfe2c; end: 10b6c0213;  */

long FUN_10b6bfe2c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
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
  puVar7 = PTR_PTR_1126e0550;
  func_0x00010bf96ec0(PTR_PTR_1126e0550);
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
        _objc_opt_class(PTR_PTR_1126bc808);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f708d8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  _objc_retain(param_5);
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x2020000000;
  uStack_1f0 = 0;
  puStack_220 = &uStack_228;
  uStack_228 = 0;
  uStack_218 = 0x2020000000;
  uStack_210 = 0;
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
  } while ((*(byte *)(puStack_220 + 3) & 1) != 0);
  lVar9 = puStack_200[3];
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_208,8);
  _objc_release(param_5);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
  return lVar9;
}



/* Entry: 10b6c0214; end: 10b6c03cf; +[SCGalleryEntryAsset countOfGalleryEntryAssetsForEntry:options:dataObjectContext:] */

undefined8
FUN_10b6c0214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6c03d0; end: 10b6c065b;  */

undefined8
FUN_10b6c03d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0550;
  func_0x00010bf96ec0(PTR_PTR_1126e0550);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f708f8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  do {
    _objc_retain(param_5);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar10 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar13);
    _objc_retain(ppuVar11);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar11);
    _objc_release(uVar13);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_130 + 3) & 1) != 0);
  uVar3 = puStack_110[3];
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
  return uVar3;
}



/* Entry: 10b6c065c; end: 10b6c0817; +[SCGalleryEntryAsset countOfGalleryEntryAssetsForSyncedEntry:options:dataObjectContext:] */

undefined8
FUN_10b6c065c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6c0818; end: 10b6c0aa3;  */

void FUN_10b6c0818(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0550;
  func_0x00010bf96ec0(PTR_PTR_1126e0550);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f70918;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_10b6bef78;
  uStack_100 = 0x10b6bef88;
  uStack_f8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  do {
    _objc_retain(ppuVar11);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    ppuVar10 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar6);
    ppuVar1 = ppuVar11;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar11);
    _objc_retain(uVar13);
    _objc_retain(ppuVar1);
    func_0x00010c0f8240(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(uVar13);
    _objc_release(ppuVar1);
  } while ((*(byte *)(puStack_138 + 3) & 1) != 0);
  uVar3 = puStack_118[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6c0aa4; end: 10b6c0c63; +[SCGalleryEntryAsset fetchGalleryEntryAssetsForEntry:dataObjectContext:] */

void FUN_10b6c0aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  pcStack_88 = FUN_10b6bef78;
  uStack_80 = 0x10b6bef88;
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



/* Entry: 10b6c0c64; end: 10b6c0ec7;  */

void FUN_10b6c0c64(long param_1,long param_2)

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
      func_0x00010bf970a0();
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
          _objc_opt_class(PTR_PTR_1126bc808);
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
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70938;
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
    pcStack_1d8 = FUN_10b6bef78;
    uStack_1d0 = 0x10b6bef88;
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



/* Entry: 10b6c0ec8; end: 10b6c1087; +[SCGalleryEntryAsset fetchGalleryEntryAssetsForSyncedEntry:dataObjectContext:] */

void FUN_10b6c0ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  pcStack_88 = FUN_10b6bef78;
  uStack_80 = 0x10b6bef88;
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



/* Entry: 10b6c1088; end: 10b6c12eb;  */

void FUN_10b6c1088(long param_1,long param_2)

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
      func_0x00010c2669c0();
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
          _objc_opt_class(PTR_PTR_1126bc808);
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
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70958;
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
    pcStack_1d8 = FUN_10b6c14b0;
    uStack_1d0 = 0x10b6c14c0;
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



/* Entry: 10b6c12ec; end: 10b6c14af; +[SCGalleryProfile fetchGalleryProfilesWithOptions:dataObjectContext:] */

void FUN_10b6c12ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  pcStack_88 = FUN_10b6c14b0;
  uStack_80 = 0x10b6c14c0;
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



/* Entry: 10b6c14b0; end: 10b6c14c7;  */

void FUN_10b6c14b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6c14c8; end: 10b6c180b;  */

long FUN_10b6c14c8(long param_1,long param_2)

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
  puVar5 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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
          _objc_opt_class(PTR_PTR_1126b2500);
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
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70978;
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



/* Entry: 10b6c180c; end: 10b6c199f; +[SCGalleryProfile countOfGalleryProfilesWithOptions:dataObjectContext:] */

undefined8 FUN_10b6c180c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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



/* Entry: 10b6c19a0; end: 10b6c1afb;  */

void FUN_10b6c19a0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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



/* Entry: 10b6c1afc; end: 10b6c1d43; +[SCGalleryProfile fetchGalleryProfileForDeletedEntry:options:dataObjectContext:] */

void FUN_10b6c1afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c14b0;
  uStack_88 = 0x10b6c14c0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c14b0;
  uStack_d8 = 0x10b6c14c0;
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



/* Entry: 10b6c1d44; end: 10b6c212b;  */

void FUN_10b6c1d44(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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
        _objc_opt_class(PTR_PTR_1126b2500);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f709d8;
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
  pcStack_200 = FUN_10b6c14b0;
  uStack_1f8 = 0x10b6c14c0;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c14b0;
  uStack_248 = 0x10b6c14c0;
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



/* Entry: 10b6c212c; end: 10b6c2373; +[SCGalleryProfile fetchGalleryProfileForDeletedSnap:options:dataObjectContext:] */

void FUN_10b6c212c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c14b0;
  uStack_88 = 0x10b6c14c0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c14b0;
  uStack_d8 = 0x10b6c14c0;
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



/* Entry: 10b6c2374; end: 10b6c275b;  */

void FUN_10b6c2374(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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
        _objc_opt_class(PTR_PTR_1126b2500);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70a18;
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
  pcStack_200 = FUN_10b6c14b0;
  uStack_1f8 = 0x10b6c14c0;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c14b0;
  uStack_248 = 0x10b6c14c0;
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



/* Entry: 10b6c275c; end: 10b6c29a3; +[SCGalleryProfile fetchGalleryProfileForEntry:options:dataObjectContext:] */

void FUN_10b6c275c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c14b0;
  uStack_88 = 0x10b6c14c0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c14b0;
  uStack_d8 = 0x10b6c14c0;
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



/* Entry: 10b6c29a4; end: 10b6c2d8b;  */

void FUN_10b6c29a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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
        _objc_opt_class(PTR_PTR_1126b2500);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70a58;
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
  pcStack_200 = FUN_10b6c14b0;
  uStack_1f8 = 0x10b6c14c0;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c14b0;
  uStack_248 = 0x10b6c14c0;
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



/* Entry: 10b6c2d8c; end: 10b6c2fd3; +[SCGalleryProfile fetchGalleryProfileForFailedEntry:options:dataObjectContext:] */

void FUN_10b6c2d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c14b0;
  uStack_88 = 0x10b6c14c0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c14b0;
  uStack_d8 = 0x10b6c14c0;
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



/* Entry: 10b6c2fd4; end: 10b6c33bb;  */

void FUN_10b6c2fd4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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
        _objc_opt_class(PTR_PTR_1126b2500);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70a98;
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
  pcStack_200 = FUN_10b6c14b0;
  uStack_1f8 = 0x10b6c14c0;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c14b0;
  uStack_248 = 0x10b6c14c0;
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



/* Entry: 10b6c33bc; end: 10b6c3603; +[SCGalleryProfile fetchGalleryProfileForOperation:options:dataObjectContext:] */

void FUN_10b6c33bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c14b0;
  uStack_88 = 0x10b6c14c0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c14b0;
  uStack_d8 = 0x10b6c14c0;
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



/* Entry: 10b6c3604; end: 10b6c39eb;  */

void FUN_10b6c3604(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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
        _objc_opt_class(PTR_PTR_1126b2500);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70ad8;
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
  pcStack_200 = FUN_10b6c14b0;
  uStack_1f8 = 0x10b6c14c0;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c14b0;
  uStack_248 = 0x10b6c14c0;
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



/* Entry: 10b6c39ec; end: 10b6c3c33; +[SCGalleryProfile fetchGalleryProfileForQuotaStatus:options:dataObjectContext:] */

void FUN_10b6c39ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c14b0;
  uStack_88 = 0x10b6c14c0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c14b0;
  uStack_d8 = 0x10b6c14c0;
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



/* Entry: 10b6c3c34; end: 10b6c401b;  */

void FUN_10b6c3c34(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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
        _objc_opt_class(PTR_PTR_1126b2500);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70b18;
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
  pcStack_200 = FUN_10b6c14b0;
  uStack_1f8 = 0x10b6c14c0;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c14b0;
  uStack_248 = 0x10b6c14c0;
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



/* Entry: 10b6c401c; end: 10b6c4263; +[SCGalleryProfile fetchGalleryProfileForSnap:options:dataObjectContext:] */

void FUN_10b6c401c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c14b0;
  uStack_88 = 0x10b6c14c0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c14b0;
  uStack_d8 = 0x10b6c14c0;
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



/* Entry: 10b6c4264; end: 10b6c464b;  */

void FUN_10b6c4264(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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
        _objc_opt_class(PTR_PTR_1126b2500);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70b38;
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
  pcStack_200 = FUN_10b6c14b0;
  uStack_1f8 = 0x10b6c14c0;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c14b0;
  uStack_248 = 0x10b6c14c0;
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



/* Entry: 10b6c464c; end: 10b6c4893; +[SCGalleryProfile fetchGalleryProfileForUserDefault:options:dataObjectContext:] */

void FUN_10b6c464c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c14b0;
  uStack_88 = 0x10b6c14c0;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c14b0;
  uStack_d8 = 0x10b6c14c0;
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



/* Entry: 10b6c4894; end: 10b6c4c7b;  */

void FUN_10b6c4894(long param_1,long param_2)

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
  puVar7 = PTR_PTR_1126e0558;
  func_0x00010bf96ec0(PTR_PTR_1126e0558);
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
        _objc_opt_class(PTR_PTR_1126b2500);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70b78;
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
  pcStack_1f8 = FUN_10b6c4e40;
  uStack_1f0 = 0x10b6c4e50;
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



/* Entry: 10b6c4c7c; end: 10b6c4e3f; +[SCGalleryQuotaStatus fetchGalleryQuotaStatusesWithOptions:dataObjectContext:] */

void FUN_10b6c4c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  pcStack_88 = FUN_10b6c4e40;
  uStack_80 = 0x10b6c4e50;
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



/* Entry: 10b6c4e40; end: 10b6c4e57;  */

void FUN_10b6c4e40(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6c4e58; end: 10b6c519b;  */

long FUN_10b6c4e58(long param_1,long param_2)

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
  puVar5 = PTR_PTR_1126e0560;
  func_0x00010bf96ec0(PTR_PTR_1126e0560);
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
          _objc_opt_class(PTR_PTR_1126d7f90);
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
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70b98;
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



/* Entry: 10b6c519c; end: 10b6c532f; +[SCGalleryQuotaStatus countOfGalleryQuotaStatusesWithOptions:dataObjectContext:] */

undefined8 FUN_10b6c519c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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



/* Entry: 10b6c5330; end: 10b6c548b;  */

void FUN_10b6c5330(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0560;
  func_0x00010bf96ec0(PTR_PTR_1126e0560);
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



/* Entry: 10b6c548c; end: 10b6c56d3; +[SCGalleryQuotaStatus fetchGalleryQuotaStatusForProfile:options:dataObjectContext:] */

void FUN_10b6c548c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c4e40;
  uStack_88 = 0x10b6c4e50;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c4e40;
  uStack_d8 = 0x10b6c4e50;
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



/* Entry: 10b6c56d4; end: 10b6c5abb;  */

void FUN_10b6c56d4(long param_1,long param_2)

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
  puVar7 = PTR_PTR_1126e0560;
  func_0x00010bf96ec0(PTR_PTR_1126e0560);
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
        _objc_opt_class(PTR_PTR_1126d7f90);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70bf8;
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
  pcStack_1f8 = FUN_10b6c5c80;
  uStack_1f0 = 0x10b6c5c90;
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



/* Entry: 10b6c5abc; end: 10b6c5c7f; +[SCGallerySnap fetchGallerySnapsWithOptions:dataObjectContext:] */

void FUN_10b6c5abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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



/* Entry: 10b6c5c80; end: 10b6c5c97;  */

void FUN_10b6c5c80(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6c5c98; end: 10b6c5fdb;  */

long FUN_10b6c5c98(long param_1,long param_2)

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
  puVar5 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
          _objc_opt_class(PTR_PTR_1126af4d0);
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
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70118;
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



/* Entry: 10b6c5fdc; end: 10b6c616f; +[SCGallerySnap countOfGallerySnapsWithOptions:dataObjectContext:] */

undefined8 FUN_10b6c5fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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



/* Entry: 10b6c6170; end: 10b6c62cb;  */

void FUN_10b6c6170(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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



/* Entry: 10b6c62cc; end: 10b6c6513; +[SCGallerySnap fetchGallerySnapForDetail:options:dataObjectContext:] */

void FUN_10b6c62cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c5c80;
  uStack_88 = 0x10b6c5c90;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c5c80;
  uStack_d8 = 0x10b6c5c90;
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



/* Entry: 10b6c6514; end: 10b6c68fb;  */

void FUN_10b6c6514(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

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
  puVar7 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    param_5 = (undefined8 *)0x10;
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
        _objc_opt_class(PTR_PTR_1126af4d0);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = (undefined8 *)0x10;
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70c58;
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
  _objc_retain(param_6);
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_10b6c5c80;
  uStack_1f8 = 0x10b6c5c90;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c5c80;
  uStack_248 = 0x10b6c5c90;
  uStack_240 = 0;
  do {
    _objc_retain(param_6);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar7);
    uVar1 = param_6;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_230 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar14 = puStack_260[5];
    _objc_retainAutorelease();
    *param_5 = uVar14;
  }
  uVar14 = puStack_210[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(param_6);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6c68fc; end: 10b6c6b3b; +[SCGallerySnap fetchGallerySnapsForEntry:options:error:dataObjectContext:] */

void FUN_10b6c68fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6c5c80;
  uStack_88 = 0x10b6c5c90;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c5c80;
  uStack_d8 = 0x10b6c5c90;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6c6b3c; end: 10b6c6f23;  */

void FUN_10b6c6b3c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

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
  puVar7 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    param_5 = (undefined8 *)0x10;
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
        _objc_opt_class(PTR_PTR_1126af4d0);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = (undefined8 *)0x10;
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70c78;
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
  _objc_retain(param_6);
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_10b6c5c80;
  uStack_1f8 = 0x10b6c5c90;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c5c80;
  uStack_248 = 0x10b6c5c90;
  uStack_240 = 0;
  do {
    _objc_retain(param_6);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar7);
    uVar1 = param_6;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_230 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar14 = puStack_260[5];
    _objc_retainAutorelease();
    *param_5 = uVar14;
  }
  uVar14 = puStack_210[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(param_6);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6c6f24; end: 10b6c7163; +[SCGallerySnap fetchGallerySnapsForEntryHighlighted:options:error:dataObjectContext:] */

void FUN_10b6c6f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6c5c80;
  uStack_88 = 0x10b6c5c90;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c5c80;
  uStack_d8 = 0x10b6c5c90;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6c7164; end: 10b6c754b;  */

void FUN_10b6c7164(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
        _objc_opt_class(PTR_PTR_1126af4d0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70cb8;
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
  pcStack_200 = FUN_10b6c5c80;
  uStack_1f8 = 0x10b6c5c90;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c5c80;
  uStack_248 = 0x10b6c5c90;
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



/* Entry: 10b6c754c; end: 10b6c7793; +[SCGallerySnap fetchGallerySnapForMiniThumbnail:options:dataObjectContext:] */

void FUN_10b6c754c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6c5c80;
  uStack_88 = 0x10b6c5c90;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c5c80;
  uStack_d8 = 0x10b6c5c90;
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



/* Entry: 10b6c7794; end: 10b6c7b7b;  */

void FUN_10b6c7794(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

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
  puVar7 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    param_5 = (undefined8 *)0x10;
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
        _objc_opt_class(PTR_PTR_1126af4d0);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = (undefined8 *)0x10;
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70cf8;
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
  _objc_retain(param_6);
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_10b6c5c80;
  uStack_1f8 = 0x10b6c5c90;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c5c80;
  uStack_248 = 0x10b6c5c90;
  uStack_240 = 0;
  do {
    _objc_retain(param_6);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar7);
    uVar1 = param_6;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_230 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar14 = puStack_260[5];
    _objc_retainAutorelease();
    *param_5 = uVar14;
  }
  uVar14 = puStack_210[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(param_6);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6c7b7c; end: 10b6c7dbb; +[SCGallerySnap fetchGallerySnapsForOwner:options:error:dataObjectContext:] */

void FUN_10b6c7b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6c5c80;
  uStack_88 = 0x10b6c5c90;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c5c80;
  uStack_d8 = 0x10b6c5c90;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6c7dbc; end: 10b6c81a3;  */

void FUN_10b6c7dbc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

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
  puVar7 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    param_5 = (undefined8 *)0x10;
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
        _objc_opt_class(PTR_PTR_1126af4d0);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = (undefined8 *)0x10;
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70d18;
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
  _objc_retain(param_6);
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_10b6c5c80;
  uStack_1f8 = 0x10b6c5c90;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c5c80;
  uStack_248 = 0x10b6c5c90;
  uStack_240 = 0;
  do {
    _objc_retain(param_6);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar7);
    uVar1 = param_6;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_230 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar14 = puStack_260[5];
    _objc_retainAutorelease();
    *param_5 = uVar14;
  }
  uVar14 = puStack_210[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(param_6);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6c81a4; end: 10b6c83e3; +[SCGallerySnap fetchGallerySnapsForOwnerDeleted:options:error:dataObjectContext:] */

void FUN_10b6c81a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6c5c80;
  uStack_88 = 0x10b6c5c90;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c5c80;
  uStack_d8 = 0x10b6c5c90;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6c83e4; end: 10b6c87cb;  */

void FUN_10b6c83e4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

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
  puVar7 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    param_5 = (undefined8 *)0x10;
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
        _objc_opt_class(PTR_PTR_1126af4d0);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = (undefined8 *)0x10;
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70d38;
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
  _objc_retain(param_6);
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_10b6c5c80;
  uStack_1f8 = 0x10b6c5c90;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c5c80;
  uStack_248 = 0x10b6c5c90;
  uStack_240 = 0;
  do {
    _objc_retain(param_6);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar7);
    uVar1 = param_6;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_230 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar14 = puStack_260[5];
    _objc_retainAutorelease();
    *param_5 = uVar14;
  }
  uVar14 = puStack_210[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(param_6);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6c87cc; end: 10b6c8a0b; +[SCGallerySnap fetchGallerySnapsForSyncedEntry:options:error:dataObjectContext:] */

void FUN_10b6c87cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6c5c80;
  uStack_88 = 0x10b6c5c90;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c5c80;
  uStack_d8 = 0x10b6c5c90;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6c8a0c; end: 10b6c8df3;  */

void FUN_10b6c8a0c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

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
  puVar7 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    param_5 = (undefined8 *)0x10;
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
        _objc_opt_class(PTR_PTR_1126af4d0);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = (undefined8 *)0x10;
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70d58;
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
  _objc_retain(param_6);
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_10b6c5c80;
  uStack_1f8 = 0x10b6c5c90;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b6c5c80;
  uStack_248 = 0x10b6c5c90;
  uStack_240 = 0;
  do {
    _objc_retain(param_6);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar7);
    uVar1 = param_6;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_230 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar14 = puStack_260[5];
    _objc_retainAutorelease();
    *param_5 = uVar14;
  }
  uVar14 = puStack_210[5];
  _objc_retain(uVar14);
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(param_6);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6c8df4; end: 10b6c9033; +[SCGallerySnap fetchGallerySnapsForSyncedEntryHighlighted:options:error:dataObjectContext:] */

void FUN_10b6c8df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b6c5c80;
  uStack_88 = 0x10b6c5c90;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6c5c80;
  uStack_d8 = 0x10b6c5c90;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b6c9034; end: 10b6c941b;  */

long FUN_10b6c9034(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
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
  puVar7 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
        _objc_opt_class(PTR_PTR_1126af4d0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70d98;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  _objc_retain(param_5);
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x2020000000;
  uStack_1f0 = 0;
  puStack_220 = &uStack_228;
  uStack_228 = 0;
  uStack_218 = 0x2020000000;
  uStack_210 = 0;
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
  } while ((*(byte *)(puStack_220 + 3) & 1) != 0);
  lVar9 = puStack_200[3];
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_208,8);
  _objc_release(param_5);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
  return lVar9;
}



/* Entry: 10b6c941c; end: 10b6c95d7; +[SCGallerySnap countOfGallerySnapsForEntry:options:dataObjectContext:] */

undefined8
FUN_10b6c941c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6c95d8; end: 10b6c9863;  */

undefined8
FUN_10b6c95d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f70db8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  do {
    _objc_retain(param_5);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar10 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar13);
    _objc_retain(ppuVar11);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar11);
    _objc_release(uVar13);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_130 + 3) & 1) != 0);
  uVar3 = puStack_110[3];
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
  return uVar3;
}



/* Entry: 10b6c9864; end: 10b6c9a1f; +[SCGallerySnap countOfGallerySnapsForEntryHighlighted:options:dataObjectContext:] */

undefined8
FUN_10b6c9864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6c9a20; end: 10b6c9cab;  */

undefined8
FUN_10b6c9a20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f70dd8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  do {
    _objc_retain(param_5);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar10 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar13);
    _objc_retain(ppuVar11);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar11);
    _objc_release(uVar13);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_130 + 3) & 1) != 0);
  uVar3 = puStack_110[3];
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
  return uVar3;
}



/* Entry: 10b6c9cac; end: 10b6c9e67; +[SCGallerySnap countOfGallerySnapsForOwner:options:dataObjectContext:] */

undefined8
FUN_10b6c9cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6c9e68; end: 10b6ca0f3;  */

undefined8
FUN_10b6c9e68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f70df8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  do {
    _objc_retain(param_5);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar10 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar13);
    _objc_retain(ppuVar11);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar11);
    _objc_release(uVar13);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_130 + 3) & 1) != 0);
  uVar3 = puStack_110[3];
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
  return uVar3;
}



/* Entry: 10b6ca0f4; end: 10b6ca2af; +[SCGallerySnap countOfGallerySnapsForOwnerDeleted:options:dataObjectContext:] */

undefined8
FUN_10b6ca0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6ca2b0; end: 10b6ca53b;  */

undefined8
FUN_10b6ca2b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f70e18;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  do {
    _objc_retain(param_5);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar10 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar13);
    _objc_retain(ppuVar11);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar11);
    _objc_release(uVar13);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_130 + 3) & 1) != 0);
  uVar3 = puStack_110[3];
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
  return uVar3;
}



/* Entry: 10b6ca53c; end: 10b6ca6f7; +[SCGallerySnap countOfGallerySnapsForSyncedEntry:options:dataObjectContext:] */

undefined8
FUN_10b6ca53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6ca6f8; end: 10b6ca983;  */

undefined8
FUN_10b6ca6f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f70e38;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  do {
    _objc_retain(param_5);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar10 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar13);
    _objc_retain(ppuVar11);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar11);
    _objc_release(uVar13);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_130 + 3) & 1) != 0);
  uVar3 = puStack_110[3];
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
  return uVar3;
}



/* Entry: 10b6ca984; end: 10b6cab3f; +[SCGallerySnap countOfGallerySnapsForSyncedEntryHighlighted:options:dataObjectContext:] */

undefined8
FUN_10b6ca984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
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
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6cab40; end: 10b6cadcb;  */

void FUN_10b6cab40(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar6 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
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
    func_0x00010bf0a140();
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
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f70e58;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_10b6c5c80;
  uStack_100 = 0x10b6c5c90;
  uStack_f8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  do {
    _objc_retain(ppuVar11);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    ppuVar10 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar6);
    ppuVar1 = ppuVar11;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar11);
    _objc_retain(uVar13);
    _objc_retain(ppuVar1);
    func_0x00010c0f8240(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(uVar13);
    _objc_release(ppuVar1);
  } while ((*(byte *)(puStack_138 + 3) & 1) != 0);
  uVar3 = puStack_118[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6cadcc; end: 10b6caf8b; +[SCGallerySnap fetchGallerySnapsForEntry:dataObjectContext:] */

void FUN_10b6cadcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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



/* Entry: 10b6caf8c; end: 10b6cb1ef;  */

void FUN_10b6caf8c(long param_1,long param_2)

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
      func_0x00010c245680();
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
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70e78;
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


