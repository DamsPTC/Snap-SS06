/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6b0820; end: 10b6b0837;  */

void FUN_10b6b0820(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6b0838; end: 10b6b0da7;  */

void FUN_10b6b0838(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *apuStack_180 [16];
  undefined *puStack_100;
  long lStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar20 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar20);
  puVar13 = &uStack_240;
  ppuVar15 = apuStack_f0;
  lVar16 = lVar20;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar18 = *plStack_230;
    do {
      lVar17 = 0;
      do {
        if (*plStack_230 != lVar18) {
          _objc_enumerationMutation(lVar20);
        }
        lVar22 = *(long *)(lStack_238 + lVar17 * 8);
        lVar21 = lVar22;
        func_0x00010c0e0160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar5 = PTR_PTR_1126e0498;
        if (lVar21 != 0) {
          lVar21 = lVar22;
          func_0x00010c0e0160(lVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar21);
          if (puVar5 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
            lVar21 = lVar22;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar21 != 0) {
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(lVar22);
            }
          }
          _objc_release(puVar5);
        }
        lVar17 = lVar17 + 1;
      } while (lVar16 != lVar17);
      puVar13 = &uStack_240;
      ppuVar15 = apuStack_f0;
      lVar16 = lVar20;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(lVar20);
  puVar5 = puVar3;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
    _objc_alloc();
    puVar5 = PTR_PTR_1126e0538;
    func_0x00010bf96ec0(PTR_PTR_1126e0538);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010100();
    _objc_release(puVar5);
    puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00010c1dfc80(puVar6);
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar7;
      lStack_f8 = *(long *)(param_1 + 0x28);
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02a20(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dfc80(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar8);
    }
    func_0x00010c1edca0(puVar6);
    func_0x00010c1e9a20(puVar6);
    lVar20 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    puStack_248 = *(undefined **)(lVar20 + 0x28);
    ppuVar15 = &puStack_248;
    lVar16 = param_2;
    func_0x00010bf9af20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puStack_248;
    _objc_retain(puStack_248);
    uVar9 = *(undefined8 *)(lVar20 + 0x28);
    *(undefined **)(lVar20 + 0x28) = puVar5;
    _objc_release(uVar9);
    if (lVar16 != 0) {
      _objc_retain(lVar16);
      ppuVar15 = apuStack_180;
      lVar20 = lVar16;
      func_0x00010bf52a60();
      lVar18 = lRam0000000000000000;
      while (lVar20 != 0) {
        lVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(lVar16);
          }
          lVar22 = *(long *)(lVar17 * 8);
          lVar21 = *(long *)(param_1 + 0x30);
          _objc_opt_class(PTR_PTR_1126af4c0);
          func_0x00010bfe9d60();
          _objc_retainAutoreleasedReturnValue();
          if (lVar21 != 0) {
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar22;
            func_0x00010bf52a60();
            lVar1 = lRam0000000000000000;
            while (lVar10 != 0) {
              lVar19 = 0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(lVar22);
                }
                lVar11 = *(long *)(lVar19 * 8);
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                if ((lVar11 != 0) && (puVar5 = puVar4, func_0x00010bf4b900(), (int)puVar5 != 0)) {
                  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
                }
                _objc_release(lVar11);
                lVar19 = lVar19 + 1;
              } while (lVar10 != lVar19);
              lVar10 = lVar22;
              func_0x00010bf52a60();
            }
            _objc_release(lVar22);
          }
          _objc_release(lVar21);
          lVar17 = lVar17 + 1;
        } while (lVar17 != lVar20);
        ppuVar15 = apuStack_180;
        lVar20 = lVar16;
        func_0x00010bf52a60();
      }
      _objc_release(lVar16);
    }
    puVar13 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    if (puVar13 != (undefined8 *)0x0) {
      uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
      ppuVar15 = &PTR____CFConstantStringClassReference_110f6fcb8;
      func_0x00010bfd1e00();
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar2;
    }
    _objc_release(lVar16);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar15);
  _objc_retain(puVar13);
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  lVar16 = param_2;
  func_0x00010bfa6e20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bfa6e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar15);
  _objc_release(puVar13);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  lVar20 = param_2;
  func_0x00010befa160(puVar5);
  puVar6 = puVar5;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(lVar16);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    _objc_retain(lVar20);
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c45e8;
    _objc_alloc();
    func_0x00010c038000();
    puVar8 = puVar4;
    func_0x00010bfa6e20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c45e8;
    _objc_alloc();
    func_0x00010c038000();
    uVar9 = 0;
    func_0x00010bfa6e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar20);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    puVar14 = puVar4;
    func_0x00010befa160(puVar7);
    puVar6 = puVar7;
    func_0x00010bf51e00();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
      ___stack_chk_fail();
      puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(uVar9);
      _objc_retain(puVar14);
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c45e8;
      _objc_alloc();
      func_0x00010c038000();
      puVar4 = puVar14;
      puVar8 = puVar3;
      func_0x00010bfa6e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(puVar14);
      _objc_release(puVar3);
      _objc_release();
      puVar6 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
        ___stack_chk_fail();
        puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar8);
        _objc_retain(puVar4);
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126c45e8;
        _objc_alloc();
        func_0x00010c038000();
        puVar5 = puVar4;
        puVar14 = puVar3;
        func_0x00010bfa6e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar12);
        puVar6 = puVar7;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
          ___stack_chk_fail();
          puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
          _objc_retain(puVar14);
          _objc_retain(puVar5);
          func_0x00010c1063c0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126c45e8;
          _objc_alloc(PTR_PTR_1126c45e8);
          func_0x00010c038000();
          func_0x00010bfa6e60(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          puVar6 = puVar12;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6b0da8; end: 10b6b0fab; +[SCGalleryEntry fetchUnsyncedGalleryEntriesForOwnerAndOwnerDeleted:dataObjectContext:] */

void FUN_10b6b0da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fcd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_68 = puVar1;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fcf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  uVar12 = param_1;
  func_0x00010bfa6e20(param_1,param_2,param_3,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bfa6e40(param_1,param_2,param_3,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  uVar9 = param_1;
  func_0x00010befa160(puVar2,param_2,param_1);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    pcStack_78 = FUN_10b6b0fac;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    _objc_retain(uVar9);
    func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fcd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    puStack_d8 = puVar1;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110f6fcf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d0 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar2,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c45e8;
    _objc_alloc();
    func_0x00010c038000();
    puVar5 = puVar4;
    func_0x00010bfa6e20(puVar4,param_2,uVar9,puVar1,0,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c45e8;
    _objc_alloc();
    func_0x00010c038000();
    uVar12 = 0;
    func_0x00010bfa6e60(puVar4,param_2,uVar9,puVar6,0,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar9);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    puVar10 = puVar4;
    func_0x00010befa160(puVar7);
    puVar3 = puVar7;
    func_0x00010bf51e00();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      pcStack_e8 = FUN_10b6b11dc;
      lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_f0 = &puStack_80;
      _objc_retain(uVar12);
      _objc_retain(puVar10);
      func_0x00010c246960(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e2d8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      puStack_148 = puVar1;
      func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                          &PTR____CFConstantStringClassReference_110f6e998,0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_140 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_148,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126c45e8;
      _objc_alloc();
      func_0x00010c038000();
      puVar3 = puVar2;
      puVar6 = puVar10;
      puVar11 = puVar1;
      func_0x00010bfa6e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(puVar10);
      _objc_release(puVar1);
      puVar5 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
        ___stack_chk_fail();
        puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        ppuStack_1a0 = &PTR_PTR_110d592a0;
        pcStack_158 = FUN_10b6b1354;
        lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_198 = puVar7;
        puStack_190 = puVar4;
        puStack_188 = puVar1;
        puStack_180 = puVar2;
        puStack_178 = puVar3;
        uStack_170 = uVar12;
        puStack_168 = puVar10;
        ppuStack_160 = &ppuStack_f0;
        _objc_retain(puVar11);
        _objc_retain(puVar6);
        func_0x00010c246960(puVar8,param_2,&PTR____CFConstantStringClassReference_110f6e2d8,0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        puStack_1b8 = puVar8;
        func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                            &PTR____CFConstantStringClassReference_110f6e998,0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1b0 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1b8,2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar8);
        puVar1 = PTR_PTR_1126c45e8;
        _objc_alloc();
        func_0x00010c038000();
        puVar2 = puVar6;
        puVar7 = puVar1;
        func_0x00010bfa6e60(puVar5,param_2,puVar6,puVar1,0,puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar6);
        _objc_release(puVar1);
        _objc_release(puVar4);
        puVar3 = puVar5;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
          ___stack_chk_fail();
          puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
          _objc_retain(puVar7);
          _objc_retain(puVar2);
          func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29bb8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126c45e8;
          _objc_alloc(PTR_PTR_1126c45e8);
          func_0x00010c038000();
          func_0x00010bfa6e60(puVar4,param_2,puVar2,puVar3,0,puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar2);
          _objc_release(puVar3);
          _objc_release(puVar1);
          puVar3 = puVar4;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6b0fac; end: 10b6b11db; +[SCGalleryEntry fetchUnsyncedGalleryEntriesForOwnerAndOwnerFailed:dataObjectContext:] */

void FUN_10b6b0fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fcd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_68 = puVar1;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fcf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  uVar5 = param_1;
  func_0x00010bfa6e20(param_1,param_2,param_3,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  uVar11 = 0;
  func_0x00010bfa6e60(param_1,param_2,param_3,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  uVar9 = param_1;
  func_0x00010befa160(puVar3);
  puVar6 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    pcStack_78 = FUN_10b6b11dc;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(uVar11);
    _objc_retain(uVar9);
    func_0x00010c246960(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e2d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_d8 = puVar1;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110f6e998,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d0 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c45e8;
    _objc_alloc();
    func_0x00010c038000();
    puVar6 = puVar4;
    uVar5 = uVar9;
    puVar10 = puVar1;
    func_0x00010bfa6e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(puVar1);
    puVar7 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      ppuStack_130 = &PTR_PTR_110d592a0;
      pcStack_e8 = FUN_10b6b1354;
      lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_128 = puVar3;
      puStack_120 = puVar2;
      puStack_118 = puVar1;
      puStack_110 = puVar4;
      puStack_108 = puVar6;
      uStack_100 = uVar11;
      uStack_f8 = uVar9;
      ppuStack_f0 = &puStack_80;
      _objc_retain(puVar10);
      _objc_retain(uVar5);
      func_0x00010c246960(puVar8,param_2,&PTR____CFConstantStringClassReference_110f6e2d8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      puStack_148 = puVar8;
      func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                          &PTR____CFConstantStringClassReference_110f6e998,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_140 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_148,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar8);
      puVar1 = PTR_PTR_1126c45e8;
      _objc_alloc();
      func_0x00010c038000();
      uVar9 = uVar5;
      puVar2 = puVar1;
      func_0x00010bfa6e60(puVar7,param_2,uVar5,puVar1,0,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(uVar5);
      _objc_release(puVar1);
      _objc_release(puVar4);
      puVar6 = puVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
        ___stack_chk_fail();
        puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        _objc_retain(puVar2);
        _objc_retain(uVar9);
        func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29bb8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126c45e8;
        _objc_alloc(PTR_PTR_1126c45e8);
        func_0x00010c038000();
        func_0x00010bfa6e60(puVar4,param_2,uVar9,puVar3,0,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(uVar9);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar6 = puVar4;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6b11dc; end: 10b6b1353; +[SCGalleryEntry fetchOrderedGalleryEntriesForOwner:error:dataObjectContext:] */

void FUN_10b6b11dc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c246960(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e2d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_68 = puVar1;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110f6e998,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  puVar4 = param_1;
  uVar7 = param_3;
  puVar9 = puVar1;
  func_0x00010bfa6e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    ppuStack_c0 = &PTR_PTR_110d592a0;
    pcStack_78 = FUN_10b6b1354;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_b8 = puVar3;
    puStack_b0 = puVar2;
    puStack_a8 = puVar1;
    puStack_a0 = param_1;
    puStack_98 = puVar4;
    uStack_90 = param_5;
    uStack_88 = param_3;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    _objc_retain(uVar7);
    func_0x00010c246960(puVar6,param_2,&PTR____CFConstantStringClassReference_110f6e2d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_d8 = puVar6;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110f6e998,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d0 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar6);
    puVar1 = PTR_PTR_1126c45e8;
    _objc_alloc();
    func_0x00010c038000();
    uVar8 = uVar7;
    puVar3 = puVar1;
    func_0x00010bfa6e60(puVar5,param_2,uVar7,puVar1,0,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(uVar7);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar4 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      _objc_retain(puVar3);
      _objc_retain(uVar8);
      func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29bb8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c45e8;
      _objc_alloc(PTR_PTR_1126c45e8);
      func_0x00010c038000();
      func_0x00010bfa6e60(puVar2,param_2,uVar8,puVar4,0,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(uVar8);
      _objc_release(puVar4);
      _objc_release(puVar1);
      puVar4 = puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6b1354; end: 10b6b14c7; +[SCGalleryEntry fetchOrderedGalleryEntriesForOwnerFailed:dataObjectContext:] */

void FUN_10b6b1354(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c246960(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e2d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_68 = puVar1;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110f6e998,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  uVar5 = param_3;
  puVar2 = puVar1;
  func_0x00010bfa6e60(param_1,param_2,param_3,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(puVar2);
    _objc_retain(uVar5);
    func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29bb8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    func_0x00010bfa6e60(puVar3,param_2,uVar5,puVar4,0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    param_1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b14c8; end: 10b6b159f; +[SCGalleryEntry fetchPrivateGalleryEntriesForOwnerFailed:dataObjectContext:] */

void FUN_10b6b14c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6e60(param_1,param_2,param_3,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b15a0; end: 10b6b1677; +[SCGalleryEntry fetchPrivateGalleryEntriesForOwner:dataObjectContext:] */

void FUN_10b6b15a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6e20(param_1,param_2,param_3,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b1678; end: 10b6b174f; +[SCGalleryEntry fetchSyncedPrivateGalleryEntriesForOwner:dataObjectContext:] */

void FUN_10b6b1678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fd18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6e20(param_1,param_2,param_3,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b1750; end: 10b6b1827; +[SCGalleryEntry fetchPublicGalleryEntriesForOwner:dataObjectContext:] */

void FUN_10b6b1750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec77d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6e20(param_1,param_2,param_3,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b1828; end: 10b6b1acf; +[SCGalleryEntry fetchLatestAutosavedGroupStoryWithExternalId:owner:isPrivate:dataObjectContext:] */

void FUN_10b6b1828(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fd38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fbd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fbf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110f6fc18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110ec3b98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  puStack_80 = puVar2;
  puStack_78 = puVar3;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar4,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar7,param_2,puVar4,puVar9,0,1,0);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar8);
  uVar10 = param_4;
  func_0x00010bfa6e20(param_1,param_2,param_4,puVar7,0,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  puVar4 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(uVar10);
    func_0x00010c1063c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110f6fd58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    func_0x00010bfa6f60(puVar1,param_2,puVar4,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6b1ad0; end: 10b6b1ba3; +[SCGalleryEntry fetchAllPublicVisibleAndNonTemporaryStoriesWithDataObjectContext:] */

void FUN_10b6b1ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fd58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6f60(param_1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b1ba4; end: 10b6b1d2b; +[SCGalleryEntry fetchAllFeaturedEntries:dataObjectContext:] */

void FUN_10b6b1ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fd78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = param_1;
  func_0x00010bfa6e20(param_1,param_2,param_3,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bfa6e40(param_1,param_2,param_3,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010bfa6e60(param_1,param_2,param_3,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010befa160(puVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6b1d2c; end: 10b6b1db7; +[SCGalleryEntry fetchAllGalleryEntriesWithDataObjectContext:] */

void FUN_10b6b1d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c45e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038000();
  func_0x00010bfa6f60(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b1db8; end: 10b6b1e9f; +[SCGalleryEntry fetchPublicGalleryEntryForSnap:dataObjectContext:] */

void FUN_10b6b1db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fd98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7060(param_1,param_2,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b1ea0; end: 10b6b1f87; +[SCGalleryEntry fetchActivePublicGalleryEntryForSnap:dataObjectContext:] */

void FUN_10b6b1ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fdb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7060(param_1,param_2,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b1f88; end: 10b6b2197; +[SCGalleryEntry fetchActivePublicGalleryEntriesForSnaps:dataObjectContext:] */

void FUN_10b6b1f88(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_10b6b0820;
    uStack_a8 = 0x10b6b0830;
    uStack_a0 = 0;
    do {
      _objc_retain(param_4);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      uVar5 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar4);
      uVar1 = param_4;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(param_4);
      _objc_retain(param_3);
      _objc_retain(uVar1);
      _objc_retain(puVar3);
      func_0x00010c0f8240(uVar1);
      _objc_release(puVar3);
      _objc_release(uVar1);
      _objc_release(param_3);
      _objc_release(uVar1);
    } while ((*(byte *)(puStack_90 + 3) & 1) != 0);
    puVar4 = puVar3;
    func_0x00010bf51e00(puVar3);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6b2198; end: 10b6b268b;  */

void FUN_10b6b2198(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar18);
  lVar4 = lVar18;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(lVar18);
      }
      puVar6 = PTR_PTR_1126e0498;
      uVar5 = *(undefined8 *)(lVar20 * 8);
      func_0x00010c0e0160(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(puVar6);
      lVar20 = lVar20 + 1;
    } while (lVar4 != lVar20);
    lVar4 = lVar18;
    func_0x00010bf52a60();
  }
  _objc_release(lVar18);
  puVar7 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar6 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar6);
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar10);
  func_0x00010c1edca0(puVar7);
  func_0x00010c1e9a20(puVar7);
  lVar16 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar15 = *(undefined8 *)(lVar16 + 0x28);
  lVar4 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar15);
  uVar5 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(lVar16 + 0x28) = uVar15;
  _objc_release(uVar5);
  lVar16 = *(long *)(param_1 + 0x38);
  if ((lVar4 != 0) && (*(long *)(*(long *)(lVar16 + 8) + 0x28) == 0)) {
    _objc_retain(lVar4);
    lVar16 = lVar4;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    while (lVar16 != 0) {
      lVar20 = 0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(lVar4);
        }
        lVar19 = *(long *)(lVar20 * 8);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        _objc_opt_class(PTR_PTR_1126af4c0);
        func_0x00010bfe9d60(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar19;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar11 != 0) {
          lVar17 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar19);
            }
            lVar12 = *(long *)(lVar17 * 8);
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            if (lVar12 != 0) {
              func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
            }
            _objc_release(lVar12);
            lVar17 = lVar17 + 1;
          } while (lVar11 != lVar17);
          lVar11 = lVar19;
          func_0x00010bf52a60();
        }
        _objc_release(lVar19);
        _objc_release(uVar5);
        lVar20 = lVar20 + 1;
      } while (lVar20 != lVar16);
      lVar16 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    lVar16 = *(long *)(param_1 + 0x38);
  }
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(lVar16 + 8) + 0x28);
  ppuVar13 = &PTR____CFConstantStringClassReference_110f6fdf8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(lVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(ppuVar13);
  _objc_retain(uVar5);
  func_0x00010c1063c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7060(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b6b268c; end: 10b6b2773; +[SCGalleryEntry fetchTemporaryGalleryEntryForSnap:dataObjectContext:] */

void FUN_10b6b268c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fe18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7060(param_1,param_2,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b2774; end: 10b6b2897; +[SCGalleryEntry fetchPublicGalleryAndNonManuallySavedStoryEntryForSnap:dataObjectContext:] */

void FUN_10b6b2774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fe38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7060(param_1,param_2,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b2898; end: 10b6b2963; +[SCGalleryEntry fetchGalleryEntriesWithFavoritedSnaps:fetchLimit:] */

void FUN_10b6b2898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fe58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6f60(param_1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b2964; end: 10b6b2ae7; +[SCGalleryEntry fetchRandomGalleryEntries:fetchLimit:] */

void FUN_10b6b2964(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fe78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  lVar3 = param_1;
  func_0x00010bf52d60(param_1,param_2,puVar2,param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (0 < param_4) {
    do {
      _arc4random_uniform(lVar3);
      puVar5 = PTR_PTR_1126c45e8;
      _objc_alloc(PTR_PTR_1126c45e8);
      func_0x00010c038000();
      lVar6 = param_1;
      func_0x00010bfa6f60(param_1,param_2,puVar5,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf529e0();
      if (lVar7 != 0) {
        lVar7 = lVar6;
        func_0x00010bfb1920(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4,param_2,lVar7);
        _objc_release(lVar7);
      }
      _objc_release(lVar6);
      _objc_release(puVar5);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6b2ae8; end: 10b6b2ba7; +[SCGalleryEntry fetchTotalGalleryEntries:] */

undefined8 FUN_10b6b2ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fe78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bf52d60(param_1,param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b6b2ba8; end: 10b6b2ce3; +[SCGalleryEntry fetchGalleryEntriesWithEntrySource:clientProcessingBitMaskType:dataObjectContext:owner:] */

void FUN_10b6b2ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0df780(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f6fe98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6e20(param_1,param_2,param_6,puVar1,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b2ce4; end: 10b6b2df3; +[SCGalleryEntry fetchGalleryEntriesWithEntrySource:dataObjectContext:owner:] */

void FUN_10b6b2ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0df780(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f6feb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6e20(param_1,param_2,param_5,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b2df4; end: 10b6b2f7f; +[SCGalleryEntry fetchRecentGalleryEntriesWithFetchLimit:dataObjectContext:] */

void FUN_10b6b2df4(undefined *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puStack_d8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar10 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar10,param_2,&PTR____CFConstantStringClassReference_110f6fed8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110f6e2d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_68 = puVar1;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110f6e998,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  uVar9 = 0;
  func_0x00010c038000();
  puVar2 = puVar1;
  uVar8 = param_4;
  func_0x00010bfa6f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(uVar9);
  puVar3 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,puVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f6ff18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar10,param_2,&PTR____CFConstantStringClassReference_110f6fef8,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (param_3 == (undefined8 *)0x0) {
      param_1 = (undefined *)0x0;
    }
    else {
      _objc_retainAutorelease(puVar10);
      param_1 = (undefined *)0x0;
      *param_3 = puVar10;
    }
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ff38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar4 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    puStack_d8 = (undefined *)0x0;
    puVar5 = PTR_PTR_1126bc808;
    func_0x00010bfa6fe0(PTR_PTR_1126bc808,param_2,puVar3,puVar4,&puStack_d8,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_d8;
    _objc_retain(puStack_d8);
    if (puVar10 == (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010bf529e0();
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar6 != (undefined *)0x1) {
        func_0x00010bf529e0();
        func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110f6ff58);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99260(puVar10,param_2,&PTR____CFConstantStringClassReference_110f6fef8,puVar7,
                            0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        goto joined_r0x00010b6b31b8;
      }
      param_1 = puVar5;
      func_0x00010c0dfd40(puVar5,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = (undefined *)0x0;
    }
    else {
joined_r0x00010b6b31b8:
      if (param_3 == (undefined8 *)0x0) {
        param_1 = (undefined *)0x0;
      }
      else {
        _objc_retainAutorelease(puVar10);
        param_1 = (undefined *)0x0;
        *param_3 = puVar10;
      }
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b2f80; end: 10b6b321b; +[SCGalleryEntryAsset fetchAssetForEntryId:rawAssetType:dataObjectContext:error:] */

void FUN_10b6b2f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f6ff18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar6,param_2,&PTR____CFConstantStringClassReference_110f6fef8,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (param_6 == (undefined8 *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar7 = (undefined *)0x0;
      *param_6 = puVar6;
    }
    goto LAB_10b6b31d8;
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110f6ff38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  puStack_68 = (undefined *)0x0;
  puVar3 = PTR_PTR_1126bc808;
  func_0x00010bfa6fe0(PTR_PTR_1126bc808,param_2,puVar1,puVar2,&puStack_68,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puStack_68;
  _objc_retain(puStack_68);
  if (puVar6 == (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x00010bf529e0();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar5 != (undefined *)0x1) {
      func_0x00010bf529e0();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110f6ff58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar6,param_2,&PTR____CFConstantStringClassReference_110f6fef8,puVar7,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      goto joined_r0x00010b6b31b8;
    }
    puVar7 = puVar3;
    func_0x00010c0dfd40(puVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)0x0;
  }
  else {
joined_r0x00010b6b31b8:
    if (param_6 == (undefined8 *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar7 = (undefined *)0x0;
      *param_6 = puVar6;
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
LAB_10b6b31d8:
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b6b321c; end: 10b6b335f; +[SCGalleryEntryAsset fetchUnsyncedGalleryEntryAssetForDataObjectContext:] */

void FUN_10b6b321c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ff78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  uVar5 = param_3;
  func_0x00010bfa7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(uVar5);
    func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ff98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c45e8;
    _objc_alloc();
    func_0x00010c038000();
    uVar6 = uVar5;
    func_0x00010bfa7020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    param_1 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(uVar6);
      func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ffb8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_100,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02a20(puVar3,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126c45e8;
      _objc_alloc();
      func_0x00010c038000();
      uVar5 = uVar6;
      func_0x00010bfa7020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      param_1 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
        ___stack_chk_fail();
        puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        _objc_retain(uVar5);
        func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e078);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126c45e8;
        _objc_alloc(PTR_PTR_1126c45e8);
        func_0x00010c038000();
        func_0x00010bfa70e0(puVar3,param_2,puVar2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar4 = puVar3;
        func_0x00010bf529e0();
        if (puVar4 == (undefined *)0x0) {
          param_1 = (undefined *)0x0;
        }
        else {
          param_1 = puVar3;
          func_0x00010bfb1920(puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b3360; end: 10b6b34c7; +[SCGalleryEntryAsset fetchGalleryEntryAssetWithLocalCreationId:dataObjectContext:] */

void FUN_10b6b3360(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ff98);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar2,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  uVar4 = param_4;
  func_0x00010bfa7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar6 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(uVar4);
    func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ffb8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar3,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c45e8;
    _objc_alloc();
    func_0x00010c038000();
    uVar5 = uVar4;
    func_0x00010bfa7020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      _objc_retain(uVar5);
      func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e078);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c45e8;
      _objc_alloc(PTR_PTR_1126c45e8);
      func_0x00010c038000();
      func_0x00010bfa70e0(puVar3,param_2,puVar2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar6 = puVar3;
      func_0x00010bf529e0();
      if (puVar6 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar3;
        func_0x00010bfb1920(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6b34c8; end: 10b6b362f; +[SCGalleryEntryAsset fetchGalleryEntryAssetWithAssetId:dataObjectContext:] */

void FUN_10b6b34c8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ffb8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar2,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  uVar4 = param_4;
  func_0x00010bfa7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(uVar4);
    func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e078);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    func_0x00010bfa70e0(puVar2,param_2,puVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar5 = puVar2;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar2;
      func_0x00010bfb1920(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b6b3630; end: 10b6b3723; +[SCGalleryProfile fetchGalleryProfileWithUserId:dataObjectContext:] */

void FUN_10b6b3630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e078);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa70e0(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b6b3724; end: 10b6b3817; +[SCGallerySnap fetchGallerySnapWithSnapId:dataObjectContext:] */

void FUN_10b6b3724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ffd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7540(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b6b3818; end: 10b6b3993; +[SCGallerySnap fetchOldestGallerySnapForOwner:dataObjectContext:] */

void FUN_10b6b3818(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c246960(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e2d8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar2,param_2,0,puVar4,0,1,0);
  _objc_release(puVar4);
  puVar3 = puVar2;
  func_0x00010bfa7460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = param_1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(puVar3);
    func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f6fff8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    func_0x00010bfa7540(puVar1,param_2,puVar4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6b3994; end: 10b6b3a57; +[SCGallerySnap fetchGallerySnapsWithSnapIds:dataObjectContext:] */

void FUN_10b6b3994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7540(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b3a58; end: 10b6b3ca3; +[SCGallerySnap fetchLiveGallerySnapsWithSnapIdsCaseInsensitive:dataObjectContext:] */

void FUN_10b6b3a58(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010c225ec0(puVar2,param_2,lVar1 * 3);
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
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010befa120(puVar2,param_2,uVar7);
        uVar6 = uVar7;
        func_0x00010c0b5ac0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar6);
        _objc_release(uVar6);
        func_0x00010c28ed80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar7);
        _objc_release(uVar7);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar3 = puVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110f70018);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c45e8;
  _objc_alloc();
  uVar6 = 0;
  uVar7 = 0;
  func_0x00010c038000();
  puVar5 = puVar3;
  func_0x00010bfa7540(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(uVar7);
    _objc_retain(uVar6);
    _objc_retain(puVar5);
    func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f6fff8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    _objc_release(uVar6);
    func_0x00010bfa7460(param_3,param_2,puVar5,puVar4,0,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b3ca4; end: 10b6b3d9f; +[SCGallerySnap fetchGallerySnapsForOwner:snapIds:sortDescriptors:dataObjectContext:] */

void FUN_10b6b3ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  _objc_release(param_5);
  func_0x00010bfa7460(param_1,param_2,param_3,puVar2,0,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b3da0; end: 10b6b4137; +[SCGallerySnap fetchGallerySnapsByEntryIdForEntries:dataObjectContext:] */

void FUN_10b6b3da0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar8 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar7 != 0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_3);
    lVar7 = param_3;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar10 = *plStack_140;
      do {
        lVar11 = 0;
        do {
          if (*plStack_140 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          lVar9 = *(long *)(lStack_148 + lVar11 * 8);
          lVar3 = lVar9;
          func_0x00010bf97200();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar3);
            if (lVar9 != 0) {
              func_0x00010befa120(puVar2);
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar7 != lVar11);
        lVar7 = param_3;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(param_3);
    puVar4 = puVar2;
    func_0x00010bf529e0();
    puVar8 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar4 != (undefined *)0x0) {
      puStack_178 = &uStack_180;
      uStack_180 = 0;
      uStack_170 = 0x3032000000;
      pcStack_168 = FUN_10b6b4138;
      uStack_160 = 0x10b6b4148;
      uStack_158 = 0;
      _objc_retain(param_4);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      uVar5 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar4);
      uVar1 = param_4;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(param_4);
      puStack_198 = &uStack_1a0;
      uStack_1a0 = 0;
      uStack_190 = 0x2020000000;
      uStack_188 = 0;
      puStack_1c8 = &uStack_1d0;
      uStack_1d0 = 0;
      uStack_1c0 = 0x3032000000;
      pcStack_1b8 = FUN_10b6b4138;
      uStack_1b0 = 0x10b6b4148;
      uStack_1a8 = 0;
      do {
        *(undefined1 *)(puStack_198 + 3) = 0;
        uVar6 = puStack_1c8[5];
        puStack_1c8[5] = 0;
        _objc_release(uVar6);
        _objc_retain(puVar2);
        _objc_retain(uVar1);
        func_0x00010c0f8240(uVar1);
        _objc_release(uVar1);
        _objc_release(puVar2);
      } while ((*(byte *)(puStack_198 + 3) & 1) != 0);
      if ((undefined *)puStack_178[5] != (undefined *)0x0) {
        puVar8 = (undefined *)puStack_178[5];
      }
      _objc_retain(puVar8);
      __Block_object_dispose(&uStack_1d0,8);
      _objc_release(uStack_1a8);
      __Block_object_dispose(&uStack_1a0,8);
      _objc_release(uVar1);
      __Block_object_dispose(&uStack_180,8);
      _objc_release(uStack_158);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    lVar7 = 8;
    __Block_object_dispose(&uStack_180);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b6b4138; end: 10b6b414f;  */

void FUN_10b6b4138(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6b4150; end: 10b6b468b;  */

void FUN_10b6b4150(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
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
  lVar8 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar13 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar13);
  puVar9 = &uStack_1c0;
  lVar10 = lVar13;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar12 = *plStack_1b0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1b0 != lVar12) {
          _objc_enumerationMutation(lVar13);
        }
        puVar14 = PTR_PTR_1126e0498;
        uVar15 = *(undefined8 *)(lStack_1b8 + lVar11 * 8);
        uVar5 = uVar15;
        func_0x00010c0e0160(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (puVar14 != (undefined *)0x0) {
          func_0x00010befa120(puVar3);
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf97200(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(uVar15);
          _objc_release(puVar4);
        }
        _objc_release(puVar14);
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      puVar9 = &uStack_1c0;
      lVar10 = lVar13;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(lVar13);
  puVar14 = puVar3;
  func_0x00010bf529e0();
  if (puVar14 == (undefined *)0x0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    puVar14 = *(undefined **)(lVar10 + 0x28);
    *(undefined **)(lVar10 + 0x28) = PTR____NSDictionary0__struct_11034ab58;
  }
  else {
    puVar14 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126e0540;
    func_0x00010bf96ec0(PTR_PTR_1126e0540);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010100();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar14);
    _objc_release(puVar4);
    func_0x00010c1edca0(puVar14);
    func_0x00010c1e9a20(puVar14);
    lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar15 = *(undefined8 *)(lVar13 + 0x28);
    lVar10 = param_2;
    func_0x00010bf9af20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar15);
    uVar5 = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x28) = uVar15;
    _objc_release(uVar5);
    if (lVar10 != 0) {
      _objc_retain(lVar10);
      lVar13 = lVar10;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (lVar13 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(lVar10);
          }
          lVar16 = *(long *)(lVar11 * 8);
          func_0x00010bf97060();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar16;
          func_0x00010bf97200();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          if (lVar6 != 0) {
            lVar16 = *(long *)(param_1 + 0x28);
            _objc_opt_class(PTR_PTR_1126af4d0);
            func_0x00010bfe9d60();
            _objc_retainAutoreleasedReturnValue();
            if (lVar16 != 0) {
              puVar4 = puVar2;
              func_0x00010c0e00e0(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(puVar4);
            }
            _objc_release(lVar16);
          }
          _objc_release(lVar6);
          lVar11 = lVar11 + 1;
        } while (lVar13 != lVar11);
        lVar13 = lVar10;
        func_0x00010bf52a60();
      }
      _objc_release(lVar10);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(puVar2);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010bf97ce0(puVar2);
      puVar7 = puVar4;
      func_0x00010bf51e00();
      lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar5 = *(undefined8 *)(lVar13 + 0x28);
      *(undefined **)(lVar13 + 0x28) = puVar7;
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(puVar4);
    }
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    if (puVar9 != (undefined8 *)0x0) {
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
      func_0x00010bfd1e00();
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar1;
    }
    _objc_release(lVar10);
  }
  _objc_release(puVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  func_0x00010bf51e00(puVar9);
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x20));
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10b6b468c; end: 10b6b46e7;  */

void FUN_10b6b468c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  func_0x00010bf51e00(param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6b46e8; end: 10b6b47e3; +[SCGallerySnap fetchGallerySnapsForOwnerDeleted:snapIds:sortDescriptors:dataObjectContext:] */

void FUN_10b6b46e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  _objc_release(param_5);
  func_0x00010bfa74a0(param_1,param_2,param_3,puVar2,0,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b47e4; end: 10b6b4973; +[SCGallerySnap fetchUnsyncedGallerySnapsForOwner:dataObjectContext:] */

void FUN_10b6b47e4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ff78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_68 = puVar1;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fcf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  uVar7 = 0;
  func_0x00010c038000();
  uVar5 = 0;
  uVar6 = param_4;
  func_0x00010bfa7460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(uVar7);
    _objc_retain(uVar6);
    _objc_retain(uVar5);
    func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f70078);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    _objc_release(uVar5);
    func_0x00010bfa7460(puVar4,param_2,uVar6,puVar2,0,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar1);
    param_1 = puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b4974; end: 10b6b4a7b; +[SCGallerySnap fetchGallerySnapsCreatedBetweenDate:andDate:sortDescriptors:forOwner:dataObjectContext:] */

void FUN_10b6b4974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f70078);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  _objc_release(param_5);
  func_0x00010bfa7460(param_1,param_2,param_6,puVar2,0,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b4a7c; end: 10b6b4b8b; +[SCGallerySnap fetchGallerySnapsWithSource:forOwner:dataObjectContext:] */

void FUN_10b6b4a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0df760(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f70098);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7460(param_1,param_2,param_4,puVar1,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b4b8c; end: 10b6b4c4f; +[SCGallerySnap fetchSyncedGallerySnapsWithSnapIds:dataObjectContext:] */

void FUN_10b6b4b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f700b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7540(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b4c50; end: 10b6b4d33; +[SCGallerySnap fetchGallerySnapsWithMediaIds:dataObjectContext:] */

void FUN_10b6b4c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x7;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c45e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uVar3 = param_3;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f700d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c038000(puVar1,param_2,puVar2,0,0,0,0,in_x7,uVar3);
  _objc_release(puVar2);
  func_0x00010bfa7540(param_1,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b4d34; end: 10b6b4f57; +[SCGallerySnap fetchGallerySnapsForOwner:dataObjectContext:predicate:batchSize:discardSnapDocData:progressQueue:progress:completionQueue:completion:] */

void FUN_10b6b4d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar2 = PTR_PTR_1126e0498;
  _objc_opt_class(PTR_PTR_1126e0498);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(uVar1);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6b4f58; end: 10b6b571f;  */

void FUN_10b6b4f58(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  double dVar20;
  long lStack_210;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar4 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126e0498;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar8);
  puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar4);
  func_0x00010c1edca0(puVar3);
  func_0x00010c19b340(puVar3);
  func_0x00010c1e9a20(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_120 = 0;
  lVar9 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_120;
  _objc_retain(lStack_120);
  if ((lVar9 != 0) && (lVar1 == 0)) {
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    _objc_retain(lVar9);
    lStack_210 = lVar9;
    func_0x00010bf52a60();
    puVar19 = (undefined *)0x0;
    uVar5 = 0;
    if (lStack_210 != 0) {
      lVar13 = *plStack_150;
      uVar17 = 1;
      do {
        lVar18 = 0;
        uVar15 = uVar5;
        puVar12 = puVar19;
        do {
          if (*plStack_150 != lVar13) {
            _objc_enumerationMutation(lVar9);
          }
          lVar14 = *(long *)(lStack_158 + lVar18 * 8);
          puVar19 = *(undefined **)(param_1 + 0x30);
          _objc_opt_class(PTR_PTR_1126af4d0);
          func_0x00010bfe9d60(puVar19);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          if (*(char *)(param_1 + 0x70) == '\x01') {
            lVar16 = lVar14;
            func_0x00010c23ff80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar16 != 0) {
              puVar12 = PTR_PTR_1126bf910;
              func_0x00010c2aebc0();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar12;
              func_0x00010c203f40();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar19);
              _objc_release(puVar10);
              _objc_release(puVar12);
              puVar19 = puVar11;
            }
          }
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          _objc_opt_class(PTR_PTR_1126af4c0);
          func_0x00010bf97060(lVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe9d60(uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
          _objc_release(lVar14);
          func_0x00010befa120(puVar4);
          func_0x00010befa120(puVar8);
          if ((uVar17 == 1) &&
             (puVar12 = puVar4, func_0x00010bf529e0(), puVar12 == *(undefined **)(param_1 + 0x68)))
          {
            lVar14 = *(long *)(*(long *)(param_1 + 0x60) + 8);
LAB_10b6b53a8:
            dVar20 = (double)uVar17;
            _exp2();
            *(long *)(lVar14 + 0x18) = (long)(dVar20 * (double)puVar12);
            lVar14 = *(long *)(*(long *)(param_1 + 0x60) + 8);
            if (*(ulong *)(lVar14 + 0x18) < 0x186a1) {
              uVar17 = uVar17 + 1;
            }
            else {
              *(undefined8 *)(lVar14 + 0x18) = 100000;
            }
            lVar14 = *(long *)(param_1 + 0x50);
            if (lVar14 != 0) {
              lVar16 = *(long *)(param_1 + 0x38);
              if (lVar16 == 0) {
                (**(code **)(lVar14 + 0x10))(lVar14,puVar4,puVar8);
              }
              else {
                puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_190 = 0xc2000000;
                pcStack_188 = FUN_10b6b5720;
                puStack_180 = &UNK_11084a9e8;
                _objc_retain(lVar14);
                lStack_168 = lVar14;
                _objc_retain(puVar4);
                puStack_178 = puVar4;
                _objc_retain(puVar8);
                puStack_170 = puVar8;
                func_0x000107c27d8c(lVar16,&puStack_198);
                _objc_release(puStack_170);
                _objc_release(puStack_178);
                _objc_release(lStack_168);
              }
            }
            puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            puVar4 = puVar12;
            puVar8 = puVar10;
          }
          else {
            puVar12 = puVar4;
            func_0x00010bf529e0();
            lVar14 = *(long *)(*(long *)(param_1 + 0x60) + 8);
            if (puVar12 == *(undefined **)(lVar14 + 0x18)) {
              puVar12 = *(undefined **)(param_1 + 0x68);
              goto LAB_10b6b53a8;
            }
          }
          lVar18 = lVar18 + 1;
          uVar15 = uVar5;
          puVar12 = puVar19;
        } while (lStack_210 != lVar18);
        lStack_210 = lVar9;
        func_0x00010bf52a60();
      } while (lStack_210 != 0);
    }
    _objc_release(lVar9);
    puVar12 = puVar4;
    func_0x00010bf529e0();
    if ((puVar12 != (undefined *)0x0) && (lVar13 = *(long *)(param_1 + 0x50), lVar13 != 0)) {
      lVar18 = *(long *)(param_1 + 0x38);
      if (lVar18 == 0) {
        (**(code **)(lVar13 + 0x10))(lVar13,puVar4,puVar8);
      }
      else {
        puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1c8 = 0xc2000000;
        uStack_1c0 = 0x10b6b5734;
        puStack_1b8 = &UNK_11084a9e8;
        _objc_retain(lVar13);
        lStack_1a0 = lVar13;
        _objc_retain(puVar4);
        puStack_1b0 = puVar4;
        _objc_retain(puVar8);
        puStack_1a8 = puVar8;
        func_0x000107c27d8c(lVar18,&puStack_1d0);
        _objc_release(puStack_1a8);
        _objc_release(puStack_1b0);
        _objc_release(lStack_1a0);
      }
    }
    _objc_release(uVar5);
    _objc_release(puVar19);
  }
  if (lVar1 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010bfd1e00();
    if (iVar2 != 0) {
      func_0x00010bfa7440(PTR_PTR_1126af4d0);
      goto LAB_10b6b56a0;
    }
  }
  lVar13 = *(long *)(param_1 + 0x58);
  if (lVar13 != 0) {
    lVar18 = *(long *)(param_1 + 0x48);
    if (lVar18 == 0) {
      (**(code **)(lVar13 + 0x10))(lVar13,lVar1);
    }
    else {
      puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1f8 = 0xc2000000;
      uStack_1f0 = 0x10b6b5748;
      puStack_1e8 = &UNK_11084aaa8;
      _objc_retain(lVar13);
      lStack_1d8 = lVar13;
      _objc_retain(lVar1);
      lStack_1e0 = lVar1;
      func_0x000107c27d8c(lVar18,&puStack_200);
      _objc_release(lStack_1e0);
      _objc_release(lStack_1d8);
    }
  }
LAB_10b6b56a0:
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010b6b5730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))
              (*(long *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x20),
               *(undefined8 *)(param_2 + 0x28));
    return;
  }
  return;
}



/* Entry: 10b6b5720; end: 10b6b5757;  */

void FUN_10b6b5720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b6b5730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b6b5758; end: 10b6b57d3;  */

void FUN_10b6b5758(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 10b6b57d4; end: 10b6b5f2f; +[SCGallerySnap fetchSnapsWithLocationBySnapIds:sortDescriptors:dataObjectContext:] */

void FUN_10b6b57d4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0df760(puVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puVar1;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar2;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar3;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar4;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar5;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar6;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar1;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_108 = puVar2;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar3;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f8 = puVar4;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f0 = puVar5;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e8 = puVar6;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e0 = puVar7;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d8 = puVar9;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d0 = puVar10;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,9);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c8 = puVar11;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,10);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c0 = puVar12;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xb);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b8 = puVar13;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xc);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_110,0xd);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b0 = puVar1;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1a8 = puVar2;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1a0 = puVar3;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_198 = puVar4;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_190 = puVar5;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_188 = puVar6;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xb);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_180 = puVar7;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xe);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_178 = puVar9;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_170 = puVar10;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xc);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_168 = puVar11;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xd);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_160 = puVar12;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_158 = puVar13;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x11);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_150 = puVar14;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x12);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_148 = puVar16;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x15);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_140 = puVar17;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x17);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_138 = puVar18;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x16);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_130 = puVar19;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x18);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_128 = puVar20;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x19);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_120 = puVar21;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1a);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_118 = puVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1b0,0x14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f70138);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  _objc_release(param_4);
  uVar24 = param_5;
  func_0x00010bfa7540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar23);
  _objc_release(puVar15);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(uVar24);
    func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f70158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    param_1 = PTR_PTR_1126af4d0;
    func_0x00010bfa7540(PTR_PTR_1126af4d0,param_2,puVar2,uVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar24);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b5f30; end: 10b6b5ff3; +[SCGallerySnap fetchSyncedHighlightedSnapsBySnapIds:dataObjectContext:] */

void FUN_10b6b5f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f70158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  puVar3 = PTR_PTR_1126af4d0;
  func_0x00010bfa7540(PTR_PTR_1126af4d0,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6b5ff4; end: 10b6b60b7; +[SCGallerySnap fetchHighlightedSnapsBySnapIds:dataObjectContext:] */

void FUN_10b6b5ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f70178);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  puVar3 = PTR_PTR_1126af4d0;
  func_0x00010bfa7540(PTR_PTR_1126af4d0,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6b60b8; end: 10b6b61a3; +[SCGallerySnap fetchHighlightedSnapBySnapId:dataObjectContext:] */

ulong FUN_10b6b60b8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfa7740(param_1,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return uVar2;
  }
  ___stack_chk_fail();
  func_0x00010bfa7720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (ulong)(param_1 != 0);
}



/* Entry: 10b6b61a4; end: 10b6b61d7; +[SCGallerySnap fetchIsSnapHighlightedBySnapId:dataObjectContext:] */

bool FUN_10b6b61a4(long param_1)

{
  func_0x00010bfa7720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10b6b61d8; end: 10b6b6483; +[SCGallerySnap backfillPredicateBeforeSnapId:captureTime:] */

void FUN_10b6b61d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar10 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uStack_d0 = param_3;
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f70198);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uStack_d0 = param_4;
  puStack_b8 = puVar1;
  puStack_90 = puVar1;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f701b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uStack_d0 = param_4;
  puStack_c0 = puVar2;
  puStack_a0 = puVar2;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f701d8);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar3;
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uStack_d0 = param_3;
  puStack_b0 = puVar3;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f701f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec900(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_88 = puVar5;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f70218);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_80 = puVar6;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f70238);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_78 = puVar7;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f70258);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar10,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_c8);
  _objc_release(puStack_c0);
  _objc_release(puStack_b8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_d8 = FUN_10b6b6484;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_100 = puVar9;
    puStack_f8 = puVar10;
    puStack_f0 = puVar8;
    puStack_e8 = puVar7;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110f6f478,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_118 = puVar1;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110dba818,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = &puStack_118;
    uVar12 = 2;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_110 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,ppuVar11,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      puVar5 = PTR_PTR_1126c45e8;
      _objc_retain(param_6);
      _objc_retain(uVar12);
      _objc_retain(ppuVar11);
      _objc_alloc(puVar5);
      puVar10 = puVar1;
      func_0x00010bf13ba0(puVar1,param_2,ppuVar11,uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(ppuVar11);
      puVar2 = puVar1;
      func_0x00010bf13be0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038000(puVar5,param_2,puVar10,puVar2,0,param_5,0);
      _objc_release(puVar2);
      _objc_release(puVar10);
      func_0x00010bfa7540(puVar1,param_2,puVar5,param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_6);
      puVar10 = PTR____NSArray0__struct_11034ab48;
      if (puVar1 != (undefined *)0x0) {
        puVar10 = puVar1;
      }
      _objc_retain(puVar10);
      _objc_release(puVar1);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b6b6484; end: 10b6b6557; +[SCGallerySnap backfillSortDescriptors] */

void FUN_10b6b6484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110f6f478,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_48 = puVar1;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110dba818,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_48;
  uVar6 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,ppuVar5,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126c45e8;
    _objc_retain(param_6);
    _objc_retain(uVar6);
    _objc_retain(ppuVar5);
    _objc_alloc(puVar2);
    puVar3 = puVar1;
    func_0x00010bf13ba0(puVar1,param_2,ppuVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(ppuVar5);
    puVar4 = puVar1;
    func_0x00010bf13be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038000(puVar2,param_2,puVar3,puVar4,0,param_5,0);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bfa7540(puVar1,param_2,puVar2,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (puVar1 != (undefined *)0x0) {
      puVar3 = puVar1;
    }
    _objc_retain(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6b6558; end: 10b6b6687; +[SCGallerySnap fetchPublicGallerySnapsBeforeSnapId:captureTime:fetchLimit:dataObjectContext:] */

void FUN_10b6b6558(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c45e8;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = param_1;
  func_0x00010bf13ba0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_1;
  func_0x00010bf13be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar1,param_2,puVar2,puVar3,0,param_5,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfa7540(param_1,param_2,puVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    puVar2 = param_1;
  }
  _objc_retain(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6b6688; end: 10b6b668b; +[SCGallerySnap fetchGallerySnapsWithFetchOptions:dataObjectContext:] */

void FUN_10b6b6688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchGallerySnapsWithOptions_dat_1125c76f8);
  return;
}



/* Entry: 10b6b668c; end: 10b6b69d3; +[SCGallerySnap quotaAtRiskScopePredicatesWithWaterline:effectiveTimeFrom:effectiveTimeBefore:isPrivate:] */

undefined *
FUN_10b6b668c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = 2;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec900();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010befa120(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 2;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec900();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010befa120(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (param_5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 2;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec900();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010befa120(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(uVar6);
  _objc_retain(lVar7);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x2020000000;
  uStack_118 = 0;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  uStack_138 = 0;
  do {
    _objc_retain(puVar5);
    _objc_retain(uVar6);
    _objc_retain(lVar7);
    func_0x00010c0f8240(uVar6);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
  } while ((*(byte *)(puStack_148 + 3) & 1) != 0);
  puVar9 = (undefined *)puStack_128[3];
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  return puVar9;
}



/* Entry: 10b6b69d4; end: 10b6b6b43; +[SCGallerySnap countOfGallerySnapsWithPredicateBuilder:coreDataObjectContext:logContext:] */

undefined8
FUN_10b6b69d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  do {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f8240(param_4);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  } while ((*(byte *)(puStack_98 + 3) & 1) != 0);
  uVar1 = puStack_78[3];
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b6b6b44; end: 10b6b6c5b;  */

void FUN_10b6b6b44(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100(puVar2);
  _objc_release(puVar3);
  lVar4 = *(long *)(param_1 + 0x30);
  (**(code **)(lVar4 + 0x10))(lVar4,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(lVar4);
  lVar5 = param_2;
  func_0x00010bf52ae0();
  _objc_release(param_2);
  _objc_retain(0);
  lVar4 = 0;
  if (lVar5 != 0x7fffffffffffffff) {
    lVar4 = lVar5;
  }
  *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = lVar4;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar1;
  _objc_release(0);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b6b6c5c; end: 10b6b6dcf; +[SCGallerySnap countOfQuotaAtRiskSnapsForOwner:effectiveTimeAtOrAfter:effectiveTimeFrom:effectiveTimeBefore:isPrivate:dataObjectContext:] */

undefined8
FUN_10b6b6c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126e0498;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_8;
  _objc_opt_isKindOfClass(param_8,puVar2);
  uVar1 = param_8;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = param_1;
  func_0x00010c11eac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  func_0x00010bf52e40(param_1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_8);
  return param_1;
}



/* Entry: 10b6b6dd0; end: 10b6b6ed3;  */

void FUN_10b6b6dd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126e0498;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0e0160(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6b6ed4; end: 10b6b6fb7; +[SCGallerySnap countOfBackfillWalkedSnapsWithCaptureTimeAtOrAfter:dataObjectContext:] */

undefined8 FUN_10b6b6ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
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
  _objc_retain(param_3);
  func_0x00010bf52e40(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10b6b6fb8; end: 10b6b71ef;  */

void FUN_10b6b6fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  
  puVar11 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f70218);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 9;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf02a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_retain(puVar12);
    _objc_retain(uVar13);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = &uStack_150;
    uStack_150 = 0;
    uStack_140 = 0x2020000000;
    uStack_138 = 0;
    do {
      func_0x00010c12adc0(puVar11);
      _objc_retain(puVar12);
      _objc_retain(param_5);
      _objc_retain(uVar13);
      _objc_retain(param_6);
      _objc_retain(param_8);
      _objc_retain(puVar11);
      func_0x00010c0f8240(param_8);
      _objc_release(puVar11);
      _objc_release(param_8);
      _objc_release(param_6);
      _objc_release(uVar13);
      _objc_release(param_5);
      _objc_release(puVar12);
    } while ((*(byte *)(puStack_148 + 3) & 1) != 0);
    __Block_object_dispose(&uStack_150,8);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(uVar13);
    _objc_release(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10b6b71f0; end: 10b6b73c3; +[SCGallerySnap fetchQuotaAtRiskSnapsForOwner:scopePredicates:extraPredicate:sortKey:limit:coreDataObjectContext:] */

void FUN_10b6b71f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  do {
    func_0x00010c12adc0(puVar1);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(puVar1);
    func_0x00010c0f8240(param_8);
    _objc_release(puVar1);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
  } while ((*(byte *)(puStack_88 + 3) & 1) != 0);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6b73c4; end: 10b6b7757;  */

void FUN_10b6b73c4(long param_1,undefined *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined8 in_x5;
  undefined *in_x7;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(ulong *)(param_1 + 0x28);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  puVar8 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar9 = PTR_PTR_1126e0540;
  func_0x00010bf96ec0(PTR_PTR_1126e0540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar8);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar8);
  _objc_release(puVar15);
  _objc_release(puVar10);
  _objc_release(puVar9);
  func_0x00010c19b420(puVar8);
  func_0x00010c1edca0(puVar8);
  func_0x00010c1e9a20(puVar8);
  puVar10 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 0;
  _objc_retain(0);
  _objc_retain(puVar10);
  uVar4 = 0x10;
  puVar9 = puVar10;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar10);
      }
      lVar16 = *(long *)(param_1 + 0x40);
      _objc_opt_class(PTR_PTR_1126af4d0);
      func_0x00010bfe9d60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 != 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x48));
      }
      _objc_release(lVar16);
      puVar15 = puVar15 + 1;
    } while (puVar9 != puVar15);
    uVar4 = 0x10;
    puVar9 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x40);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70418;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = uVar3;
  _objc_release(puVar10);
  _objc_release(0);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar17);
  _objc_retain(ppuVar12);
  _objc_retain(uVar4);
  _objc_retain(in_x5);
  _objc_retain(uVar14);
  puVar9 = PTR_PTR_1126e0498;
  _objc_opt_class(PTR_PTR_1126e0498);
  uVar11 = uVar14;
  _objc_opt_isKindOfClass(uVar14,puVar9);
  uVar1 = uVar14;
  if ((uVar11 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar9 = PTR____NSArray0__struct_11034ab48;
  if (in_x7 != (undefined *)0x0) {
    puVar5 = param_2;
    func_0x00010c11eac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010bfa99c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa99c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar6;
    func_0x00010c0d3c80();
    func_0x00010befa160();
    func_0x00010c246ba0(puVar9);
    puVar7 = puVar9;
    func_0x00010bf529e0();
    if (in_x7 < puVar7) {
      func_0x00010bf529e0(puVar9);
      func_0x00010c12d520(puVar9);
    }
    _objc_release(param_2);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(uVar1);
  _objc_release(uVar14);
  _objc_release(in_x5);
  _objc_release(uVar4);
  _objc_release(ppuVar12);
  _objc_release(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b6b7758; end: 10b6b798f; +[SCGallerySnap fetchQuotaAtRiskSnapsForOwner:effectiveTimeAtOrAfter:effectiveTimeFrom:effectiveTimeBefore:isPrivate:limit:dataObjectContext:] */

void FUN_10b6b7758(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
                  ulong param_9)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126e0498;
  _objc_opt_class(PTR_PTR_1126e0498);
  uVar3 = param_9;
  _objc_opt_isKindOfClass(param_9,puVar2);
  uVar1 = param_9;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_8 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c11eac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bfa99c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa99c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010c0d3c80();
    func_0x00010befa160();
    func_0x00010c246ba0(puVar2);
    puVar6 = puVar2;
    func_0x00010bf529e0();
    if (param_8 < puVar6) {
      func_0x00010bf529e0(puVar2);
      func_0x00010c12d520(puVar2);
    }
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6b7990; end: 10b6b7adf;  */

long FUN_10b6b7990(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010bf59960(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = param_3;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf433a0();
  if (lVar1 == 0) {
    lVar4 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf433a0(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 10b6b7ae0; end: 10b6b7c23; +[SCGallerySnapDoc fetchUnsyncedGallerySnapDocForDataObjectContext:] */

void FUN_10b6b7ae0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ff78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  puVar2 = puVar1;
  uVar4 = param_3;
  func_0x00010bfa7200(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(uVar4);
    puVar1 = PTR_PTR_1126af4c0;
    func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,puVar2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      param_1 = (undefined *)0x0;
    }
    else {
      param_1 = PTR_PTR_1126bc800;
      func_0x00010bfa7180(PTR_PTR_1126bc800,param_2,puVar1,0,uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b7c24; end: 10b6b7cb7; +[SCGallerySnapDoc fetchGallerySnapDocForEntryId:dataObjectContext:] */

void FUN_10b6b7c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bc800;
    func_0x00010bfa7180(PTR_PTR_1126bc800,param_2,puVar1,0,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6b7cb8; end: 10b6b7e1f; +[SCGallerySnapDoc fetchGallerySnapDocForLocalCreationId:dataObjectContext:] */

void FUN_10b6b7cb8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ff98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar2,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  uVar4 = param_4;
  func_0x00010bfa7200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(uVar4);
    func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ffd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    func_0x00010bfa7240(puVar2,param_2,puVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar5 = puVar2;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar2;
      func_0x00010bfb1920(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b6b7e20; end: 10b6b7f13; +[SCGallerySnapMiniThumbnail fetchMiniThumbnailWithSnapId:dataObjectContext:] */

void FUN_10b6b7e20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ffd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7240(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b6b7f14; end: 10b6b7fd7; +[SCGallerySnapMiniThumbnail fetchMiniThumbnailWithSnapIds:dataObjectContext:] */

void FUN_10b6b7f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa7240(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b7fd8; end: 10b6b80cb; +[SCGallerySnapTransientState fetchGallerySnapTransientStateWithSnapId:dataObjectContext:] */

void FUN_10b6b7fd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6ffd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa72a0(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b6b80cc; end: 10b6b818f; +[SCGallerySnapTransientState fetchGallerySnapTransientStatesWithSnapIds:dataObjectContext:] */

void FUN_10b6b80cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa72a0(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b8190; end: 10b6b8253; +[SCGallerySnapTransientState fetchGallerySnapTransientStatesWithBackgroundUploadKeys:dataObjectContext:] */

void FUN_10b6b8190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f70458);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa72a0(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b8254; end: 10b6b8417; +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsWithOptions:dataObjectContext:] */

void FUN_10b6b8254(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  pcStack_88 = FUN_10b6b8418;
  uStack_80 = 0x10b6b8428;
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



/* Entry: 10b6b8418; end: 10b6b842f;  */

void FUN_10b6b8418(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6b8430; end: 10b6b8773;  */

long FUN_10b6b8430(long param_1,long param_2)

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
  puVar5 = PTR_PTR_1126e0548;
  func_0x00010bf96ec0(PTR_PTR_1126e0548);
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
          _objc_opt_class(PTR_PTR_1126bc7e0);
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
  ppuVar10 = &PTR____CFConstantStringClassReference_110f70478;
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



/* Entry: 10b6b8774; end: 10b6b8907; +[SCCloudSyncOperationSnapshot countOfCloudSyncOperationSnapshotsWithOptions:dataObjectContext:] */

undefined8 FUN_10b6b8774(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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



/* Entry: 10b6b8908; end: 10b6b8a63;  */

void FUN_10b6b8908(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0548;
  func_0x00010bf96ec0(PTR_PTR_1126e0548);
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



/* Entry: 10b6b8a64; end: 10b6b8ca3; +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForOwner:options:error:dataObjectContext:] */

void FUN_10b6b8a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_90 = FUN_10b6b8418;
  uStack_88 = 0x10b6b8428;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b6b8418;
  uStack_d8 = 0x10b6b8428;
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



/* Entry: 10b6b8ca4; end: 10b6b908b;  */

long FUN_10b6b8ca4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  puVar7 = PTR_PTR_1126e0548;
  func_0x00010bf96ec0(PTR_PTR_1126e0548);
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
        _objc_opt_class(PTR_PTR_1126bc7e0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f704b8;
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



/* Entry: 10b6b908c; end: 10b6b9247; +[SCCloudSyncOperationSnapshot countOfCloudSyncOperationSnapshotsForOwner:options:dataObjectContext:] */

undefined8
FUN_10b6b908c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 10b6b9248; end: 10b6b94d3;  */

void FUN_10b6b9248(long param_1,undefined8 param_2)

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
  puVar6 = PTR_PTR_1126e0548;
  func_0x00010bf96ec0(PTR_PTR_1126e0548);
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
  ppuVar11 = &PTR____CFConstantStringClassReference_110f704d8;
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
  pcStack_108 = FUN_10b6b9698;
  uStack_100 = 0x10b6b96a8;
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



/* Entry: 10b6b94d4; end: 10b6b9697; +[SCGalleryEntry fetchGalleryEntriesWithOptions:dataObjectContext:] */

void FUN_10b6b94d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  pcStack_88 = FUN_10b6b9698;
  uStack_80 = 0x10b6b96a8;
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



/* Entry: 10b6b9698; end: 10b6b96af;  */

void FUN_10b6b9698(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6b96b0; end: 10b6b99f3;  */

long FUN_10b6b96b0(long param_1,long param_2)

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
  puVar5 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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
          _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar10 = &PTR____CFConstantStringClassReference_110f704f8;
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



/* Entry: 10b6b99f4; end: 10b6b9b87; +[SCGalleryEntry countOfGalleryEntriesWithOptions:dataObjectContext:] */

undefined8 FUN_10b6b99f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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



/* Entry: 10b6b9b88; end: 10b6b9ce3;  */

void FUN_10b6b9b88(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0538;
  func_0x00010bf96ec0(PTR_PTR_1126e0538);
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



/* Entry: 10b6b9ce4; end: 10b6b9f2b; +[SCGalleryEntry fetchGalleryEntryForEntryAsset:options:dataObjectContext:] */

void FUN_10b6b9ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 10b6b9f2c; end: 10b6ba313;  */

void FUN_10b6b9f2c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70558;
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



/* Entry: 10b6ba314; end: 10b6ba55b; +[SCGalleryEntry fetchGalleryEntryForHighlightedSnap:options:dataObjectContext:] */

void FUN_10b6ba314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 10b6ba55c; end: 10b6ba943;  */

void FUN_10b6ba55c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f70598;
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



/* Entry: 10b6ba944; end: 10b6bab83; +[SCGalleryEntry fetchGalleryEntriesForOwner:options:error:dataObjectContext:] */

void FUN_10b6ba944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 10b6bab84; end: 10b6baf6b;  */

void FUN_10b6bab84(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f705b8;
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



/* Entry: 10b6baf6c; end: 10b6bb1ab; +[SCGalleryEntry fetchGalleryEntriesForOwnerDeleted:options:error:dataObjectContext:] */

void FUN_10b6baf6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 10b6bb1ac; end: 10b6bb593;  */

void FUN_10b6bb1ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
        _objc_opt_class(PTR_PTR_1126af4c0);
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
  ppuVar12 = &PTR____CFConstantStringClassReference_110f705f8;
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


