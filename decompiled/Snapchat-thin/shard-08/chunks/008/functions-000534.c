/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066151ec; end: 10661586f;  */

undefined **
FUN_1066151ec(undefined **param_1,undefined **param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined **unaff_x27;
  undefined1 *puVar19;
  long lVar20;
  undefined *puStack_408;
  undefined8 uStack_400;
  code *pcStack_3f8;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_2a0;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_2;
  ppuStack_1f8 = param_1;
  _objc_retain();
  _objc_retain(param_2);
  uStack_210 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_200 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = param_4;
  puStack_220 = param_4;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  puVar2 = puVar15;
  puStack_228 = puVar15;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    puVar15 = (undefined *)*puStack_1a0;
    do {
      param_4 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_1a0 != puVar15) {
          _objc_enumerationMutation(puVar2);
        }
        lVar16 = *(long *)(lStack_1a8 + (long)param_4 * 8);
        lVar14 = lVar16;
        func_0x00010c24cfc0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar14;
        func_0x00010c08fa60();
        _objc_release(lVar14);
        if (lVar18 != 0) {
          func_0x00010c24cfc0(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(lVar16);
        }
        param_4 = param_4 + 1;
      } while (puVar3 != param_4);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      unaff_x27 = (undefined **)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuVar17 = param_2;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar17;
  func_0x00010bf529e0();
  func_0x00010bf529e0(uStack_210);
  ppuVar5 = ppuVar7;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_208 = ppuVar5;
  _objc_release(ppuVar17);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  ppuVar5 = param_2;
  ppuStack_218 = param_2;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = auStack_170;
  lVar14 = 0x10;
  ppuVar6 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    param_2 = (undefined **)*puStack_1e0;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1e0 != param_2) {
          _objc_enumerationMutation(ppuVar5);
        }
        ppuVar17 = *(undefined ***)(lStack_1e8 + (long)unaff_x27 * 8);
        ppuVar4 = ppuVar17;
        func_0x00010c24cfc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar4;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        param_4 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = param_4;
        func_0x00010c067fc0();
        _objc_release(param_4);
        if (puVar15 != (undefined *)0x2) {
          ppuVar8 = ppuVar17;
          func_0x00010c24cfc0(ppuVar17);
          _objc_retainAutoreleasedReturnValue();
          param_4 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar8);
          puVar15 = param_4;
          ppuVar8 = ppuVar17;
          FUN_10661ecc0(param_4,ppuVar17,ppuStack_1f8,uStack_200);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuStack_208);
          _objc_release(puVar15);
          _objc_release(param_4);
        }
        _objc_release(ppuVar7);
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar6 != unaff_x27);
      puVar13 = auStack_170;
      lVar14 = 0x10;
      ppuVar6 = ppuVar5;
      func_0x00010bf52a60();
      ppuVar4 = (undefined **)0x0;
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  _objc_release(puStack_228);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(uStack_200);
  _objc_release(puStack_220);
  _objc_release(uStack_210);
  _objc_release(ppuStack_218);
  ppuVar6 = ppuStack_1f8;
  _objc_release();
  ppuVar12 = ppuStack_208;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_238 = 0x1066155c8;
    lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_290 = ppuVar5;
    ppuStack_288 = unaff_x27;
    ppuStack_280 = ppuVar4;
    puStack_278 = puVar1;
    puStack_270 = param_6;
    ppuStack_268 = param_2;
    ppuStack_260 = ppuVar17;
    ppuStack_258 = ppuVar7;
    puStack_250 = param_4;
    puStack_248 = puVar15;
    puStack_240 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(ppuVar8);
    _objc_retain(puVar13);
    _objc_retain(lVar14);
    _objc_retain(lStack_230);
    lStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    plStack_3d0 = (long *)0x0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    puVar9 = puVar13;
    func_0x00010bf52a60();
    if (puVar9 != (undefined1 *)0x0) {
      lVar18 = *plStack_3d0;
      do {
        puVar19 = (undefined1 *)0x0;
        do {
          if (*plStack_3d0 != lVar18) {
            _objc_enumerationMutation(puVar13);
          }
          lVar16 = lStack_230;
          (**(code **)(lStack_230 + 0x10))
                    (lStack_230,*(undefined8 *)(lStack_3d8 + (long)puVar19 * 8),ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          if (lVar16 != 0) {
            func_0x00010befa120(ppuVar6);
          }
          _objc_release(lVar16);
          puVar19 = puVar19 + 1;
        } while (puVar9 != puVar19);
        puVar9 = puVar13;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined1 *)0x0);
    }
    puStack_408 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_400 = 0xc2000000;
    pcStack_3f8 = FUN_106615870;
    puStack_3f0 = &UNK_11092fb30;
    _objc_retain(ppuVar8);
    ppuVar4 = &puStack_408;
    lVar10 = lVar14;
    ppuStack_3e8 = ppuVar8;
    func_0x0001006372a4(lVar14,ppuVar4);
    _objc_retain();
    lVar18 = lVar10;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (lVar18 != 0) {
      lVar20 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lVar10);
        }
        lVar11 = *(long *)(lVar20 * 8);
        ppuVar4 = ppuVar8;
        func_0x00010661f6e4(lVar11,ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 != 0) {
          func_0x00010befa120(ppuVar6);
        }
        _objc_release(lVar11);
        lVar20 = lVar20 + 1;
      } while (lVar18 != lVar20);
      lVar18 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    func_0x00010c246ca0(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(ppuStack_3e8);
    _objc_release(lStack_230);
    _objc_release(lVar14);
    _objc_release(puVar13);
    _objc_release(ppuVar8);
    _objc_release();
    ppuVar12 = ppuVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a0) {
      ___stack_chk_fail();
      func_0x00010bf24ec0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar4;
      func_0x00010c0720c0();
      _objc_release(ppuVar4);
      return ppuVar8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return ppuVar12;
}



/* Entry: 106615870; end: 1066158b7;  */

undefined8 FUN_106615870(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf24ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1066158b8; end: 1066159e7;  */

long FUN_1066158b8(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = param_2;
  func_0x00010c079ce0();
  lVar2 = param_3;
  func_0x00010c079ce0();
  if ((int)lVar4 == (int)lVar2) {
    lVar4 = param_2;
    func_0x00010c07d320();
    lVar2 = param_3;
    func_0x00010c07d320();
    lVar3 = param_2;
    func_0x00010c07d320();
    iVar1 = (int)lVar3;
    if ((int)lVar4 == (int)lVar2) {
      if ((iVar1 == 0) || (lVar4 = param_3, func_0x00010c07d320(), (int)lVar4 == 0)) {
        lVar4 = param_3;
        func_0x00010c2709c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_2;
      }
      else {
        lVar4 = param_2;
        func_0x00010c2709c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
      }
      func_0x00010c2709c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bf433a0(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar4);
      goto LAB_1066159c0;
    }
    lVar4 = 1;
  }
  else {
    lVar4 = param_2;
    func_0x00010c079ce0();
    iVar1 = (int)lVar4;
    lVar4 = -1;
  }
  lVar3 = -lVar4;
  if (iVar1 != 0) {
    lVar3 = lVar4;
  }
LAB_1066159c0:
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 1066159e8; end: 106615bd3;  */

void FUN_1066159e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0ef0;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      puVar7 = puVar2;
      func_0x00010c259c60(puVar2);
      puVar3 = PTR_PTR_1126b1118;
      _objc_alloc(PTR_PTR_1126b1118);
      puVar4 = puVar7;
      func_0x000108f53fe8(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043160(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126b0ef8;
      _objc_alloc(PTR_PTR_1126b0ef8);
      func_0x00010c03ef40();
      puVar5 = puVar2;
      func_0x000108482f84(puVar2,puVar4,0,0,0,0,0,puVar7,0,0,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar3;
        func_0x000108481f00(puVar3,0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x000108481fac(puVar5,puVar6,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106615bd4; end: 106615e47; -[SCMyUnifiedProfileSectionCreator initWithImageDownloader:userSession:myStoriesServices:profileTooltipsService:snapProActionHandler:circumstanceEngine:storiesSnapReadReceiptService:storyDraftingServices:storyCardFetcher:discoverFeedDataFetcher:toggleCollapseEventObservable:nativeStoryClientModelGenerator:] */

undefined8 *
FUN_106615bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f2170;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106615e48; end: 10661603b; -[SCMyUnifiedProfileSectionCreator sectionForDescriptor:] */

void FUN_106615e48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1220;
  _objc_opt_class(PTR_PTR_1126b1220);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar4 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
    uVar4 = uVar1;
  }
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cc260;
  if ((int)uVar3 == 0) {
    uVar1 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bebd020(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar3 = uVar1;
    func_0x00010bf24ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bfe0000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bebd060(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10661603c; end: 10661618f; -[SCMyUnifiedProfileSectionCreator _snapProInsightsSection] */

void FUN_10661603c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e56eb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e56eb8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b1100;
  _objc_alloc();
  ppuVar2 = ppuVar1;
  func_0x000108f728c0(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043040();
  _objc_release(ppuVar2);
  puVar3 = PTR_PTR_1126b1108;
  _objc_alloc();
  func_0x00010c04f820();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f12238;
  pppuVar9 = &ppuStack_48;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar3);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126cc268;
  _objc_opt_new();
  puVar8 = puVar7;
  func_0x00010c1f9240(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(pppuVar9);
    _objc_retain(puVar8);
    pppuVar4 = pppuVar9;
    func_0x00010c08fa60();
    if (pppuVar4 == (undefined ***)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126b1100;
      _objc_alloc();
      pppuVar4 = pppuVar9;
      func_0x000108f728c0(pppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043040();
      _objc_release(pppuVar4);
    }
    puVar3 = PTR_PTR_1126cc270;
    _objc_alloc(PTR_PTR_1126cc270);
    func_0x00010c04f840();
    func_0x00010c19e8a0();
    puVar5 = ppuVar1[3];
    func_0x00010c0d4b00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc278;
    _objc_alloc(PTR_PTR_1126cc278);
    ppuVar2 = ppuVar1 + 2;
    _objc_loadWeakRetained(ppuVar2);
    puVar7 = ppuVar1[7];
    func_0x00010c2598a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b140(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar2);
    puVar7 = ppuVar1[5];
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(puVar7);
    func_0x00010c1f9240(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar10);
    _objc_release(pppuVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106616190; end: 106616363; -[SCMyUnifiedProfileSectionCreator _snapProSectionForBusinessId:headerText:] */

void FUN_106616190(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126b1100;
    _objc_alloc();
    lVar2 = param_4;
    func_0x000108f728c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040(puVar7,param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126cc270;
  _objc_alloc(PTR_PTR_1126cc270);
  func_0x00010c04f840();
  func_0x00010c19e8a0();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d4b00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cc278;
  _objc_alloc(PTR_PTR_1126cc278);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2598a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b140(puVar5,param_2,param_3,lVar2,uVar4,uVar9,uVar10,uVar8,uVar1,uVar6,
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar6);
  func_0x00010c1f9240(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106616364; end: 1066163fb; -[SCMyUnifiedProfileSectionCreator .cxx_destruct] */

void FUN_106616364(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066163fc; end: 106616537; -[SCMyUnifiedProfileSectionDescriptorProvider initWithUserSession:snapProServices:circumstanceEngine:actionHandler:ourStoriesAttributionManager:] */

undefined1 *
FUN_1066163fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2178;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cc280;
    _objc_alloc();
    func_0x00010c05e540();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106616538; end: 10661669b; -[SCMyUnifiedProfileSectionDescriptorProvider fetchSectionDescriptors:updateReason:updatingQueue:] */

void FUN_106616538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c155be0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf529e0();
  if (uVar5 < 2) {
    uVar5 = 0;
  }
  else {
    func_0x00010bf529e0(uVar2);
    uVar5 = uVar2;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar5;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    uVar4 = 0x1a;
    FUN_10663970c(0x1a,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(uVar4);
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10661669c;
  puStack_58 = &UNK_11084aaa8;
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010007380c(param_5,&puStack_70);
  _objc_release(puStack_50);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 10661669c; end: 1066166e7;  */

void FUN_10661669c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1066166e8; end: 10661671f; -[SCMyUnifiedProfileSectionDescriptorProvider snapProSectionDescriptorProviderDidUpdateSectionDesciptors:] */

void FUN_1066166e8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106616720; end: 106616763; -[SCMyUnifiedProfileSectionDescriptorProvider _reloadSectionWithUpdateReason:] */

void FUN_106616720(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106616764; end: 10661677b; -[SCMyUnifiedProfileSectionDescriptorProvider delegate] */

void FUN_106616764(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10661677c; end: 106616787; -[SCMyUnifiedProfileSectionDescriptorProvider setDelegate:] */

void FUN_10661677c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106616788; end: 1066167d7; -[SCMyUnifiedProfileSectionDescriptorProvider .cxx_destruct] */

void FUN_106616788(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066167d8; end: 106616b33; -[SCMyUnifiedProfileSnapProActionHandler initWithUserSession:navigationDelegate:ourStoriesAttributionManager:myStoriesDataCoordinator:publicStoryStateObserver:snapProProfilesProvider:circumstanceEngine:profileOnboardingScopeExposer:httpMetadataService:httpRequestModifier:storyCardFetcher:profileManagementScopeExposer:storyDraftingDataCoordinator:storiesMediaCoordinator:toggleCollapseEventSubject:storyPlayerCreator:] */

undefined8 *
FUN_1066167d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain();
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126f2180;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_10);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106616b34; end: 106616b3f; +[SCMyUnifiedProfileSnapProActionHandler announcerIdentifier] */

undefined ** FUN_106616b34(void)

{
  return &PTR____CFConstantStringClassReference_110e56ed8;
}



/* Entry: 106616b40; end: 106616b47; -[SCMyUnifiedProfileSnapProActionHandler addListener:] */

void FUN_106616b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106616b48; end: 106616b6f; -[SCMyUnifiedProfileSnapProActionHandler removeListener:] */

void FUN_106616b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106616b70; end: 106617cc3;  */

long FUN_106616b70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
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
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined1 *puVar71;
  undefined1 *puVar72;
  undefined1 *puVar73;
  undefined8 uVar74;
  undefined1 *puVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined1 auStack_180 [256];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar80 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar80 != 0) {
    lVar82 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar3 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067ec0();
      _objc_release(lVar3);
      if ((int)lVar4 == 2) {
        func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
      }
      lVar82 = lVar82 + 1;
    } while (lVar80 != lVar82);
    lVar80 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar80 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x40);
  uVar79 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  uVar76 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(lVar80);
  _objc_retain(lVar2);
  _objc_retain(uVar79);
  _objc_retain(uVar76);
  uVar74 = uVar76;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = lVar2;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar82;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar82);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar7 = lVar80;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = lVar7;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar82 != 0) {
    lVar81 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar7);
      }
      uVar78 = *(undefined8 *)(lVar81 * 8);
      func_0x00010c24cfc0(uVar78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar6);
      _objc_release(uVar78);
      lVar81 = lVar81 + 1;
    } while (lVar82 != lVar81);
    lVar82 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  uVar83 = 0;
  lVar7 = lVar4;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar75 = auStack_180;
  uVar78 = 0x10;
  lVar82 = lVar7;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar82 != 0) {
    lVar81 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar7);
      }
      uVar77 = *(undefined8 *)(lVar81 * 8);
      uVar78 = uVar77;
      func_0x00010c24cfc0(uVar77);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar78);
      uVar78 = uVar77;
      func_0x00010c24cfc0(uVar77);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(uVar78);
      puVar9 = puVar8;
      func_0x00010c241660();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf4cc60();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
      func_0x00010bf06820();
      _objc_retain(puVar11);
      _objc_retain(uVar74);
      _objc_retain(puVar8);
      _objc_retain(uVar77);
      puVar9 = puVar8;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126cc288;
      _objc_alloc();
      puVar12 = puVar9;
      func_0x00010c120680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar13 = puVar9;
      func_0x00010c120680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar14 = puVar9;
      func_0x00010c151b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar15 = puVar9;
      func_0x00010c25ac80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar16 = puVar9;
      func_0x00010c280780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar17 = puVar9;
      func_0x00010c280760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar18 = puVar9;
      func_0x00010c243e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar19 = puVar9;
      func_0x00010c2652a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar20 = puVar9;
      func_0x00010c264600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar21 = puVar9;
      func_0x00010c268fa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar22 = puVar9;
      func_0x00010c268dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar23 = puVar9;
      func_0x00010bf1fa00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar24 = puVar9;
      func_0x00010c22c540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar25 = puVar9;
      func_0x00010c260680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar26 = puVar9;
      func_0x00010c0f2a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar27 = puVar9;
      func_0x00010c0f2a00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar28 = puVar9;
      func_0x00010bf41960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      puVar29 = puVar9;
      func_0x00010bf41900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      func_0x00010c01e400(puVar10);
      _objc_release(puVar29);
      _objc_release(puVar28);
      _objc_release(puVar27);
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      uVar78 = uVar77;
      func_0x00010c241220(uVar77);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar74);
      _objc_release(uVar78);
      func_0x00010bf6b200();
      puVar12 = PTR_PTR_1126cc290;
      _objc_alloc();
      func_0x00010c07d060(puVar8);
      _objc_release(puVar8);
      uVar78 = uVar77;
      func_0x00010c0b8260(uVar77);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar77);
      uVar30 = uVar78;
      func_0x00010c14aea0(uVar78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0480e0();
      _objc_release(puVar11);
      _objc_release(uVar30);
      _objc_release(uVar78);
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126cbc90;
      _objc_alloc();
      uVar78 = uVar77;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar30 = uVar77;
      func_0x00010c24cfc0();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = uVar77;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = uVar77;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      uVar33 = uVar77;
      func_0x00010c0c5480();
      _objc_retainAutoreleasedReturnValue();
      uVar34 = uVar77;
      func_0x00010c0c6e00();
      _objc_retainAutoreleasedReturnValue();
      uVar35 = uVar77;
      func_0x00010c29b560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25c7c0();
      func_0x00010bf8b160(uVar77);
      uVar84 = uVar83;
      func_0x00010c083e00();
      func_0x00010c075780();
      uVar36 = uVar77;
      func_0x00010bf0d6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20();
      func_0x00010c247d20();
      uVar37 = uVar77;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar38 = uVar77;
      func_0x00010c261180();
      _objc_retainAutoreleasedReturnValue();
      uVar39 = uVar77;
      func_0x00010bf85780();
      _objc_retainAutoreleasedReturnValue();
      uVar40 = uVar77;
      func_0x00010bf5aac0();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = uVar77;
      func_0x00010bf9c800();
      _objc_retainAutoreleasedReturnValue();
      uVar42 = uVar77;
      func_0x00010bf66200();
      _objc_retainAutoreleasedReturnValue();
      uVar43 = uVar77;
      func_0x00010bf5b480();
      _objc_retainAutoreleasedReturnValue();
      uVar44 = uVar77;
      func_0x00010c0fc8c0();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar77;
      func_0x00010c0922e0();
      _objc_retainAutoreleasedReturnValue();
      uVar46 = uVar77;
      func_0x00010bf10000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd8560();
      uVar47 = uVar77;
      func_0x00010bf4e860();
      _objc_retainAutoreleasedReturnValue();
      uVar48 = uVar77;
      func_0x00010bf93ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar49 = uVar77;
      func_0x00010c15ece0();
      _objc_retainAutoreleasedReturnValue();
      uVar50 = uVar77;
      func_0x00010bf1f000();
      _objc_retainAutoreleasedReturnValue();
      uVar51 = uVar77;
      func_0x00010bf1f0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar52 = uVar77;
      func_0x00010bf1ee40();
      _objc_retainAutoreleasedReturnValue();
      uVar53 = uVar77;
      func_0x00010bf1ef80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06c9e0();
      func_0x00010bf20ec0();
      func_0x00010bfbe4e0();
      uVar54 = uVar77;
      func_0x00010bf4bf60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15e560();
      uVar55 = uVar77;
      func_0x00010bf1f720();
      _objc_retainAutoreleasedReturnValue();
      uVar56 = uVar77;
      func_0x00010c24b260();
      _objc_retainAutoreleasedReturnValue();
      uVar57 = uVar77;
      func_0x00010c24c480();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c141c40();
      uVar58 = uVar77;
      func_0x00010c243cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar59 = uVar77;
      func_0x00010bf1f2a0();
      _objc_retainAutoreleasedReturnValue();
      uVar60 = uVar77;
      func_0x00010bfb26c0();
      _objc_retainAutoreleasedReturnValue();
      uVar61 = uVar77;
      func_0x00010c23fd60();
      _objc_retainAutoreleasedReturnValue();
      uVar62 = uVar77;
      func_0x00010c24a0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar63 = uVar77;
      func_0x00010befe1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08a7a0(uVar77);
      uVar64 = uVar77;
      func_0x00010bf28a40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24be20();
      func_0x00010c079800();
      func_0x00010c14ede0();
      uVar65 = uVar77;
      func_0x00010c241560();
      _objc_retainAutoreleasedReturnValue();
      uVar66 = uVar77;
      func_0x00010c2436c0();
      _objc_retainAutoreleasedReturnValue();
      uVar67 = uVar77;
      func_0x00010c0d2260();
      _objc_retainAutoreleasedReturnValue();
      uVar68 = uVar77;
      func_0x00010c0c5b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b820();
      uVar69 = uVar77;
      func_0x00010bfeb4a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbafa0();
      func_0x00010c2621c0();
      func_0x00010c1029e0();
      uVar70 = uVar77;
      func_0x00010c25b0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ebe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047dc0(uVar83,uVar84);
      _objc_release(uVar77);
      _objc_release(uVar70);
      _objc_release(uVar69);
      _objc_release(uVar68);
      _objc_release(uVar67);
      _objc_release(uVar66);
      _objc_release(uVar65);
      _objc_release(uVar64);
      _objc_release(uVar63);
      _objc_release(uVar62);
      _objc_release(uVar61);
      _objc_release(uVar60);
      _objc_release(uVar59);
      _objc_release(uVar58);
      _objc_release(uVar57);
      _objc_release(uVar56);
      _objc_release(uVar55);
      _objc_release(uVar54);
      _objc_release(uVar53);
      _objc_release(uVar52);
      _objc_release(uVar51);
      _objc_release(uVar50);
      _objc_release(uVar49);
      _objc_release(uVar48);
      _objc_release(uVar47);
      _objc_release(uVar46);
      _objc_release(uVar45);
      _objc_release(uVar44);
      _objc_release(uVar43);
      _objc_release(uVar42);
      _objc_release(uVar41);
      _objc_release(uVar40);
      _objc_release(uVar39);
      _objc_release(uVar38);
      _objc_release(uVar37);
      _objc_release(uVar36);
      _objc_release(uVar35);
      _objc_release(uVar34);
      _objc_release(uVar33);
      _objc_release(uVar32);
      _objc_release(uVar31);
      _objc_release(uVar30);
      _objc_release(uVar78);
      func_0x00010befa120(puVar5);
      _objc_release(puVar9);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar8);
      lVar81 = lVar81 + 1;
    } while (lVar82 != lVar81);
    puVar75 = auStack_180;
    uVar78 = 0x10;
    lVar82 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar9 = PTR_PTR_1126c6d80;
  func_0x00010bf81c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9a60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c6d78;
  func_0x00010bf82080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c6d88;
  puVar11 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11abc0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba3c0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar11);
  puVar8 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(uVar74);
  _objc_release(uVar76);
  _objc_release(uVar79);
  _objc_release(lVar2);
  _objc_release(lVar80);
  (**(code **)(lVar1 + 0x10))(lVar1,puVar8);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar75);
  _objc_retain(uVar78);
  puVar71 = puVar75;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar72 = puVar71;
  func_0x00010c0720c0();
  _objc_release(puVar71);
  if (((ulong)puVar72 & 1) != 0) {
LAB_106617d2c:
    lVar80 = 0;
    goto LAB_106617ec4;
  }
  puVar71 = puVar75;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar72 = puVar71;
  func_0x00010c0720c0();
  _objc_release(puVar71);
  if ((int)puVar72 == 0) {
    puVar71 = puVar75;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar72 = puVar71;
    func_0x00010c0720c0();
    if ((int)puVar72 != 0) {
      _objc_release(puVar71);
LAB_106617e28:
      puVar71 = puVar75;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar72 = puVar71;
      func_0x00010c0720c0();
      _objc_release(puVar71);
      if ((int)puVar72 != 0) {
        func_0x000108f376e4(*(undefined8 *)(param_2 + 0x98),1);
      }
      puVar72 = puVar75;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cc298;
      _objc_opt_class(PTR_PTR_1126cc298);
      puVar73 = puVar72;
      _objc_opt_isKindOfClass(puVar72,puVar5);
      puVar71 = puVar72;
      if (((ulong)puVar73 & 1) == 0) {
        puVar71 = (undefined1 *)0x0;
      }
      _objc_retain(puVar71);
      _objc_release(puVar72);
      if (puVar71 != (undefined1 *)0x0) {
        func_0x00010be747a0(param_2);
      }
      goto LAB_106617ebc;
    }
    puVar72 = puVar75;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar73 = puVar72;
    func_0x00010c0720c0();
    _objc_release(puVar72);
    _objc_release(puVar71);
    if ((int)puVar73 != 0) goto LAB_106617e28;
    puVar71 = puVar75;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar72 = puVar71;
    func_0x00010c0720c0();
    _objc_release(puVar71);
    if ((int)puVar72 != 0) {
      puVar72 = puVar75;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar73 = puVar72;
      _objc_opt_isKindOfClass(puVar72,puVar5);
      puVar71 = puVar72;
      if (((ulong)puVar73 & 1) == 0) {
        puVar71 = (undefined1 *)0x0;
      }
      _objc_retain(puVar71);
      _objc_release(puVar72);
      puVar72 = puVar71;
      func_0x00010c08fa60();
      if (puVar72 != (undefined1 *)0x0) {
        func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x90));
      }
      goto LAB_106617ebc;
    }
    puVar71 = puVar75;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar72 = puVar71;
    func_0x00010c0720c0();
    _objc_release(puVar71);
    if ((int)puVar72 != 0) {
      lVar80 = 1;
      func_0x00010be7cf40(param_2);
      goto LAB_106617ec4;
    }
    puVar71 = puVar75;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar72 = puVar71;
    func_0x00010c0720c0();
    _objc_release(puVar71);
    if ((int)puVar72 == 0) {
      puVar71 = puVar75;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar72 = puVar71;
      func_0x00010c0720c0();
      _objc_release(puVar71);
      if ((int)puVar72 != 0) {
        lVar80 = 1;
        func_0x000108f373ac(*(undefined8 *)(param_2 + 0x98),1);
        puVar72 = puVar75;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar73 = puVar72;
        _objc_opt_isKindOfClass(puVar72,puVar5);
        puVar71 = puVar72;
        if (((ulong)puVar73 & 1) == 0) {
          puVar71 = (undefined1 *)0x0;
        }
        _objc_retain(puVar71);
        _objc_release(puVar72);
        uVar74 = *(undefined8 *)(param_2 + 0x28);
        func_0x00010c269d40(uVar74);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13fa00();
        _objc_release(puVar71);
        _objc_release(uVar74);
        goto LAB_106617ec4;
      }
      puVar71 = puVar75;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar72 = puVar71;
      func_0x00010c0720c0();
      _objc_release(puVar71);
      if ((int)puVar72 == 0) {
        puVar71 = puVar75;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar72 = puVar71;
        func_0x00010c0720c0();
        _objc_release(puVar71);
        if ((int)puVar72 == 0) {
          puVar71 = puVar75;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar72 = puVar71;
          func_0x00010c0720c0();
          _objc_release(puVar71);
          if ((int)puVar72 == 0) goto LAB_106617d2c;
          puVar72 = puVar75;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126cc2a0;
          _objc_opt_class(PTR_PTR_1126cc2a0);
          puVar73 = puVar72;
          _objc_opt_isKindOfClass(puVar72,puVar5);
          puVar71 = puVar72;
          if (((ulong)puVar73 & 1) == 0) {
            puVar71 = (undefined1 *)0x0;
          }
          _objc_retain(puVar71);
          _objc_release(puVar72);
          func_0x00010be7e4a0(param_2);
          goto LAB_106617ebc;
        }
        func_0x00010be3f440();
      }
    }
    func_0x00010be7cf40(param_2);
  }
  else {
    puVar72 = puVar75;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar73 = puVar72;
    _objc_opt_isKindOfClass(puVar72,puVar5);
    puVar71 = puVar72;
    if (((ulong)puVar73 & 1) == 0) {
      puVar71 = (undefined1 *)0x0;
    }
    _objc_retain(puVar71);
    _objc_release(puVar72);
    puVar72 = puVar71;
    func_0x00010c08fa60();
    if (puVar72 != (undefined1 *)0x0) {
      func_0x00010beb9c40(param_2);
    }
LAB_106617ebc:
    _objc_release(puVar71);
  }
  lVar80 = 1;
LAB_106617ec4:
  _objc_release(uVar78);
  _objc_release(puVar75);
  return lVar80;
}



/* Entry: 106617cc4; end: 1066181bb; -[SCMyUnifiedProfileSnapProActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_106617cc4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
LAB_106617d2c:
    uVar6 = 0;
    goto LAB_106617ec4;
  }
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 != 0) {
      _objc_release(uVar1);
LAB_106617e28:
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x000108f376e4(*(undefined8 *)(param_1 + 0x98),1);
      }
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cc298;
      _objc_opt_class(PTR_PTR_1126cc298);
      uVar3 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar5);
      uVar1 = uVar2;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      if (uVar1 != 0) {
        func_0x00010be747a0(param_1);
      }
      goto LAB_106617ebc;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) goto LAB_106617e28;
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar3 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar5);
      uVar1 = uVar2;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010c08fa60();
      if (uVar2 != 0) {
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
      }
      goto LAB_106617ebc;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar6 = 1;
      func_0x00010be7cf40(param_1);
      goto LAB_106617ec4;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        uVar6 = 1;
        func_0x000108f373ac(*(undefined8 *)(param_1 + 0x98),1);
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar3 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar5);
        uVar1 = uVar2;
        if ((uVar3 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13fa00();
        _objc_release(uVar1);
        _objc_release(uVar4);
        goto LAB_106617ec4;
      }
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          uVar1 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0720c0();
          _objc_release(uVar1);
          if ((int)uVar2 == 0) goto LAB_106617d2c;
          uVar2 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126cc2a0;
          _objc_opt_class(PTR_PTR_1126cc2a0);
          uVar3 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar5);
          uVar1 = uVar2;
          if ((uVar3 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar2);
          func_0x00010be7e4a0(param_1);
          goto LAB_106617ebc;
        }
        func_0x00010be3f440();
      }
    }
    func_0x00010be7cf40(param_1);
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 != 0) {
      func_0x00010beb9c40(param_1);
    }
LAB_106617ebc:
    _objc_release(uVar1);
  }
  uVar6 = 1;
LAB_106617ec4:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 1066181bc; end: 10661820b; -[SCMyUnifiedProfileSnapProActionHandler _isCreatePublicProfileTooltipShown] */

void FUN_1066181bc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x0001005929c0();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c233ec0();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10661820c; end: 1066182ff; -[SCMyUnifiedProfileSnapProActionHandler _handlerForBusinessId:completion:] */

void FUN_10661820c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b7ee0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106618300;
  puStack_50 = &UNK_11092fc10;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010bfd3240(lVar2,param_2,param_3,1,&puStack_68);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106618300; end: 10661839f;  */

void FUN_106618300(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c2a14c0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1066183a0; end: 1066183bb;  */

void FUN_1066183a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066183b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1066183bc; end: 106618597; -[SCMyUnifiedProfileSnapProActionHandler _storyHandlerForBusinessId:completion:] */

void FUN_1066183bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106618450;
  puStack_40 = &UNK_11092fc40;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010be33900(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106618598; end: 10661860b; -[SCMyUnifiedProfileSnapProActionHandler _playManagedStoryForActionDataModel:baseView:] */

void FUN_106618598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000108f34fe8(uVar1,&PTR____CFConstantStringClassReference_110e56ef8,0,1);
  func_0x00010be747c0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10661860c; end: 106618737; -[SCMyUnifiedProfileSnapProActionHandler _playManagedStoryWithUnifiedPlayer:baseView:] */

void FUN_10661860c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf24ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bec49c0(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106618738; end: 106618b5f;  */

void FUN_106618738(long param_1,long param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_4;
  _objc_retain(param_2);
  if (param_4 == (undefined *)0x0) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar3 != 0) {
      lVar19 = param_2;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar19;
      func_0x00010c2592e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar19);
      lVar19 = lVar4;
      func_0x00010c08fa60();
      if (lVar19 != 0) {
        puVar5 = PTR_PTR_1126cc2a8;
        _objc_alloc_init();
        func_0x00010c1b2720();
        puVar6 = PTR_PTR_1126cc2b0;
        _objc_alloc();
        func_0x00010c0123a0();
        func_0x00010c195780();
        puVar7 = PTR_PTR_1126caff0;
        _objc_alloc();
        func_0x00010c01e460();
        puVar8 = PTR_PTR_1126b6408;
        _objc_opt_new();
        func_0x00010c16f460();
        func_0x00010c19afa0(puVar8);
        puVar9 = PTR_PTR_1126b6410;
        _objc_alloc();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c020580(0);
        _objc_release(puVar10);
        puVar11 = PTR_PTR_1126cc2b8;
        _objc_alloc();
        uVar12 = 0x56;
        func_0x00010baf2e2c(0x56);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04bc80();
        _objc_release(uVar12);
        func_0x00010c21d6a0(puVar11);
        func_0x00010c21d820(puVar11);
        puVar13 = PTR_PTR_1126cc2c0;
        _objc_opt_new();
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c241220(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1acd80(puVar13);
        _objc_release(uVar12);
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf24ec0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1745a0(puVar13);
        _objc_release(uVar12);
        func_0x00010c1ec500(puVar13);
        func_0x00010c1c1be0(puVar11);
        lVar19 = *(long *)(lVar3 + 0x58);
        if (lVar19 == 0) {
          uVar14 = *(undefined8 *)(lVar3 + 0xa0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar14;
          func_0x00010bf56860();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = *(undefined8 *)(lVar3 + 0x58);
          *(undefined8 *)(lVar3 + 0x58) = uVar12;
          _objc_release(uVar18);
          _objc_release(uVar14);
          lVar19 = lVar3 + 0xa8;
          _objc_loadWeakRetained(lVar19);
          func_0x00010c1e1580(*(undefined8 *)(lVar3 + 0x58));
          _objc_release(lVar19);
          func_0x00010c18e6c0(*(undefined8 *)(lVar3 + 0x58));
          func_0x00010c18b5e0(*(undefined8 *)(lVar3 + 0x58));
          lVar19 = *(long *)(lVar3 + 0x58);
        }
        puVar10 = PTR_DAT_1126a5540;
        _objc_retain(lVar19);
        lVar15 = lVar19;
        func_0x00010010fab4(lVar19,puVar10);
        lVar1 = lVar19;
        if ((int)lVar15 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar19);
        iVar2 = (int)*(undefined8 *)(lVar3 + 0x40);
        func_0x000108f485b4();
        if ((iVar2 != 0) && (lVar1 != 0)) {
          lVar15 = lVar3 + 8;
          _objc_loadWeakRetained(lVar15);
          lVar16 = lVar15;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf472a0(lVar19);
          _objc_release(lVar16);
          _objc_release(lVar15);
        }
        param_3 = puVar9;
        puVar10 = puVar11;
        func_0x00010c0fe6e0(*(undefined8 *)(lVar3 + 0x58));
        _objc_release(lVar1);
        _objc_release(puVar13);
        _objc_release(puVar11);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(puVar10);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  uStack_148 = 0x106616b50;
  uStack_140 = 0x106616b60;
  uStack_138 = 0;
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x3032000000;
  uStack_178 = 0x106616b50;
  uStack_170 = 0x106616b60;
  uStack_168 = 0;
  puVar7 = param_3;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar12 = *(undefined8 *)(param_2 + 0x80);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_106618e38;
  puStack_1a8 = &UNK_11092fca0;
  puStack_198 = &uStack_160;
  _objc_retain(puVar7);
  puStack_1a0 = puVar7;
  func_0x00010bfaa900(uVar12);
  _objc_release(uVar12);
  _dispatch_group_enter(puVar7);
  puVar8 = param_3;
  func_0x00010bf24ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar5;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_106618e98;
  puStack_1d8 = &UNK_11092fcd0;
  puStack_1c8 = &uStack_190;
  _objc_retain(puVar7);
  puStack_1d0 = puVar7;
  func_0x00010bec49c0(param_2);
  _objc_release(puVar8);
  _objc_initWeak(auStack_1f8,param_2);
  puStack_240 = puVar5;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_106618efc;
  puStack_228 = &UNK_11092fd00;
  _objc_copyWeak(auStack_200,auStack_1f8);
  puStack_208 = &uStack_160;
  puStack_220 = param_3;
  puStack_218 = puVar10;
  puStack_210 = &uStack_190;
  _objc_retain(puVar10);
  _objc_retain(param_3);
  func_0x000100bc0718(puVar7,PTR___dispatch_main_q_11034be20,&puStack_240);
  _objc_release(puStack_218);
  _objc_release(puStack_220);
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1a0);
  _objc_release(puVar7);
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_190,8);
  _objc_release(uStack_168);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
  _objc_release(puVar10);
  _objc_release(param_3);
  return;
}



/* Entry: 106618b60; end: 106618e37; -[SCMyUnifiedProfileSnapProActionHandler _playStoryCardWithInsightsLegacy:baseView:] */

void FUN_106618b60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  uStack_88 = 0x106616b50;
  uStack_80 = 0x106616b60;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  uStack_b8 = 0x106616b50;
  uStack_b0 = 0x106616b60;
  uStack_a8 = 0;
  uVar2 = param_3;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_106618e38;
  puStack_e8 = &UNK_11092fca0;
  puStack_d8 = &uStack_a0;
  _objc_retain(uVar2);
  uStack_e0 = uVar2;
  func_0x00010bfaa900(uVar4);
  _objc_release(uVar4);
  _dispatch_group_enter(uVar2);
  uVar4 = param_3;
  func_0x00010bf24ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106618e98;
  puStack_118 = &UNK_11092fcd0;
  puStack_108 = &uStack_d0;
  _objc_retain(uVar2);
  uStack_110 = uVar2;
  func_0x00010bec49c0(param_1);
  _objc_release(uVar4);
  _objc_initWeak(auStack_138,param_1);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_106618efc;
  puStack_168 = &UNK_11092fd00;
  _objc_copyWeak(auStack_140,auStack_138);
  puStack_148 = &uStack_a0;
  uStack_160 = param_3;
  uStack_158 = param_4;
  puStack_150 = &uStack_d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_180);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(uStack_110);
  _objc_release(uStack_e0);
  _objc_release(uVar2);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106618e38; end: 106618e97;  */

void FUN_106618e38(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106618e98; end: 106618efb;  */

void FUN_106618e98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_4 == 0) {
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c25a380();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106618efc; end: 10661921b;  */

void FUN_106618efc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10661921c;
    puStack_120 = &UNK_1108d3a80;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    lStack_118 = lVar1;
    _objc_retain(uVar11);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uStack_110 = uVar11;
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(lVar1 + 0x40);
    uStack_108 = uVar9;
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    _objc_initWeak(auStack_80,uVar2);
    _objc_retain(&puStack_138);
    _objc_retain(uVar10);
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    uStack_98 = 0x106616b50;
    uStack_90 = 0x106616b60;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = uVar7;
    puStack_88 = puVar3;
    func_0x00010c259560(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = uVar11;
    func_0x00010c245680(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x000100504554();
    _objc_release(uVar9);
    puVar5 = auStack_80;
    _objc_loadWeakRetained(puVar5);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_106616b70;
    puStack_e8 = &UNK_11092fbe0;
    puStack_b8 = &uStack_b0;
    _objc_retain(&puStack_138);
    ppuStack_c0 = &puStack_138;
    _objc_retain(uVar6);
    uStack_e0 = uVar6;
    _objc_retain(uVar7);
    uStack_d8 = uVar7;
    _objc_retain(uVar8);
    uStack_d0 = uVar8;
    _objc_retain(uVar10);
    uStack_c8 = uVar10;
    func_0x00010bf170c0(puVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar5);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(ppuStack_c0);
    _objc_release(uVar4);
    _objc_release(uVar11);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(puStack_88);
    _objc_release(uVar10);
    _objc_release(&puStack_138);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10661921c; end: 10661923f;  */

void FUN_10661921c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be74a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__playStoryForActionDataModel_sto_11257ac30,
               *(undefined8 *)(param_1 + 0x28),0,param_2,0,*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 106619240; end: 1066193c7; -[SCMyUnifiedProfileSnapProActionHandler _playStoryForActionDataModel:storyManifest:storyCard:businessProfile:baseView:] */

void FUN_106619240(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((*(long *)(param_1 + 0x58) == 0) && (param_4 != 0 || param_5 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf56860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar6;
    _objc_release(uVar5);
    _objc_release(uVar1);
    lVar2 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x58),param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c18e6c0(*(undefined8 *)(param_1 + 0x58),param_2,1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x58),param_2,param_1);
    if (param_5 != 0) {
      func_0x00010c189620(*(undefined8 *)(param_1 + 0x58),param_2,
                          &PTR___NSConcreteGlobalBlock_11092fd30);
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      lVar2 = param_3;
      func_0x00010c28ff80(param_3);
      lVar3 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      func_0x00010c0fe960(uVar6,param_2,param_5,param_7,1,lVar2,lVar4 != 0,0x56,0,0);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066193c8; end: 106619423;  */

void FUN_1066193c8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c2098;
  _objc_opt_class(PTR_PTR_1126c2098);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar1);
  if (uVar1 != 0) {
    param_2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106619424; end: 1066194e7; -[SCMyUnifiedProfileSnapProActionHandler _showManagementPageForBusinessId:] */

void FUN_106619424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be33900(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066194e8; end: 10661956f;  */

void FUN_1066194e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar1 = param_2;
      func_0x00010c07f7c0();
      if ((int)lVar1 == 0) {
        func_0x00010beb8600(param_1);
      }
      else {
        func_0x00010be7cf40(param_1);
      }
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106619570; end: 1066196f3; -[SCMyUnifiedProfileSnapProActionHandler _bestEffortIncrementProfileManagementViews:] */

void FUN_106619570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf25020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c291840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2939a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c116e00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 < 0xb) {
    puVar5 = PTR_PTR_1126cc2c8;
    _objc_alloc_init(PTR_PTR_1126cc2c8);
    uVar1 = param_3;
    func_0x00010bf24ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174420(puVar5,param_2,uVar1);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126c0320;
    _objc_alloc_init(PTR_PTR_1126c0320);
    func_0x00010c1e43a0(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c116e00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar6);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar7 = param_1;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c142320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283f20();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066196f4; end: 1066196f7;  */

void FUN_1066196f4(void)

{
  return;
}



/* Entry: 1066196f8; end: 106619853; -[SCMyUnifiedProfileSnapProActionHandler _showComposerManagementPageForHandler:] */

void FUN_1066196f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bdd3fa0(param_1,param_2,param_3);
    puVar2 = PTR_PTR_1126aead0;
    _objc_alloc();
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e4c0(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b0f38;
    _objc_alloc(PTR_PTR_1126b0f38);
    uVar5 = param_3;
    func_0x00010bf25020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0581c0(puVar4,param_2,puVar2,uVar5,0,0,
                        &PTR____CFConstantStringClassReference_110e2ea38,param_1,0,0,0,0);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x78),param_2,puVar4);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106619854; end: 106619a9b; -[SCMyUnifiedProfileSnapProActionHandler _presentOnboardingWithType:actionContext:presentManagementForHandler:] */

void FUN_106619854(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x4;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(in_x4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    _objc_copyWeak(auStack_78,param_1 + 0xa8);
    puVar3 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106619a9c;
    puStack_88 = &UNK_110849680;
    _objc_copyWeak(auStack_80,auStack_78);
    puStack_c8 = puVar4;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106619b04;
    puStack_b0 = &UNK_11084d688;
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c0311a0(puVar3);
    _objc_initWeak(auStack_d0,param_1);
    puVar4 = PTR_PTR_1126b1098;
    _objc_alloc(PTR_PTR_1126b1098);
    _objc_copyWeak(auStack_d8,auStack_d0);
    _objc_retain(in_x4);
    func_0x00010c058a20(puVar4);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(in_x4);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 106619a9c; end: 106619b4f;  */

void FUN_106619a9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1c8b80(param_2);
  func_0x00010c1c8c00(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106619b50; end: 106619bbf;  */

void FUN_106619b50(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (((param_2 != 0) && (*(long *)(param_1 + 0x20) != 0)) && (lVar1 != 0)) {
    func_0x00010beb8600(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106619bc0; end: 106619fff; -[SCMyUnifiedProfileSnapProActionHandler _presentScheduledSnapActionSheetWithDataModel:] */

void FUN_106619bc0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_98;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000108f5884c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f180();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10661a000;
  puStack_b0 = &UNK_110852d00;
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(param_3);
  puVar3 = puVar2;
  lStack_a8 = param_3;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x00010c22d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bfcd340(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar2);
  puVar6 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x00010c22d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bfcd340(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar6);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108f58e7c();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar5;
  puStack_108 = puVar7;
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b10a0;
  func_0x00010c0d0f20();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar10;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x10661a1b8;
  puStack_e0 = &UNK_110852d00;
  _objc_copyWeak(auStack_d0,auStack_98);
  _objc_retain(param_3);
  puVar8 = puVar6;
  lStack_d8 = param_3;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar10 = PTR_PTR_1126b10a0;
  ppuVar9 = &PTR____CFConstantStringClassReference_110dbb618;
  uVar13 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar10;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  puVar10 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  puStack_88 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar10);
  _objc_release(puVar11);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  func_0x00010c10af80();
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(lStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  lVar12 = param_3;
  __Unwind_Resume();
  pcStack_118 = FUN_10661a000;
  puStack_140 = puVar5;
  lStack_138 = param_1;
  puStack_130 = puVar3;
  lStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(uVar13);
  func_0x00010bf82fe0(uVar13);
  lVar4 = lVar12 + 0x28;
  _objc_loadWeakRetained(lVar4);
  _objc_copyWeak(auStack_148,lVar12 + 0x28);
  uVar14 = *(undefined8 *)(lVar12 + 0x20);
  _objc_retain(uVar14);
  func_0x00010be7aec0(lVar4);
  _objc_release(lVar4);
  _objc_release(uVar14);
  _objc_destroyWeak(auStack_148);
  _objc_release(uVar13);
  return;
}



/* Entry: 10661a000; end: 10661a0d7;  */

void FUN_10661a000(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  func_0x00010bf82fe0(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010be7aec0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10661a0d8; end: 10661a20b;  */

void FUN_10661a0d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bb40(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be7e2c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10661a20c; end: 10661a213;  */

void FUN_10661a20c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 10661a214; end: 10661a6bb; -[SCMyUnifiedProfileSnapProActionHandler _presentRescheduleSnapActionSheetWithDataModel:parentActionSheet:] */

void FUN_10661a214(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_148 [8];
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100 = param_1;
  _objc_retain(param_3);
  uStack_e0 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIDatePicker_1126af760;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c1dff00(puVar1);
  lStack_e8 = param_3;
  func_0x00010bfcd340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a20(puVar1);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4072c00000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8220(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4143c68000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3ac0(puVar1);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b10a0;
  _objc_alloc();
  func_0x00010c04ea80();
  func_0x00010befbb60();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf34860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar3;
  puStack_88 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_80 = puVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0720(PTR_PTR_1126b50b8);
  puVar9 = puVar8;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puStack_f8);
  _objc_initWeak(auStack_98,uStack_100);
  puVar2 = PTR_PTR_1126b10a0;
  ppuVar11 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uStack_e0;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10661a6bc;
  puStack_c0 = &UNK_1108d2968;
  _objc_retain(uStack_e0);
  uStack_b8 = uVar14;
  puVar15 = auStack_98;
  _objc_copyWeak(auStack_a0,puVar15);
  _objc_retain(puVar1);
  lVar12 = lStack_e8;
  puStack_b0 = puVar1;
  _objc_retain(lStack_e8);
  lStack_a8 = lVar12;
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar11);
  puVar2 = PTR_PTR_1126b10a8;
  _objc_alloc();
  puVar4 = puVar2;
  func_0x000108f58ec4();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puStack_f0;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40();
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c10d300(uStack_e0);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(lStack_a8);
  _objc_release(puStack_b0);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_98);
  _objc_release(puStack_f0);
  _objc_release(puVar1);
  _objc_release(uStack_e0);
  lVar12 = lStack_e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  lVar13 = lVar12;
  __Unwind_Resume();
  pcStack_108 = FUN_10661a6bc;
  ppuStack_140 = &puStack_d8;
  puStack_138 = puVar3;
  puStack_130 = puVar5;
  puStack_128 = puVar1;
  puStack_120 = puVar2;
  lStack_118 = lVar12;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar15);
  func_0x00010bf84b00(*(undefined8 *)(lVar13 + 0x20));
  lVar12 = lVar13 + 0x38;
  _objc_loadWeakRetained(lVar12);
  uVar14 = *(undefined8 *)(lVar13 + 0x28);
  func_0x00010bf64de0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_148,lVar13 + 0x38);
  uVar17 = *(undefined8 *)(lVar13 + 0x30);
  _objc_retain(uVar17);
  uVar16 = *(undefined8 *)(lVar13 + 0x28);
  _objc_retain(uVar16);
  func_0x00010be7e2a0(lVar12);
  _objc_release(uVar14);
  _objc_release(lVar12);
  _objc_release(uVar16);
  _objc_release(uVar17);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar15);
  return;
}



/* Entry: 10661a6bc; end: 10661a7db;  */

void FUN_10661a6bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf64de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010be7e2a0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10661a7dc; end: 10661a877;  */

void FUN_10661a7dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf64de0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285420(uVar2,param_2,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10661a878; end: 10661aa77; -[SCMyUnifiedProfileSnapProActionHandler _presentDeleteDraftingSnapPromptWithOnDelete:] */

void FUN_10661a878(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108f5884c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar9 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x000108f58e94();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000108f58eac();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010661aaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 10661aa78; end: 10661aaab;  */

void FUN_10661aa78(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010661aaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10661aaac; end: 10661aabb;  */

void FUN_10661aaac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10661aabc; end: 10661ad83; -[SCMyUnifiedProfileSnapProActionHandler _presentRescheduleDraftingSnapPromptWithGoLiveTimestamp:onAccept:] */

void FUN_10661aabc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db32d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db32d8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x00010c22d3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x00010c22d4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108f58ef4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar8 = puVar6;
  func_0x000108f58edc();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010661adb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x20) + 0x10))();
  return;
}



/* Entry: 10661ad84; end: 10661adb7;  */

void FUN_10661ad84(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010661adb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10661adb8; end: 10661adc7;  */

void FUN_10661adb8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10661adc8; end: 10661adcb; -[SCMyUnifiedProfileSnapProActionHandler storyPlayerWillBeginPresenting] */

void FUN_10661adc8(void)

{
  return;
}



/* Entry: 10661adcc; end: 10661ae27; -[SCMyUnifiedProfileSnapProActionHandler storyPlayerWillBeginDismissing] */

void FUN_10661adcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ebaab8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10661ae28; end: 10661ae37; -[SCMyUnifiedProfileSnapProActionHandler storyPlayerDidFinishDismissing] */

void FUN_10661ae28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10661ae38; end: 10661ae7f; -[SCMyUnifiedProfileSnapProActionHandler impalaProfileDidComplete] */

void FUN_10661ae38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10661ae80; end: 10661af27; -[SCMyUnifiedProfileSnapProActionHandler impalaProfileNeedsRemoval] */

void FUN_10661ae80(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10661af28; end: 10661af5b;  */

void FUN_10661af28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfea060(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10661af5c; end: 10661afb7; -[SCMyUnifiedProfileSnapProActionHandler impalaProfileDidReloadManagedProfiles] */

void FUN_10661af5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e61058,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10661afb8; end: 10661afcf; -[SCMyUnifiedProfileSnapProActionHandler presentingViewController] */

void FUN_10661afb8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10661afd0; end: 10661afdb; -[SCMyUnifiedProfileSnapProActionHandler setPresentingViewController:] */

void FUN_10661afd0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 10661afdc; end: 10661b0df; -[SCMyUnifiedProfileSnapProActionHandler .cxx_destruct] */

void FUN_10661afdc(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
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
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10661b0e0; end: 10661b0eb; +[SCMyUnifiedProfileSnapProInsightsSectionDataProvider announcerIdentifier] */

undefined ** FUN_10661b0e0(void)

{
  return &PTR____CFConstantStringClassReference_110e56f58;
}



/* Entry: 10661b0ec; end: 10661b0f3; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider addListener:] */

void FUN_10661b0ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10661b0f4; end: 10661b0fb; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider removeListener:] */

void FUN_10661b0f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10661b0fc; end: 10661b147; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider setSectionDataModel:] */

void FUN_10661b0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10661b148; end: 10661b14f; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_10661b148(void)

{
  return 1;
}



/* Entry: 10661b150; end: 10661b2e3; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10661b150(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e56eb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e56eb8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000108f62f68();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126b2c10;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000108f637bc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000108f62cd0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053700(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar1);
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_opt_class();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      _objc_loadWeakRetained(puVar1 + 0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10661b2e4; end: 10661b363; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10661b2e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e56f38;
  puVar1 = PTR_PTR_1126c74d0;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10661b364; end: 10661b37b; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider dataProviderDelegate] */

void FUN_10661b364(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10661b37c; end: 10661b387; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider setDataProviderDelegate:] */

void FUN_10661b37c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10661b388; end: 10661b38f; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10661b388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10661b390; end: 10661b3bf; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10661b390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10661b3c0; end: 10661b3c7; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider sectionDataModel] */

undefined8 FUN_10661b3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10661b3c8; end: 10661b40b; -[SCMyUnifiedProfileSnapProInsightsSectionDataProvider .cxx_destruct] */

void FUN_10661b3c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10661b40c; end: 10661b507; -[SCMyUnifiedProfileSnapProSection applyConfiguration:] */

void FUN_10661b40c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cc260;
  _objc_opt_class(PTR_PTR_1126cc260);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b1228;
  _objc_alloc(PTR_PTR_1126b1228);
  uVar3 = uVar1;
  func_0x00010c067640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf24ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c01e3a0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puStack_48 = PTR_PTR_1126f2188;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_applyConfiguration__11259fa20,puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10661b508; end: 10661b58b; -[SCMyUnifiedProfileSnapProSection sectionInfo] */

undefined8 *** FUN_10661b508(void)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 **ppuVar11;
  undefined8 **in_x5;
  undefined8 **in_x6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12238;
  pppuVar9 = &ppuStack_20;
  pppuVar10 = &ppuStack_28;
  ppuVar11 = (undefined8 **)0x1;
  pppuVar1 = (undefined8 ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return pppuVar1;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar9);
  _objc_retain(pppuVar10);
  _objc_retain(ppuVar11);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puStack_98 = PTR_PTR_1126f2190;
  pppuVar2 = &ppuStack_a0;
  ppuStack_a0 = pppuVar1;
  _objc_msgSendSuper2(pppuVar2,PTR_s_init_1125d9248);
  if (pppuVar2 != (undefined8 ***)0x0) {
    _objc_storeWeak(pppuVar2 + 1,pppuVar9);
    _objc_retain(pppuVar10);
    ppuVar3 = pppuVar2[7];
    pppuVar2[7] = pppuVar10;
    _objc_release(ppuVar3);
    _objc_retain(ppuVar11);
    ppuVar3 = pppuVar2[3];
    pppuVar2[3] = ppuVar11;
    _objc_release(ppuVar3);
    _objc_retain(in_x6);
    ppuVar3 = pppuVar2[2];
    pppuVar2[2] = in_x6;
    _objc_release(ppuVar3);
    _objc_retain(in_x5);
    ppuVar3 = pppuVar2[6];
    pppuVar2[6] = in_x5;
    _objc_release(ppuVar3);
    func_0x00010bedf2e0(pppuVar2);
    pppuVar1 = pppuVar2 + 1;
    _objc_loadWeakRetained();
    pppuVar4 = pppuVar1;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar4;
    func_0x00010c0b7dc0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar6;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar7;
    func_0x00010bf529e0();
    _objc_release(pppuVar7);
    _objc_release(pppuVar6);
    _objc_release(pppuVar5);
    _objc_release(pppuVar4);
    _objc_release(pppuVar1);
    if (pppuVar8 != (undefined8 ***)0x0) {
      pppuVar1 = pppuVar2 + 1;
      _objc_loadWeakRetained(pppuVar1);
      pppuVar4 = pppuVar1;
      func_0x00010bf25180();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar4;
      func_0x00010c0b7dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbf00();
      _objc_release(pppuVar5);
      _objc_release(pppuVar4);
      _objc_release(pppuVar1);
    }
    _objc_initWeak(auStack_a8,pppuVar2);
    pppuVar1 = pppuVar2 + 1;
    _objc_loadWeakRetained();
    pppuVar4 = pppuVar1;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar4;
    func_0x00010c0b7dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_a8);
    pppuVar6 = pppuVar5;
    func_0x00010befa2a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = pppuVar2[5];
    pppuVar2[5] = pppuVar6;
    _objc_release(ppuVar3);
    _objc_release(pppuVar5);
    _objc_release(pppuVar4);
    _objc_release(pppuVar1);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(ppuVar11);
  _objc_release(pppuVar10);
  _objc_release(pppuVar9);
  return pppuVar2;
}



/* Entry: 10661b58c; end: 10661b87b; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider initWithUserSession:snapProServices:circumstanceEngine:ourStoriesAttributionManager:actionHandler:] */

undefined8 *
FUN_10661b58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f2190;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    func_0x00010bedf2e0(puVar1);
    puVar3 = puVar1 + 1;
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b7dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar8 != (undefined8 *)0x0) {
      puVar3 = puVar1 + 1;
      _objc_loadWeakRetained(puVar3);
      puVar4 = puVar3;
      func_0x00010bf25180();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0b7dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbf00();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = puVar1 + 1;
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b7dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    puVar6 = puVar5;
    func_0x00010befa2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10661b87c; end: 10661b8ab;  */

void FUN_10661b87c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10661b8ac; end: 10661b8f3; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider dealloc] */

void FUN_10661b8ac(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
  puStack_28 = PTR_PTR_1126f2190;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10661b8f4; end: 10661beb3; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider _updateSectionDescriptorsAndAnounce:] */

void FUN_10661b8f4(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  ulong uVar19;
  
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar19 = uVar2;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfd3360();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c246d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar19);
  _objc_release(uVar2);
  lVar7 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c07a6a0();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  uVar2 = uVar6;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar2;
    func_0x00010bf25020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar19;
    func_0x00010c291840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c074e40();
    if ((int)uVar4 == 0) {
      bVar1 = false;
    }
    else {
      uVar4 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf25000();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010c26e7a0();
      bVar1 = (int)uVar12 != 1;
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar19);
    _objc_release(uVar2);
  }
  uVar2 = uVar6;
  func_0x000100504554(uVar6,&PTR___NSConcreteGlobalBlock_11092fe80);
  lVar7 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2a24e0();
  _objc_retain(uVar2);
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (((!bVar1) && ((int)lVar10 != 0)) && ((((uint)lVar11 ^ 1) & 1) == 0)) {
    puVar16 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    uVar14 = 0;
    FUN_106639468(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar16);
    _objc_release(uVar14);
    func_0x00010befa120(puVar13);
    _objc_release(puVar16);
  }
  _objc_retain(uVar2);
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(uVar2);
  func_0x00010bf0a0e0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf529e0();
  if (uVar19 != 0) {
    uVar19 = 0;
    do {
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf529e0();
      _objc_retain(uVar3);
      if (uVar4 == 1) {
        if (uVar19 == 0) goto LAB_10661bc68;
LAB_10661bc40:
        ppuVar18 = &PTR____CFConstantStringClassReference_110e56f98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e56f98,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (uVar19 == 1) goto LAB_10661bc40;
LAB_10661bc68:
        ppuVar18 = (undefined **)0x0;
      }
      uVar14 = 0x4038000000000000;
      if (uVar19 != uVar4 - 1) {
        uVar14 = 0x4024000000000000;
      }
      puVar17 = PTR_PTR_1126cc260;
      _objc_alloc(PTR_PTR_1126cc260);
      puVar15 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297340(0,0x4030000000000000,uVar14,0x4030000000000000,
                          PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff9c20(puVar17);
      _objc_release(puVar15);
      puVar15 = PTR_PTR_1126b1260;
      _objc_alloc(PTR_PTR_1126b1260);
      func_0x00010c055bc0();
      _objc_release(puVar17);
      _objc_release(ppuVar18);
      _objc_release(uVar3);
      _objc_release(uVar3);
      func_0x00010befa120(puVar16);
      _objc_release(puVar15);
      uVar19 = uVar19 + 1;
      uVar3 = uVar2;
      func_0x00010bf529e0();
    } while (uVar19 < uVar3);
  }
  _objc_release(uVar2);
  func_0x00010befa160(puVar13);
  _objc_release(puVar16);
  _objc_release(uVar2);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar17 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar13);
  _objc_retain(puVar17);
  puVar16 = puVar13;
  if (puVar13 == puVar17) {
    _objc_release(puVar17);
  }
  else {
    if (puVar17 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar15 = puVar13;
      func_0x00010c071ae0();
      _objc_release(puVar17);
      _objc_release(puVar13);
      if (((ulong)puVar15 & 1) != 0) goto LAB_10661be10;
    }
    _objc_retain(puVar13);
    puVar16 = *(undefined **)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar13;
    _objc_release(puVar16);
    if (param_3 == 0) goto LAB_10661be10;
    puVar16 = (undefined *)(param_1 + 0x40);
    _objc_loadWeakRetained(puVar16);
    func_0x00010c2428c0();
  }
  _objc_release(puVar16);
LAB_10661be10:
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  func_0x00010c0f7fc0(puVar16);
  _objc_release(puVar16);
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar13);
  _objc_release(uVar2);
  return;
}



/* Entry: 10661beb4; end: 10661bf77;  */

ulong FUN_10661beb4(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf25020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c291840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074e40();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf25020(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c291840();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074e40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar3 = uVar3 & 0xffffffff;
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10661bf78; end: 10661bf8b;  */

void FUN_10661bf78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_businessId_1125a6d58);
  return;
}



/* Entry: 10661bf8c; end: 10661c0c3; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider _hasNonStandardBusinessProfileForHandlers:] */

undefined1 * FUN_10661bf8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 uVar9;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 *puVar10;
  undefined1 auStack_298 [8];
  undefined1 uStack_290;
  undefined1 auStack_288 [8];
  long lStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  puVar10 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    unaff_x23 = *puStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x21 = *(ulong *)(lStack_118 + unaff_x24 * 8);
        func_0x00010bf25000();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x21;
        func_0x00010c26e7a0();
        _objc_release(unaff_x21);
        if ((int)unaff_x22 != 1) {
          puVar10 = (undefined1 *)0x1;
          goto LAB_10661c078;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (lVar1 != unaff_x24);
      lVar1 = param_3;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar10 = (undefined1 *)0x0;
  }
LAB_10661c078:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_240;
  pcStack_128 = FUN_10661c0c4;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  _objc_retain(puVar8);
  puVar2 = (undefined1 *)puVar8;
  func_0x00010bf52a60();
  puVar10 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x24 = *plStack_230;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != unaff_x24) {
          _objc_enumerationMutation(puVar8);
        }
        unaff_x21 = *(ulong *)(lStack_238 + (long)puVar10 * 8);
        func_0x00010bf25020();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x21;
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x22;
        func_0x00010c074e40();
        _objc_release(unaff_x22);
        _objc_release(unaff_x21);
        if ((unaff_x23 & 1) != 0) {
          puVar10 = (undefined1 *)0x1;
          goto LAB_10661c1c4;
        }
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar2 = (undefined1 *)puVar8;
      puVar7 = &uStack_240;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
    puVar10 = (undefined1 *)0x0;
  }
LAB_10661c1c4:
  _objc_release(puVar8);
  puVar2 = (undefined1 *)puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_10661c210;
  lStack_280 = unaff_x24;
  uStack_278 = unaff_x23;
  uStack_270 = unaff_x22;
  uStack_268 = unaff_x21;
  puStack_260 = puVar10;
  puStack_258 = (undefined1 *)puVar8;
  ppuStack_250 = &puStack_130;
  _objc_retain(puVar7);
  uVar3 = *(ulong *)(puVar2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c079660();
  _objc_release();
  func_0x000108f49978();
  if ((((uVar4 & 1) == 0) && (uVar3 == 0)) ||
     (puVar10 = puVar2, func_0x00010be40f80(), ((ulong)puVar10 & 1) != 0)) {
LAB_10661c2b8:
    puVar10 = puVar2;
    func_0x00010be34280();
    if ((int)puVar10 == 0) goto LAB_10661c380;
    uVar9 = 0;
  }
  else {
    puVar10 = puVar2 + 8;
    _objc_loadWeakRetained();
    puVar5 = puVar10;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0715a0();
    _objc_release(puVar5);
    _objc_release(puVar10);
    if (((ulong)puVar6 & 1) == 0) goto LAB_10661c2b8;
    uVar9 = 1;
  }
  _objc_initWeak(auStack_288,puVar2);
  puVar2 = puVar2 + 8;
  _objc_loadWeakRetained(puVar2);
  puVar10 = puVar2;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar10;
  func_0x00010c2939a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_298,auStack_288);
  uStack_290 = uVar9;
  func_0x00010c2a14c0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_298);
  _objc_destroyWeak(auStack_288);
LAB_10661c380:
  _objc_release(puVar7);
  return (undefined1 *)puVar7;
}



/* Entry: 10661c0c4; end: 10661c20f; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider _isHostOfBusinessProfile:] */

undefined1 * FUN_10661c0c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 uVar9;
  ulong unaff_x23;
  long unaff_x24;
  ulong uVar10;
  undefined1 auStack_178 [8];
  undefined1 uStack_170;
  undefined1 auStack_168 [8];
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf52a60();
  puVar8 = (undefined1 *)0x0;
  if (uVar1 != 0) {
    unaff_x24 = *plStack_110;
    do {
      uVar10 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x21 = *(ulong *)(lStack_118 + uVar10 * 8);
        func_0x00010bf25020();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x21;
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x22;
        func_0x00010c074e40();
        _objc_release(unaff_x22);
        _objc_release(unaff_x21);
        if ((unaff_x23 & 1) != 0) {
          puVar8 = (undefined1 *)0x1;
          goto LAB_10661c1c4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar10);
      uVar1 = param_3;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
    puVar8 = (undefined1 *)0x0;
  }
LAB_10661c1c4:
  _objc_release(param_3);
  uVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10661c210;
  lStack_160 = unaff_x24;
  uStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  puStack_140 = puVar8;
  uStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  uVar2 = *(ulong *)(uVar1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c079660();
  _objc_release();
  func_0x000108f49978();
  if ((((uVar10 & 1) == 0) && (uVar2 == 0)) ||
     (uVar10 = uVar1, func_0x00010be40f80(), (uVar10 & 1) != 0)) {
LAB_10661c2b8:
    uVar10 = uVar1;
    func_0x00010be34280();
    if ((int)uVar10 == 0) goto LAB_10661c380;
    uVar9 = 0;
  }
  else {
    uVar10 = uVar1 + 8;
    _objc_loadWeakRetained();
    uVar2 = uVar10;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0715a0();
    _objc_release(uVar2);
    _objc_release(uVar10);
    if ((uVar3 & 1) == 0) goto LAB_10661c2b8;
    uVar9 = 1;
  }
  _objc_initWeak(auStack_168,uVar1);
  lVar4 = uVar1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2939a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_178,auStack_168);
  uStack_170 = uVar9;
  func_0x00010c2a14c0(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_168);
LAB_10661c380:
  _objc_release(puVar7);
  return (undefined1 *)puVar7;
}



/* Entry: 10661c210; end: 10661c3c3; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider _displayProfileOnboardingIfNeededForHandlers:] */

void FUN_10661c210(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079660();
  _objc_release();
  func_0x000108f49978();
  if ((((uVar2 & 1) == 0) && (uVar1 == 0)) ||
     (uVar2 = param_1, func_0x00010be40f80(), (uVar2 & 1) != 0)) {
LAB_10661c2b8:
    uVar2 = param_1;
    func_0x00010be34280();
    if ((int)uVar2 == 0) goto LAB_10661c380;
    uVar7 = 0;
  }
  else {
    uVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar1 = uVar2;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0715a0();
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_10661c2b8;
    uVar7 = 1;
  }
  _objc_initWeak(auStack_48,param_1);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2939a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = uVar7;
  func_0x00010c2a14c0(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
LAB_10661c380:
  _objc_release(param_3);
  return;
}



/* Entry: 10661c3c4; end: 10661c5a7;  */

void FUN_10661c3c4(long param_1,long param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (lVar3 != 0)) {
    lVar4 = param_2;
    func_0x00010c280040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c296d80();
    if ((int)lVar5 == 0) {
      _objc_release();
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x28);
      _objc_release();
      if ((bVar1 & 1) == 0) goto LAB_10661c584;
    }
    func_0x000108f49978();
    if (lVar4 == 2) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110ebaad8;
    }
    else if (lVar4 == 1) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110ebab18;
    }
    else {
      lVar4 = 0x38;
      if (*(char *)(param_1 + 0x28) == '\0') {
        lVar4 = 0x28;
      }
      ppuVar9 = *(undefined ***)((long)&PTR_PTR_110a0ab80 + lVar4);
    }
    _objc_retain(ppuVar9);
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    iVar2 = (int)*(undefined8 *)(lVar3 + 0x10);
    func_0x00010bfd0140();
    if ((iVar2 != 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
      puVar7 = PTR_PTR_1126cc2d0;
      _objc_opt_new(PTR_PTR_1126cc2d0);
      puVar8 = PTR_PTR_1126c0308;
      _objc_alloc_init(PTR_PTR_1126c0308);
      func_0x00010c21b660(puVar7);
      _objc_release(puVar8);
      puVar8 = puVar7;
      func_0x00010c280040(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar8);
      lVar4 = lVar3 + 8;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010bf25180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28bc20();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(ppuVar9);
  }
LAB_10661c584:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10661c5a8; end: 10661c5bf; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider delegate] */

void FUN_10661c5a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10661c5c0; end: 10661c5cb; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider setDelegate:] */

void FUN_10661c5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10661c5cc; end: 10661c5d3; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider sectionDescriptors] */

undefined8 FUN_10661c5cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10661c5d4; end: 10661c643; -[SCMyUnifiedProfileSnapProSectionDescriptorProvider .cxx_destruct] */

void FUN_10661c5d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10661c644; end: 10661cde7;  */

void FUN_10661c644(undefined *param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                  uint param_6,ulong param_7,uint param_8,undefined1 param_9)

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
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uStack_e8;
  long lStack_d8;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar2 = param_1;
  func_0x00010bf24ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cc298;
  _objc_alloc();
  puVar3 = param_1;
  func_0x00010bf24ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bf25000(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9c40();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar4 = PTR_PTR_1126b11d0;
  _objc_alloc();
  puVar5 = param_1;
  func_0x00010bf24ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e320();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bf2d160();
  puVar18 = (undefined *)0x0;
  if (((param_8 & 1) == 0) && ((int)puVar5 != 0)) {
    puVar18 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
  }
  puVar5 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar6;
  func_0x000108f62f68();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010c078f60();
  puVar6 = puVar17;
  if ((int)puVar5 != 0) {
    puVar5 = param_1;
    func_0x00010c282400(param_1);
    func_0x000108f473c8(puVar17,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
  }
  puVar5 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar5;
  func_0x00010c26e7a0();
  _objc_release();
  if ((int)puVar17 == 1) {
    func_0x000107d72fcc();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar5;
    func_0x000108f62f68();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release();
    puVar6 = puVar17;
  }
  if ((param_8 & 1) == 0) {
    puVar17 = param_1;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar17;
    func_0x00010bfd91e0();
    puVar5 = puVar17;
    _objc_release();
    if (((param_7 < 0xfffffffffffffffe) && ((param_3 == 0 && param_2 == 0) && param_5 == 0)) &&
       ((int)puVar7 == 0)) goto LAB_10661c934;
    puVar5 = param_1;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar5;
    func_0x00010c0ccc20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar17;
    func_0x00010c120680();
    lStack_d8 = (long)(int)puVar7;
    puVar7 = param_1;
    func_0x00010c258f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0ccc20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c1518c0();
    puVar10 = param_1;
    func_0x00010c258f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0ccc20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c25ac80();
    func_0x000107d18b20(lStack_d8,(long)(int)puVar9,(long)(int)puVar12,0,param_2,param_3,0,0,param_5
                        ,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar17);
    _objc_release();
    puVar17 = puVar18;
  }
  else {
LAB_10661c934:
    lStack_d8 = 0;
  }
  uVar19 = 0x402e000000000000;
  uVar20 = 0x402e000000000000;
  if ((param_6 & 1) == 0) {
    func_0x000108f62ef8(0x402e000000000000,0x402e000000000000,0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar18);
    puVar7 = param_1;
    func_0x00010c07f7c0();
    uStack_e8 = (ulong)puVar7 & 0xffffffff;
    puVar7 = puVar18;
    puStack_80 = puVar18;
LAB_10661cb10:
    puVar8 = param_1;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf24fa0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar9;
    func_0x00010c0b7d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (param_6 == 0) goto LAB_10661cb68;
  }
  else {
    func_0x000108f62de4();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    puVar17 = param_1;
    func_0x00010c07f7c0();
    uStack_e8 = (ulong)puVar17 & 0xffffffff;
    puVar17 = param_1;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar17;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08fa60();
    puStack_80 = puVar3;
    if (puVar8 == (undefined *)0x0) goto LAB_10661cb10;
    puVar8 = param_1;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar8;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar17);
LAB_10661cb68:
  func_0x00010c08e740(puVar5);
  puVar17 = param_1;
  func_0x00010bf2d160();
  puVar7 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf24fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c070480();
  puVar10 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puStack_88;
  FUN_10660c700(uVar19,uVar20,puStack_88,param_6,puStack_80,param_3 != 0,param_4,
                (uint)puVar17 & (param_8 ^ 1),uStack_e8,puVar9,puVar11,puVar13,puVar15,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if ((param_8 & 1) == 0) {
    puVar17 = puVar3;
    if (param_6 == 0) {
      puVar17 = puVar18;
    }
    _objc_retain(puVar17);
  }
  else {
    puVar17 = (undefined *)0x0;
  }
  puVar7 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  puVar8 = puVar7;
  func_0x000108f637bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053700(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puStack_88);
  _objc_release(puStack_80);
  _objc_release(puVar5);
  _objc_release(lStack_d8);
  _objc_release(puVar6);
  _objc_release(puVar18);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10661cde8; end: 10661dea3;  */

void FUN_10661cde8(undefined *param_1,undefined8 param_2,uint param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined **param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined *puStack_290;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar2 = param_8;
  _objc_retain();
  dVar22 = 56.0;
  dVar24 = 56.0;
  func_0x000108f62de4(0x404c000000000000,0x404c000000000000,0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = param_1;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar21;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puStack_2b8 = (undefined *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010bf30620();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = puVar3;
    func_0x000108f62f68();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar21);
  puVar21 = param_1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bfd6f60(param_1);
  puVar18 = param_1;
  func_0x00010c079ce0(param_1);
  puVar4 = param_1;
  func_0x00010c07d320(param_1);
  puStack_2b0 = puVar21;
  func_0x000107d192c4(puVar21,puVar3,puVar18,100,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  if (param_7 != 0) {
    dVar22 = 0.0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    lStack_2a8 = param_7;
    func_0x00010c242520();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lStack_2a8;
    func_0x00010bf52a60();
    if (lVar15 != 0) {
      lVar20 = *plStack_1e0;
      do {
        lVar16 = 0;
        do {
          if (*plStack_1e0 != lVar20) {
            _objc_enumerationMutation(lStack_2a8);
          }
          lVar19 = *(long *)(lStack_1e8 + lVar16 * 8);
          lVar5 = lVar19;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = param_1;
          func_0x00010bf3cf60(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c0720c0();
          if ((int)lVar6 != 0) {
            func_0x00010c25b820();
            _objc_release(puVar21);
            _objc_release(lVar5);
            if (lVar19 != 1) goto LAB_10661d034;
            _objc_release();
            if (puStack_2b0 != (undefined *)0x0) {
              func_0x00010052bbec();
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lStack_2a8;
              func_0x00010bfb3e60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lStack_2a8);
              uStack_128 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
              uStack_120 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
              puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
              lStack_118 = lVar15;
              func_0x00010c23ba80();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_110 = puVar21;
              func_0x00010bf72080();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar21);
              puVar21 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
              _objc_alloc_init();
              puVar18 = PTR__OBJC_CLASS___UIImage_1126aea68;
              func_0x00010bfe8220();
              _objc_retainAutoreleasedReturnValue();
              if (puVar18 != (undefined *)0x0) {
                puVar4 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
                _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
                func_0x00010c1a9f00();
                func_0x00010c23d0a0(puVar18);
                dVar23 = dVar22;
                func_0x00010c23d0a0(puVar18);
                func_0x00010bf2f960(lVar15);
                dVar22 = dVar22 / dVar24;
                dVar24 = (dVar23 + -13.0) * 0.5;
                func_0x00010c1739e0(0,dVar24,dVar22 * 13.0,0x402a000000000000,puVar4);
                puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
                _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
                puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
                func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bff4f40(puVar7);
                _objc_release(puVar8);
                func_0x00010c08fa60(puVar7);
                func_0x00010bef6f40(puVar7);
                func_0x00010bf069e0(puVar21);
                puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
                _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
                func_0x00010c04e840();
                func_0x00010bf069e0(puVar21);
                _objc_release(puVar8);
                _objc_release(puVar7);
                _objc_release(puVar4);
              }
              ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
              if (param_8 != (undefined **)0x0) {
                ppuVar1 = param_8;
              }
              _objc_retain();
              puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
              _objc_alloc();
              func_0x00010c04e840();
              func_0x00010bf069e0(puVar21);
              puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
              _objc_alloc_init();
              uStack_1f8 = 0;
              uStack_200 = 0;
              uStack_218 = 0;
              plStack_220 = (long *)0x0;
              uStack_208 = 0;
              uStack_210 = 0;
              lStack_228 = 0;
              uStack_230 = 0;
              puVar8 = puStack_2b0;
              func_0x00010bf445c0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010bf52a60();
              if (puVar9 != (undefined *)0x0) {
                lVar20 = *plStack_220;
                do {
                  puVar17 = (undefined *)0x0;
                  do {
                    if (*plStack_220 != lVar20) {
                      _objc_enumerationMutation(puVar8);
                    }
                    uStack_260 = 0;
                    uStack_250 = 0x3032000000;
                    pcStack_248 = FUN_10661dea4;
                    uStack_240 = 0x10661deb4;
                    uStack_238 = 0;
                    puStack_258 = &uStack_260;
                    func_0x00010c0c0c00(*(undefined8 *)(lStack_228 + (long)puVar17 * 8));
                    if (puStack_258[5] != 0) {
                      func_0x00010bf069e0(puVar7);
                    }
                    __Block_object_dispose(&uStack_260,8);
                    _objc_release(uStack_238);
                    puVar17 = puVar17 + 1;
                  } while (puVar9 != puVar17);
                  puVar9 = puVar8;
                  func_0x00010bf52a60();
                } while (puVar9 != (undefined *)0x0);
              }
              _objc_release(puVar8);
              puVar8 = puVar7;
              func_0x00010c08fa60();
              if (puVar8 != (undefined *)0x0) {
                puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
                _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
                func_0x00010c04e840();
                func_0x00010bf069e0(puVar21);
                func_0x00010bf069e0(puVar21);
                _objc_release(puVar8);
              }
              dVar22 = 3.5;
              puVar8 = PTR_PTR_1126c7300;
              func_0x00010c26cce0(0x400c000000000000);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR_PTR_1126c72f8;
              _objc_alloc();
              puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_1b0 = puVar8;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c044860();
              _objc_release(puStack_2b0);
              _objc_release(puVar17);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(puVar4);
              _objc_release(ppuVar1);
              _objc_release(puVar18);
              _objc_release(puVar21);
              _objc_release(puVar3);
              puStack_2b0 = puVar9;
              lStack_2a8 = lVar15;
              goto LAB_10661d504;
            }
            puStack_2b0 = (undefined *)0x0;
            goto LAB_10661d518;
          }
          _objc_release(puVar21);
          _objc_release(lVar5);
LAB_10661d034:
          lVar16 = lVar16 + 1;
        } while (lVar15 != lVar16);
        lVar15 = lStack_2a8;
        func_0x00010bf52a60();
      } while (lVar15 != 0);
    }
LAB_10661d504:
    _objc_release(lStack_2a8);
  }
LAB_10661d518:
  puVar21 = param_1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar21;
  func_0x000108fec800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  puVar21 = param_1;
  func_0x00010c07d320();
  if ((((ulong)puVar21 & 1) == 0) &&
     (puVar21 = param_1, func_0x00010c079ce0(), ((ulong)puVar21 & 1) == 0)) {
    puVar21 = PTR_PTR_1126cc298;
    _objc_alloc(PTR_PTR_1126cc298);
    puVar18 = param_1;
    func_0x00010c116a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9c40(puVar21);
    _objc_release(puVar4);
    _objc_release(puVar18);
    puStack_290 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
  }
  else {
    puVar21 = param_1;
    func_0x00010c079ce0();
    if ((int)puVar21 == 0) {
      puStack_290 = (undefined *)0x0;
      goto LAB_10661d6b0;
    }
    puVar21 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    puVar18 = param_1;
    func_0x00010c116a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf3cf60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar21);
    _objc_release(puVar4);
    _objc_release(puVar18);
    puStack_290 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
  }
  _objc_release(puVar21);
LAB_10661d6b0:
  puVar4 = PTR_PTR_1126cc298;
  _objc_alloc();
  puVar21 = param_1;
  func_0x00010c116a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9c40();
  _objc_release(puVar18);
  _objc_release(puVar21);
  puVar7 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar8 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar21 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar21);
  puVar9 = param_1;
  func_0x00010c07d320();
  puVar18 = PTR_PTR_1126b4860;
  puVar21 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (((ulong)puVar9 & 1) == 0) {
    puVar9 = PTR_PTR_1126cc2d8;
    _objc_opt_new(PTR_PTR_1126cc2d8);
    puVar17 = puVar9;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60(puVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(puVar17);
    _objc_release(puVar9);
    puVar21 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    puVar9 = param_1;
    func_0x00010bf3cf60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar21);
    _objc_release(puVar17);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126cc2e0;
    _objc_alloc(PTR_PTR_1126cc2e0);
    func_0x00010c276fe0(param_1);
    func_0x00010c1518c0(param_1);
    func_0x00010c25ad00(param_1);
    puVar17 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010c061b20(puVar9);
    _objc_release(puVar17);
    _objc_release(puVar21);
    _objc_release(puVar18);
  }
  else {
    puVar21 = param_1;
    func_0x00010c07d320();
    if ((int)puVar21 == 0) {
      puVar21 = param_1;
      func_0x00010c234820();
      if (((ulong)puVar21 & 1) == 0) {
        puVar9 = PTR_PTR_1126cc2f0;
        _objc_alloc(PTR_PTR_1126cc2f0);
        func_0x00010c0414e0();
      }
      else {
        puVar9 = PTR_PTR_1126cc2e0;
        _objc_alloc(PTR_PTR_1126cc2e0);
        func_0x00010c276fe0(param_1);
        func_0x00010c1518c0(param_1);
        func_0x00010c25ad00(param_1);
        func_0x00010c061b20(puVar9);
      }
    }
    else {
      puVar21 = PTR_PTR_1126cc2a0;
      _objc_alloc(PTR_PTR_1126cc2a0);
      puVar18 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_1;
      func_0x00010c2709c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047b80(puVar21);
      _objc_release(puVar9);
      _objc_release(puVar18);
      puVar18 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar9 = PTR_PTR_1126cc2e8;
      _objc_alloc(PTR_PTR_1126cc2e8);
      func_0x00010c050700();
      _objc_release(puVar18);
      _objc_release(puVar21);
    }
  }
  if ((((param_3 & 1) == 0) && (param_4 == 0)) &&
     (puVar21 = param_1, func_0x00010c07d320(), ((ulong)puVar21 & 1) == 0)) {
    puVar21 = PTR_PTR_1126b4dc0;
    _objc_alloc(PTR_PTR_1126b4dc0);
    puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6820(puVar21);
    _objc_release(puVar18);
    uVar10 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190580();
    _objc_release(uVar10);
    _objc_release(puVar21);
  }
  puVar21 = param_1;
  func_0x00010c07c1c0();
  if ((int)puVar21 != 0) {
    puVar18 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
    puVar17 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar18);
    func_0x00010c23d0a0(puVar17);
    func_0x00010c23d0a0(puVar17);
    func_0x00010c1739e0(0,0xc008000000000000,dVar22,dVar24,puVar18);
    puVar11 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0d3c80();
    _objc_release();
    puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000106622b0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = puVar21;
    func_0x000108f63140(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar12);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010bff4f40();
    _objc_release(puStack_2b8);
    _objc_release(puVar21);
    _objc_release(puVar12);
    _objc_release(puVar17);
    _objc_release(puVar18);
    puStack_2b8 = puVar11;
  }
  if (param_7 == 0) {
    puVar18 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = PTR_PTR_1126b11d0;
    _objc_alloc();
    puVar18 = param_1;
    func_0x00010bf3cf60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320();
    _objc_release(puVar17);
    _objc_release(puVar18);
    if (puVar21 == (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
    }
  }
  puVar17 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  func_0x00010bfd6f60();
  func_0x00010bfd6f60();
  func_0x00010c234820();
  func_0x00010c053700(puVar17);
  puVar11 = PTR_PTR_1126cc2f8;
  _objc_alloc(PTR_PTR_1126cc2f8);
  puVar12 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c234820(param_1);
  puVar14 = param_1;
  func_0x00010bfd6f60();
  if ((int)puVar14 != 0) {
    func_0x00010c07d320(param_1);
  }
  func_0x00010c07d320(param_1);
  func_0x00010bfff020(puVar11);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar21);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puStack_290);
  _objc_release(puVar3);
  _objc_release(puStack_2b0);
  _objc_release(puStack_2b8);
  _objc_release(ppuVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  lVar15 = 8;
  __Block_object_dispose(&uStack_260);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  return;
}


