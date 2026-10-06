/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af51bc0; end: 10af51c4b; -[SCLensCollectionMetadata hash] */

undefined8 * FUN_10af51bc0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af51cfc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af51d08;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10af51d08;
            }
            goto LAB_10af51cfc;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af51d08:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af51c4c; end: 10af51d23; -[SCLensCollectionMetadata isEqual:] */

long FUN_10af51c4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af51cfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af51d08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10af51d08;
            }
            goto LAB_10af51cfc;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af51d08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af51d24; end: 10af51d2b; -[SCLensCollectionMetadata collectionId] */

undefined8 FUN_10af51d24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af51d2c; end: 10af51d33; -[SCLensCollectionMetadata name] */

undefined8 FUN_10af51d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af51d34; end: 10af51d3b; -[SCLensCollectionMetadata tileImageURL] */

undefined8 FUN_10af51d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af51d3c; end: 10af51d43; -[SCLensCollectionMetadata lenses] */

undefined8 FUN_10af51d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af51d44; end: 10af51d8b; -[SCLensCollectionMetadata .cxx_destruct] */

void FUN_10af51d44(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af51d8c; end: 10af51da7; +[SCLensCollectionMetadataBuilder lensCollectionMetadata] */

void FUN_10af51d8c(void)

{
  _objc_alloc_init(PTR_PTR_1126deb80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af51da8; end: 10af51f03; +[SCLensCollectionMetadataBuilder lensCollectionMetadataFromExistingLensCollectionMetadata:] */

void FUN_10af51da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126deb80;
  _objc_retain(param_3);
  func_0x00010c091600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf3fe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2aa8a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b4480(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c26ec00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2bb180(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c098240(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar7;
  func_0x00010c2b2da0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10af51f04; end: 10af51f37; -[SCLensCollectionMetadataBuilder build] */

void FUN_10af51f04(void)

{
  _objc_alloc(PTR_PTR_1126deb88);
  func_0x00010bfff7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af51f38; end: 10af51f6f; -[SCLensCollectionMetadataBuilder withCollectionId:] */

long FUN_10af51f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af51f70; end: 10af51fa7; -[SCLensCollectionMetadataBuilder withName:] */

long FUN_10af51f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af51fa8; end: 10af51fdf; -[SCLensCollectionMetadataBuilder withTileImageURL:] */

long FUN_10af51fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af51fe0; end: 10af52017; -[SCLensCollectionMetadataBuilder withLenses:] */

long FUN_10af51fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af52018; end: 10af5205f; -[SCLensCollectionMetadataBuilder .cxx_destruct] */

void FUN_10af52018(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af52060; end: 10af52103; -[SCLensFavoritesMockedService initWithMockedFavoritesObserver:mockedFavoritesPersistance:] */

undefined1 *
FUN_10af52060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702ce8;
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



/* Entry: 10af52104; end: 10af5210b; -[SCLensFavoritesMockedService mockedFavoritesObserver] */

undefined8 FUN_10af52104(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af5210c; end: 10af52113; -[SCLensFavoritesMockedService mockedFavoritesPersistance] */

undefined8 FUN_10af5210c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af52114; end: 10af52143; -[SCLensFavoritesMockedService .cxx_destruct] */

void FUN_10af52114(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af52144; end: 10af52173; -[SCLensFavoritesServices .cxx_destruct] */

void FUN_10af52144(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af52174; end: 10af5224b; -[SCLensFavoritesRankingMove initWithFromRankingPosition:toRankingPosition:lensId:] */

undefined1 *
FUN_10af52174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112702cf8;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af5224c; end: 10af5226f; -[SCLensFavoritesRankingMove copyWithZone:] */

undefined8 FUN_10af5224c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af52270; end: 10af522ef; -[SCLensFavoritesRankingMove hash] */

undefined8 * FUN_10af52270(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af52388:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af52394;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af52394;
          }
          goto LAB_10af52388;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af52394:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af522f0; end: 10af523af; -[SCLensFavoritesRankingMove isEqual:] */

long FUN_10af522f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af52388:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af52394;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af52394;
          }
          goto LAB_10af52388;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af52394:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af523b0; end: 10af523b7; -[SCLensFavoritesRankingMove fromRankingPosition] */

undefined8 FUN_10af523b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af523b8; end: 10af523bf; -[SCLensFavoritesRankingMove toRankingPosition] */

undefined8 FUN_10af523b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af523c0; end: 10af523c7; -[SCLensFavoritesRankingMove lensId] */

undefined8 FUN_10af523c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af523c8; end: 10af52403; -[SCLensFavoritesRankingMove .cxx_destruct] */

void FUN_10af523c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af52404; end: 10af524eb; -[SCLensFavoritesDifference initWithFavoriteLenses:unFavoriteLenses:movedFavoriteLenses:source:] */

undefined1 *
FUN_10af52404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_112702d00;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af524ec; end: 10af5250f; -[SCLensFavoritesDifference copyWithZone:] */

undefined8 FUN_10af524ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af52510; end: 10af5259b; -[SCLensFavoritesDifference hash] */

undefined8 * FUN_10af52510(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af52644:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af52650;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_10af52650;
          }
          goto LAB_10af52644;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af52650:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af5259c; end: 10af5266b; -[SCLensFavoritesDifference isEqual:] */

long FUN_10af5259c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af52644:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af52650;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af52650;
          }
          goto LAB_10af52644;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af52650:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af5266c; end: 10af52673; -[SCLensFavoritesDifference favoriteLenses] */

undefined8 FUN_10af5266c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af52674; end: 10af5267b; -[SCLensFavoritesDifference unFavoriteLenses] */

undefined8 FUN_10af52674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af5267c; end: 10af52683; -[SCLensFavoritesDifference movedFavoriteLenses] */

undefined8 FUN_10af5267c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af52684; end: 10af5268b; -[SCLensFavoritesDifference source] */

undefined8 FUN_10af52684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af5268c; end: 10af526c7; -[SCLensFavoritesDifference .cxx_destruct] */

void FUN_10af5268c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af526c8; end: 10af52773; -[SCLensFavoritesLensModel initWithRankingPosition:lensId:] */

undefined1 *
FUN_10af526c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702d08;
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



/* Entry: 10af52774; end: 10af52797; -[SCLensFavoritesLensModel copyWithZone:] */

undefined8 FUN_10af52774(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af52798; end: 10af5280b; -[SCLensFavoritesLensModel hash] */

undefined8 * FUN_10af52798(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10af5288c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af52898;
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
          goto LAB_10af52898;
        }
        goto LAB_10af5288c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af52898:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af5280c; end: 10af528b3; -[SCLensFavoritesLensModel isEqual:] */

long FUN_10af5280c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af5288c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af52898;
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
          goto LAB_10af52898;
        }
        goto LAB_10af5288c;
      }
    }
    lVar3 = 0;
  }
LAB_10af52898:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af528b4; end: 10af528bb; -[SCLensFavoritesLensModel rankingPosition] */

undefined8 FUN_10af528b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af528bc; end: 10af528c3; -[SCLensFavoritesLensModel lensId] */

undefined8 FUN_10af528bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af528c4; end: 10af528f3; -[SCLensFavoritesLensModel .cxx_destruct] */

void FUN_10af528c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af528f4; end: 10af5297f; -[SCLensFavoritesResult initWithLensId:status:source:] */

undefined1 *
FUN_10af528f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112702d10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af52980; end: 10af529a3; -[SCLensFavoritesResult copyWithZone:] */

undefined8 FUN_10af52980(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af529a4; end: 10af52a17; -[SCLensFavoritesResult hash] */

undefined8 * FUN_10af529a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af52aac;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10af52aac;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af52aac;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10af52aac:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10af52a18; end: 10af52ac7; -[SCLensFavoritesResult isEqual:] */

long FUN_10af52a18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af52aac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10af52aac;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af52aac;
    }
  }
  lVar3 = 1;
LAB_10af52aac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af52ac8; end: 10af52acf; -[SCLensFavoritesResult lensId] */

undefined8 FUN_10af52ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af52ad0; end: 10af52ad7; -[SCLensFavoritesResult status] */

undefined8 FUN_10af52ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af52ad8; end: 10af52adf; -[SCLensFavoritesResult source] */

undefined8 FUN_10af52ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af52ae0; end: 10af52aeb; -[SCLensFavoritesResult .cxx_destruct] */

void FUN_10af52ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af52aec; end: 10af52af3; -[SCPlusAppStartServices updater] */

undefined8 FUN_10af52aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af52af4; end: 10af52b23; -[SCPlusAppStartServices .cxx_destruct] */

void FUN_10af52af4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af52b24; end: 10af52b2f; -[SCAudioCaptureServices .cxx_destruct] */

void FUN_10af52b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af52b30; end: 10af52bb7; -[SCFideliusDeviceInfo initWithCoder:] */

undefined8 FUN_10af52b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e110b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf66f00(param_3,param_2,&PTR____CFConstantStringClassReference_110dd8fd8);
  _objc_release(param_3);
  func_0x00010c0326c0(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af52bb8; end: 10af52c37; -[SCFideliusDeviceInfo encodeWithCoder:] */

void FUN_10af52bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0ee500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e110b8);
  _objc_release(uVar1);
  func_0x00010c298be0(param_1);
  func_0x00010bf92fa0(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110dd8fd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af52c38; end: 10af52d8f; -[SCFideliusFriendMetadata isEqualOutOfOrder:] */

undefined * FUN_10af52c38(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar1);
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    puVar3 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_alloc(PTR__OBJC_CLASS___NSCountedSet_1126ba498);
    uVar1 = param_1;
    func_0x00010bf71280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4000(puVar3);
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_alloc(PTR__OBJC_CLASS___NSCountedSet_1126ba498);
    uVar2 = param_3;
    func_0x00010bf71280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4000(puVar4);
    _objc_release(uVar2);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar3;
      func_0x00010c072060(puVar3);
    }
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10af52d90; end: 10af52e27; -[SCFideliusFriendMetadata initWithCoder:] */

undefined8 FUN_10af52d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110db1318);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110f3a518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c05b060(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af52e28; end: 10af52ebb; -[SCFideliusFriendMetadata encodeWithCoder:] */

void FUN_10af52e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110db1318);
  _objc_release(uVar1);
  func_0x00010bf71280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110f3a518);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af52ebc; end: 10af52f6f; -[SCFideliusFriendMetadataUpdateData initWithDiffFideliusFriendMetadataMap:snapchattersDataRequest:isFullState:] */

undefined1 *
FUN_10af52ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702d28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af52f70; end: 10af52f93; -[SCFideliusFriendMetadataUpdateData copyWithZone:] */

undefined8 FUN_10af52f70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af52f94; end: 10af5300b; -[SCFideliusFriendMetadataUpdateData hash] */

undefined8 * FUN_10af52f94(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af5309c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af530a8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af530a8;
        }
        goto LAB_10af5309c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af530a8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af5300c; end: 10af530c3; -[SCFideliusFriendMetadataUpdateData isEqual:] */

long FUN_10af5300c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af5309c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af530a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af530a8;
        }
        goto LAB_10af5309c;
      }
    }
    lVar3 = 0;
  }
LAB_10af530a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af530c4; end: 10af530cb; -[SCFideliusFriendMetadataUpdateData diffFideliusFriendMetadataMap] */

undefined8 FUN_10af530c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af530cc; end: 10af530d3; -[SCFideliusFriendMetadataUpdateData snapchattersDataRequest] */

undefined8 FUN_10af530cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af530d4; end: 10af530db; -[SCFideliusFriendMetadataUpdateData isFullState] */

undefined1 FUN_10af530d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af530dc; end: 10af5310b; -[SCFideliusFriendMetadataUpdateData .cxx_destruct] */

void FUN_10af530dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af5310c; end: 10af53257;  */

void FUN_10af5310c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  puVar3 = (undefined *)0x0;
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010bf71280(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107c31908();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126c04c0;
    _objc_alloc(PTR_PTR_1126c04c0);
    func_0x00010c05b060();
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10af53258; end: 10af53263; -[SCFideliusLoggingServices .cxx_destruct] */

void FUN_10af53258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af53264; end: 10af5329f; -[SCFideliusStorageServices .cxx_destruct] */

void FUN_10af53264(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af532a0; end: 10af532a7; -[SCSecurityServices fideliusFriendMetadataCoordinator] */

undefined8 FUN_10af532a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af532a8; end: 10af532af; -[SCSecurityServices fideliusFriendMetadataObservableRepository] */

undefined8 FUN_10af532a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af532b0; end: 10af532b7; -[SCSecurityServices fideliusManager] */

undefined8 FUN_10af532b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af532b8; end: 10af532f3; -[SCSecurityServices .cxx_destruct] */

void FUN_10af532b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af532f4; end: 10af533a7;  */

void FUN_10af532f4(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  FUN_10af5370c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010bfb83c0();
    uVar1 = (uint)lVar3;
    if (uVar1 < 9) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x1c3U) == 0) {
        FUN_10af53be8(param_1,lVar2);
        goto LAB_10af53370;
      }
    }
    else if (uVar1 != 0xfbadbeef) goto LAB_10af53370;
    FUN_10af53c70(param_1,lVar2);
  }
LAB_10af53370:
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af533a8; end: 10af534b7;  */

void FUN_10af533a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_1;
  FUN_10af53934(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      FUN_10af53c70(param_1,*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10af534b8; end: 10af53503; -[SCPreferences setFideliusWriteUncompleted:] */

void FUN_10af534b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110f3a538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af53504; end: 10af5357b; -[SCPreferences fideliusWriteUncompleted] */

ulong FUN_10af53504(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f3a538);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10af5357c; end: 10af535c7; -[SCPreferences setFideliusFriendKeysMigrated:] */

void FUN_10af5357c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110f3a558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af535c8; end: 10af5363f; -[SCPreferences fideliusFriendKeysMigrated] */

ulong FUN_10af535c8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f3a558);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10af53640; end: 10af5370b;  */

void FUN_10af53640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c03f8;
  _objc_alloc(PTR_PTR_1126c03f8);
  uVar2 = param_2;
  func_0x00010c0ee500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c298be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c0326c0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af5370c; end: 10af5388f;  */

void FUN_10af5370c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bfe2ee0();
  lVar3 = lVar1;
  func_0x00010c0b5940(lVar1);
  func_0x000107c30948(lVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfac3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08fa60();
  puVar4 = (undefined *)0x0;
  if ((lVar2 != 0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x000107c31908(lVar1,&PTR___NSConcreteGlobalBlock_110c989f8);
    puVar4 = PTR_PTR_1126c04c0;
    _objc_alloc(PTR_PTR_1126c04c0);
    func_0x00010c05b060();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10af53890; end: 10af53933;  */

void FUN_10af53890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c03f8;
  _objc_alloc(PTR_PTR_1126c03f8);
  uVar2 = param_2;
  func_0x00010c0ee500(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(param_2);
  func_0x00010c0326c0(puVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af53934; end: 10af53be7;  */

void FUN_10af53934(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
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
  _objc_opt_class(PTR_PTR_1126c04c0);
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
  FUN_10af5436c(puVar2);
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
  func_0x000107c281a0(appuStack_d8,0xd,puVar2,&uStack_180);
  puStack_120 = (undefined1 *)0x0;
  puStack_118 = (undefined1 *)0x0;
  plStack_110 = (long *)0x0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  puVar4 = &uStack_160;
  pppuVar5 = appuStack_d8;
  func_0x000107c310cc(puVar4,pppuVar5,&puStack_120,&uStack_e0);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_120 != (undefined1 *)0x0) {
    puStack_118 = puStack_120;
    __ZdlPv();
  }
  plVar1 = plStack_70;
  appuStack_d8[0] = &PTR_DAT_110862700;
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
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(lVar3);
  func_0x000104bd46a0(lVar3);
  _objc_retain();
  FUN_10af549a0(pppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10af53be8; end: 10af53c6f;  */

void FUN_10af53be8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_10af549a0(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af53c70; end: 10af53cff;  */

void FUN_10af53c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126deb90;
  FUN_10af5492c(PTR_PTR_1126deb90,param_2);
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



/* Entry: 10af53d00; end: 10af53fcb;  */

void FUN_10af53d00(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
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
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126c04c0);
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
  FUN_10af5436c();
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
  ppuStack_110 = &PTR_DAT_110862700;
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
  ppuStack_110 = &PTR_DAT_110862700;
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
  puVar4 = puVar3;
  func_0x00010bfb1920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126deb90;
  FUN_10af5492c(PTR_PTR_1126deb90,puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af53fcc; end: 10af5411f;  */

long FUN_10af53fcc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_1;
  func_0x000107c2bbbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      FUN_10af53c70(param_1,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar3 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return lVar3;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  __Unwind_Resume(lVar3);
  _objc_retain();
  return lVar3;
}



/* Entry: 10af54120; end: 10af54143; -[SCFideliusFriendMetadata copyWithZone:] */

undefined8 FUN_10af54120(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af54144; end: 10af541c7; -[SCFideliusFriendMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10af54144(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112787370);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112787374);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined8 **)((long)puVar3 + (long)_DAT_112787374);
}



/* Entry: 10af541c8; end: 10af541d7; -[SCFideliusFriendMetadata devices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10af541c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112787374);
}



/* Entry: 10af541d8; end: 10af54217; -[SCFideliusFriendMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af541d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112787374,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112787370,0);
  return;
}



/* Entry: 10af54218; end: 10af5423b; -[SCFideliusDeviceInfo copyWithZone:] */

undefined8 FUN_10af54218(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af5423c; end: 10af542af; -[SCFideliusDeviceInfo hash] */

undefined8 * FUN_10af5423c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af54334;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10af54334;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10af54334;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10af54334:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10af542b0; end: 10af5434f; -[SCFideliusDeviceInfo isEqual:] */

long FUN_10af542b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af54334;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10af54334;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af54334;
    }
  }
  lVar3 = 1;
LAB_10af54334:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af54350; end: 10af54357; -[SCFideliusDeviceInfo outBeta] */

undefined8 FUN_10af54350(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af54358; end: 10af5435f; -[SCFideliusDeviceInfo version] */

undefined8 FUN_10af54358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af54360; end: 10af5436b; -[SCFideliusDeviceInfo .cxx_destruct] */

void FUN_10af54360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af5436c; end: 10af543cf;  */

undefined ** FUN_10af5436c(void)

{
  int iVar1;
  
  if ((bRam0000000113839548 & 1) == 0) {
    iVar1 = 0x13839548;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113333580,0x100000000);
      ___cxa_guard_release(0x113839548);
    }
  }
  return &PTR_PTR_113333580;
}


