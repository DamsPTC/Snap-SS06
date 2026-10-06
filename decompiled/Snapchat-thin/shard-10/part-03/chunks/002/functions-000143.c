/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fbe390; end: 107fbe65f; -[SCMainAppStickerPickerLogger _logStickerPickerStickerPickEvent:sticker:categoryCellSourceType:searchQuery:index:sourceTab:stickerPickerType:captureSessionId:hasCameos:] */

void FUN_107fbe390(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 in_stack_00000008;
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c27dd80(param_4);
  func_0x000108d12ecc();
  func_0x00010c1f9520(param_3);
  uVar2 = param_4;
  func_0x00010c0f0a00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b420(param_3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bac28;
  uVar2 = param_4;
  func_0x00010c2540c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_4);
  func_0x00010c113fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bac28;
  uVar2 = param_4;
  func_0x00010c2540c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_4);
  _objc_release(param_4);
  func_0x00010c2540e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b100(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c20b880(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(param_3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010c20b620(param_3);
  func_0x00010c1f8b80(param_3);
  _objc_release(param_6);
  func_0x00010c1f8a00(param_3);
  func_0x00010c20b560(param_3);
  func_0x00010c20b960(param_3);
  puVar3 = PTR_PTR_1126d8b38;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c179280(uVar1);
  _objc_release(uVar1);
  _objc_release(in_stack_00000008);
  puVar3 = PTR_PTR_1126d8b38;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c1a5b00(uVar1);
  _objc_release(uVar1);
  func_0x00010be177e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fbe660; end: 107fbe85b; -[SCMainAppStickerPickerLogger _logCreativeToolsStickerPick:position:] */

void FUN_107fbe660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 8) == 0) && (*(long *)(param_1 + 0xd8) != 0)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126bac00;
    _objc_opt_new(PTR_PTR_1126bac00);
    puVar3 = PTR_PTR_1126bac08;
    _objc_opt_new(PTR_PTR_1126bac08);
    uVar1 = param_3;
    func_0x00010c271a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf21f60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar2,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c1db720(puVar2,param_2,*(undefined8 *)(param_1 + 0xd8));
    func_0x00010c1db7c0(puVar2,param_2,1);
    uVar5 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f20(puVar3,param_2,uVar5);
    _objc_release(uVar5);
    func_0x00010c1b61a0(puVar3,param_2,param_4);
    uVar5 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010916771c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20baa0(puVar3,param_2,uVar5);
    _objc_release(uVar5);
    func_0x00010c1f8b80(puVar3,param_2,*(undefined8 *)(param_1 + 0x40));
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bb14018(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db7a0(puVar3,param_2,uVar5);
    _objc_release(uVar5);
    func_0x00010c1b5fe0(puVar2,param_2,puVar3);
    uVar5 = uVar1;
    func_0x00010c135700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar2,param_2,uVar5);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fbe85c; end: 107fbe9cf; -[SCMainAppStickerPickerLogger _logStickerSearchStickerPickerEvents:categoryCellSourceType:query:index:sourceTab:stickerPickerType:] */

void FUN_107fbe85c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8b40;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar4 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x000108d12ea8();
  func_0x00010c1f9520(puVar1,param_2,uVar4);
  if (param_4 < 4) {
    uVar4 = *(undefined8 *)(&UNK_10deeb958 + param_4 * 8);
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  func_0x00010c206c40(puVar1,param_2,uVar4);
  func_0x00010c1f8b80(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar4 = param_3;
  func_0x00010c0f0a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b420(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126bac28;
  uVar4 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_release(param_3);
  func_0x00010c113fe0(puVar3,param_2,uVar4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar4);
  func_0x00010c20b960(puVar1,param_2,param_7);
  func_0x00010c20b560(puVar1,param_2,param_8);
  func_0x00010be177e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fbe9d0; end: 107fbf1b3; -[SCMainAppStickerPickerLogger _logPickerTabViewWithStickers:destinationTab:] */

void FUN_107fbe9d0(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
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
  ppuVar2 = param_3;
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 8) != 0) || (*(char *)(param_1 + 0xb0) != '\x01')) goto LAB_107fbf170;
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  ppuVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0(puVar11,param_2,ppuVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  ppuVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0(puVar3,param_2,ppuVar2);
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (ppuVar2 != (undefined **)0x0) {
    lVar9 = *plStack_1a0;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar15 = *(undefined8 *)(lStack_1a8 + (long)ppuVar12 * 8);
        lVar10 = *(long *)(param_1 + 0x78);
        uVar7 = uVar15;
        func_0x00010c2540c0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar10,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar10;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(uVar7);
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        uVar7 = uVar15;
        func_0x00010c2540c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c013ce0(puVar16,param_2,&PTR____CFConstantStringClassReference_110dc0f98);
        _objc_release(uVar7);
        if (lVar6 != 0) {
          func_0x00010befa120(puVar11,param_2,puVar16);
        }
        uVar7 = uVar15;
        func_0x00010c2540c0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3,param_2,uVar7);
        _objc_release(uVar7);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = uVar15;
        func_0x00010c27dd80(uVar15);
        func_0x00010c0df840(puVar13,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar14;
        func_0x00010c0e00e0(puVar14,param_2,puVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar13);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = uVar15;
        func_0x00010c27dd80(uVar15);
        func_0x00010c0df840(puVar13,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) {
          func_0x00010c1d0640(puVar14,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd3c0,
                              puVar13);
        }
        else {
          puVar5 = puVar14;
          func_0x00010c0e00e0(puVar14,param_2,puVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar4 = puVar5;
          func_0x00010c067fc0(puVar5);
          func_0x00010c0df780(puVar13,param_2,puVar4 + 1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c27dd80(uVar15);
          func_0x00010c0df840(puVar4,param_2,uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar14,param_2,puVar13,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar13);
          puVar13 = puVar5;
        }
        _objc_release(puVar13);
        _objc_release(puVar16);
        _objc_release(lVar6);
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar2 != ppuVar12);
      ppuVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(param_3);
  ppuVar12 = (undefined **)PTR_PTR_1126c4c58;
  _objc_opt_new();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(puVar14);
  puVar16 = puVar14;
  func_0x00010bf52a60(puVar14,param_2,&uStack_1f0,auStack_170,0x10);
  if (puVar16 != (undefined *)0x0) {
    lVar9 = *plStack_1e0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar9) {
          _objc_enumerationMutation(puVar14);
        }
        lVar10 = *(long *)(lStack_1e8 + (long)puVar13 * 8);
        lVar6 = lVar10;
        func_0x00010c067fc0();
        puVar4 = puVar14;
        func_0x00010c0e00e0(puVar14,param_2,lVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c067fc0();
        _objc_release(puVar4);
        if (lVar6 < 5) {
          if (lVar6 == 1) {
            func_0x00010c20aee0(ppuVar12,param_2,puVar5);
          }
          else if (lVar6 == 2) {
            func_0x00010c20b940(ppuVar12,param_2,puVar5);
          }
          else if (lVar6 == 3) {
            func_0x00010c20a900(ppuVar12,param_2,puVar5);
          }
        }
        else if (lVar6 == 5) {
          func_0x00010c20ad00(ppuVar12,param_2,puVar5);
        }
        else if (lVar6 == 6) {
          func_0x00010c20b200(ppuVar12,param_2,puVar5);
        }
        else if (lVar6 == 7) {
          func_0x00010c20b080(ppuVar12,param_2,puVar5);
        }
        puVar13 = puVar13 + 1;
      } while (puVar16 != puVar13);
      puVar16 = puVar14;
      func_0x00010bf52a60(puVar14,param_2,&uStack_1f0,auStack_170,0x10);
    } while (puVar16 != (undefined *)0x0);
  }
  _objc_release(puVar14);
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3ed8;
  puVar16 = puVar11;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  switch(*(undefined8 *)(param_1 + 0xa0)) {
  case 0:
    func_0x00010c20b6e0(ppuVar12,param_2,puVar16);
    break;
  case 1:
    func_0x00010c20b640(ppuVar12,param_2,puVar16);
    break;
  case 2:
    func_0x00010c20b0c0(ppuVar12,param_2,puVar16);
    break;
  case 4:
    func_0x00010c20ad20(ppuVar12,param_2,puVar16);
    break;
  case 5:
    func_0x00010c20a920(ppuVar12,param_2,puVar16);
    break;
  case 8:
    func_0x00010c20af00(ppuVar12,param_2,puVar16);
    break;
  case 0xc:
    func_0x00010c20af20(ppuVar12,param_2,puVar16);
    break;
  case 0xffffffffffffffff:
  case 3:
  case 6:
  case 7:
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    goto code_r0x000107fbf144;
  }
  if (param_4 == -1) {
    func_0x00010c198400(ppuVar12,param_2,&PTR____CFConstantStringClassReference_110e2a718);
  }
  else {
    func_0x00010bb14018();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198400(ppuVar12,param_2,param_4);
    _objc_release(param_4);
  }
  lVar9 = *(long *)(param_1 + 0xa0);
  if (lVar9 == 0) {
    func_0x00010bb14018();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x40);
    func_0x00010c08fa60();
    ppuVar2 = &PTR____CFConstantStringClassReference_110ecb0b8;
    if (lVar6 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ecb0d8;
    }
    lVar6 = lVar9;
    func_0x00010c25ce40(lVar9,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar6;
    if (*(char *)(param_1 + 0x48) == '\x01') {
      func_0x00010c25ce40(lVar6,param_2,&PTR____CFConstantStringClassReference_110ecb0f8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
    }
  }
  else {
    func_0x00010bb14018();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1db7a0(ppuVar12,param_2,lVar9);
  _objc_release(lVar9);
  puVar13 = puVar3;
  func_0x00010bf446e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bbc0(ppuVar12,param_2,puVar13);
  puVar4 = puVar3;
  func_0x00010bf529e0(puVar3);
  func_0x00010c20bba0(ppuVar12,param_2,puVar4);
  func_0x00010c226c60(ppuVar12,param_2,*(undefined8 *)(param_1 + 0x40));
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar15;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(ppuVar12,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar15);
  func_0x00010c1db720(ppuVar12,param_2,*(undefined8 *)(param_1 + 0xd8));
  lVar9 = *(long *)(param_1 + 0xa8);
  if (lVar9 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b0e0(ppuVar12,param_2,lVar9);
    _objc_release(lVar9);
    bVar1 = *(long *)(param_1 + 0xa8) != 0;
  }
  func_0x00010c226f00(ppuVar12,param_2,bVar1);
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar12;
  func_0x00010c0b2e60();
  _objc_release(uVar7);
  _objc_release(puVar13);
code_r0x000107fbf144:
  _objc_release(puVar16);
  _objc_release(ppuVar12);
  _objc_release(puVar14);
  _objc_release(puVar3);
  _objc_release(puVar11);
LAB_107fbf170:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar2);
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar12 = ppuVar2;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    if (((ppuVar12 != (undefined **)0x0) &&
        (puVar11 = param_3[0x1b], _objc_release(), puVar11 != (undefined *)0x0)) &&
       (((ulong)param_3[1] & 0xfffffffffffffffd) == 1)) {
      ppuVar8 = ppuVar2;
      func_0x00010c27dd80();
      ppuVar12 = (undefined **)PTR_PTR_1126bac28;
      if (ppuVar8 == (undefined **)0x3) {
        ppuVar8 = ppuVar2;
        func_0x00010c2540c0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1b9e0(ppuVar12,param_2,ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
      }
      else {
        ppuVar12 = ppuVar2;
        func_0x00010c2540c0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar3 = PTR_PTR_1126d8b00;
      _objc_alloc(PTR_PTR_1126d8b00);
      func_0x00010c04c860();
      func_0x00010c1abfe0();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar14 = param_3[0x10];
      ppuVar8 = ppuVar2;
      func_0x00010c27dd80(ppuVar2);
      func_0x00010c0df840(puVar11,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar14,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar11);
      if (puVar14 == (undefined *)0x0) {
        puVar14 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar16 = param_3[0x10];
        ppuVar8 = ppuVar2;
        func_0x00010c27dd80(ppuVar2);
        func_0x00010c0df840(puVar11,param_2,ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar16,param_2,puVar14,puVar11);
        _objc_release(puVar11);
        _objc_release(puVar14);
      }
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar14 = param_3[0x10];
      ppuVar8 = ppuVar2;
      func_0x00010c27dd80(ppuVar2);
      func_0x00010c0df840(puVar11,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar14,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar14);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(ppuVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 107fbf1b4; end: 107fbf3cf; -[SCMainAppStickerPickerLogger _sentSticker:index:] */

void FUN_107fbf1b4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    if (((puVar1 != (undefined *)0x0) &&
        (lVar6 = *(long *)(param_1 + 0xd8), _objc_release(), lVar6 != 0)) &&
       ((*(ulong *)(param_1 + 8) & 0xfffffffffffffffd) == 1)) {
      puVar2 = param_3;
      func_0x00010c27dd80();
      puVar1 = PTR_PTR_1126bac28;
      if (puVar2 == (undefined *)0x3) {
        puVar2 = param_3;
        func_0x00010c2540c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1b9e0(puVar1,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      else {
        puVar1 = param_3;
        func_0x00010c2540c0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar3 = PTR_PTR_1126d8b00;
      _objc_alloc(PTR_PTR_1126d8b00);
      func_0x00010c04c860();
      func_0x00010c1abfe0();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar6 = *(long *)(param_1 + 0x80);
      puVar4 = param_3;
      func_0x00010c27dd80(param_3);
      func_0x00010c0df840(puVar2,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar6,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (lVar6 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = *(undefined8 *)(param_1 + 0x80);
        puVar5 = param_3;
        func_0x00010c27dd80(param_3);
        func_0x00010c0df840(puVar2,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar7,param_2,puVar4,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar4);
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar7 = *(undefined8 *)(param_1 + 0x80);
      puVar4 = param_3;
      func_0x00010c27dd80(param_3);
      func_0x00010c0df840(puVar2,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar7,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar7);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fbf3d0; end: 107fbf78f; -[SCMainAppStickerPickerLogger _didLoadSticker:sourceTab:indexPath:timeToDisplay:downloadSource:] */

void FUN_107fbf3d0(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_1 != -1.0 && (*(ulong *)(param_2 + 8) & 0xfffffffffffffffd) == 1) {
    puVar1 = param_4;
    func_0x00010c27dd80();
    puVar2 = PTR_PTR_1126bac28;
    if (puVar1 == (undefined *)0x3) {
      puVar1 = param_4;
      func_0x00010c2540c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1b9e0(puVar2,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    else {
      puVar2 = param_4;
      func_0x00010c2540c0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_3,
                        &PTR____CFConstantStringClassReference_110ecb118);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar9 = *(long *)(param_2 + 0x88);
    puVar4 = param_4;
    func_0x00010c27dd80(param_4);
    func_0x00010c0df840(puVar1,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar9,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar9;
    func_0x00010bfaeb20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar9);
    _objc_release(puVar1);
    lVar5 = lVar6;
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      lVar5 = lVar6;
      func_0x00010c0dfd40(lVar6,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_6;
      func_0x00010c0840e0(param_6);
      func_0x00010c1abfe0(lVar5,param_3,uVar8);
      func_0x00010c215340(param_1,lVar5);
      func_0x00010c1913c0(lVar5,param_3,param_7);
      if (param_7 == -1) {
        func_0x00010c1bef20(lVar5,param_3,2);
      }
      else {
        func_0x00010c1bef20(lVar5,param_3,1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar9 = *(long *)(param_2 + 0x90);
        puVar4 = param_4;
        func_0x00010c27dd80(param_4);
        func_0x00010c0df840(puVar1,param_3,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar9,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        if (lVar9 == 0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar8 = *(undefined8 *)(param_2 + 0x90);
          puVar7 = param_4;
          func_0x00010c27dd80(param_4);
          func_0x00010c0df840(puVar1,param_3,puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar8,param_3,puVar4,puVar1);
          _objc_release(puVar1);
          _objc_release(puVar4);
        }
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar8 = *(undefined8 *)(param_2 + 0x90);
        puVar4 = param_4;
        func_0x00010c27dd80(param_4);
        func_0x00010c0df840(puVar1,param_3,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar8,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(uVar8);
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar8 = *(undefined8 *)(param_2 + 0x88);
        puVar4 = param_4;
        func_0x00010c27dd80(param_4);
        func_0x00010c0df840(puVar1,param_3,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar8,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360();
        _objc_release(uVar8);
        _objc_release(puVar1);
        func_0x00010be59100(param_1,param_2,param_3,param_4,param_5,param_7);
      }
      _objc_release(lVar5);
    }
    _objc_release(lVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107fbf790; end: 107fbf973; -[SCMainAppStickerPickerLogger _logStickerLoadLatencyWithSticker:timeToDisplay:sourceTab:downloadSource:] */

void FUN_107fbf790(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bac68;
  _objc_retain(param_4);
  func_0x00010c254360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c27dd80(param_4);
  _objc_release(param_4);
  func_0x00010916771c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dad058,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  func_0x00010bb14018(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110dea718,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_5);
  func_0x00010ba53f60(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110de7278,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_6);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x000108e80818(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110dae878,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar4);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c254060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fbf974; end: 107fbfacb; -[SCMainAppStickerPickerLogger _chatDrawerLogFromDictionary:keyType:] */

void FUN_107fbf974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107fbfacc;
  uStack_40 = 0x107fbfadc;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = puVar1;
  func_0x00010bf97ce0(param_3);
  uVar2 = puStack_58[5];
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar1 & 1) == 0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107fbfacc; end: 107fbfae3;  */

void FUN_107fbfacc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107fbfae4; end: 107fbfcbf;  */

void FUN_107fbfae4(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    ppuVar2 = param_2;
    func_0x00010c067fc0();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_107fbfacc;
    uStack_50 = 0x107fbfadc;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = puVar4;
    func_0x00010bf97e80(param_3);
    uVar3 = puStack_68[5];
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x5) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e17798;
    }
    else {
      func_0x00010916771c();
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(ulong *)(param_1 + 0x28) < 4) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(puVar4);
    _objc_release(ppuVar2);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107fbfcc0; end: 107fbfd07;  */

void FUN_107fbfcc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c254320(param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fbfd08; end: 107fbfd2f; -[SCMainAppStickerPickerLogger _isValidSearchQuery:] */

undefined4 FUN_107fbfd08(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  func_0x00010be3dee0();
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 107fbfd30; end: 107fbfd57; -[SCMainAppStickerPickerLogger _isActive] */

bool FUN_107fbfd30(long param_1)

{
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
    return *(long *)(param_1 + 8) == 0;
  }
  return false;
}



/* Entry: 107fbfd58; end: 107fbfdff; -[SCMainAppStickerPickerLogger _fireEvent:] */

void FUN_107fbfd58(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b72d8;
  _objc_opt_class(PTR_PTR_1126b72d8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126d0340;
    _objc_opt_class(PTR_PTR_1126d0340);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) goto LAB_107fbfdf0;
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2b40();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
  }
  _objc_release(uVar3);
LAB_107fbfdf0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fbfe00; end: 107fbfe83; -[SCMainAppStickerPickerLogger _sanitizeSearchTerm:] */

void FUN_107fbfe00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010c08fa60(), uVar1 < 2)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c08fa60();
    uVar2 = param_3;
    if (uVar1 < 100) {
      _objc_retain(param_3);
    }
    else {
      func_0x00010c260c20(param_3,param_2,100);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107fbfe84; end: 107fc05f3; -[SCMainAppStickerPickerLogger didUpdateVisibleItemsWithStickers:sourceTab:hasCameos:] */

void FUN_107fbfe84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,undefined4 param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puStack_3a0;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [128];
  undefined1 auStack_200 [128];
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == -1) {
    _objc_release(param_5);
    param_5 = 0;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  _objc_retain(param_5);
  lVar15 = param_5;
  func_0x00010bf52a60(param_5,param_4,&uStack_2c0,auStack_100,0x10);
  if (lVar15 != 0) {
    lVar19 = *plStack_2b0;
    do {
      lVar20 = 0;
      do {
        if (*plStack_2b0 != lVar19) {
          _objc_enumerationMutation(param_5);
        }
        lVar17 = *(long *)(lStack_2b8 + lVar20 * 8);
        lVar21 = lVar17;
        func_0x00010c2540c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar21 != 0) {
          func_0x00010c2540c0(lVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_4,lVar17);
          _objc_release(lVar17);
        }
        lVar20 = lVar20 + 1;
      } while (lVar15 != lVar20);
      lVar15 = param_5;
      func_0x00010bf52a60(param_5,param_4,&uStack_2c0,auStack_100,0x10);
    } while (lVar15 != 0);
  }
  _objc_release(param_5);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  _objc_retain(puVar4);
  puStack_3a0 = puVar4;
  func_0x00010bf52a60(puVar4,param_4,&uStack_300,auStack_180,0x10);
  if (puStack_3a0 != (undefined *)0x0) {
    lVar15 = *plStack_2f0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_2f0 != lVar15) {
          _objc_enumerationMutation(puVar4);
        }
        uVar3 = *(undefined8 *)(lStack_2f8 + (long)puVar16 * 8);
        lVar20 = *(long *)(param_3 + 0x38);
        func_0x00010c0e00e0(lVar20,param_4,uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar20;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar20);
        uStack_318 = 0;
        uStack_320 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        lStack_338 = 0;
        uStack_340 = 0;
        uStack_328 = 0;
        plStack_330 = (long *)0x0;
        _objc_retain(lVar19);
        lVar20 = lVar19;
        func_0x00010bf52a60(lVar19,param_4,&uStack_340,auStack_200,0x10);
        if (lVar20 != 0) {
          lVar21 = *plStack_330;
          do {
            lVar17 = 0;
            do {
              if (*plStack_330 != lVar21) {
                _objc_enumerationMutation(lVar19);
              }
              puVar6 = puVar2;
              func_0x00010bf4b900(puVar2,param_4,*(undefined8 *)(lStack_338 + lVar17 * 8));
              if (((ulong)puVar6 & 1) == 0) {
                lVar7 = *(long *)(param_3 + 0x38);
                func_0x00010c0e00e0(lVar7,param_4,uVar3);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar7);
                if (lVar8 != 0) {
                  lVar7 = lVar8;
                  func_0x00010bf0a640();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar7);
                  if (lVar9 != 0) {
                    func_0x00010c26f320(puVar5);
                    func_0x00010bf885a0(lVar9);
                    func_0x00010c222d20(lVar8);
                  }
                  func_0x00010be177e0(param_3,param_4,lVar8);
                  uVar10 = *(undefined8 *)(param_3 + 0x38);
                  func_0x00010c0e00e0(uVar10,param_4,uVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c12d3e0();
                  _objc_release(uVar10);
                  _objc_release(lVar9);
                }
                _objc_release(lVar8);
              }
              lVar17 = lVar17 + 1;
            } while (lVar20 != lVar17);
            lVar20 = lVar19;
            func_0x00010bf52a60(lVar19,param_4,&uStack_340,auStack_200,0x10);
          } while (lVar20 != 0);
        }
        _objc_release(lVar19);
        _objc_release(lVar19);
        puVar16 = puVar16 + 1;
      } while (puVar16 != puStack_3a0);
      puStack_3a0 = puVar4;
      func_0x00010bf52a60(puVar4,param_4,&uStack_300,auStack_180,0x10);
    } while (puStack_3a0 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  lVar15 = *(long *)(param_3 + 0x38);
  func_0x00010c0e00e0(lVar15,param_4,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar15 == 0) {
    puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x38),param_4,puVar16,puVar12);
    _objc_release(puVar16);
  }
  uVar3 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  _objc_retain(param_5);
  puVar13 = &uStack_380;
  puVar14 = auStack_280;
  lVar15 = param_5;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar19 = *plStack_370;
    do {
      lVar20 = 0;
      do {
        if (*plStack_370 != lVar19) {
          _objc_enumerationMutation(param_5);
        }
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar18 = *(undefined8 *)(lStack_378 + lVar20 * 8);
        uVar10 = uVar18;
        func_0x00010c2540c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar16,param_4,uVar10);
        _objc_release(uVar10);
        if ((int)puVar16 != 0) {
          lVar17 = *(long *)(param_3 + 0x38);
          func_0x00010c0e00e0(lVar17,param_4,puVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar18;
          func_0x00010c2540c0();
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar17;
          func_0x00010c0e00e0(lVar17,param_4,uVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar10);
          _objc_release(lVar17);
          if (lVar21 == 0) {
            puVar6 = PTR_PTR_1126d8b48;
            _objc_opt_new();
            uVar11 = *(undefined8 *)(param_3 + 0x38);
            func_0x00010c0e00e0(uVar11,param_4,puVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar18;
            func_0x00010c2540c0(uVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar11,param_4,puVar6,uVar10);
            _objc_release(uVar10);
            _objc_release(uVar11);
            uVar11 = *(undefined8 *)(param_3 + 0x20);
            func_0x00010bf21f60(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20b960(puVar6,param_4,param_6);
            uVar10 = uVar18;
            func_0x00010c0f0a00(uVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20b420(puVar6,param_4,uVar10);
            _objc_release(uVar10);
            puVar16 = PTR_PTR_1126bac28;
            uVar10 = uVar18;
            func_0x00010c2540c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27dd80(uVar18);
            func_0x00010c113fe0(puVar16,param_4,uVar10,uVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20b0e0(puVar6,param_4,puVar16);
            _objc_release(puVar16);
            _objc_release(uVar10);
            func_0x00010c20b480(puVar6,param_4,*(undefined8 *)(param_3 + 0xd8));
            uVar10 = uVar11;
            func_0x00010c243340(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c205660(puVar6,param_4,uVar10);
            _objc_release(uVar10);
            uVar10 = uVar11;
            func_0x00010bf31200(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179280(puVar6,param_4,uVar10);
            _objc_release(uVar10);
            func_0x00010c197ca0(puVar6,param_4,puVar5);
            func_0x00010c1a5b00(puVar6,param_4,param_7);
            _objc_release(uVar11);
            _objc_release(puVar6);
          }
        }
        lVar20 = lVar20 + 1;
      } while (lVar15 != lVar20);
      puVar13 = &uStack_380;
      puVar14 = auStack_280;
      lVar15 = param_5;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR_PTR_1126d8b50;
  if (puVar13 != (undefined8 *)0x0) {
    ppuVar1 = &PTR_PTR_1126d8b58;
  }
  puVar12 = *ppuVar1;
  _objc_alloc_init(puVar12);
  func_0x00010c20b540();
  func_0x00010c20b960(puVar12,param_4,puVar14);
  func_0x00010c155420(uVar3,PTR_PTR_1126afec0);
  func_0x00010c21a9c0(puVar12);
  func_0x00010c155420(param_2,PTR_PTR_1126afec0);
  func_0x00010c16de80(puVar12);
  uVar3 = *(undefined8 *)(param_5 + 0xc0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 107fc05f4; end: 107fc06bb; -[SCMainAppStickerPickerLogger logDrawerTabLatencyOnStickerPickerMenuSourceType:sourceTab:stickerPickerTabSection:timeToFirstAsset:avgTimeToRenderVisibleAssets:] */

void FUN_107fc05f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  ppuVar1 = &PTR_PTR_1126d8b50;
  if (param_5 != 0) {
    ppuVar1 = &PTR_PTR_1126d8b58;
  }
  puVar2 = *ppuVar1;
  _objc_alloc_init(puVar2);
  func_0x00010c20b540();
  func_0x00010c20b960(puVar2,param_4,param_6);
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010c21a9c0(puVar2);
  func_0x00010c155420(param_2,PTR_PTR_1126afec0);
  func_0x00010c16de80(puVar2);
  uVar3 = *(undefined8 *)(param_3 + 0xc0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107fc06bc; end: 107fc07a7; -[SCMainAppStickerPickerLogger logStickerQuickSearchBarActionDisplayedSticker:] */

void FUN_107fc06bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010916771c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98),param_2,puVar3,uVar1);
    _objc_release(puVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c0e00e0(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010befa120(uVar4,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fc07a8; end: 107fc08f7; -[SCMainAppStickerPickerLogger logStickerQuickSearchBarActionWithSearchType:] */

void FUN_107fc07a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126d8b60;
  _objc_opt_new(PTR_PTR_1126d8b60);
  func_0x00010c20b600();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107fbfacc;
  uStack_40 = 0x107fbfadc;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = puVar2;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x98));
  func_0x00010c190740(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar2;
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 107fc08f8; end: 107fc09db;  */

void FUN_107fc08f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fc09dc; end: 107fc0a57; -[SCMainAppStickerPickerLogger _resetStickerDrawerLoggingDictionaries] */

void FUN_107fc09dc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fc0a58; end: 107fc0a87; -[SCMainAppStickerPickerLogger willStartSearchWithQuery:] */

void FUN_107fc0a58(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  func_0x00010be45520();
  if (iVar1 != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  return;
}



/* Entry: 107fc0a88; end: 107fc0a93; -[SCMainAppStickerPickerLogger didLoadHometabContent] */

void FUN_107fc0a88(long param_1)

{
  *(undefined1 *)(param_1 + 0xb1) = 1;
  return;
}



/* Entry: 107fc0a94; end: 107fc0a9b; -[SCMainAppStickerPickerLogger stickerSessionId] */

undefined8 FUN_107fc0a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107fc0a9c; end: 107fc0b8b; -[SCMainAppStickerPickerLogger .cxx_destruct] */

void FUN_107fc0a9c(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107fc0b8c; end: 107fc0c17; -[SCStickerLoggingInfo initWithStickerId:] */

undefined1 * FUN_107fc0b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbfd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x18) = 0xbff0000000000000;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fc0c18; end: 107fc0cff; -[SCStickerLoggingInfo stickerKeyForKeyType:] */

void FUN_107fc0c18(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,
                      &PTR____CFConstantStringClassReference_110ecb1d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 3) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ecb218;
  }
  else {
    if ((param_3 != 2) && (param_3 != 1)) goto LAB_107fc0ce8;
    ppuVar2 = &PTR____CFConstantStringClassReference_110ecb1f8;
  }
  func_0x00010bf06ba0(puVar1,param_2,ppuVar2);
LAB_107fc0ce8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fc0d00; end: 107fc0d07; -[SCStickerLoggingInfo hash] */

void FUN_107fc0d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107fc0d08; end: 107fc0d97; -[SCStickerLoggingInfo isEqual:] */

long FUN_107fc0d08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107fc0d7c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107fc0d7c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107fc0d7c;
    }
  }
  lVar3 = 1;
LAB_107fc0d7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107fc0d98; end: 107fc0d9f; -[SCStickerLoggingInfo stickerId] */

undefined8 FUN_107fc0d98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107fc0da0; end: 107fc0da7; -[SCStickerLoggingInfo index] */

undefined8 FUN_107fc0da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107fc0da8; end: 107fc0daf; -[SCStickerLoggingInfo setIndex:] */

void FUN_107fc0da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107fc0db0; end: 107fc0db7; -[SCStickerLoggingInfo timeToDisplay] */

undefined8 FUN_107fc0db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107fc0db8; end: 107fc0dbf; -[SCStickerLoggingInfo setTimeToDisplay:] */

void FUN_107fc0db8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 107fc0dc0; end: 107fc0dc7; -[SCStickerLoggingInfo downloadSource] */

undefined8 FUN_107fc0dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107fc0dc8; end: 107fc0dcf; -[SCStickerLoggingInfo setDownloadSource:] */

void FUN_107fc0dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107fc0dd0; end: 107fc0dd7; -[SCStickerLoggingInfo loadingState] */

undefined8 FUN_107fc0dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107fc0dd8; end: 107fc0ddf; -[SCStickerLoggingInfo setLoadingState:] */

void FUN_107fc0dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107fc0de0; end: 107fc0deb; -[SCStickerLoggingInfo .cxx_destruct] */

void FUN_107fc0de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fc0dec; end: 107fc0eb7; -[SCStickerPickerAvatarBuilderPresenter initWithUIContainer:] */

undefined1 * FUN_107fc0dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fbfd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar3 = uVar2;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fc0eb8; end: 107fc0ebf;  */

void FUN_107fc0eb8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_bitmojiAvatarBuilderScopeLaunche_1125a44b0);
  return;
}



/* Entry: 107fc0ec0; end: 107fc0f33; -[SCStickerPickerAvatarBuilderPresenter launchCreateBitmojiFlowWithPageType:allowDeeplinking:] */

void FUN_107fc0ec0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fc0f34; end: 107fc0f93; -[SCStickerPickerAvatarBuilderPresenter bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_107fc0f34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc0f94; end: 107fc0fab; -[SCStickerPickerAvatarBuilderPresenter delegate] */

void FUN_107fc0f94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fc0fac; end: 107fc0fb7; -[SCStickerPickerAvatarBuilderPresenter setDelegate:] */

void FUN_107fc0fac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107fc0fb8; end: 107fc0fef; -[SCStickerPickerAvatarBuilderPresenter .cxx_destruct] */

void FUN_107fc0fb8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fc0ff0; end: 107fc103f; -[SCStickerPickerBitmojiEmptyPage dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc0ff0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112772bec));
  puStack_28 = PTR_PTR_1126fbfe0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107fc1040; end: 107fc1283; -[SCStickerPickerBitmojiEmptyPage initWithFrame:sourceType:bitmojiUserLinkingServices:bitmojiUserLinkingContentServices:stickerPickerAvatarBuilderPresenter:bitmojiLogger:bitmojiAppEventsEmitter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107fc1040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_88 = PTR_PTR_1126fbfe0;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112772bf0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112772bf4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112772bf8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112772bfc;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_112772c00;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c21e900();
    func_0x00010befbb60(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bfef760(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 107fc1284; end: 107fc13f7;  */

void FUN_107fc1284(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  cVar1 = *(char *)(param_1 + 0x28);
  _objc_retain(param_2);
  lVar4 = param_2;
  if (cVar1 == '\x01') {
    lVar5 = param_2;
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar5);
    func_0x00010bf1fec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar5 = lVar4;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    (**(code **)(lVar5 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(0xc04e000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf34840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar5 = lVar4;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107fc13f8; end: 107fc18c3; -[SCStickerPickerBitmojiEmptyPage initTeaserWithContainerView:sourceType:isSourceTypePreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc13f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0995e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112772c04;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = lVar1;
  _objc_release(uVar6);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8));
  lVar1 = param_1;
  func_0x00010bf254e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112772c08;
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  *(long *)(param_1 + lVar10) = lVar1;
  _objc_release(uVar6);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10));
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107fc18c4;
  puStack_88 = &UNK_1108471b0;
  lStack_80 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  puStack_c8 = puVar2;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107fc1a70;
  puStack_b0 = &UNK_1108471b0;
  lStack_a8 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010bef9040(param_1);
  *(undefined1 *)(param_1 + _DAT_112772c0c) = 1;
  *(undefined8 *)(param_1 + _DAT_112772c10) = param_4;
  _objc_initWeak(auStack_d0,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112772c00);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf050a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_d0);
  uVar4 = uVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112772bec);
  *(undefined8 *)(param_1 + _DAT_112772bec) = uVar4;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010bfe7220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfc0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c260f80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112772c14;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = lVar8;
  _objc_release(uVar6);
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar9));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_5 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar5);
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010befbb60(param_1);
    func_0x00010c0bbfc0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf1bb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar5);
    _objc_retain(puVar5);
    func_0x00010c0bbfc0(lVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar9));
    func_0x00010befbb60(puVar5);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    _objc_retain(lVar8);
    func_0x00010c0bbfe0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(puVar5);
    _objc_release(lVar8);
    _objc_release(puVar5);
  }
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc18c4; end: 107fc1a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc18c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112772c08;
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))
            (0x4024000000000000,0x4046800000000000,0x4024000000000000,0x4046800000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0bc020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4041800000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c181cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x447a0000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772c04),
             PTR_s_setContentCompressionResistanceP_11263e150,1);
  return;
}



/* Entry: 107fc1a70; end: 107fc1ad7;  */

void FUN_107fc1a70(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fc1ad8; end: 107fc1b1f;  */

void FUN_107fc1ad8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26620();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc1b20; end: 107fc1e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc1b20(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772c08);
  func_0x00010c0bc020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107fc1e54; end: 107fc1ef3;  */

void FUN_107fc1e54(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fc1ef4; end: 107fc235f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc1ef4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107fc2360; end: 107fc242f; -[SCStickerPickerBitmojiEmptyPage linkButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772bf4);
  func_0x00010bf54b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fc2430; end: 107fc2523; -[SCStickerPickerBitmojiEmptyPage buttonContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2430(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  dVar4 = *(double *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar4,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c0699c0(*(undefined8 *)(param_1 + _DAT_112772c04));
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar4 * 0.5 + 10.0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fc2524; end: 107fc263f; -[SCStickerPickerBitmojiEmptyPage imageContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2524(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c17d4c0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772bf4);
  func_0x00010bfa8080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,puVar1);
  puVar3 = auStack_40;
  _objc_copyWeak(puVar3,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fc2640; end: 107fc2793;  */

void FUN_107fc2640(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    func_0x00010c182220();
    func_0x00010c1677c0(0,puVar2);
    func_0x00010befbb60(param_1);
    _objc_retain(param_1);
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(puVar2);
    func_0x00010bf03400(0x3fd99999a0000000,puVar1);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 107fc2794; end: 107fc2927;  */

void FUN_107fc2794(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107fc2928; end: 107fc2933;  */

void FUN_107fc2928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107fc2934; end: 107fc2a47; -[SCStickerPickerBitmojiEmptyPage subtitleLabelWhenIsSourceTypePreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2934(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1cfce0();
  func_0x00010c1bdb00(puVar1,param_2,0);
  puVar2 = puVar1;
  func_0x00010c213040(puVar1,param_2,1);
  if (param_3 == 0) {
    func_0x000108ede750();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + _DAT_112772bf4);
    func_0x00010bf54b40(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x49);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fc2a48; end: 107fc2b43; -[SCStickerPickerBitmojiEmptyPage bitmojiIntroLabel] */

void FUN_107fc2a48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1cfce0();
  func_0x00010c1bdb00(puVar1,param_2,4);
  func_0x00010c213040(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x000108ede738();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c165e20(puVar1,param_2,1);
  func_0x00010c1c83a0(0x3fe6666666666666,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fc2b44; end: 107fc2bab; -[SCStickerPickerBitmojiEmptyPage setDisplayed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2b44(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((param_3 != 0) && ((*(byte *)(param_1 + _DAT_112772c18) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112772c18) = 1;
    uVar2 = *(undefined8 *)(param_1 + _DAT_112772bf8);
    puVar1 = PTR_PTR_1126d4ef8;
    func_0x00010be1d440(PTR_PTR_1126d4ef8,param_2,*(undefined8 *)(param_1 + _DAT_112772c10));
                    /* WARNING: Could not recover jumptable at 0x00010c0aef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_logSeeLinkButton__1126095d0,puVar1);
    return;
  }
  return;
}



/* Entry: 107fc2bac; end: 107fc2cdb; -[SCStickerPickerBitmojiEmptyPage _linkButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_112772c0c;
  if (*(char *)(param_5 + lVar4) == '\x01') {
    uVar3 = *(undefined8 *)(param_5 + _DAT_112772c08);
    _objc_retain(param_7);
    func_0x00010bf20c00(uVar3);
    uVar3 = param_1;
    uVar5 = param_2;
    func_0x00010c09ef00(param_7);
    _objc_release();
    iVar1 = (int)param_7;
    _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar3,uVar5);
    if (iVar1 != 0) {
      *(undefined1 *)(param_5 + lVar4) = 0;
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_112772c04));
      uVar3 = *(undefined8 *)(param_5 + _DAT_112772bfc);
      lVar4 = (long)_DAT_112772c10;
      puVar2 = PTR_PTR_1126d4ef8;
      func_0x00010be1d440(PTR_PTR_1126d4ef8);
                    /* WARNING: Could not recover jumptable at 0x00010c08b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_launchCreateBitmojiFlowWithPageT_1126007a8,puVar2,
                 *(long *)(param_5 + lVar4) != 0);
      return;
    }
  }
  return;
}



/* Entry: 107fc2cdc; end: 107fc2d8b; -[SCStickerPickerBitmojiEmptyPage _bitmojiLinkSucceeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2cdc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772bf0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf47e20(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107fc2d8c; end: 107fc2e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2d8c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar1);
    lVar3 = param_2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      func_0x00010be2fe20(param_1);
    }
    else {
      *(undefined1 *)(param_1 + _DAT_112772c0c) = 0;
      lVar3 = (long)_DAT_112772c04;
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c1a7f60(uVar2);
      func_0x000108ede720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
      _objc_release(uVar2);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112772c14));
      func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112772c1c));
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fc2e80; end: 107fc2f27; -[SCStickerPickerBitmojiEmptyPage _handleServerError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2e80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112772c1c));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772bf4);
  func_0x00010bf54b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112772c04;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c1a7f60(uVar2,param_2,0);
  *(undefined1 *)(param_1 + _DAT_112772c0c) = 1;
  puVar1 = PTR_PTR_1126afca8;
  func_0x000108edeeb8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fc2f28; end: 107fc2fd7; -[SCStickerPickerBitmojiEmptyPage stickerPickerAvatarBuilderPresenter:didDismissAvatarBuilderWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc2f28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  if (param_4 != 0) {
    lVar3 = param_1;
    func_0x000108edeeb8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1,param_2,lVar3);
    _objc_release(lVar3);
  }
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112772c1c));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772bf4);
  func_0x00010bf54b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112772c04;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  *(undefined1 *)(param_1 + _DAT_112772c0c) = 1;
  return;
}



/* Entry: 107fc2fd8; end: 107fc2fdf; -[SCStickerPickerBitmojiEmptyPage gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107fc2fd8(void)

{
  return 1;
}



/* Entry: 107fc2fe0; end: 107fc2fff; +[SCStickerPickerBitmojiEmptyPage _getBitmojiLinkPage:] */

undefined8 FUN_107fc2fe0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return *(undefined8 *)(&UNK_10deeb978 + param_3 * 8);
  }
  return 0x17;
}



/* Entry: 107fc3000; end: 107fc3087; -[SCStickerPickerBitmojiEmptyPage _handleBitmojiAppEvent:] */

void FUN_107fc3000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107fc3088;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc3088; end: 107fc30e3;  */

void FUN_107fc3088(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107fc30e4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bd440(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38,0);
  return;
}



/* Entry: 107fc30e4; end: 107fc30eb;  */

void FUN_107fc30e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd48f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__bitmojiLinkSucceeded_112552bd8);
  return;
}



/* Entry: 107fc30ec; end: 107fc30fb; -[SCStickerPickerBitmojiEmptyPage isDisplayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fc30ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772c18);
}



/* Entry: 107fc30fc; end: 107fc31bb; -[SCStickerPickerBitmojiEmptyPage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc30fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772bfc,0);
  _objc_storeStrong(param_1 + _DAT_112772c1c,0);
  _objc_storeStrong(param_1 + _DAT_112772c14,0);
  _objc_storeStrong(param_1 + _DAT_112772c04,0);
  _objc_storeStrong(param_1 + _DAT_112772c08,0);
  _objc_storeStrong(param_1 + _DAT_112772bec,0);
  _objc_storeStrong(param_1 + _DAT_112772c00,0);
  _objc_storeStrong(param_1 + _DAT_112772bf8,0);
  _objc_storeStrong(param_1 + _DAT_112772bf4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772bf0,0);
  return;
}



/* Entry: 107fc31bc; end: 107fc32a3;  */

void FUN_107fc31bc(void)

{
  int in_w3;
  undefined8 in_x4;
  long in_x5;
  
  _objc_retain(in_x5);
  if (in_w3 == 0) {
    func_0x00010c269d40(in_x4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(in_x5);
    func_0x00010c11d780(in_x4);
    _objc_release(in_x4);
    _objc_release(in_x5);
  }
  else {
    (**(code **)(in_x5 + 0x10))(in_x5,1);
  }
  _objc_release(in_x5);
  return;
}



/* Entry: 107fc32a4; end: 107fc32cb;  */

void FUN_107fc32a4(long param_1,ulong param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  if (((param_2 & 1) == 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x29) ^ 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000107fc32c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),bVar1 & 1);
  return;
}



/* Entry: 107fc32cc; end: 107fc339f;  */

uint FUN_107fc32cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_2);
  func_0x00010c116a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x000108f04f08(param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26e7a0();
  if (lVar3 == 1) {
    lVar3 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfd9080();
    uVar5 = (uint)lVar4 ^ 1;
    _objc_release(lVar3);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 107fc33a0; end: 107fc341b; -[SCStoryQuickPostView initWithUserSession:customStoriesDataFetcher:customStoriesDataMutator:customStoriesOnboardingPresenter:snapProProfilesProvider:snapProUserProfileIdProvider:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:includePublicStories:circumstanceEngine:complianceEngine:featureSettingsService:viewController:webBrowsingScopeExposer:storyPrivacySettingManager:notificationManager:ourStoriesOnboardingManager:ourStoriesAttributionManager:quickPostTooltipsService:sendToOnboardingScopeExposer:previewABProvider:snapSource:customStoryMenuScopeLauncher:customStoryMenuScopeServices:] */

void FUN_107fc33a0(void)

{
  func_0x00010c05d5c0();
  return;
}



/* Entry: 107fc341c; end: 107fc4103; -[SCStoryQuickPostView initWithUserSession:customStoriesDataFetcher:customStoriesDataMutator:customStoriesOnboardingPresenter:snapProProfilesProvider:snapProUserProfileIdProvider:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:includePublicStories:circumstanceEngine:complianceEngine:featureSettingsService:viewController:webBrowsingScopeExposer:webBrowsingScopeServices:storyPrivacySettingManager:notificationManager:ourStoriesOnboardingManager:ourStoriesAttributionManager:quickPostTooltipsService:sendToOnboardingScopeExposer:sendToOnboardingScopeServices:previewABProvider:snapSource:customStoryMenuScopeLauncher:customStoryMenuScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107fc341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puStack_b8 = PTR_PTR_1126fbfe8;
  uVar16 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_c0;
  puVar4 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(uVar16,uVar17,uVar18,uVar19,puVar1,PTR_s_initWithFrame__1125e2948);
  ppuVar10 = param_4;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112772c20) = 0;
    lVar14 = (long)_DAT_112772c24;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c28);
    *(undefined **)((long)puVar1 + (long)_DAT_112772c28) = puVar3;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112772c2c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_13;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112772c30;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_14;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112772c34;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_17;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112772c38;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_10;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112772c3c;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_23;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c40);
    *(undefined **)((long)puVar1 + (long)_DAT_112772c40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c44);
    *(undefined **)((long)puVar1 + (long)_DAT_112772c44) = puVar3;
    _objc_release(uVar2);
    *(byte *)((long)puVar1 + (long)_DAT_112772c48) = (byte)param_11;
    uVar2 = param_13;
    func_0x0001009703d0(param_13,param_14);
    *(byte *)((long)puVar1 + (long)_DAT_112772c4c) = (byte)param_11 & (byte)uVar2;
    func_0x000108f580b4();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c50);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772c50) = uVar2;
    _objc_release(uVar13);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c54);
    *(undefined **)((long)puVar1 + (long)_DAT_112772c54) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112772c58) = param_11._1_1_;
    puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    lVar14 = (long)_DAT_112772c5c;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar3;
    _objc_release(uVar16);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar14));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar3);
    func_0x00010c1fce40(*(undefined8 *)((long)puVar1 + lVar14));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcde0(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar3);
    func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                        *(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1738c0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar19;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar18;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar17;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar9);
    _objc_release(uVar16);
    _objc_release(puVar12);
    _objc_release(uVar8);
    _objc_release(uVar17);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar18);
    _objc_release(puVar5);
    _objc_release(uVar13);
    _objc_release(uVar19);
    _objc_release(puVar4);
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112772c60;
    _objc_retain(param_4);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined ***)((long)puVar1 + lVar14) = param_4;
    _objc_release(uVar16);
    lVar14 = (long)_DAT_112772c64;
    _objc_retain(param_5);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_5;
    _objc_release(uVar16);
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(ppuVar10);
    lVar14 = (long)_DAT_112772c68;
    _objc_retain(param_28);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_28;
    _objc_release(uVar16);
    lVar14 = (long)puVar1 + (long)_DAT_112772c6c;
    _objc_storeWeak(lVar14,param_29);
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class();
    lVar11 = lVar14;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar11;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c70);
    *(long *)((long)puVar1 + (long)_DAT_112772c70) = lVar15;
    _objc_release(uVar16);
    _objc_release(lVar11);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class();
    lVar11 = lVar14;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar11;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c74);
    *(long *)((long)puVar1 + (long)_DAT_112772c74) = lVar15;
    _objc_release(uVar16);
    _objc_release(lVar11);
    _objc_release(lVar14);
    func_0x00010bedc8c0(puVar1);
    func_0x00010bed68e0(puVar1);
    func_0x00010be39c60(puVar1);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112772c78,param_16);
    lVar15 = (long)_DAT_112772c7c;
    _objc_retain(param_6);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_6;
    _objc_release(uVar16);
    lVar14 = (long)_DAT_112772c80;
    _objc_retain(param_8);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_8;
    _objc_release();
    func_0x000108f57e44();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bebce60();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c84);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112772c84) = puVar4;
    _objc_release(uVar17);
    _objc_release(uVar16);
    func_0x00010c1e1580(*(undefined8 *)((long)puVar1 + lVar15));
    lVar14 = (long)_DAT_112772c88;
    _objc_retain(param_9);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_9;
    _objc_release(uVar16);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c8c);
    *(undefined **)((long)puVar1 + (long)_DAT_112772c8c) = puVar3;
    _objc_release(uVar16);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c90);
    *(undefined **)((long)puVar1 + (long)_DAT_112772c90) = puVar3;
    _objc_release(uVar16);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c94);
    *(undefined **)((long)puVar1 + (long)_DAT_112772c94) = puVar3;
    _objc_release(uVar16);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c98);
    *(undefined **)((long)puVar1 + (long)_DAT_112772c98) = puVar3;
    _objc_release(uVar16);
    _objc_initWeak(&uStack_c8,puVar1);
    uVar17 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_107fc4114;
    puStack_d8 = &UNK_110842c58;
    ppuVar10 = &puStack_f0;
    puVar4 = &uStack_c8;
    _objc_copyWeak(auStack_d0,puVar4);
    uVar16 = uVar17;
    func_0x00010c0b8000();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772c9c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772c9c) = uVar16;
    _objc_release(uVar18);
    _objc_release(uVar17);
    lVar14 = (long)_DAT_112772ca0;
    _objc_retain(param_19);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_19;
    _objc_release(uVar16);
    lVar14 = (long)_DAT_112772ca4;
    _objc_retain(param_20);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_20;
    _objc_release(uVar16);
    lVar14 = (long)_DAT_112772ca8;
    _objc_retain(param_21);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_21;
    _objc_release(uVar16);
    lVar14 = (long)_DAT_112772cac;
    _objc_retain(param_22);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_22;
    _objc_release(uVar16);
    lVar14 = (long)_DAT_112772cb0;
    _objc_retain(param_26);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_26;
    _objc_release(uVar16);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772cb4);
    *(undefined **)((long)puVar1 + (long)_DAT_112772cb4) = puVar3;
    _objc_release(uVar16);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772cb8) = param_27;
    puVar12 = puVar1;
    func_0x00010bdd9f40();
    *(char *)((long)puVar1 + (long)_DAT_112772cbc) = (char)puVar12;
    puVar3 = PTR_PTR_1126d8b68;
    _objc_alloc();
    func_0x00010c007f80();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772cc0);
    *(undefined **)((long)puVar1 + (long)_DAT_112772cc0) = puVar3;
    _objc_release(uVar16);
    lVar14 = (long)_DAT_112772cc4;
    _objc_retain(param_15);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_15;
    _objc_release(uVar16);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(&uStack_c8);
  }
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar10 + 4);
  _objc_destroyWeak(&uStack_c8);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf623f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_customStoryMembersScopeLauncher_1125b62a0);
  return puVar4;
}



/* Entry: 107fc4104; end: 107fc4113;  */

void FUN_107fc4104(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf623f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_customStoryMembersScopeLauncher_1125b62a0);
  return;
}



/* Entry: 107fc4114; end: 107fc4163;  */

void FUN_107fc4114(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6b840(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fc4164; end: 107fc435b; -[SCStoryQuickPostView selectBusinessProfileStoryOrHostedStory:recentlyPostedToMyStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107fc4164(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *unaff_x22;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_178 [8];
  undefined1 uStack_170;
  undefined1 auStack_168 [8];
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_4;
  _objc_retain(param_3);
  uVar8 = (undefined1)uVar9;
  if (param_3 == (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x22 = *(undefined1 **)(param_1 + _DAT_112772cc8);
    _objc_retain(unaff_x22);
    uVar8 = SUB81(auStack_f0,0);
    puVar10 = unaff_x22;
    func_0x00010bf52a60();
    if (puVar10 != (undefined1 *)0x0) {
      lVar11 = *plStack_120;
      do {
        puVar12 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(unaff_x22);
          }
          puVar2 = *(undefined1 **)(lStack_128 + (long)puVar12 * 8);
          lVar3 = param_1;
          func_0x00010c24d8a0();
          puVar4 = puVar2;
          func_0x00010c074e40();
          if ((int)puVar4 != 0) {
            puVar4 = puVar2;
            func_0x00010c1164a0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_1;
            func_0x00010be441a0();
            _objc_release(puVar4);
            puVar4 = unaff_x22;
            if ((((uint)lVar3 | (uint)lVar5 ^ 0xffffffff) & 1) != 0) goto LAB_107fc42cc;
          }
          puVar12 = puVar12 + 1;
        } while (puVar10 != puVar12);
        uVar8 = SUB81(auStack_f0,0);
        puVar10 = unaff_x22;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined1 *)0x0);
    }
    _objc_release(unaff_x22);
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + _DAT_112772c8c);
    puVar7 = (undefined8 *)param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
LAB_107fc42cc:
      uVar8 = 0;
      func_0x00010be00200(param_1);
      _objc_release(puVar4);
      unaff_x22 = (undefined1 *)(long)_DAT_112772cb0;
      uVar6 = *(ulong *)(unaff_x22 + param_1);
      func_0x00010c2588a0();
      if ((uVar6 & 1) == 0) {
        bVar1 = (byte)*(undefined8 *)(unaff_x22 + param_1);
        func_0x00010c258a80();
      }
      else {
        bVar1 = 1;
      }
      *(byte *)(param_1 + _DAT_112772cbc) = (byte)param_4 & bVar1;
      puVar10 = (undefined1 *)0x1;
      goto LAB_107fc4314;
    }
  }
  puVar2 = (undefined1 *)puVar7;
  puVar10 = (undefined1 *)0x0;
LAB_107fc4314:
  puVar12 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_107fc435c;
    puStack_160 = unaff_x22;
    uStack_158 = param_4;
    puStack_150 = puVar10;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    puVar10 = puVar2;
    func_0x00010bf529e0();
    if (puVar10 != (undefined1 *)0x0) {
      _objc_initWeak(auStack_168,puVar12);
      _objc_copyWeak(auStack_178,auStack_168);
      _objc_retain(puVar2);
      uStack_170 = uVar8;
      func_0x00010beea120(puVar12);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_178);
      _objc_destroyWeak(auStack_168);
    }
    _objc_release(puVar2);
    return puVar2;
  }
  return puVar10;
}



/* Entry: 107fc435c; end: 107fc4443; -[SCStoryQuickPostView preSelectVisibleCustomStoriesWithPublicationIds:myStoryRecentlyPosted:] */

void FUN_107fc435c(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_40 = param_4;
    func_0x00010beea120(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107fc4444; end: 107fc449b;  */

void FUN_107fc4444(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9dcc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc449c; end: 107fc4703; -[SCStoryQuickPostView showFirstTimePrivateStoryPreselectionModalIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc449c(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010be08f60();
  if (((int)puVar1 != 0) && (param_1[_DAT_112772c20] == '\x01')) {
    lVar12 = (long)_DAT_112772c78;
    puVar1 = param_1 + lVar12;
    _objc_loadWeakRetained();
    if (puVar1 != (undefined *)0x0) {
      lVar11 = (long)_DAT_112772c3c;
      uVar2 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar2;
      func_0x00010c22f9e0();
      _objc_release(uVar2);
      _objc_release();
      if ((int)uVar10 != 0) {
        puVar1 = PTR_PTR_1126aead8;
        _objc_alloc();
        puVar3 = param_1 + lVar12;
        _objc_loadWeakRetained(puVar3);
        func_0x00010c038f40();
        _objc_release(puVar3);
        uVar10 = *(undefined8 *)(param_1 + lVar11);
        _objc_retain(uVar10);
        puVar3 = PTR_PTR_1126aed70;
        ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar1);
        _objc_retain(uVar10);
        func_0x00010beff480();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        puVar5 = PTR_PTR_1126aed78;
        _objc_alloc(PTR_PTR_1126aed78);
        puVar6 = puVar5;
        func_0x000108065044();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010806505c();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c052ec0(puVar5);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        func_0x00010bf0c980(puVar1);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar1);
        _objc_release(uVar10);
        _objc_release(uVar10);
        _objc_release();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa2c0();
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x28),PTR_s_detachUI__1125b96b8,0)
  ;
  return;
}



/* Entry: 107fc4704; end: 107fc4747;  */

void FUN_107fc4704(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa2c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 107fc4748; end: 107fc474b; -[SCStoryQuickPostView layoutSubviews] */

void FUN_107fc4748(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 107fc474c; end: 107fc4797; -[SCStoryQuickPostView didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc474c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && ((*(byte *)(param_1 + _DAT_112772ccc) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112772ccc) = 1;
  }
  return;
}



/* Entry: 107fc4798; end: 107fc47e7; -[SCStoryQuickPostView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc4798(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_112772c9c));
  puStack_28 = PTR_PTR_1126fbfe8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107fc47e8; end: 107fc4a43; -[SCStoryQuickPostView setTopicsCollection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc47e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112772cd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112772c40));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112772c44));
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c15a2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107fc4a44;
  puStack_88 = &UNK_110842c58;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c0ee460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc4a44; end: 107fc4a6f;  */

void FUN_107fc4a44(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be887c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc4a70; end: 107fc4b3b;  */

void FUN_107fc4a70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c260ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0fd560(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010bf51e00(uVar1);
  _objc_release(uVar1);
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bee0860();
  _objc_release(lVar4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc8e0();
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fc4b3c; end: 107fc4bef; -[SCStoryQuickPostView _updateSpotlightSubtext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc4b3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112772c80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c073920();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      func_0x000108f5836c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f583e4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bea7dc0(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bea7dc0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fc4bf0; end: 107fc4dbb; -[SCStoryQuickPostView _updateOurStoryDisplayNameAndSubtextWithPlaceTag:placeTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc4bf0(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x000108f580b4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  lVar6 = param_4;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    lVar6 = param_3;
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      func_0x000108f57e44();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      lVar6 = param_3;
    }
  }
  else {
    func_0x000108f580fc();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010bebce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar5 = (long)_DAT_112772c50;
  lVar6 = lVar1;
  func_0x00010c0720c0();
  if (((int)lVar6 == 0) || (uVar3 = uVar2, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
    _objc_retain(lVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar1;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112772c84;
    _objc_retain(uVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107fc4dbc;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_80);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc4dbc; end: 107fc4de7;  */

void FUN_107fc4dbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc4de8; end: 107fc4f83; -[SCStoryQuickPostView _selectVisibleCustomStoryIdsIfNecessary:customStoryIdsToSelect:myStoryRecentlyPosted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc4de8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107fc4f84;
  puStack_70 = &UNK_110856a28;
  _objc_retain(param_3);
  uVar1 = param_4;
  lStack_68 = param_3;
  func_0x0001006372a4(param_4,&puStack_88);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_90,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112772c60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x21;
    _dispatch_get_global_queue(0x21,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_90);
    uStack_98 = param_5;
    func_0x00010bf62520(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(uVar1);
  _objc_release(lStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc4f84; end: 107fc4f8f;  */

void FUN_107fc4f84(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}


