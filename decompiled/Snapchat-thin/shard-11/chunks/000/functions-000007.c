/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080219c4; end: 108021afb; -[SCMemoriesSaveCompleteData initWithGallerySnaps:entryId:galleryEntry:snapDoc:snapDocMediaIdToAssetIdMap:] */

undefined1 *
FUN_1080219c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fc290;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108021afc; end: 108021b03; -[SCMemoriesSaveCompleteData gallerySnaps] */

undefined8 FUN_108021afc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108021b04; end: 108021b0b; -[SCMemoriesSaveCompleteData entryId] */

undefined8 FUN_108021b04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108021b0c; end: 108021b13; -[SCMemoriesSaveCompleteData galleryEntry] */

undefined8 FUN_108021b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108021b14; end: 108021b1b; -[SCMemoriesSaveCompleteData snapDoc] */

undefined8 FUN_108021b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108021b1c; end: 108021b23; -[SCMemoriesSaveCompleteData snapDocMediaIdToAssetIdMap] */

undefined8 FUN_108021b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108021b24; end: 108021b77; -[SCMemoriesSaveCompleteData .cxx_destruct] */

void FUN_108021b24(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108021b78; end: 108021c2b; +[SCMemoriesSnapDocAssetData newAssetWithAssetUrl:assetData:assetType:mediaType:mediaListId:] */

undefined *
FUN_108021b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d5748;
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
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  *(undefined4 *)(puVar2 + 0x20) = param_5;
  *(undefined4 *)(puVar2 + 0x24) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  return puVar2;
}



/* Entry: 108021c2c; end: 108021d3b; +[SCMemoriesSnapDocAssetData reusedAssetWithContentResult:memoriesAssetId:assetType:key:iv:mediaListId:] */

void FUN_108021c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d5748;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  *(undefined4 *)(puVar2 + 0x40) = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x58) = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108021d3c; end: 108021d5f; -[SCMemoriesSnapDocAssetData copyWithZone:] */

undefined8 FUN_108021d3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108021d60; end: 108021da3; -[SCMemoriesSnapDocAssetData internalInit] */

void FUN_108021d60(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc298;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108021da4; end: 108021e3f; -[SCMemoriesSnapDocAssetData matchNewAsset:reusedAsset:] */

void FUN_108021da4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
               *(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108021e40; end: 108021e9f; -[SCMemoriesSnapDocAssetData .cxx_destruct] */

void FUN_108021e40(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108021ea0; end: 10802290f;  */

void FUN_108021ea0(undefined *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c0c46a0();
  puStack_2d0 = (undefined *)CONCAT44(puStack_2d0._4_4_,param_2);
  puVar1 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar12 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bf85640();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar12 != 0) {
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_2a8 = 0;
      puStack_2b0 = (undefined *)0x0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      puVar1 = param_1;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      ppuVar9 = &puStack_2b0;
      puStack_2b8 = puVar2;
      func_0x00010bf52a60();
      uVar10 = SUB84(ppuVar9,0);
      puStack_2c0 = param_1;
      if (puVar2 != (undefined *)0x0) {
        lVar16 = *plStack_2a0;
        lStack_2c8 = lVar16;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_2a0 != lVar16) {
              _objc_enumerationMutation(puStack_2b8);
            }
            puVar15 = *(undefined **)(lStack_2a8 + (long)puVar12 * 8);
            puVar1 = puVar15;
            func_0x00010c08c3a0();
            if ((int)puVar1 == 1) {
              _objc_retain(puVar15);
              _objc_retain(param_1);
              puVar1 = puVar15;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar1;
              func_0x00010c0c5180();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(puVar1);
              if (puVar17 == (undefined *)0x0) {
                ppuVar9 = &PTR____CFConstantStringClassReference_110ecf8d8;
                puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99260();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = param_1;
              }
              else {
                puVar11 = puVar15;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar11;
                func_0x00010c0c5180();
                _objc_retainAutoreleasedReturnValue();
                puVar1 = puVar13;
                func_0x00010c0c55e0();
                puVar3 = param_1;
                FUN_108023440(param_1,puVar1);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar13);
                _objc_release(puVar11);
                puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                if (puVar3 == (undefined *)0x0) {
                  puVar11 = puVar15;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = puVar11;
                  func_0x00010c0c5180();
                  _objc_retainAutoreleasedReturnValue();
                  puVar17 = puVar13;
                  func_0x00010c0c55e0();
                  puStack_2f0 = puVar17;
                  func_0x00010c14de00();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = &PTR____CFConstantStringClassReference_110ecf8d8;
                  puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x00010bf99260();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar1);
                  _objc_release(puVar13);
                }
                else {
                  puVar4 = puVar15;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_retain();
                  if (((int)puStack_2d0 == 0x14) ||
                     (puVar17 = puVar4, func_0x00010bf0b760(),
                     puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0, (int)puVar17 != 0)) {
                    puVar17 = (undefined *)0x0;
                    puVar1 = puVar11;
                  }
                  else {
                    puVar13 = puVar4;
                    func_0x00010c0c5180();
                    _objc_retainAutoreleasedReturnValue();
                    puVar17 = puVar13;
                    func_0x00010c0c55e0();
                    puStack_2f0 = puVar17;
                    func_0x00010c14de00();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar9 = &PTR____CFConstantStringClassReference_110ecf8d8;
                    puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
                    func_0x00010bf99260();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar1);
                    _objc_release(puVar13);
                  }
                  _objc_release(puVar4);
                  _objc_release(puVar4);
                  if (puVar17 == (undefined *)0x0) {
                    puVar17 = puVar15;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar17;
                    func_0x00010bf7ee20();
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = puVar11;
                    func_0x00010bfe0640();
                    if ((int)puVar4 == 0) {
LAB_108022328:
                      puVar5 = puVar15;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar6 = puVar5;
                      func_0x00010bf0b760();
                      puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,(int)puVar6);
                      _objc_release(puVar5);
                      if ((int)puVar4 != 0) {
                        _objc_release(puVar1);
                        _objc_release(puVar13);
                      }
                      _objc_release(puVar11);
                      _objc_release(puVar17);
                      param_1 = puStack_2c0;
                      if ((int)puStack_2d8 == 5) {
                        ppuVar9 = &PTR____CFConstantStringClassReference_110ecf8d8;
                        puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
                        func_0x00010bf99260();
                        _objc_retainAutoreleasedReturnValue();
                        puVar11 = (undefined *)0x0;
                        goto LAB_1080223bc;
                      }
                    }
                    else {
                      puVar13 = puVar15;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar1 = puVar13;
                      func_0x00010bf7ee20();
                      _objc_retainAutoreleasedReturnValue();
                      puVar5 = puVar1;
                      func_0x00010c2a5040();
                      if ((int)puVar5 == 0) goto LAB_108022328;
                      _objc_release(puVar1);
                      _objc_release(puVar13);
                      _objc_release(puVar11);
                      _objc_release(puVar17);
                    }
                    puVar11 = (undefined *)0x0;
                    puVar17 = (undefined *)0x0;
                  }
                  else {
                    _objc_retain(puVar17);
                    puVar11 = puVar17;
                  }
                }
LAB_1080223bc:
                _objc_release(puVar11);
                _objc_release(puVar3);
                puVar11 = param_1;
                lVar16 = lStack_2c8;
              }
LAB_1080223d4:
              _objc_release(param_1);
              _objc_release(puVar15);
              uVar10 = SUB84(ppuVar9,0);
              puVar15 = puStack_2b8;
              param_1 = puVar11;
              if (puVar17 != (undefined *)0x0) goto LAB_108022864;
            }
            else {
              puVar1 = puVar15;
              func_0x00010c08c3a0();
              if ((int)puVar1 == 4) {
                _objc_retain(puVar15);
                puVar17 = puVar15;
                func_0x00010bf5cc00();
                _objc_retainAutoreleasedReturnValue();
                puVar1 = puVar17;
                func_0x00010c0840e0();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar1;
                func_0x00010bf96da0();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar11;
                func_0x00010bf96ee0();
                _objc_release(puVar11);
                _objc_release(puVar1);
                _objc_release(puVar17);
                if ((int)puVar13 != 7) {
                  puVar17 = puVar15;
                  func_0x00010bf5cc00();
                  _objc_retainAutoreleasedReturnValue();
                  param_1 = puVar17;
                  func_0x00010c0cc0c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar17);
                  if (param_1 != (undefined *)0x0) {
                    puVar17 = param_1;
                    func_0x00010c08eee0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (puVar17 != (undefined *)0x0) {
                      puVar17 = (undefined *)0x0;
                      puVar11 = puStack_2c0;
                      goto LAB_1080223d4;
                    }
                  }
                  ppuVar9 = &PTR____CFConstantStringClassReference_110ecf8d8;
                  puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x00010bf99260();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puStack_2c0;
                  goto LAB_1080223d4;
                }
                _objc_release(puVar15);
                param_1 = puStack_2c0;
              }
            }
            puVar12 = puVar12 + 1;
          } while (puVar2 != puVar12);
          ppuVar9 = &puStack_2b0;
          puVar2 = puStack_2b8;
          func_0x00010bf52a60();
          uVar10 = SUB84(ppuVar9,0);
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puStack_2b8);
      puVar2 = param_1;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bfd8fa0();
      _objc_release(puVar2);
      if ((int)puVar1 == 0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar1 = param_1;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c0c4c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_1);
        puVar12 = puVar2;
        func_0x00010bfd83e0();
        if (((ulong)puVar12 & 1) == 0) {
          uVar10 = 0x10ecf8d8;
          puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = param_1;
        }
        else {
          puVar12 = puVar2;
          func_0x00010c08c260();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar12;
          func_0x00010c2791e0();
          if (puVar15 == (undefined *)0x0) {
            uVar10 = 0x10ecf8d8;
            puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            lStack_228 = 0;
            uStack_230 = 0;
            uStack_218 = 0;
            plStack_220 = (long *)0x0;
            puVar15 = puVar12;
            func_0x00010c2791c0();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = SUB84(&uStack_230,0);
            puVar17 = puVar15;
            func_0x00010bf52a60();
            if (puVar17 != (undefined *)0x0) {
              lVar16 = *plStack_220;
              do {
                puVar11 = (undefined *)0x0;
                puStack_2e0 = puVar17;
                do {
                  if (*plStack_220 != lVar16) {
                    _objc_enumerationMutation(puVar15);
                  }
                  puVar13 = *(undefined **)(lStack_228 + (long)puVar11 * 8);
                  puVar17 = puVar13;
                  func_0x00010c2787c0();
                  if (puVar17 == (undefined *)0x0) {
                    uVar10 = 0x10ecf8d8;
                    puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
                    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
                    _objc_retainAutoreleasedReturnValue();
LAB_108022840:
                    _objc_release(puVar15);
                    goto LAB_108022848;
                  }
                  uStack_248 = 0;
                  uStack_250 = 0;
                  uStack_238 = 0;
                  uStack_240 = 0;
                  lStack_268 = 0;
                  uStack_270 = 0;
                  uStack_258 = 0;
                  plStack_260 = (long *)0x0;
                  func_0x00010c2787a0();
                  _objc_retainAutoreleasedReturnValue();
                  puStack_2b8 = puVar13;
                  func_0x00010bf52a60();
                  if (puVar13 != (undefined *)0x0) {
                    lStack_2c8 = *plStack_260;
                    lStack_2e8 = lVar16;
                    puStack_2d8 = puVar15;
                    puStack_2d0 = puVar12;
                    do {
                      puVar12 = (undefined *)0x0;
                      do {
                        if (*plStack_260 != lStack_2c8) {
                          _objc_enumerationMutation(puStack_2b8);
                        }
                        uVar14 = *(ulong *)(lStack_268 + (long)puVar12 * 8);
                        uVar18 = uVar14;
                        func_0x00010c0ff680();
                        if (uVar18 == 0) {
                          uVar10 = 0x10ecf8d8;
                          puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
                          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
                          _objc_retainAutoreleasedReturnValue();
LAB_108022834:
                          _objc_release(puStack_2b8);
                          puVar12 = puStack_2d0;
                          puVar15 = puStack_2d8;
                          goto LAB_108022840;
                        }
                        uVar18 = uVar14;
                        func_0x00010c0ff680();
                        if (uVar18 != 0) {
                          uVar18 = 0;
                          do {
                            func_0x00010c0fee00();
                            _objc_retainAutoreleasedReturnValue();
                            uVar7 = uVar14;
                            func_0x00010c0ff660(uVar14);
                            _objc_retainAutoreleasedReturnValue();
                            uVar8 = uVar7;
                            func_0x00010c296de0();
                            puVar15 = param_1;
                            func_0x00010802355c(param_1,uVar8 & 0xffffffff);
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release();
                            _objc_release(uVar7);
                            _objc_release(param_1);
                            if (puVar15 == (undefined *)0x0) {
                              uVar10 = 0x10ecf8d8;
                              puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
                              func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
                              _objc_retainAutoreleasedReturnValue();
                              param_1 = puStack_2c0;
                              goto LAB_108022834;
                            }
                            uVar18 = uVar18 + 1;
                            uVar7 = uVar14;
                            func_0x00010c0ff680();
                            param_1 = puStack_2c0;
                          } while (uVar18 < uVar7);
                        }
                        puVar12 = puVar12 + 1;
                      } while (puVar12 != puVar13);
                      puVar13 = puStack_2b8;
                      func_0x00010bf52a60();
                      puVar12 = puStack_2d0;
                      puVar15 = puStack_2d8;
                      lVar16 = lStack_2e8;
                    } while (puVar13 != (undefined *)0x0);
                  }
                  _objc_release(puStack_2b8);
                  puVar11 = puVar11 + 1;
                } while (puVar11 != puStack_2e0);
                uVar10 = SUB84(&uStack_230,0);
                puVar17 = puVar15;
                func_0x00010bf52a60();
              } while (puVar17 != (undefined *)0x0);
            }
            _objc_release(puVar15);
            puVar17 = (undefined *)0x0;
          }
LAB_108022848:
          _objc_release(puVar12);
          puVar11 = param_1;
        }
        _objc_release(puVar11);
        _objc_release(puVar2);
        puVar15 = puVar1;
LAB_108022864:
        _objc_release(puVar15);
        param_1 = puVar11;
      }
      goto LAB_108022868;
    }
  }
  uVar10 = 0x10ecf8d8;
  puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
LAB_108022868:
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar9 = &puStack_320;
    pcStack_2f8 = FUN_108022910;
    puStack_318 = PTR_PTR_1126fc2a0;
    puStack_320 = puVar2;
    puStack_310 = puVar1;
    puStack_308 = param_1;
    puStack_300 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_320,PTR_s_init_1125d9248);
    if (ppuVar9 != (undefined **)0x0) {
      *(undefined4 *)((long)ppuVar9 + 8) = uVar10;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 108022910; end: 108022957; -[SCSnapDocValidationConfigBuilder initWithMediaContextType:] */

void FUN_108022910(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc2a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108022958; end: 108022987; -[SCSnapDocValidationConfigBuilder buildConfig] */

void FUN_108022958(void)

{
  _objc_alloc(PTR_PTR_1126d8e78);
  func_0x00010c029140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108022988; end: 10802343f;  */

void FUN_108022988(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined **unaff_x21;
  undefined **ppuVar11;
  undefined **unaff_x23;
  long lVar12;
  undefined **unaff_x24;
  undefined **ppuVar13;
  undefined **unaff_x27;
  undefined **ppuVar14;
  undefined **ppuStack_3d0;
  undefined *puStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 **ppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  ulong *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
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
  ppuVar13 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  ppuVar11 = param_2;
  func_0x00010c0c46a0();
  _objc_retain(param_1);
  ppuVar14 = param_1;
  func_0x00010c0c62a0();
  if (ppuVar14 == (undefined **)0x0) {
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar14 = param_1;
    func_0x00010c0c62a0();
    ppuVar1 = param_1;
    func_0x00010c0c5600();
    unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar1 < ppuVar14) {
      ppuVar11 = param_1;
      func_0x00010c0c62a0();
      ppuVar14 = param_1;
      func_0x00010c0c5600();
      ppuStack_160 = ppuVar11;
      ppuStack_158 = ppuVar14;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_alloc();
      func_0x00010c0c62a0(param_1);
      func_0x00010bffc4a0();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      ppuVar1 = param_1;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_140 = ppuVar1;
      func_0x00010bf52a60();
      if (ppuVar1 != (undefined **)0x0) {
        lStack_138 = *plStack_120;
        do {
          unaff_x23 = (undefined **)0x0;
          do {
            if (*plStack_120 != lStack_138) {
              _objc_enumerationMutation(ppuStack_140);
            }
            unaff_x24 = *(undefined ***)(lStack_128 + (long)unaff_x23 * 8);
            _objc_retain(unaff_x24);
            ppuVar14 = unaff_x24;
            func_0x00010c09d820();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar14;
            func_0x00010c08fa60();
            if (ppuVar2 == (undefined **)0x0) {
              _objc_release(ppuVar14);
LAB_108022bec:
              ppuVar14 = unaff_x24;
              func_0x00010c09d820();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar14;
              func_0x00010c08fa60();
              _objc_release(ppuVar14);
              puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              if ((ppuVar2 != (undefined **)0x0 && (int)ppuVar11 != 0x13) && (int)ppuVar11 != 0x1a)
              {
                ppuVar14 = unaff_x24;
                func_0x00010c0c55e0();
                unaff_x27 = (undefined **)PTR_PTR_1126bfc90;
                func_0x00010c119380();
                func_0x00010b7f519c();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_160 = ppuVar14;
                ppuStack_158 = unaff_x27;
                func_0x00010c14de00(puVar4);
                _objc_retainAutoreleasedReturnValue();
LAB_108022dac:
                ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99260();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar4);
                goto LAB_108022dc4;
              }
              ppuVar14 = unaff_x24;
              func_0x00010bdc2b80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar14;
              func_0x00010c08fa60();
              if (ppuVar2 != (undefined **)0x0) {
                _objc_release(ppuVar14);
LAB_108022c78:
                ppuVar14 = unaff_x24;
                func_0x00010c09d7e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar2 = ppuVar14;
                func_0x00010c08fa60();
                if (ppuVar2 == (undefined **)0x0) {
                  ppuVar2 = unaff_x24;
                  func_0x00010c09d820();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar3 = ppuVar2;
                  func_0x00010c08fa60();
                  _objc_release(ppuVar2);
                  _objc_release(ppuVar14);
                  if (ppuVar3 == (undefined **)0x0) goto LAB_108022f28;
                }
                else {
                  _objc_release(ppuVar14);
                }
                puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                ppuVar14 = unaff_x24;
                func_0x00010c0c55e0();
                unaff_x27 = (undefined **)PTR_PTR_1126bfc90;
                func_0x00010c119380();
                func_0x00010b7f519c();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_160 = ppuVar14;
                ppuStack_158 = unaff_x27;
                func_0x00010c14de00(puVar4);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_108022dac;
              }
              ppuVar2 = unaff_x24;
              func_0x00010bf4cce0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar2;
              func_0x00010c08fa60();
              _objc_release(ppuVar2);
              _objc_release(ppuVar14);
              if (ppuVar3 != (undefined **)0x0) goto LAB_108022c78;
LAB_108022f28:
              ppuVar14 = unaff_x24;
              func_0x00010bf4cce0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar14;
              func_0x00010c08fa60();
              if (ppuVar2 == (undefined **)0x0) {
                ppuVar2 = unaff_x24;
                func_0x00010bdc2b80();
                _objc_retainAutoreleasedReturnValue();
                ppuVar3 = ppuVar2;
                func_0x00010c08fa60();
                if (ppuVar3 != (undefined **)0x0) {
LAB_108022f84:
                  _objc_release(ppuVar2);
                  goto LAB_108022f8c;
                }
                ppuVar3 = unaff_x24;
                func_0x00010c09d820();
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = ppuVar3;
                func_0x00010c08fa60();
                if (ppuVar6 != (undefined **)0x0) {
                  _objc_release(ppuVar3);
                  goto LAB_108022f84;
                }
                ppuVar6 = unaff_x24;
                func_0x00010c09d7e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar7 = ppuVar6;
                ppuStack_150 = ppuVar3;
                func_0x00010c08fa60();
                ppuStack_148 = ppuVar7;
                _objc_release(ppuVar6);
                _objc_release(ppuStack_150);
                _objc_release(ppuVar2);
                _objc_release(ppuVar14);
                unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                if (ppuStack_148 == (undefined **)0x0) {
                  ppuVar14 = unaff_x24;
                  func_0x00010c0c55e0();
                  ppuStack_160 = ppuVar14;
                  func_0x00010c14de00();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_108022bd0;
                }
              }
              else {
LAB_108022f8c:
                _objc_release(ppuVar14);
              }
              ppuVar14 = unaff_x24;
              func_0x00010c0c6c20();
              unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              if ((int)ppuVar14 == 0) {
                ppuVar14 = unaff_x24;
                func_0x00010c0c55e0();
                ppuStack_160 = ppuVar14;
                func_0x00010c14de00();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_108022bd0;
              }
              _objc_release(unaff_x24);
            }
            else {
              ppuVar2 = unaff_x24;
              func_0x00010c09d7e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar2;
              func_0x00010c08fa60();
              _objc_release(ppuVar2);
              _objc_release(ppuVar14);
              unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              if (ppuVar3 == (undefined **)0x0) goto LAB_108022bec;
              ppuVar14 = unaff_x24;
              func_0x00010c0c55e0();
              ppuStack_160 = ppuVar14;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
LAB_108022bd0:
              ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99260();
              _objc_retainAutoreleasedReturnValue();
LAB_108022dc4:
              _objc_release(unaff_x27);
              _objc_release(unaff_x24);
              if (ppuVar14 != (undefined **)0x0) goto LAB_108023110;
            }
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0c55e0(unaff_x24);
            func_0x00010c0df7c0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x21;
            func_0x00010bf4b900();
            _objc_release(puVar4);
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if ((int)unaff_x27 != 0) {
              ppuVar11 = unaff_x24;
              func_0x00010c0c55e0();
              ppuStack_160 = ppuVar11;
              func_0x00010c14de00(puVar4);
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99260();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
              goto LAB_108023110;
            }
            func_0x00010c0c55e0(unaff_x24);
            func_0x00010c0df7c0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x21);
            _objc_release(puVar5);
            _objc_retain(unaff_x24);
            _objc_retain(param_1);
            ppuVar14 = unaff_x24;
            func_0x00010c0c55e0();
            if ((long)ppuVar14 < 1) {
              unaff_x27 = &PTR____CFConstantStringClassReference_110ecfb98;
LAB_108022ea8:
              puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              ppuVar14 = unaff_x24;
              func_0x00010c0c55e0();
              ppuStack_160 = ppuVar14;
              func_0x00010c14de00(puVar4);
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99260();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
            }
            else {
              ppuVar14 = unaff_x24;
              func_0x00010c0c55e0();
              ppuVar2 = param_1;
              func_0x00010c0c5600();
              unaff_x27 = &PTR____CFConstantStringClassReference_110ecfbb8;
              if ((long)ppuVar2 < (long)ppuVar14) goto LAB_108022ea8;
              ppuVar14 = (undefined **)0x0;
            }
            _objc_release(param_1);
            _objc_release(unaff_x24);
            if (ppuVar14 != (undefined **)0x0) goto LAB_108023110;
            unaff_x23 = (undefined **)((long)unaff_x23 + 1);
          } while (ppuVar1 != unaff_x23);
          ppuVar1 = ppuStack_140;
          func_0x00010bf52a60();
        } while (ppuVar1 != (undefined **)0x0);
      }
      ppuVar14 = (undefined **)0x0;
LAB_108023110:
      _objc_release(ppuStack_140);
    }
    _objc_release(unaff_x21);
  }
  _objc_release(param_1);
  if (ppuVar14 != (undefined **)0x0) {
    _objc_retain(ppuVar14);
    ppuVar11 = ppuVar14;
    goto LAB_1080233e8;
  }
  unaff_x21 = param_1;
  ppuVar13 = param_2;
  FUN_108021ea0();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x21 == (undefined **)0x0) {
    func_0x00010c0c46a0(param_2);
    _objc_retain(param_1);
    ppuVar11 = param_1;
    func_0x00010bfdd480();
    if ((int)ppuVar11 == 0) goto LAB_1080232dc;
    ppuVar11 = param_1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar11;
    func_0x00010bfdd4a0();
    if ((int)ppuVar1 == 0) {
      unaff_x23 = param_1;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010bfde4c0();
      _objc_release(unaff_x23);
      _objc_release(ppuVar11);
      if (((ulong)unaff_x24 & 1) != 0) goto LAB_1080231dc;
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_release(ppuVar11);
LAB_1080231dc:
      ppuVar11 = param_1;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar11;
      func_0x00010bfdd4a0();
      _objc_release(ppuVar11);
      if ((int)ppuVar1 == 0) {
LAB_10802325c:
        ppuVar11 = param_1;
        func_0x00010c26d760();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = ppuVar11;
        func_0x00010bfde4c0();
        _objc_release(ppuVar11);
        if ((int)unaff_x23 != 0) {
          ppuVar11 = param_1;
          func_0x00010c26d760();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar11;
          func_0x00010c29b740();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = unaff_x23;
          func_0x00010c0c55e0();
          unaff_x24 = param_1;
          FUN_108023440();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(unaff_x23);
          _objc_release(ppuVar11);
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (unaff_x24 == (undefined **)0x0) {
            unaff_x23 = param_1;
            func_0x00010c26d760();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x23;
            func_0x00010c29b740();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108023370;
          }
        }
LAB_1080232dc:
        _objc_release(param_1);
        ppuVar11 = (undefined **)0x0;
        goto LAB_1080233e0;
      }
      ppuVar11 = param_1;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar11;
      func_0x00010c26e060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar1;
      func_0x00010c0c55e0();
      unaff_x24 = param_1;
      FUN_108023440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar1);
      _objc_release(ppuVar11);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (unaff_x24 != (undefined **)0x0) goto LAB_10802325c;
      unaff_x23 = param_1;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c26e060();
      _objc_retainAutoreleasedReturnValue();
LAB_108023370:
      ppuVar11 = unaff_x24;
      func_0x00010c0c55e0();
      ppuStack_160 = ppuVar11;
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
    }
    _objc_release(param_1);
  }
  else {
    _objc_retain(unaff_x21);
    ppuVar11 = unaff_x21;
  }
LAB_1080233e0:
  _objc_release(unaff_x21);
LAB_1080233e8:
  _objc_release(ppuVar14);
  _objc_release(param_2);
  ppuVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_108023440;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    puStack_270 = (ulong *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    ppuVar2 = ppuVar13;
    ppuStack_1b0 = ppuVar14;
    ppuStack_1a8 = unaff_x27;
    ppuStack_1a0 = unaff_x24;
    ppuStack_198 = unaff_x23;
    ppuStack_190 = ppuVar11;
    ppuStack_188 = unaff_x21;
    ppuStack_180 = param_2;
    ppuStack_178 = param_1;
    puStack_170 = &stack0xfffffffffffffff0;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      unaff_x23 = (undefined **)*puStack_270;
      unaff_x21 = ppuVar11;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_270 != unaff_x23) {
            _objc_enumerationMutation(ppuVar1);
          }
          ppuVar11 = *(undefined ***)(lStack_278 + (long)unaff_x24 * 8);
          ppuVar3 = ppuVar11;
          func_0x00010c0c55e0();
          if (ppuVar3 == ppuVar13) {
            _objc_retain(ppuVar11);
            goto LAB_108023518;
          }
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (unaff_x21 != unaff_x24);
        unaff_x21 = ppuVar1;
        func_0x00010bf52a60();
      } while (unaff_x21 != (undefined **)0x0);
    }
    ppuVar11 = (undefined **)0x0;
LAB_108023518:
    ppuVar3 = ppuVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      puVar10 = &uStack_3a0;
      uStack_288 = 0x10802355c;
      lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      plStack_390 = (long *)0x0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      ppuStack_2d0 = ppuVar14;
      ppuStack_2c8 = unaff_x27;
      ppuStack_2c0 = unaff_x24;
      ppuStack_2b8 = unaff_x23;
      ppuStack_2b0 = ppuVar11;
      ppuStack_2a8 = unaff_x21;
      ppuStack_2a0 = ppuVar13;
      ppuStack_298 = ppuVar1;
      ppuStack_290 = &puStack_170;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar3;
      func_0x00010bf52a60();
      uVar9 = SUB84(puVar10,0);
      if (ppuVar14 != (undefined **)0x0) {
        lVar12 = *plStack_390;
        do {
          ppuVar13 = (undefined **)0x0;
          do {
            if (*plStack_390 != lVar12) {
              _objc_enumerationMutation(ppuVar3);
            }
            ppuVar11 = *(undefined ***)(lStack_398 + (long)ppuVar13 * 8);
            ppuVar1 = ppuVar11;
            func_0x00010c0ff5c0();
            uVar9 = SUB84(puVar10,0);
            if (ppuVar2 == (undefined **)((ulong)ppuVar1 & 0xffffffff)) {
              _objc_retain(ppuVar11);
              goto LAB_108023634;
            }
            ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          } while (ppuVar14 != ppuVar13);
          ppuVar14 = ppuVar3;
          puVar10 = &uStack_3a0;
          func_0x00010bf52a60();
          uVar9 = SUB84(puVar10,0);
        } while (ppuVar14 != (undefined **)0x0);
      }
      ppuVar11 = (undefined **)0x0;
LAB_108023634:
      ppuVar14 = ppuVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
        ___stack_chk_fail();
        pppuVar8 = &ppuStack_3d0;
        pcStack_3a8 = FUN_108023678;
        puStack_3c8 = PTR_PTR_1126fc2a8;
        ppuStack_3d0 = ppuVar14;
        ppuStack_3c0 = ppuVar2;
        ppuStack_3b8 = ppuVar3;
        pppuStack_3b0 = &ppuStack_290;
        _objc_msgSendSuper2(&ppuStack_3d0,PTR_s_init_1125d9248);
        if (pppuVar8 != (undefined ***)0x0) {
          *(undefined4 *)((long)pppuVar8 + 8) = uVar9;
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 108023440; end: 108023677;  */

void FUN_108023440(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lStack_270;
  undefined *puStack_268;
  ulong uStack_260;
  long lStack_258;
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
  undefined8 uStack_128;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar4 = param_2;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(ulong *)(lStack_118 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010c0c55e0();
        if (uVar2 == param_2) {
          _objc_retain(uVar7);
          goto LAB_108023518;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar7 = 0;
LAB_108023518:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = &uStack_240;
    uStack_128 = 0x10802355c;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf52a60();
    uVar5 = SUB84(puVar6,0);
    if (lVar1 != 0) {
      lVar8 = *plStack_230;
      do {
        lVar9 = 0;
        do {
          if (*plStack_230 != lVar8) {
            _objc_enumerationMutation(param_1);
          }
          uVar7 = *(ulong *)(lStack_238 + lVar9 * 8);
          uVar2 = uVar7;
          func_0x00010c0ff5c0();
          uVar5 = SUB84(puVar6,0);
          if (uVar4 == (uVar2 & 0xffffffff)) {
            _objc_retain(uVar7);
            goto LAB_108023634;
          }
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        lVar1 = param_1;
        puVar6 = &uStack_240;
        func_0x00010bf52a60();
        uVar5 = SUB84(puVar6,0);
      } while (lVar1 != 0);
    }
    uVar7 = 0;
LAB_108023634:
    lVar1 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      plVar3 = &lStack_270;
      pcStack_248 = FUN_108023678;
      puStack_268 = PTR_PTR_1126fc2a8;
      lStack_270 = lVar1;
      uStack_260 = uVar4;
      lStack_258 = param_1;
      ppuStack_250 = &puStack_130;
      _objc_msgSendSuper2(&lStack_270,PTR_s_init_1125d9248);
      if (plVar3 != (long *)0x0) {
        *(undefined4 *)((long)plVar3 + 8) = uVar5;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 108023678; end: 1080236bf; -[SCSnapDocValidationConfig initWithMediaContextType:] */

void FUN_108023678(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc2a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1080236c0; end: 1080236e3; -[SCSnapDocValidationConfig copyWithZone:] */

undefined8 FUN_1080236c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1080236e4; end: 1080236eb; -[SCSnapDocValidationConfig hash] */

long FUN_1080236e4(long param_1)

{
  return (long)*(int *)(param_1 + 8);
}



/* Entry: 1080236ec; end: 108023773; -[SCSnapDocValidationConfig isEqual:] */

bool FUN_1080236ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 8) == *(int *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108023774; end: 10802377b; -[SCSnapDocValidationConfig mediaContextType] */

undefined4 FUN_108023774(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10802377c; end: 1080237eb;  */

void FUN_10802377c(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  puVar2 = PTR_PTR_1126d8e80;
  _objc_alloc(PTR_PTR_1126d8e80);
  piVar3 = param_1 + 2;
  iVar1 = *param_1;
  func_0x0001001011a4(piVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010960(puVar2,param_2,(long)iVar1,piVar3);
  FUN_1080237ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080237ec; end: 1080237f7;  */

void FUN_1080237ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080237f8; end: 10802386f;  */

void FUN_1080237f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c134c60();
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



/* Entry: 108023870; end: 1080238e7; -[SCNMediaengineModelMediaEngineModel initWithCpp:] */

undefined1 * FUN_108023870(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fc2b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000108024594();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1080243c4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080238e8; end: 1080239bb; +[SCNMediaengineModelMediaEngineModel create] */

void FUN_1080238e8(void)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  FUN_10802bef8(&lStack_48);
  if (lStack_48 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110a17a20;
    lStack_38 = lStack_48;
    lStack_30 = lStack_40;
    if (lStack_40 != 0) {
      do {
        func_0x000108024594();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_28,&lStack_38,FUN_108024354);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108024610();
  }
  FUN_1080243c4(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1080239bc; end: 108023b67; -[SCNMediaengineModelMediaEngineModel listSmartTemplates:] */

void FUN_1080239bc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_80 [24];
  long lStack_68;
  long lStack_60;
  undefined1 uStack_48;
  
  func_0x000108024550();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1080237f8(auStack_80);
  func_0x000108024534();
  func_0x000108024578();
  func_0x0001080245b0(uStack_48);
  if ((bool)in_ZR) {
    plVar2 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        (lStack_60 - lStack_68) / 0x18);
    _objc_retainAutoreleasedReturnValue();
    for (; lStack_68 != lStack_60; lStack_68 = lStack_68 + 0x18) {
      lVar1 = lStack_68;
      FUN_1080246b8(lStack_68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(plVar2,param_2,lVar1);
      _objc_release(lVar1);
    }
    func_0x00010bf51e00(plVar2);
    func_0x0001080245f8();
    func_0x00010bfbaec0(uVar3,param_2,plVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar2 = &lStack_68;
    FUN_10802377c(plVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(uVar3,param_2,plVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(plVar2);
  func_0x0001080241bc(&lStack_68);
  func_0x00010802452c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108023b68; end: 108023c7f; -[SCNMediaengineModelMediaEngineModel getNoEffectTemplate] */

void FUN_108023b68(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 auStack_58 [32];
  char cStack_38;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_58);
  puVar2 = PTR_PTR_1126b9638;
  if (cStack_38 == '\x01') {
    puVar1 = auStack_58;
    FUN_1080246b8(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = auStack_58;
    FUN_10802377c(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080245e4();
  func_0x0001080242a4(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108023c80; end: 108023d93; -[SCNMediaengineModelMediaEngineModel applyTemplate:smartTemplate:] */

void FUN_108023c80(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  func_0x0001080245c8();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_108025e88(auStack_70);
  FUN_108024648(auStack_88);
  (**(code **)(*plVar1 + 0x20))(auStack_58,plVar1,auStack_70,auStack_88);
  func_0x000100100fec(auStack_88);
  func_0x000100100fec(auStack_70);
  FUN_108023d94(auStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010802461c();
  func_0x0001080245e4();
  func_0x00010802452c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 108023d94; end: 108023e17;  */

void FUN_108023d94(long param_1)

{
  undefined1 in_ZR;
  
  func_0x0001080245b0(*(undefined1 *)(param_1 + 0x20));
  if ((bool)in_ZR) {
    FUN_108025ef8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010802463c();
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10802377c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010802463c();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010802452c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108023e18; end: 108023ed3; -[SCNMediaengineModelMediaEngineModel containsFeaturedTemplate:featuredTemplate:] */

void FUN_108023e18(void)

{
  undefined1 *puVar1;
  long unaff_x21;
  long *plVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  func_0x0001080245c8();
  plVar2 = *(long **)(unaff_x21 + 0x18);
  func_0x000108024588();
  (**(code **)(*plVar2 + 0x28))(auStack_58,plVar2,auStack_70);
  func_0x000108024578();
  puVar1 = auStack_58;
  FUN_108023ed4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108024304(auStack_58);
  func_0x00010802452c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108023ed4; end: 108023f5f;  */

void FUN_108023ed4(byte *param_1)

{
  undefined1 in_ZR;
  
  func_0x0001080245b0(param_1[0x20]);
  if ((bool)in_ZR) {
    FUN_10802446c();
    param_1 = (byte *)(ulong)*param_1;
    func_0x0001006368b8(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010802463c();
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10802377c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010802463c();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010802452c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108023f60; end: 10802407b; -[SCNMediaengineModelMediaEngineModel getFeaturedTemplate:] */

void FUN_108023f60(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  int *piVar2;
  long unaff_x20;
  undefined8 uVar3;
  int aiStack_58 [8];
  undefined1 uStack_38;
  
  func_0x000108024550();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000108024588();
  func_0x000108024534();
  func_0x000108024578();
  func_0x0001080245b0(uStack_38);
  if ((bool)in_ZR) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)aiStack_58[0]);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(uVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    piVar2 = aiStack_58;
    FUN_10802377c(piVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(uVar3,param_2,piVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080245f8();
  func_0x00010802432c(aiStack_58);
  func_0x00010802452c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10802407c; end: 108024127; -[SCNMediaengineModelMediaEngineModel removeTemplate:] */

void FUN_10802407c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  func_0x000108024550();
  func_0x000108024588();
  func_0x000108024534();
  func_0x000108024578();
  puVar1 = auStack_58;
  FUN_108023d94(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080242d4(auStack_58);
  func_0x00010802452c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108024128; end: 10802417b; -[SCNMediaengineModelMediaEngineModel .cxx_destruct] */

void FUN_108024128(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a17a20;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1080243c4((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10802417c; end: 10802425f; -[SCNMediaengineModelMediaEngineModel .cxx_construct] */

undefined8 * FUN_10802417c(undefined8 *param_1)

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
      func_0x000108024594();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108024260; end: 108024267;  */

void FUN_108024260(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 108024268; end: 108024353;  */

void FUN_108024268(long param_1,long param_2)

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



/* Entry: 108024354; end: 1080243c3;  */

void FUN_108024354(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bc478;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108024594();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1080243c4(&uStack_30);
  return;
}



/* Entry: 1080243c4; end: 1080243eb;  */

long FUN_1080243c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1080243ec; end: 1080243ef;  */

void FUN_1080243ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a17a58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1080243f0; end: 108024417;  */

undefined4 * FUN_1080243f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 108024418; end: 10802442b;  */

void FUN_108024418(void)

{
  FUN_108024438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10802442c; end: 108024437;  */

char * FUN_10802442c(void)

{
  return "Bad expected access";
}



/* Entry: 108024438; end: 10802446b;  */

void FUN_108024438(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a17a58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 10802446c; end: 10802452b;  */

long FUN_10802446c(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return param_1;
  }
  puVar2 = (undefined8 *)0x28;
  ___cxa_allocate_exception();
  FUN_1080243f0(auStack_50,param_1);
  *puVar2 = &PTR_FUN_110a17a58;
  *(undefined4 *)(puVar2 + 1) = auStack_50[0];
  puVar2[3] = uStack_40;
  puVar2[2] = uStack_48;
  puVar2[4] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  ___cxa_throw(puVar2,&PTR_DAT_110a17a30,FUN_1080243ec);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10802450c);
  (*pcVar1)();
}



/* Entry: 10802452c; end: 108024647;  */

void FUN_10802452c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108024648; end: 1080246b7;  */

void FUN_108024648(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c23eee0();
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



/* Entry: 1080246b8; end: 108024717;  */

void FUN_1080246b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc450;
  _objc_alloc(PTR_PTR_1126bc450);
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046d80(puVar1,param_2,param_1);
  FUN_108024718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108024718; end: 108024723;  */

void FUN_108024718(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108024724; end: 10802479b; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager initWithCpp:] */

undefined1 * FUN_108024724(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fc2b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000108025da0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1080257ac(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10802479c; end: 108024873; +[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager create] */

void FUN_10802479c(void)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  FUN_108027984(&lStack_48);
  if (lStack_48 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110a17a70;
    lStack_38 = lStack_48;
    lStack_30 = lStack_40;
    if (lStack_40 != 0) {
      do {
        func_0x000108025da0();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_28,&lStack_38,FUN_108025738);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108025e70();
  }
  FUN_1080257ac(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 108024874; end: 108024a0f; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager registerAudioCodecFormats:] */

void FUN_108024874(ulong param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x11;
  undefined4 *unaff_x20;
  undefined4 unaff_w23;
  ulong unaff_x26;
  undefined4 *in_stack_00000010;
  
  func_0x000108025db0();
  func_0x000108025b54();
  func_0x000108025c7c();
  func_0x000108025df0();
  func_0x000108025d78();
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) goto LAB_108024984;
    func_0x000108025d04();
    FUN_1080257e0();
    func_0x000108025c08();
    func_0x000108025bc8();
    FUN_10802581c();
  }
  func_0x000108025c20();
  func_0x000108025b74();
  if (param_1 != 0) {
    func_0x000108025cc4();
    do {
      func_0x000108025d24();
      if (!(bool)in_ZR) {
        func_0x000108025d80();
      }
      func_0x000108025c8c();
      func_0x000108025d50();
      func_0x000108025d90();
      func_0x000108025ce4();
      func_0x000108025e08();
      if ((bool)in_CY) {
        func_0x000108025c4c();
        if (extraout_x11 != 0) {
          FUN_1080257d4();
          goto LAB_1080249e4;
        }
        func_0x000108025c9c();
        in_CY = unaff_x26 <= extraout_x8;
        in_ZR = extraout_x8 == unaff_x26;
        func_0x000108025de4();
        FUN_1080257e0();
        func_0x000108025bec();
        func_0x000108025ba4();
        FUN_10802581c();
      }
      else {
        *unaff_x20 = unaff_w23;
        in_CY = 0;
        unaff_x20 = unaff_x20 + 1;
      }
      in_stack_00000010 = unaff_x20;
      func_0x000108025d40();
      func_0x000108025dd8();
    } while ((!(bool)in_CY) || (func_0x000108025b74(), param_1 != 0));
  }
  func_0x000108025cfc();
  func_0x000108025cfc();
  func_0x000108025dcc();
  func_0x000108025d70(*(undefined8 *)(extraout_x8_00 + 0x10));
  func_0x000108025610(&stack0x00000008);
  func_0x000108025cfc();
  func_0x000108025c34();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108024984:
  FUN_1080257d4();
LAB_1080249e4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1080249e8);
  (*pcVar1)();
}



/* Entry: 108024a10; end: 108024bab; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager registerImageCodecFormats:] */

void FUN_108024a10(ulong param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x11;
  undefined4 *unaff_x20;
  undefined4 unaff_w23;
  ulong unaff_x26;
  undefined4 *in_stack_00000010;
  
  func_0x000108025db0();
  func_0x000108025b54();
  func_0x000108025c7c();
  func_0x000108025df0();
  func_0x000108025d78();
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) goto LAB_108024b20;
    func_0x000108025d04();
    FUN_108025860();
    func_0x000108025c08();
    func_0x000108025bc8();
    FUN_10802589c();
  }
  func_0x000108025c20();
  func_0x000108025b74();
  if (param_1 != 0) {
    func_0x000108025cc4();
    do {
      func_0x000108025d24();
      if (!(bool)in_ZR) {
        func_0x000108025d80();
      }
      func_0x000108025c8c();
      func_0x000108025d50();
      func_0x000108025d90();
      func_0x000108025ce4();
      func_0x000108025e08();
      if ((bool)in_CY) {
        func_0x000108025c4c();
        if (extraout_x11 != 0) {
          FUN_108025854();
          goto LAB_108024b80;
        }
        func_0x000108025c9c();
        in_CY = unaff_x26 <= extraout_x8;
        in_ZR = extraout_x8 == unaff_x26;
        func_0x000108025de4();
        FUN_108025860();
        func_0x000108025bec();
        func_0x000108025ba4();
        FUN_10802589c();
      }
      else {
        *unaff_x20 = unaff_w23;
        in_CY = 0;
        unaff_x20 = unaff_x20 + 1;
      }
      in_stack_00000010 = unaff_x20;
      func_0x000108025d40();
      func_0x000108025dd8();
    } while ((!(bool)in_CY) || (func_0x000108025b74(), param_1 != 0));
  }
  func_0x000108025cfc();
  func_0x000108025cfc();
  func_0x000108025dcc();
  func_0x000108025d70(*(undefined8 *)(extraout_x8_00 + 0x18));
  func_0x000108025634(&stack0x00000008);
  func_0x000108025cfc();
  func_0x000108025c34();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108024b20:
  FUN_108025854();
LAB_108024b80:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108024b84);
  (*pcVar1)();
}



/* Entry: 108024bac; end: 108024d47; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager registerVideoCodecFormats:] */

void FUN_108024bac(ulong param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x11;
  undefined4 *unaff_x20;
  undefined4 unaff_w23;
  ulong unaff_x26;
  undefined4 *in_stack_00000010;
  
  func_0x000108025db0();
  func_0x000108025b54();
  func_0x000108025c7c();
  func_0x000108025df0();
  func_0x000108025d78();
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) goto LAB_108024cbc;
    func_0x000108025d04();
    FUN_1080258e0();
    func_0x000108025c08();
    func_0x000108025bc8();
    FUN_10802591c();
  }
  func_0x000108025c20();
  func_0x000108025b74();
  if (param_1 != 0) {
    func_0x000108025cc4();
    do {
      func_0x000108025d24();
      if (!(bool)in_ZR) {
        func_0x000108025d80();
      }
      func_0x000108025c8c();
      func_0x000108025d50();
      func_0x000108025d90();
      func_0x000108025ce4();
      func_0x000108025e08();
      if ((bool)in_CY) {
        func_0x000108025c4c();
        if (extraout_x11 != 0) {
          FUN_1080258d4();
          goto LAB_108024d1c;
        }
        func_0x000108025c9c();
        in_CY = unaff_x26 <= extraout_x8;
        in_ZR = extraout_x8 == unaff_x26;
        func_0x000108025de4();
        FUN_1080258e0();
        func_0x000108025bec();
        func_0x000108025ba4();
        FUN_10802591c();
      }
      else {
        *unaff_x20 = unaff_w23;
        in_CY = 0;
        unaff_x20 = unaff_x20 + 1;
      }
      in_stack_00000010 = unaff_x20;
      func_0x000108025d40();
      func_0x000108025dd8();
    } while ((!(bool)in_CY) || (func_0x000108025b74(), param_1 != 0));
  }
  func_0x000108025cfc();
  func_0x000108025cfc();
  func_0x000108025dcc();
  func_0x000108025d70(*(undefined8 *)(extraout_x8_00 + 0x20));
  func_0x000108025658(&stack0x00000008);
  func_0x000108025cfc();
  func_0x000108025c34();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108024cbc:
  FUN_1080258d4();
LAB_108024d1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108024d20);
  (*pcVar1)();
}



/* Entry: 108024d48; end: 108024ee3; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager registerMediaEffects:] */

void FUN_108024d48(ulong param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x11;
  undefined4 *unaff_x20;
  undefined4 unaff_w23;
  ulong unaff_x26;
  undefined4 *in_stack_00000010;
  
  func_0x000108025db0();
  func_0x000108025b54();
  func_0x000108025c7c();
  func_0x000108025df0();
  func_0x000108025d78();
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) goto LAB_108024e58;
    func_0x000108025d04();
    FUN_108025960();
    func_0x000108025c08();
    func_0x000108025bc8();
    FUN_10802599c();
  }
  func_0x000108025c20();
  func_0x000108025b74();
  if (param_1 != 0) {
    func_0x000108025cc4();
    do {
      func_0x000108025d24();
      if (!(bool)in_ZR) {
        func_0x000108025d80();
      }
      func_0x000108025c8c();
      func_0x000108025d50();
      func_0x000108025d90();
      func_0x000108025ce4();
      func_0x000108025e08();
      if ((bool)in_CY) {
        func_0x000108025c4c();
        if (extraout_x11 != 0) {
          FUN_108025954();
          goto LAB_108024eb8;
        }
        func_0x000108025c9c();
        in_CY = unaff_x26 <= extraout_x8;
        in_ZR = extraout_x8 == unaff_x26;
        func_0x000108025de4();
        FUN_108025960();
        func_0x000108025bec();
        func_0x000108025ba4();
        FUN_10802599c();
      }
      else {
        *unaff_x20 = unaff_w23;
        in_CY = 0;
        unaff_x20 = unaff_x20 + 1;
      }
      in_stack_00000010 = unaff_x20;
      func_0x000108025d40();
      func_0x000108025dd8();
    } while ((!(bool)in_CY) || (func_0x000108025b74(), param_1 != 0));
  }
  func_0x000108025cfc();
  func_0x000108025cfc();
  func_0x000108025dcc();
  func_0x000108025d70(*(undefined8 *)(extraout_x8_00 + 0x28));
  func_0x00010802567c(&stack0x00000008);
  func_0x000108025cfc();
  func_0x000108025c34();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108024e58:
  FUN_108025954();
LAB_108024eb8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108024ebc);
  (*pcVar1)();
}



/* Entry: 108024ee4; end: 10802507f; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager registerAssetTypes:] */

void FUN_108024ee4(ulong param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x11;
  undefined4 *unaff_x20;
  undefined4 unaff_w23;
  ulong unaff_x26;
  undefined4 *in_stack_00000010;
  
  func_0x000108025db0();
  func_0x000108025b54();
  func_0x000108025c7c();
  func_0x000108025df0();
  func_0x000108025d78();
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) goto LAB_108024ff4;
    func_0x000108025d04();
    FUN_1080259e0();
    func_0x000108025c08();
    func_0x000108025bc8();
    FUN_108025a1c();
  }
  func_0x000108025c20();
  func_0x000108025b74();
  if (param_1 != 0) {
    func_0x000108025cc4();
    do {
      func_0x000108025d24();
      if (!(bool)in_ZR) {
        func_0x000108025d80();
      }
      func_0x000108025c8c();
      func_0x000108025d50();
      func_0x000108025d90();
      func_0x000108025ce4();
      func_0x000108025e08();
      if ((bool)in_CY) {
        func_0x000108025c4c();
        if (extraout_x11 != 0) {
          FUN_1080259d4();
          goto LAB_108025054;
        }
        func_0x000108025c9c();
        in_CY = unaff_x26 <= extraout_x8;
        in_ZR = extraout_x8 == unaff_x26;
        func_0x000108025de4();
        FUN_1080259e0();
        func_0x000108025bec();
        func_0x000108025ba4();
        FUN_108025a1c();
      }
      else {
        *unaff_x20 = unaff_w23;
        in_CY = 0;
        unaff_x20 = unaff_x20 + 1;
      }
      in_stack_00000010 = unaff_x20;
      func_0x000108025d40();
      func_0x000108025dd8();
    } while ((!(bool)in_CY) || (func_0x000108025b74(), param_1 != 0));
  }
  func_0x000108025cfc();
  func_0x000108025cfc();
  func_0x000108025dcc();
  func_0x000108025d70(*(undefined8 *)(extraout_x8_00 + 0x30));
  func_0x0001080256a0(&stack0x00000008);
  func_0x000108025cfc();
  func_0x000108025c34();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108024ff4:
  FUN_1080259d4();
LAB_108025054:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108025058);
  (*pcVar1)();
}



/* Entry: 108025080; end: 10802521b; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager registerRenderEffects:] */

void FUN_108025080(ulong param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x11;
  undefined4 *unaff_x20;
  undefined4 unaff_w23;
  ulong unaff_x26;
  undefined4 *in_stack_00000010;
  
  func_0x000108025db0();
  func_0x000108025b54();
  func_0x000108025c7c();
  func_0x000108025df0();
  func_0x000108025d78();
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) goto LAB_108025190;
    func_0x000108025d04();
    FUN_108025a60();
    func_0x000108025c08();
    func_0x000108025bc8();
    FUN_108025a9c();
  }
  func_0x000108025c20();
  func_0x000108025b74();
  if (param_1 != 0) {
    func_0x000108025cc4();
    do {
      func_0x000108025d24();
      if (!(bool)in_ZR) {
        func_0x000108025d80();
      }
      func_0x000108025c8c();
      func_0x000108025d50();
      func_0x000108025d90();
      func_0x000108025ce4();
      func_0x000108025e08();
      if ((bool)in_CY) {
        func_0x000108025c4c();
        if (extraout_x11 != 0) {
          FUN_108025a54();
          goto LAB_1080251f0;
        }
        func_0x000108025c9c();
        in_CY = unaff_x26 <= extraout_x8;
        in_ZR = extraout_x8 == unaff_x26;
        func_0x000108025de4();
        FUN_108025a60();
        func_0x000108025bec();
        func_0x000108025ba4();
        FUN_108025a9c();
      }
      else {
        *unaff_x20 = unaff_w23;
        in_CY = 0;
        unaff_x20 = unaff_x20 + 1;
      }
      in_stack_00000010 = unaff_x20;
      func_0x000108025d40();
      func_0x000108025dd8();
    } while ((!(bool)in_CY) || (func_0x000108025b74(), param_1 != 0));
  }
  func_0x000108025cfc();
  func_0x000108025cfc();
  func_0x000108025dcc();
  func_0x000108025d70(*(undefined8 *)(extraout_x8_00 + 0x38));
  func_0x0001080256c4(&stack0x00000008);
  func_0x000108025cfc();
  func_0x000108025c34();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108025190:
  FUN_108025a54();
LAB_1080251f0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1080251f4);
  (*pcVar1)();
}



/* Entry: 10802521c; end: 1080253b7; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager registerCreativeTools:] */

void FUN_10802521c(ulong param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x11;
  undefined4 *unaff_x20;
  undefined4 unaff_w23;
  ulong unaff_x26;
  undefined4 *in_stack_00000010;
  
  func_0x000108025db0();
  func_0x000108025b54();
  func_0x000108025c7c();
  func_0x000108025df0();
  func_0x000108025d78();
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) goto LAB_10802532c;
    func_0x000108025d04();
    FUN_108025ae0();
    func_0x000108025c08();
    func_0x000108025bc8();
    FUN_108025b1c();
  }
  func_0x000108025c20();
  func_0x000108025b74();
  if (param_1 != 0) {
    func_0x000108025cc4();
    do {
      func_0x000108025d24();
      if (!(bool)in_ZR) {
        func_0x000108025d80();
      }
      func_0x000108025c8c();
      func_0x000108025d50();
      func_0x000108025d90();
      func_0x000108025ce4();
      func_0x000108025e08();
      if ((bool)in_CY) {
        func_0x000108025c4c();
        if (extraout_x11 != 0) {
          FUN_108025ad4();
          goto LAB_10802538c;
        }
        func_0x000108025c9c();
        in_CY = unaff_x26 <= extraout_x8;
        in_ZR = extraout_x8 == unaff_x26;
        func_0x000108025de4();
        FUN_108025ae0();
        func_0x000108025bec();
        func_0x000108025ba4();
        FUN_108025b1c();
      }
      else {
        *unaff_x20 = unaff_w23;
        in_CY = 0;
        unaff_x20 = unaff_x20 + 1;
      }
      in_stack_00000010 = unaff_x20;
      func_0x000108025d40();
      func_0x000108025dd8();
    } while ((!(bool)in_CY) || (func_0x000108025b74(), param_1 != 0));
  }
  func_0x000108025cfc();
  func_0x000108025cfc();
  func_0x000108025dcc();
  func_0x000108025d70(*(undefined8 *)(extraout_x8_00 + 0x40));
  func_0x0001080256e8(&stack0x00000008);
  func_0x000108025cfc();
  func_0x000108025c34();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10802532c:
  FUN_108025ad4();
LAB_10802538c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108025390);
  (*pcVar1)();
}



/* Entry: 1080253b8; end: 108025463; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager isPlaybackCapabilityCompatible:] */

void FUN_1080253b8(void)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  func_0x000108025e2c();
  func_0x000108025e7c();
  func_0x000108025e54();
  func_0x000108025e4c();
  puVar1 = auStack_58;
  FUN_108023ed4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108024304(auStack_58);
  func_0x000108025cfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108025464; end: 10802557b; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager calculateMediaEffectCapabilities:] */

void FUN_108025464(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 auStack_58 [4];
  char cStack_38;
  
  func_0x000108025e2c();
  func_0x000108025e7c();
  func_0x000108025e54();
  func_0x000108025e4c();
  puVar2 = PTR_PTR_1126b9638;
  if (cStack_38 == '\x01') {
    func_0x00010028fd70(auStack_58[0]);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar2,param_2,auStack_58[0]);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = auStack_58;
    FUN_10802377c(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000108025d40();
  func_0x00010802570c(auStack_58);
  func_0x000108025cfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10802557c; end: 1080255cf; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager .cxx_destruct] */

void FUN_10802557c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a17a70;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1080257ac((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1080255d0; end: 108025737; -[SCNMediaengineModelSnapDocPlaybackCapabilitiesManager .cxx_construct] */

undefined8 * FUN_1080255d0(undefined8 *param_1)

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
      func_0x000108025da0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108025738; end: 1080257ab;  */

void FUN_108025738(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bc488;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108025da0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1080257ac(&uStack_30);
  return;
}



/* Entry: 1080257ac; end: 1080257d3;  */

long FUN_1080257ac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1080257d4; end: 1080257df;  */

void FUN_1080257d4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cf0();
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 1080257e0; end: 10802581b;  */

void FUN_1080257e0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 10802581c; end: 108025853;  */

void FUN_10802581c(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x000108025e14();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x000108025dfc();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108025854; end: 10802585f;  */

void FUN_108025854(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cf0();
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 108025860; end: 10802589b;  */

void FUN_108025860(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 10802589c; end: 1080258d3;  */

void FUN_10802589c(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x000108025e14();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x000108025dfc();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1080258d4; end: 1080258df;  */

void FUN_1080258d4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cf0();
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 1080258e0; end: 10802591b;  */

void FUN_1080258e0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 10802591c; end: 108025953;  */

void FUN_10802591c(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x000108025e14();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x000108025dfc();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108025954; end: 10802595f;  */

void FUN_108025954(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cf0();
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 108025960; end: 10802599b;  */

void FUN_108025960(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 10802599c; end: 1080259d3;  */

void FUN_10802599c(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x000108025e14();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x000108025dfc();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1080259d4; end: 1080259df;  */

void FUN_1080259d4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cf0();
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 1080259e0; end: 108025a1b;  */

void FUN_1080259e0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 108025a1c; end: 108025a53;  */

void FUN_108025a1c(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x000108025e14();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x000108025dfc();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108025a54; end: 108025a5f;  */

void FUN_108025a54(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cf0();
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 108025a60; end: 108025a9b;  */

void FUN_108025a60(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 108025a9c; end: 108025ad3;  */

void FUN_108025a9c(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x000108025e14();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x000108025dfc();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108025ad4; end: 108025adf;  */

void FUN_108025ad4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cf0();
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 108025ae0; end: 108025b1b;  */

void FUN_108025ae0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108025cb0();
  if (param_2 != 0) {
    if (unaff_x20 >> 0x3e != 0) {
      func_0x000104bd35f4();
      func_0x000108025e14();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108025dfc();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000108025d88();
  }
  func_0x000108025c64();
  return;
}



/* Entry: 108025b1c; end: 108025b53;  */

void FUN_108025b1c(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x000108025e14();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x000108025dfc();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108025b54; end: 108025e87;  */

void FUN_108025b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 108025e88; end: 108025ef7;  */

void FUN_108025e88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c23fea0();
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



/* Entry: 108025ef8; end: 108025f57;  */

void FUN_108025ef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc458;
  _objc_alloc(PTR_PTR_1126bc458);
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0475e0(puVar1,param_2,param_1);
  FUN_108025f58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108025f58; end: 108025f63;  */

void FUN_108025f58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108025f64; end: 108025fff;  */

ulong FUN_108025f64(ulong param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  
  func_0x000108027734();
  FUN_108026d5c();
  func_0x00010802770c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_10802696c(uVar1);
  return (ulong)(0 < (int)uVar1);
}



/* Entry: 108026000; end: 10802604f;  */

undefined8 FUN_108026000(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined1 uStack_d9;
  undefined1 auStack_d8 [96];
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  func_0x000108027720();
  func_0x00010802782c(&PTR_FUN_110a17b20);
  func_0x000108027814(*(undefined8 *)(param_1 + 0x30));
  func_0x0001080277cc();
  func_0x00010802770c(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001080277dc();
  func_0x000108027880();
  func_0x000108027720();
  _memcpy(auStack_d8,&UNK_110a17ab0,0x60);
  uVar1 = extraout_x8;
  FUN_108026f6c(extraout_x8,auStack_d8,6,&uStack_d9);
  func_0x00010802770c(uStack_78);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 108026050; end: 1080260af;  */

undefined8 FUN_108026050(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 uStack_89;
  undefined1 auStack_88 [96];
  undefined8 uStack_28;
  
  func_0x000108027720();
  _memcpy(auStack_88,&UNK_110a17ab0,0x60);
  FUN_108026f6c(param_1,auStack_88,6,&uStack_89);
  func_0x00010802770c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 1080260b0; end: 1080260b7;  */

undefined8 FUN_1080260b0(void)

{
  return 1;
}



/* Entry: 1080260b8; end: 108026347;  */

bool FUN_1080260b8(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 in_ZR;
  undefined8 **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  ulong uVar11;
  long *extraout_x9;
  long lVar12;
  long *extraout_x10;
  long *extraout_x10_00;
  bool bVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x20;
  long lVar15;
  long unaff_x21;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long *plStack_70;
  undefined8 uStack_68;
  
  func_0x000108027734();
  uStack_68 = extraout_x8;
  func_0x000108027768();
  plVar19 = extraout_x10;
  if (!(bool)in_ZR) {
    plVar19 = extraout_x9;
  }
  lVar12 = (long)(int)extraout_x10[1] << 3;
joined_r0x0001080260f8:
  if (lVar12 == 0) {
LAB_1080262bc:
    bVar13 = false;
LAB_1080262c0:
    FUN_1080276d8(auStack_88);
    func_0x00010802770c(uStack_68);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      FUN_108026cfc(&uStack_b8);
      func_0x000108027460(uStack_98);
      FUN_1080276d8(auStack_88);
      func_0x000108027880();
      return false;
    }
    return bVar13;
  }
  in_ZR = *(char *)(*plVar19 + 0x30) == '\x01';
  if ((bool)in_ZR) {
    plVar19 = plVar19 + 1;
    lVar12 = lVar12 + -8;
    goto joined_r0x0001080260f8;
  }
  if (*(int *)(*plVar19 + 0x18) == 0) goto LAB_1080262bc;
  puStack_a0 = &uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x00010802793c();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -8) {
    puVar16 = (undefined8 *)*unaff_x20;
    uVar1 = (ulong)uStack_b8 >> 0x20;
    uStack_b8 = (undefined8 *)CONCAT44((int)uVar1,*(undefined4 *)(puVar16 + 5));
    ppuVar8 = &puStack_a0;
    FUN_10802673c(ppuVar8,&uStack_b8);
    *ppuVar8 = puVar16;
    unaff_x20 = unaff_x20 + 1;
  }
  func_0x00010802783c(*plVar19);
  plVar19 = extraout_x8_00;
  if (!(bool)in_ZR) {
    plVar19 = extraout_x10_00;
  }
  plVar2 = plVar19 + (int)extraout_x8_00[1];
  do {
    in_ZR = plVar19 == plVar2;
    bVar13 = !(bool)in_ZR;
    if ((bool)in_ZR) break;
    lVar15 = *plVar19;
    uStack_b8 = (undefined8 *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puVar21 = *(undefined4 **)(lVar15 + 0x20);
    plVar10 = plStack_70;
    for (lVar12 = (long)*(int *)(lVar15 + 0x18) << 2; plStack_70 = plVar10, lVar12 != 0;
        lVar12 = lVar12 + -4) {
      uVar6 = *puVar21;
      ppuVar8 = &puStack_a0;
      FUN_1080267cc(ppuVar8,uVar6);
      if (((ulong)ppuVar8 & 1) != 0) {
        ppuVar8 = &puStack_a0;
        FUN_108026820(ppuVar8,uVar6);
        puVar16 = uStack_b8;
        puVar14 = *ppuVar8;
        in_ZR = puStack_b0 == puStack_a8;
        if (puStack_b0 < puStack_a8) {
          *puStack_b0 = puVar14;
          puStack_b0 = puStack_b0 + 1;
        }
        else {
          lVar17 = (long)puStack_b0 - (long)uStack_b8;
          uVar1 = (lVar17 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
            FUN_108026ce8();
            goto LAB_10802630c;
          }
          uVar11 = (long)puStack_a8 - (long)uStack_b8;
          uVar5 = (long)uVar11 >> 2;
          if ((ulong)((long)uVar11 >> 2) <= uVar1) {
            uVar5 = uVar1;
          }
          in_ZR = uVar11 == 0x7ffffffffffffff8;
          if (0x7ffffffffffffff7 < uVar11) {
            uVar5 = 0x1fffffffffffffff;
          }
          if (uVar5 == 0) {
            lVar9 = 0;
          }
          else {
            if (uVar5 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10802630c;
            }
            lVar9 = uVar5 << 3;
            __Znwm();
          }
          puVar3 = (undefined8 *)(lVar9 + lVar17);
          puVar4 = (undefined8 *)(lVar9 + uVar5 * 8);
          puVar18 = puVar3 + -(lVar17 >> 3);
          puVar20 = puVar3 + 1;
          *puVar3 = puVar14;
          _memcpy(puVar18,puVar16,lVar17);
          uStack_b8 = puVar18;
          puStack_b0 = puVar20;
          puStack_a8 = puVar4;
          if (puVar16 != (undefined8 *)0x0) {
            __ZdlPv(puVar16);
            puStack_b0 = puVar20;
          }
        }
      }
      puVar21 = puVar21 + 1;
      plVar10 = plStack_70;
    }
    if (plVar10 == (long *)0x0) {
      func_0x000104bfeb48();
LAB_10802630c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x108026310);
      (*pcVar7)();
    }
    (**(code **)(*plVar10 + 0x30))(plVar10,lVar15,&uStack_b8);
    FUN_108026cfc(&uStack_b8);
    plVar19 = plVar19 + 1;
  } while (((ulong)plVar10 & 1) == 0);
  func_0x000108027460(uStack_98);
  goto LAB_1080262c0;
}



/* Entry: 108026348; end: 10802634b;  */

undefined8 FUN_108026348(void)

{
  return 0;
}



/* Entry: 10802634c; end: 10802663b;  */

long * FUN_10802634c(long param_1)

{
  uint *puVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x9;
  long lVar12;
  long *extraout_x10;
  long *extraout_x10_00;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar16;
  uint *puVar17;
  long lStack_218;
  undefined1 uStack_1d1;
  undefined4 auStack_1d0 [18];
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 ***pppuStack_170;
  code *pcStack_168;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long alStack_78 [3];
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x000108027734();
  uStack_58 = extraout_x8;
  func_0x000108027768();
  plVar8 = extraout_x10;
  if (!(bool)in_ZR) {
    plVar8 = extraout_x9;
  }
  lVar12 = (long)(int)extraout_x10[1] << 3;
  do {
    if (lVar12 == 0) {
LAB_1080265a4:
      plVar15 = (long *)0x0;
LAB_1080265bc:
      plVar8 = alStack_78;
      FUN_108026b78();
      func_0x00010802770c(uStack_58);
      if ((bool)in_ZR) {
        return plVar15;
      }
      ___stack_chk_fail();
      FUN_1080274dc(uStack_b0);
      func_0x000108027460(uStack_98);
      plVar9 = alStack_78;
      FUN_108026b78();
      func_0x000108027880();
      pcStack_c8 = FUN_10802663c;
      plStack_e0 = unaff_x20;
      plStack_d8 = plVar8;
      puStack_d0 = &stack0xfffffffffffffff0;
      func_0x000108027720();
      func_0x00010802782c(&PTR_FUN_110a17c40);
      lVar12 = plVar9[6];
      func_0x000108027814();
      func_0x0001080277cc();
      func_0x00010802770c(uStack_e8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001080277dc();
        func_0x000108027880();
        pcStack_118 = FUN_10802668c;
        plStack_130 = unaff_x20;
        plStack_128 = plVar8;
        ppuStack_120 = &puStack_d0;
        func_0x000108027720();
        func_0x00010802782c(&PTR_DAT_110a17cc0);
        func_0x000108027814(*(undefined8 *)(lVar12 + 0x30));
        func_0x0001080277cc();
        func_0x00010802770c(uStack_138);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001080277dc();
          func_0x000108027880();
          pcStack_168 = FUN_1080266dc;
          plStack_180 = unaff_x20;
          plStack_178 = plVar8;
          pppuStack_170 = &ppuStack_120;
          func_0x000108027720();
          _memcpy(auStack_1d0,&UNK_10deec984,0x48);
          puVar10 = auStack_1d0;
          plVar8 = extraout_x8_01;
          FUN_10802717c(extraout_x8_01,puVar10,9,&uStack_1d1);
          func_0x00010802770c(uStack_188);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            plVar9 = plVar8;
            FUN_108027494();
            plVar15 = (long *)*plVar9;
            if (plVar15 == (long *)0x0) {
              plVar15 = plVar9;
              func_0x0001080278e4();
              *(undefined4 *)(plVar15 + 4) = *puVar10;
              plVar15[5] = 0;
              *plVar15 = 0;
              plVar15[1] = 0;
              plVar15[2] = lStack_218;
              *plVar9 = (long)plVar15;
              if (*(long *)*plVar8 != 0) {
                *plVar8 = *(long *)*plVar8;
              }
              func_0x00010002c5b0(plVar8[1],plVar15);
              func_0x000108027868();
            }
            return plVar15 + 5;
          }
          return plVar8;
        }
      }
      return plVar8;
    }
    in_ZR = *(char *)(*plVar8 + 0x30) == '\x01';
    if (!(bool)in_ZR) {
      if (*(int *)(*plVar8 + 0x18) != 0) {
        puStack_a0 = &uStack_98;
        uStack_98 = 0;
        uStack_90 = 0;
        func_0x00010802793c();
        for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -8) {
          puVar16 = (undefined8 *)*unaff_x20;
          uVar11 = (ulong)uStack_b8 >> 0x20;
          uStack_b8 = (undefined8 *)CONCAT44((int)uVar11,*(undefined4 *)(puVar16 + 5));
          ppuVar6 = &puStack_a0;
          FUN_10802673c(ppuVar6,&uStack_b8);
          *ppuVar6 = puVar16;
          unaff_x20 = unaff_x20 + 1;
        }
        uStack_b0 = 0;
        lStack_a8 = 0;
        uVar11 = *(ulong *)(param_1 + 0x18);
        uVar5 = (uVar11 & 1) == 0;
        puVar2 = (ulong *)(param_1 + 0x18);
        if (!(bool)uVar5) {
          puVar2 = (ulong *)(uVar11 + 7);
        }
        uStack_b8 = &uStack_b0;
        for (lVar12 = (long)*(int *)(param_1 + 0x20) << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
          uVar11 = *puVar2;
          unaff_x20 = *(long **)(uVar11 + 0x40);
          puVar16 = &uStack_b8;
          FUN_108027510(puVar16,&plStack_80,unaff_x20);
          puVar14 = (undefined8 *)*puVar16;
          if (puVar14 == (undefined8 *)0x0) {
            puVar14 = puVar16;
            func_0x0001080278e4();
            puVar14[4] = unaff_x20;
            puVar14[5] = 0;
            plVar9 = plStack_80;
            *puVar14 = 0;
            puVar14[1] = 0;
            puVar14[2] = plVar9;
            *puVar16 = puVar14;
            if ((undefined8 *)*uStack_b8 != (undefined8 *)0x0) {
              uStack_b8 = (undefined8 *)*uStack_b8;
            }
            func_0x00010002c5b0(uStack_b0,puVar14);
            lStack_a8 = lStack_a8 + 1;
          }
          puVar14[5] = uVar11;
          puVar2 = puVar2 + 1;
        }
        func_0x00010802783c(*plVar8);
        plVar8 = extraout_x8_00;
        if (!(bool)uVar5) {
          plVar8 = extraout_x10_00;
        }
        plVar9 = plVar8 + (int)extraout_x8_00[1];
        while( true ) {
          plVar15 = (long *)(ulong)(plVar8 != plVar9);
          in_ZR = 1;
          if (plVar8 == plVar9) break;
          puVar17 = *(uint **)(*plVar8 + 0x20);
          puVar1 = puVar17 + *(int *)(*plVar8 + 0x18);
          for (; puVar17 != puVar1; puVar17 = puVar17 + 1) {
            unaff_x20 = (long *)(ulong)*puVar17;
            ppuVar6 = &puStack_a0;
            FUN_1080267cc(ppuVar6,unaff_x20);
            if ((int)ppuVar6 != 0) {
              ppuVar6 = &puStack_a0;
              FUN_108026820(ppuVar6,unaff_x20);
              unaff_x20 = *ppuVar6;
              if (((int)unaff_x20[7] == 1) && ((*(byte *)(unaff_x20[6] + 0x10) >> 1 & 1) != 0)) {
                lVar12 = *(long *)(*(long *)(unaff_x20[6] + 0x20) + 0x10);
                puVar14 = &uStack_b0;
                puVar16 = &uStack_b0;
                while (puVar13 = (undefined8 *)*puVar16, puVar13 != (undefined8 *)0x0) {
                  lVar3 = 8;
                  if (lVar12 <= (long)puVar13[4]) {
                    lVar3 = 0;
                  }
                  puVar16 = (undefined8 *)((long)puVar13 + lVar3);
                  if (lVar12 <= (long)puVar13[4]) {
                    puVar14 = puVar13;
                  }
                }
                if ((&uStack_b0 != puVar14) &&
                   (in_ZR = lVar12 == puVar14[4], (long)puVar14[4] <= lVar12)) {
                  plVar7 = &uStack_b8;
                  FUN_108027510(plVar7,&plStack_80);
                  if (*plVar7 == 0) {
                    func_0x00010802795c();
LAB_1080265fc:
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x108026600);
                    (*pcVar4)();
                  }
                  uStack_88 = *(undefined8 *)(*plVar7 + 0x28);
                  plStack_80 = unaff_x20;
                  if (plStack_60 == (long *)0x0) {
                    func_0x000104bfeb48();
                    goto LAB_1080265fc;
                  }
                  plVar7 = plStack_60;
                  (**(code **)(*plStack_60 + 0x30))(plStack_60,&plStack_80,&uStack_88);
                  if (((ulong)plVar7 & 1) != 0) goto LAB_1080265ac;
                }
              }
            }
          }
          plVar8 = plVar8 + 1;
        }
LAB_1080265ac:
        FUN_1080274dc(uStack_b0);
        func_0x000108027460(uStack_98);
        goto LAB_1080265bc;
      }
      goto LAB_1080265a4;
    }
    plVar8 = plVar8 + 1;
    lVar12 = lVar12 + -8;
  } while( true );
}



/* Entry: 10802663c; end: 10802668b;  */

long * FUN_10802663c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  long *extraout_x8;
  long *unaff_x19;
  long *plVar5;
  long lStack_158;
  undefined1 uStack_111;
  undefined4 auStack_110 [18];
  undefined8 uStack_c8;
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  func_0x000108027720();
  func_0x00010802782c(&PTR_FUN_110a17c40);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x000108027814();
  func_0x0001080277cc();
  func_0x00010802770c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080277dc();
    func_0x000108027880();
    func_0x000108027720();
    func_0x00010802782c(&PTR_DAT_110a17cc0);
    func_0x000108027814(*(undefined8 *)(lVar1 + 0x30));
    func_0x0001080277cc();
    func_0x00010802770c(uStack_78);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001080277dc();
      func_0x000108027880();
      func_0x000108027720();
      _memcpy(auStack_110,&UNK_10deec984,0x48);
      puVar4 = auStack_110;
      plVar2 = extraout_x8;
      FUN_10802717c(extraout_x8,puVar4,9,&uStack_111);
      func_0x00010802770c(uStack_c8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        plVar3 = plVar2;
        FUN_108027494();
        plVar5 = (long *)*plVar3;
        if (plVar5 == (long *)0x0) {
          plVar5 = plVar3;
          func_0x0001080278e4();
          *(undefined4 *)(plVar5 + 4) = *puVar4;
          plVar5[5] = 0;
          *plVar5 = 0;
          plVar5[1] = 0;
          plVar5[2] = lStack_158;
          *plVar3 = (long)plVar5;
          if (*(long *)*plVar2 != 0) {
            *plVar2 = *(long *)*plVar2;
          }
          func_0x00010002c5b0(plVar2[1],plVar5);
          func_0x000108027868();
        }
        return plVar5 + 5;
      }
      return plVar2;
    }
  }
  return unaff_x19;
}


