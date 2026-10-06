/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e8fcf8; end: 108e8fd87; -[SCStickerCategory sectionIndexForName:] */

undefined8 FUN_108e8fcf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108e8fd88;
  puStack_30 = &UNK_110969e88;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece40(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108e8fd88; end: 108e8fd93;  */

void FUN_108e8fd88(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_isEqualToString__1125fa240,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108e8fd94; end: 108e8ff5f; -[SCStickerCategory addStickersToSection:stickers:] */

long FUN_108e8fd94(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
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
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d3c80();
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0dfd40(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ecd40(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    lVar5 = param_4;
    func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar5 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010befa120(puVar4,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
          lVar9 = lVar9 + 1;
        } while (lVar5 != lVar9);
        lVar5 = param_4;
        func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(param_4);
    puVar6 = puVar4;
    func_0x00010bf09f00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0(uVar2,param_2,puVar6,param_3);
    _objc_release(puVar6);
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar3;
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_4;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 108e8ff60; end: 108e8ff67; -[SCStickerCategory removeGiphySection:] */

undefined8 FUN_108e8ff60(void)

{
  return 0;
}



/* Entry: 108e8ff68; end: 108e8ff6f; -[SCStickerCategory removeForYouSection:] */

undefined8 FUN_108e8ff68(void)

{
  return 0;
}



/* Entry: 108e8ff70; end: 108e9006f; -[SCStickerCategory removeSection:] */

bool FUN_108e8ff70(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d3c80();
    func_0x00010c12d3c0();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar3;
    _objc_release(uVar6);
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (param_3 < uVar4) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0d3c80();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0d3c80();
      func_0x00010c12d3c0(uVar6,param_2,param_3);
      func_0x00010c12d3c0(uVar5,param_2,param_3);
      uVar3 = uVar6;
      func_0x00010bf51e00();
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      _objc_release(uVar7);
      uVar3 = uVar5;
      func_0x00010bf51e00();
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar6);
    }
    _objc_release(uVar2);
  }
  return param_3 < uVar1;
}



/* Entry: 108e90070; end: 108e90117; -[SCStickerCategory _categoryIconWithNormalIconImage:selectedIconImage:] */

void FUN_108e90070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae558;
  _objc_retain(param_4);
  func_0x00010bfe9ca0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126d4ec0;
  func_0x00010bf1a960(PTR_PTR_1126d4ec0,param_2,puVar1,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e90118; end: 108e9020f; -[SCStickerCategory _numberOfItemsPerSectionForStickerChatLayout:totalNumberOfItemsPerType:] */

undefined8 FUN_108e90118(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126dc4b0;
    func_0x00010c155640(PTR_PTR_1126dc4b0);
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bfb80(param_3);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108e90210; end: 108e90233;  */

void FUN_108e90210(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = *(undefined8 *)(param_1 + 0x28)
  ;
  return;
}



/* Entry: 108e90234; end: 108e90327; -[SCStickerCategory _shouldDisplaySectionHeaderForStickerChatLayout:] */

undefined1 FUN_108e90234(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126dc4b0;
    func_0x00010c155640(PTR_PTR_1126dc4b0);
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bfb80(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108e90328; end: 108e9034b;  */

void FUN_108e90328(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108e9034c; end: 108e90bd3; -[SCStickerCategory _setupWithPageDataSource:stickers:backfillStickers:stickerBackfillMax:isHorizontalScrollEnabled:isCustomStickersEnabled:normalIconImage:selectedIconImage:] */

void FUN_108e9034c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined *param_6,int param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined **ppuStack_2d0;
  undefined8 *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar15 = param_1;
  func_0x00010bddbfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar15;
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_alloc_init();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_108e90bd4;
  uStack_190 = 0x108e90be4;
  uStack_188 = 0;
  puStack_1d8 = &uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x3032000000;
  pcStack_1c8 = FUN_108e90bd4;
  uStack_1c0 = 0x108e90be4;
  uStack_1b8 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  _objc_retain(param_4);
  lVar15 = param_4;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar13 = *plStack_210;
    do {
      lVar11 = 0;
      do {
        if (*plStack_210 != lVar13) {
          _objc_enumerationMutation(param_4);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = *(undefined8 *)(lStack_218 + lVar11 * 8);
        func_0x00010c27dd80(uVar10);
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar6);
        if (puVar7 == (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c27dd80(uVar10);
          func_0x00010c0df840(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(puVar6);
          _objc_release(puVar7);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(uVar10);
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar7;
        func_0x00010bf4b900();
        if (((ulong)puVar6 & 1) == 0) {
          func_0x00010befa120(puVar7);
        }
        _objc_release(puVar7);
        lVar11 = lVar11 + 1;
      } while (lVar15 != lVar11);
      lVar15 = param_4;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(param_4);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  _objc_retain(param_5);
  lVar15 = param_5;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar13 = *plStack_250;
    do {
      lVar11 = 0;
      do {
        if (*plStack_250 != lVar13) {
          _objc_enumerationMutation(param_5);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = *(undefined8 *)(lStack_258 + lVar11 * 8);
        func_0x00010c27dd80(uVar10);
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar6);
        if (puVar7 == (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c27dd80(uVar10);
          func_0x00010c0df840(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(puVar6);
          _objc_release(puVar7);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(uVar10);
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar7;
        func_0x00010bf529e0();
        if ((puVar6 < param_6) && (puVar6 = puVar7, func_0x00010bf4b900(), ((ulong)puVar6 & 1) == 0)
           ) {
          func_0x00010befa120(puVar7);
        }
        _objc_release(puVar7);
        lVar11 = lVar11 + 1;
      } while (lVar15 != lVar11);
      lVar15 = param_5;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(param_5);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_280 = 0;
  uStack_270 = 0x2020000000;
  uStack_268 = 0;
  puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b8 = 0xc2000000;
  pcStack_2b0 = FUN_108e90bec;
  puStack_2a8 = &UNK_110ac7bf8;
  puStack_278 = &uStack_280;
  _objc_retain(puVar2);
  puStack_2a0 = puVar2;
  _objc_retain(puVar3);
  puStack_298 = puVar3;
  _objc_retain(puVar1);
  puStack_290 = puVar1;
  _objc_retain(puVar4);
  ppuVar8 = &puStack_2c0;
  puStack_288 = puVar4;
  _objc_retainBlock();
  puStack_2f0 = puVar6;
  uStack_2e8 = 0xc2000000;
  pcStack_2e0 = FUN_108e90ca4;
  puStack_2d8 = &UNK_110ac7c28;
  _objc_retain();
  ppuVar9 = &puStack_2f0;
  ppuStack_2d0 = ppuVar8;
  puStack_2c8 = &uStack_280;
  _objc_retainBlock();
  lVar15 = *(long *)(param_1 + 0x38);
  if (lVar15 == 0) {
    puVar6 = PTR_PTR_1126dc4b0;
    func_0x00010c155640();
    _objc_retainAutoreleasedReturnValue();
    plVar12 = (long *)(param_1 + 0x38);
    lVar15 = *plVar12;
    *plVar12 = (long)puVar6;
    _objc_release(lVar15);
    lVar15 = *plVar12;
  }
  _objc_retain(ppuVar8);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(ppuVar9);
  _objc_retain(puVar5);
  func_0x00010c0bfb80(lVar15);
  if (param_7 != 0) {
    puVar6 = puVar4;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar6;
    _objc_release(uVar10);
  }
  puVar6 = puVar1;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar6;
  _objc_release(uVar10);
  puVar6 = puVar2;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar6;
  _objc_release(uVar10);
  puVar6 = puVar3;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar6;
  _objc_release(uVar10);
  lVar15 = param_1;
  func_0x00010beb3440();
  *(char *)(param_1 + 0x4a) = (char)lVar15;
  uVar14 = puStack_1a8[5];
  _objc_retain(uVar14);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar14;
  _objc_release(uVar10);
  uVar14 = puStack_1d8[5];
  _objc_retain(uVar14);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar14;
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(ppuVar9);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(ppuVar8);
  _objc_release(ppuVar9);
  _objc_release(ppuStack_2d0);
  _objc_release(ppuVar8);
  _objc_release(puStack_288);
  _objc_release(puStack_290);
  _objc_release(puStack_298);
  _objc_release(puStack_2a0);
  __Block_object_dispose(&uStack_280,8);
  __Block_object_dispose(&uStack_1e0,8);
  _objc_release(uStack_1b8);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1e0,8);
  lVar15 = 8;
  __Block_object_dispose(&uStack_1b0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  return;
}



/* Entry: 108e90bd4; end: 108e90beb;  */

void FUN_108e90bd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e90bec; end: 108e90ca3;  */

void FUN_108e90bec(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_4);
    func_0x00010befa120(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(puVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
    _objc_release(param_4);
    func_0x00010bef92c0(*(undefined8 *)(param_1 + 0x38));
    *param_5 = *param_5 + 1;
  }
  return;
}



/* Entry: 108e90ca4; end: 108e90dcb;  */

void FUN_108e90ca4(long param_1,long param_2,long param_3,undefined *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_4);
  puVar2 = param_4;
  if ((param_4 != (undefined *)0x0) &&
     (puVar1 = param_4, func_0x00010bf529e0(), puVar1 != (undefined *)0x0)) {
    puVar1 = param_4;
    func_0x00010bf529e0();
    if (puVar1 < (undefined *)(param_3 * param_2 + param_3)) {
      puVar1 = param_4;
      func_0x00010bf529e0();
      param_3 = (long)puVar1 - param_3 * param_2;
    }
    if (0 < param_3) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      puVar1 = param_4;
      func_0x00010c25e980(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4000();
      _objc_release(puVar1);
      _objc_release(param_4);
      if (puVar2 == (undefined *)0x0) goto LAB_108e90da8;
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),param_6,param_5,puVar2,
                 *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    }
  }
  _objc_release(puVar2);
LAB_108e90da8:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e90dcc; end: 108e90fdf;  */

void FUN_108e90dcc(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd258;
  func_0x000107c312f8(&PTR____CFConstantStringClassReference_110efd258,
                      &PTR____CFConstantStringClassReference_110dc98b8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dff20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,ppuVar1,3,uVar2,*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18)
  ;
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x28);
    ppuVar1 = &PTR____CFConstantStringClassReference_110efd278;
    func_0x000107c312f8(&PTR____CFConstantStringClassReference_110efd278,
                        &PTR____CFConstantStringClassReference_110dc98b8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dff20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))
              (lVar3,ppuVar1,5,uVar2,*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
    _objc_release(uVar2);
    _objc_release(ppuVar1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd298;
  func_0x000107c312f8(&PTR____CFConstantStringClassReference_110efd298,
                      &PTR____CFConstantStringClassReference_110dc98b8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dff20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,ppuVar1,2,uVar2,*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18)
  ;
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd2b8;
  func_0x000107c312f8(&PTR____CFConstantStringClassReference_110efd2b8,
                      &PTR____CFConstantStringClassReference_110dc98b8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dff20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,ppuVar1,1,uVar2,*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18)
  ;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 108e90fe0; end: 108e9129f;  */

void FUN_108e90fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = param_2;
  _objc_release(uVar3);
  lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = param_3;
  _objc_release(uVar3);
  lVar6 = *(long *)(param_1 + 0x50);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
  }
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x00010be655e0();
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = ((lVar6 + uVar4) - 1) / uVar4;
  }
  if (0 < (long)uVar2) {
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010c0dff20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110efd258;
      func_0x000107c312f8(&PTR____CFConstantStringClassReference_110efd258,
                          &PTR____CFConstantStringClassReference_110dc98b8,0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,lVar6,uVar4,uVar3,3,ppuVar5);
      _objc_release(ppuVar5);
      _objc_release(uVar3);
      if (*(char *)(param_1 + 0x58) == '\x01') {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        lVar1 = *(long *)(param_1 + 0x38);
        func_0x00010c0dff20(uVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110efd278;
        func_0x000107c312f8(&PTR____CFConstantStringClassReference_110efd278,
                            &PTR____CFConstantStringClassReference_110dc98b8,0);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar1 + 0x10))(lVar1,lVar6,uVar4,uVar3,5,ppuVar5);
        _objc_release(ppuVar5);
        _objc_release(uVar3);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010c0dff20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110efd298;
      func_0x000107c312f8(&PTR____CFConstantStringClassReference_110efd298,
                          &PTR____CFConstantStringClassReference_110dc98b8,0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,lVar6,uVar4,uVar3,2,ppuVar5);
      _objc_release(ppuVar5);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010c0dff20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110efd2b8;
      func_0x000107c312f8(&PTR____CFConstantStringClassReference_110efd2b8,
                          &PTR____CFConstantStringClassReference_110dc98b8,0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,lVar6,uVar4,uVar3,1,ppuVar5);
      _objc_release(ppuVar5);
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (long)uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e912a0; end: 108e912a7; -[SCStickerCategory categoryIcon] */

undefined8 FUN_108e912a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108e912a8; end: 108e912af; -[SCStickerCategory shouldDisplayScrollbar] */

undefined1 FUN_108e912a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}



/* Entry: 108e912b0; end: 108e912b7; -[SCStickerCategory shouldDisplaySectionHeader] */

undefined1 FUN_108e912b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4a);
}



/* Entry: 108e912b8; end: 108e912bf; -[SCStickerCategory setShouldDisplaySectionHeader:] */

void FUN_108e912b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x4a) = param_3;
  return;
}



/* Entry: 108e912c0; end: 108e912c7; -[SCStickerCategory sectionTopSpacing] */

undefined8 FUN_108e912c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108e912c8; end: 108e912cf; -[SCStickerCategory sectionBottomSpacing] */

undefined8 FUN_108e912c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108e912d0; end: 108e912d7; -[SCStickerCategory stickerSearchDataSourceObservable] */

undefined8 FUN_108e912d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108e912d8; end: 108e91373; -[SCStickerCategory .cxx_destruct] */

void FUN_108e912d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e91374; end: 108e914cf; -[SCStickerFeedCategory initWithFeed:itemsObservable:stickerInjector:filterItemsBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e91374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fee08;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11277ce14;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11277ce18;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ce1c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ce1c) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11277ce20;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277ce24) = 0;
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ce28);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277ce28) = uVar2;
    _objc_release(uVar4);
    func_0x00010c200440(puVar1);
    func_0x00010c128b60(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e914d0; end: 108e9166b; -[SCStickerFeedCategory reloadData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e914d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if ((*(byte *)(param_1 + _DAT_11277ce2c) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11277ce2c) = 1;
    _objc_initWeak(auStack_58,param_1);
    lVar5 = (long)_DAT_11277ce30;
    func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar5));
    puVar1 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277ce18);
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108e9166c;
    puStack_68 = &UNK_11084a018;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    uVar3 = uVar2;
    func_0x00010c25ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 108e9166c; end: 108e916df;  */

void FUN_108e9166c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e916e0; end: 108e91783; -[SCStickerFeedCategory _handleResult:] */

void FUN_108e916e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108e91784;
  puStack_30 = &UNK_110850cc8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x108e91838;
  puStack_60 = &UNK_1108420a0;
  uStack_58 = param_1;
  uStack_50 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x00010c0c0800(param_3,param_2,&puStack_48,&puStack_78);
  _objc_release(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e91784; end: 108e918af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e91784(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ce2c) = 0;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ce34);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ce34) = 0;
  _objc_retain(param_2);
  _objc_release(uVar2);
  func_0x00010bea5020();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ce1c);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e918b0; end: 108e91913; -[SCStickerFeedCategory _handleOnComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e918b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + _DAT_11277ce2c) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277ce1c);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,*(undefined8 *)(param_1 + _DAT_11277ce38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e91914; end: 108e919fb; -[SCStickerFeedCategory itemForIndexPath:] */

void FUN_108e91914(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c1554e0(param_3);
  func_0x00010c085160(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0840e0();
  uVar1 = param_1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar1 = param_1;
    func_0x00010c084fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0840e0(param_3);
    uVar3 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e919fc; end: 108e91d4f; -[SCStickerFeedCategory _setItemsGroups:filterItemsBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e919fc(undefined *param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
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
  puVar10 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  if (param_4 == (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010bf51e00();
    _objc_release(puVar7);
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar10 = &uStack_130;
    puVar5 = param_3;
    func_0x00010bf52a60();
    if (puVar5 != (undefined8 *)0x0) {
      puVar11 = (undefined *)0x0;
      lVar8 = *plStack_120;
      do {
        puVar10 = (undefined8 *)0x0;
        puVar2 = puVar11;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          lVar12 = *(long *)(lStack_128 + (long)puVar10 * 8);
          lVar1 = lVar12;
          func_0x00010c084fc0(lVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = param_4;
          (**(code **)(param_4 + 0x10))(param_4,lVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(lVar1);
          puVar2 = param_1;
          func_0x00010becb2e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar2 != (undefined *)0x0) {
            lVar1 = lVar12;
            func_0x00010c1562a0();
            puVar3 = PTR____NSArray0__struct_11034ab48;
            if (puVar11 != (undefined *)0x0) {
              puVar3 = puVar11;
            }
            if (lVar1 == 2) {
              puVar3 = puVar2;
            }
            func_0x00010bf09f80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            puVar11 = puVar3;
          }
          puVar3 = puVar11;
          func_0x00010bf529e0();
          if (puVar3 != (undefined *)0x0) {
            puVar3 = PTR_PTR_1126badc0;
            _objc_alloc(PTR_PTR_1126badc0);
            lVar1 = lVar12;
            func_0x00010c2711a0(lVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1562a0(lVar12);
            func_0x00010c156900(lVar12);
            func_0x00010c0531c0(puVar3);
            _objc_release(lVar1);
            func_0x00010befa120(puVar7);
            _objc_release(puVar3);
          }
          lVar9 = (long)_DAT_11277ce14;
          lVar4 = *(long *)(param_1 + lVar9);
          func_0x00010bfa3d00();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar4;
          func_0x00010c27dd80();
          if (lVar1 == 5) {
            _objc_release(lVar4);
          }
          else {
            lVar9 = *(long *)(param_1 + lVar9);
            func_0x00010bfa3d00();
            _objc_retainAutoreleasedReturnValue();
            lVar1 = lVar9;
            func_0x00010c27dd80();
            _objc_release(lVar9);
            _objc_release(lVar4);
            if (lVar1 != 6) {
              func_0x00010c2711a0();
              _objc_retainAutoreleasedReturnValue();
              lVar1 = lVar12;
              func_0x00010c08fa60();
              _objc_release(lVar12);
              if (lVar1 != 0) {
                func_0x00010c200440(param_1);
              }
            }
          }
          _objc_release(puVar2);
          puVar10 = (undefined8 *)((long)puVar10 + 1);
          puVar2 = puVar11;
        } while (puVar5 != puVar10);
        puVar10 = &uStack_130;
        puVar5 = param_3;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined8 *)0x0);
      _objc_release(puVar11);
    }
    _objc_release(param_3);
    puVar5 = puVar7;
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277ce38);
  *(undefined8 **)(param_1 + _DAT_11277ce38) = puVar5;
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar8 = (long)_DAT_11277ce38;
    puVar7 = *(undefined8 **)((long)param_3 + lVar8);
    func_0x00010bf529e0();
    if (puVar10 < puVar7) {
      func_0x00010c0dfd40(*(undefined8 *)((long)param_3 + lVar8));
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 108e91d50; end: 108e91dab; -[SCStickerFeedCategory itemsGroupAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e91d50(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ce38;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e91dac; end: 108e91e87; -[SCStickerFeedCategory titleForSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e91dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277ce14;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  _objc_release(lVar1);
  if (lVar2 == 9) {
LAB_108e91e0c:
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4e080();
    _objc_release(lVar1);
    if (lVar2 != 2) {
LAB_108e91e6c:
      lVar2 = 0;
      goto LAB_108e91e70;
    }
  }
  else if (lVar2 != 7) {
    if (lVar2 == 1) goto LAB_108e91e0c;
    goto LAB_108e91e6c;
  }
  func_0x00010c085160(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
LAB_108e91e70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108e91e88; end: 108e91f6f; -[SCStickerFeedCategory _testItemsWithGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e91e88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_11277ce24) == '\x01') {
    lVar1 = *(long *)(param_1 + _DAT_11277ce14);
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_release(lVar1);
    if ((lVar2 == 3) && ((lVar2 = param_3, func_0x00010c1562a0(), lVar2 == 1 || (lVar2 == 2)))) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277ce20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf5d8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      goto LAB_108e91f14;
    }
  }
  uVar4 = 0;
LAB_108e91f14:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e91f70; end: 108e91fe7; -[SCStickerFeedCategory shouldHorizontalScrollAtSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e91f70(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277ce38;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (param_3 < uVar2) {
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010c0dfd40(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1562a0();
    bVar1 = lVar4 == 1;
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108e91fe8; end: 108e91ff7; -[SCStickerFeedCategory feed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e91fe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ce14);
}



/* Entry: 108e91ff8; end: 108e92007; -[SCStickerFeedCategory itemsPublishSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e91ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ce1c);
}



/* Entry: 108e92008; end: 108e92017; -[SCStickerFeedCategory itemsGroups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e92008(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ce38);
}



/* Entry: 108e92018; end: 108e92027; -[SCStickerFeedCategory isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e92018(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277ce2c);
}



/* Entry: 108e92028; end: 108e92037; -[SCStickerFeedCategory setIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e92028(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277ce2c) = param_3;
  return;
}



/* Entry: 108e92038; end: 108e92047; -[SCStickerFeedCategory error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e92038(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ce34);
}



/* Entry: 108e92048; end: 108e92087; -[SCStickerFeedCategory setError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e92048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ce34;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e92088; end: 108e92097; -[SCStickerFeedCategory filterBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e92088(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ce28);
}



/* Entry: 108e92098; end: 108e920a3; -[SCStickerFeedCategory setFilterBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e92098(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e920a4; end: 108e92143; -[SCStickerFeedCategory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e920a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ce28,0);
  _objc_storeStrong(param_1 + _DAT_11277ce34,0);
  _objc_storeStrong(param_1 + _DAT_11277ce38,0);
  _objc_storeStrong(param_1 + _DAT_11277ce1c,0);
  _objc_storeStrong(param_1 + _DAT_11277ce14,0);
  _objc_storeStrong(param_1 + _DAT_11277ce20,0);
  _objc_storeStrong(param_1 + _DAT_11277ce18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ce30,0);
  return;
}



/* Entry: 108e92144; end: 108e9239b; -[SCStickerFeedSuperCategory initWithFeed:itemsRepository:categoryIcon:stickerInjector:filterItemsBlock:] */

undefined8 *
FUN_108e92144(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if ((param_3 != (undefined *)0x0) && (param_4 != 0)) {
    puVar1 = param_3;
    func_0x00010bf38dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = param_3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = param_3;
      func_0x00010bf38dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108e9239c;
    puStack_a0 = &UNK_110ac7cb8;
    _objc_retain(param_1);
    uStack_98 = param_1;
    _objc_retain(param_4);
    lStack_90 = param_4;
    _objc_retain(param_3);
    puStack_88 = param_3;
    _objc_retain(param_6);
    uStack_80 = param_6;
    _objc_retain(param_7);
    puVar1 = puVar2;
    uStack_78 = param_7;
    func_0x00010c0b8600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(puStack_88);
    _objc_release(lStack_90);
    _objc_release(uStack_98);
    _objc_release(puVar2);
  }
  puVar2 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  uVar5 = param_1;
  func_0x00010bec8ee0(param_1);
  _objc_release(puVar2);
  puStack_c0 = PTR_PTR_1126fee10;
  puVar3 = &uStack_c8;
  puVar2 = PTR_s_initWithStickerCategories_type_c_1125f0bb8;
  uStack_c8 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithStickerCategories_type_c_1125f0bb8,puVar1,uVar5,param_5);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010bfa3d00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  puVar4 = puVar2;
  func_0x00010bfa3d00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e080();
  func_0x00010be14ba0(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0850a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar3 = (undefined8 *)PTR_PTR_1126d4f78;
  _objc_alloc(PTR_PTR_1126d4f78);
  func_0x00010c012320();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 108e9239c; end: 108e9247f;  */

void FUN_108e9239c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  uVar1 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e080();
  func_0x00010be14ba0(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0850a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126d4f78;
  _objc_alloc(PTR_PTR_1126d4f78);
  func_0x00010c012320();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e92480; end: 108e9256f; -[SCStickerFeedSuperCategory reloadData] */

long FUN_108e92480(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c253a60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c128b60(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_1;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puVar2 < (undefined1 *)0x1a) {
    return *(long *)(&UNK_10dfa3ca8 + (long)puVar2 * 8);
  }
  return 0xc;
}



/* Entry: 108e92570; end: 108e9258f; -[SCStickerFeedSuperCategory _superCategoryTypeForFeedType:] */

undefined8 FUN_108e92570(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x1a) {
    return *(undefined8 *)(&UNK_10dfa3ca8 + param_3 * 8);
  }
  return 0xc;
}



/* Entry: 108e92590; end: 108e925df; -[SCStickerFeedSuperCategory _fetchStrategyForFeedType:forContext:] */

undefined8 FUN_108e92590(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if (param_4 != 3) {
    uVar1 = 2;
  }
  uVar2 = 2;
  if (param_3 != 0xd) {
    uVar2 = 1;
  }
  if ((1L << (param_3 & 0x3f) & 0x1cU) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if ((1L << (param_3 & 0x3f) & 0x3bfdfe3U) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = 1;
  if (param_3 < 0x1a) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e925e0; end: 108e925e3; +[SCStickerSectioner giphyTrendingSectionTitle] */

void FUN_108e925e0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd3d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110efd3d8,
                      &PTR____CFConstantStringClassReference_110efd318,0);
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



/* Entry: 108e925e4; end: 108e925e7; +[SCStickerSectioner giphySectionTitle] */

void FUN_108e925e4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd338;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110efd338,
                      &PTR____CFConstantStringClassReference_110efd318,0);
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



/* Entry: 108e925e8; end: 108e925eb; +[SCStickerSectioner forYouSectionTitle] */

void FUN_108e925e8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd3b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110efd3b8,
                      &PTR____CFConstantStringClassReference_110efd318,0);
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



/* Entry: 108e925ec; end: 108e926f7; +[SCStickerSectioner titleForSection:] */

void FUN_108e925ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 0x10) {
    if (param_3 < 4) {
      if (param_3 == 1) {
        func_0x000108e92838();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (param_3 == 2) {
        func_0x000108e92850();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (param_3 == 4) {
      func_0x000108e92820();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 8) {
      func_0x000107c312f8(&PTR____CFConstantStringClassReference_110efd2d8,
                          &PTR____CFConstantStringClassReference_110dc98b8,0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 < 0x40) {
    if (param_3 == 0x10) {
      func_0x00010bfccb40(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 0x20) {
      func_0x000108e927f0(0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 0x40) {
    func_0x00010bfb48c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0x200) {
    func_0x00010bfccbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e926f8; end: 108e927a7; -[SCStickerSuperCategory initWithStickerCategories:type:categoryIcon:] */

undefined1 *
FUN_108e926f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fee18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e927a8; end: 108e927af; -[SCStickerSuperCategory stickerCategories] */

undefined8 FUN_108e927a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e927b0; end: 108e927b7; -[SCStickerSuperCategory type] */

undefined8 FUN_108e927b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e927b8; end: 108e927bf; -[SCStickerSuperCategory categoryIcon] */

undefined8 FUN_108e927b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e927c0; end: 108e927ef; -[SCStickerSuperCategory .cxx_destruct] */

void FUN_108e927c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e927f0; end: 108e92897;  */

void FUN_108e927f0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd2f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110efd2f8,
                      &PTR____CFConstantStringClassReference_110efd318,0);
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



/* Entry: 108e92898; end: 108e92963; +[SCStickerCategoryIcon bitmapIconWithNormalImage:selectedImage:tintableFallbackImage:] */

void FUN_108e92898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d4ec0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e92964; end: 108e929c7; +[SCStickerCategoryIcon tintableIconWithImage:] */

void FUN_108e92964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4ec0;
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



/* Entry: 108e929c8; end: 108e929eb; -[SCStickerCategoryIcon copyWithZone:] */

undefined8 FUN_108e929c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e929ec; end: 108e92a7b; -[SCStickerCategoryIcon hash] */

void FUN_108e929ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126fee20;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e92a7c; end: 108e92abf; -[SCStickerCategoryIcon internalInit] */

void FUN_108e92a7c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fee20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e92ac0; end: 108e92ba7; -[SCStickerCategoryIcon isEqual:] */

long FUN_108e92ac0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e92b80:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e92b8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108e92b8c;
            }
            goto LAB_108e92b80;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e92b8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e92ba8; end: 108e92c33; -[SCStickerCategoryIcon matchTintableIcon:bitmapIcon:] */

void FUN_108e92ba8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e92c34; end: 108e92c7b; -[SCStickerCategoryIcon .cxx_destruct] */

void FUN_108e92c34(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e92c7c; end: 108e92d27; -[SCStickerPageDataSource initWithStickers:bloopsDataSources:] */

undefined1 *
FUN_108e92c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fee28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e92d28; end: 108e92d4b; -[SCStickerPageDataSource copyWithZone:] */

undefined8 FUN_108e92d28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e92d4c; end: 108e92dbf; -[SCStickerPageDataSource hash] */

undefined8 * FUN_108e92d4c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108e92e40:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e92e4c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108e92e4c;
        }
        goto LAB_108e92e40;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108e92e4c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108e92dc0; end: 108e92e67; -[SCStickerPageDataSource isEqual:] */

long FUN_108e92dc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e92e40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e92e4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108e92e4c;
        }
        goto LAB_108e92e40;
      }
    }
    lVar3 = 0;
  }
LAB_108e92e4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e92e68; end: 108e92e6f; -[SCStickerPageDataSource stickers] */

undefined8 FUN_108e92e68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e92e70; end: 108e92e77; -[SCStickerPageDataSource bloopsDataSources] */

undefined8 FUN_108e92e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e92e78; end: 108e92ea7; -[SCStickerPageDataSource .cxx_destruct] */

void FUN_108e92e78(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e92ea8; end: 108e92f13; +[SCChatStickerSearchResult searchErrorWithError:] */

void FUN_108e92ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4e80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e92f14; end: 108e92f5f; +[SCChatStickerSearchResult searching] */

void FUN_108e92f14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d4e80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e92f60; end: 108e92ffb; +[SCChatStickerSearchResult stickerResultsWithResults:source:inputText:] */

void FUN_108e92f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d4e80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e92ffc; end: 108e9301f; -[SCChatStickerSearchResult copyWithZone:] */

undefined8 FUN_108e92ffc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e93020; end: 108e930af; -[SCChatStickerSearchResult hash] */

void FUN_108e93020(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = -lVar1;
  if (-1 < lVar1) {
    lStack_40 = lVar1;
  }
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126fee30;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e930b0; end: 108e930f3; -[SCChatStickerSearchResult internalInit] */

void FUN_108e930b0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fee30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e930f4; end: 108e931d3; -[SCChatStickerSearchResult isEqual:] */

long FUN_108e930f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e931ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e931b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_108e931b8;
          }
          goto LAB_108e931ac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e931b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e931d4; end: 108e9328b; -[SCChatStickerSearchResult matchStickerResults:searchError:searching:] */

void FUN_108e931d4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x28));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e9328c; end: 108e932c7; -[SCChatStickerSearchResult .cxx_destruct] */

void FUN_108e9328c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e932c8; end: 108e932ff; -[SCChatStickerFavoritesEmptyStateView _commonInitWithSourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e932c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277ce78) = param_3;
  func_0x00010beabb60();
  func_0x00010bead100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bead590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLabels_112588f08);
  return;
}



/* Entry: 108e93300; end: 108e93367; -[SCChatStickerFavoritesEmptyStateView initWithSourceType:] */

undefined1 * FUN_108e93300(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fee38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bde24e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e93368; end: 108e936cb; -[SCChatStickerFavoritesEmptyStateView _setupContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e93368(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar18 = (long)_DAT_11277ce7c;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar18),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar18));
  lVar2 = *(long *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49480(0x4018000000000000,lVar2,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(lVar2);
  func_0x00010c1e3380(0x437a0000,lVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bf49520(0x4018000000000000,uVar4,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(uVar4);
  func_0x00010c1e3380(0x437a0000,uVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  uStack_a8 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  uStack_a0 = uVar7;
  lStack_98 = lVar3;
  uStack_90 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf49480(0x4018000000000000,uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  uStack_88 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf49520(0x4018000000000000,uVar11,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(lVar19);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (*(long *)(lVar3 + _DAT_11277ce78) == 1) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar14;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar15 = puVar14;
  func_0x000108e995fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar14,param_2,puVar15);
  _objc_release(puVar15);
  func_0x00010c1cfce0(puVar14,param_2,0);
  func_0x00010c213040(puVar14,param_2,1);
  func_0x00010c213180(puVar14,param_2,puVar1);
  func_0x00010c21ad00(puVar14,param_2,0x14);
  lVar19 = (long)_DAT_11277ce7c;
  func_0x00010bef6d60(*(undefined8 *)(lVar3 + lVar19),param_2,puVar14);
  puVar15 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar16 = puVar15;
  func_0x000108e99614();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar15,param_2,puVar16);
  _objc_release(puVar16);
  func_0x00010c213040(puVar15,param_2,1);
  func_0x00010c1cfce0(puVar15,param_2,0);
  func_0x00010c213180(puVar15,param_2,puVar13);
  func_0x00010c21ad00(puVar15,param_2,0x17);
  func_0x00010bef6d60(*(undefined8 *)(lVar3 + lVar19),param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e936cc; end: 108e93897; -[SCChatStickerFavoritesEmptyStateView _setupLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e936cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (*(long *)(param_1 + _DAT_11277ce78) == 1) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar4 = puVar1;
  func_0x000108e995fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c213180(puVar1,param_2,puVar2);
  func_0x00010c21ad00(puVar1,param_2,0x14);
  lVar6 = (long)_DAT_11277ce7c;
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  puVar4 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar5 = puVar4;
  func_0x000108e99614();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c213040(puVar4,param_2,1);
  func_0x00010c1cfce0(puVar4,param_2,0);
  func_0x00010c213180(puVar4,param_2,puVar3);
  func_0x00010c21ad00(puVar4,param_2,0x17);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e93898; end: 108e93c2f; -[SCChatStickerFavoritesEmptyStateView _setupImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e93898(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar26 = (long)_DAT_11277ce80;
  uVar24 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar24);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010befbb60(puVar2);
  lVar25 = (long)_DAT_11277ce7c;
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar25));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar12;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c2a5060(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  func_0x00010bf348e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010bf34860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar24);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + _DAT_11277ce80),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 108e93c30; end: 108e93c3f; -[SCChatStickerFavoritesEmptyStateView setZeroStateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e93c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ce80),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 108e93c40; end: 108e93c7f; -[SCChatStickerFavoritesEmptyStateView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e93c40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ce80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ce7c,0);
  return;
}



/* Entry: 108e93c80; end: 108e93ea3; -[SCChatStickerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e93c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fee40;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ce84);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ce84) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc();
    func_0x00010bff0f20();
    lVar4 = (long)_DAT_11277ce88;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126bb2a0;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar4 = (long)_DAT_11277ce8c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c16ce00(*(undefined8 *)((long)puVar1 + lVar4));
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277ce90) = 1;
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 108e93ea4; end: 108e93f73;  */

void FUN_108e93ea4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
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



/* Entry: 108e93f74; end: 108e9423b; -[SCChatStickerView setItemInstance:isReaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e93f74(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ce94;
  lVar4 = *(long *)(param_1 + lVar5);
  _objc_retain(lVar4);
  _objc_retain(param_3);
  if (lVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar4);
LAB_108e94008:
    lVar4 = param_1;
    func_0x00010be442e0();
    if ((int)lVar4 != 0) {
      param_1 = param_1 + _DAT_11277ce98;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2552a0();
      _objc_release(param_1);
      goto LAB_108e941e8;
    }
  }
  else if (param_3 == 0) {
    _objc_release(lVar4);
  }
  else {
    lVar1 = lVar4;
    func_0x00010c071ae0();
    _objc_release(param_3);
    _objc_release(lVar4);
    if ((int)lVar1 != 0) goto LAB_108e94008;
  }
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277ce9c;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar4));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277cea0;
  if (*(long *)(param_1 + lVar4) != 0) {
    _dispatch_block_cancel();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar2);
  }
  if (param_3 != 0) {
    _objc_initWeak(auStack_68,param_1);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277ce8c));
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108e9423c;
    puStack_80 = &UNK_110841fb0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uVar3 = 0;
    lStack_78 = param_3;
    func_0x000107c27d90(0,&puStack_98);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    _objc_retainBlock();
    func_0x000107c312d4(0x3e19999a,"APPSTORE",*(undefined8 *)(param_1 + lVar4));
    _objc_copyWeak(auStack_a8,auStack_68);
    _objc_retain(uVar3);
    _objc_retain(param_3);
    uStack_a0 = param_4;
    func_0x00010be11e80(param_1);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uVar3);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
LAB_108e941e8:
  _objc_release(param_3);
  return;
}



/* Entry: 108e9423c; end: 108e94323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9423c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_108e94310;
  lVar4 = *(long *)(lVar1 + _DAT_11277ce94);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  _objc_retain(lVar5);
  if (lVar4 == lVar5) {
    _objc_release(lVar5);
    _objc_release(lVar4);
LAB_108e942c4:
    lVar4 = *(long *)(lVar1 + _DAT_11277ce8c);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      func_0x00010bebb0a0(lVar1);
    }
  }
  else if (lVar5 == 0) {
    _objc_release(lVar4);
  }
  else {
    lVar2 = lVar4;
    func_0x00010c071ae0(lVar4,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if ((int)lVar2 != 0) goto LAB_108e942c4;
  }
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11277cea0);
  *(undefined8 *)(lVar1 + _DAT_11277cea0) = 0;
  _objc_release(uVar3);
LAB_108e94310:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e94324; end: 108e94437;  */

void FUN_108e94324(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _dispatch_block_cancel(*(undefined8 *)(param_1 + 0x28));
    func_0x00010beb9780(lVar1);
    if (param_3 != 0) {
      _objc_copyWeak(auStack_48,param_1 + 0x30);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      func_0x00010be11e80(lVar1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108e94438; end: 108e94497;  */

void FUN_108e94438(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb9780(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e94498; end: 108e946b7; -[SCChatStickerView _fetchItemInstance:willAcceptLowRes:isReaction:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e94498(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  byte bStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if ((param_4 & 1) == 0) {
    bVar4 = *(byte *)(param_1 + _DAT_11277cea8);
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ceac);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be1d6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = uVar2;
  func_0x00010c0e0460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_6);
  uVar3 = uVar1;
  bStack_60 = bVar4 & 1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11277ce9c;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar2;
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_11277ce98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2552c0();
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}


