/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b01bd18; end: 10b01bd1f; -[SCShoppingLensPreviewPayload exitProducts] */

undefined8 FUN_10b01bd18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b01bd20; end: 10b01bd27; -[SCShoppingLensPreviewPayload exitType] */

undefined8 FUN_10b01bd20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b01bd28; end: 10b01bd87; -[SCShoppingLensPreviewPayload .cxx_destruct] */

void FUN_10b01bd28(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b01bd88; end: 10b01bda3; +[SCShoppingLensPreviewPayloadBuilder shoppingLensPreviewPayload] */

void FUN_10b01bd88(void)

{
  _objc_alloc_init(PTR_PTR_1126df360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01bda4; end: 10b01bfdf; +[SCShoppingLensPreviewPayloadBuilder shoppingLensPreviewPayloadFromExistingShoppingLensPreviewPayload:] */

void FUN_10b01bda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  
  puVar1 = PTR_PTR_1126df360;
  _objc_retain(param_3);
  func_0x00010c22cfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2880(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b2c80(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c092140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b2780(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c091e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b2760(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c076820(param_3);
  puVar11 = puVar9;
  func_0x00010c2b0d20(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf9bb00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2ad740(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf9ba40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2ad700(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bf9bb20(param_3);
  _objc_release(param_3);
  puVar16 = puVar14;
  func_0x00010c2ad760(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10b01bfe0; end: 10b01c02b; -[SCShoppingLensPreviewPayloadBuilder build] */

void FUN_10b01bfe0(void)

{
  _objc_alloc(PTR_PTR_1126df368);
  func_0x00010c024680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01c02c; end: 10b01c063; -[SCShoppingLensPreviewPayloadBuilder withLensId:] */

long FUN_10b01c02c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01c064; end: 10b01c09b; -[SCShoppingLensPreviewPayloadBuilder withLensSessionId:] */

long FUN_10b01c064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01c09c; end: 10b01c0d3; -[SCShoppingLensPreviewPayloadBuilder withLensCreatorId:] */

long FUN_10b01c09c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01c0d4; end: 10b01c10b; -[SCShoppingLensPreviewPayloadBuilder withLensContext:] */

long FUN_10b01c0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01c10c; end: 10b01c113; -[SCShoppingLensPreviewPayloadBuilder withIsLensSponsored:] */

void FUN_10b01c10c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b01c114; end: 10b01c14b; -[SCShoppingLensPreviewPayloadBuilder withExitStateVersionId:] */

long FUN_10b01c114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01c14c; end: 10b01c183; -[SCShoppingLensPreviewPayloadBuilder withExitProducts:] */

long FUN_10b01c14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b01c184; end: 10b01c18b; -[SCShoppingLensPreviewPayloadBuilder withExitType:] */

void FUN_10b01c184(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b01c18c; end: 10b01c1eb; -[SCShoppingLensPreviewPayloadBuilder .cxx_destruct] */

void FUN_10b01c18c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01c1ec; end: 10b01c287; -[SCCommerceAttachmentToolV2Scope initWithUIContainer:delegate:] */

undefined1 *
FUN_10b01c1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704598;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01c288; end: 10b01c28f; -[SCCommerceAttachmentToolV2Scope uiContainer] */

undefined8 FUN_10b01c288(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b01c290; end: 10b01c2a7; -[SCCommerceAttachmentToolV2Scope delegate] */

void FUN_10b01c290(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01c2a8; end: 10b01c2d3; -[SCCommerceAttachmentToolV2Scope .cxx_destruct] */

void FUN_10b01c2a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01c2d4; end: 10b01c3af; +[SCCommerceAttachmentV2DataModel productAttachmentWithSnapItemId:storeId:displayName:actionId:itemType:] */

void FUN_10b01c2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126dc2a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01c3b0; end: 10b01c4a7; +[SCCommerceAttachmentV2DataModel storeAttachmentWithStoreId:categoryId:displayName:actionId:] */

void FUN_10b01c3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126dc2a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01c4a8; end: 10b01c4cb; -[SCCommerceAttachmentV2DataModel copyWithZone:] */

undefined8 FUN_10b01c4a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01c4cc; end: 10b01c50f; -[SCCommerceAttachmentV2DataModel internalInit] */

void FUN_10b01c4cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127045a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01c510; end: 10b01c5a3; -[SCCommerceAttachmentV2DataModel matchProductAttachment:storeAttachment:] */

void FUN_10b01c510(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01c5a4; end: 10b01c60f; -[SCCommerceAttachmentV2DataModel .cxx_destruct] */

void FUN_10b01c5a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b01c610; end: 10b01c683; -[SCCommerceFavoriteItem initWithProductId:timestamp:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b01c610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127045a8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789ef0) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789ef4) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789ef8) = param_5;
  }
  return;
}



/* Entry: 10b01c684; end: 10b01c6a7; -[SCCommerceFavoriteItem copyWithZone:] */

undefined8 FUN_10b01c684(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01c6a8; end: 10b01c743; -[SCCommerceFavoriteItem hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b01c6a8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  double dVar6;
  undefined8 uStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + _DAT_112789ef0);
  uVar4 = ~*(ulong *)(param_1 + _DAT_112789ef4) + *(ulong *)(param_1 + _DAT_112789ef4) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  lVar3 = *(long *)(param_1 + _DAT_112789ef8);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + (long)_DAT_112789ef0) != *(long *)(param_3 + _DAT_112789ef0) ||
          (*(long *)((long)puVar1 + (long)_DAT_112789ef8) != *(long *)(param_3 + _DAT_112789ef8)))))
      {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        dVar6 = ABS(*(double *)((long)puVar1 + (long)_DAT_112789ef4) +
                    *(double *)(param_3 + _DAT_112789ef4)) * 2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        puVar5 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + (long)_DAT_112789ef4) -
                             *(double *)(param_3 + _DAT_112789ef4)) < dVar6);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b01c744; end: 10b01c827; -[SCCommerceFavoriteItem isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b01c744(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         ((*(long *)(param_1 + (long)_DAT_112789ef0) != *(long *)(param_3 + (long)_DAT_112789ef0) ||
          (*(long *)(param_1 + (long)_DAT_112789ef8) != *(long *)(param_3 + (long)_DAT_112789ef8))))
         ) {
        bVar3 = false;
      }
      else {
        dVar4 = *(double *)(param_1 + (long)_DAT_112789ef4);
        dVar6 = *(double *)(param_3 + (long)_DAT_112789ef4);
        dVar5 = ABS(dVar4 + dVar6) * 2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(dVar4 - dVar6) < dVar5;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b01c828; end: 10b01c837; -[SCCommerceFavoriteItem productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01c828(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789ef0);
}



/* Entry: 10b01c838; end: 10b01c847; -[SCCommerceFavoriteItem timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01c838(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789ef4);
}



/* Entry: 10b01c848; end: 10b01c857; -[SCCommerceFavoriteItem source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01c848(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789ef8);
}



/* Entry: 10b01c858; end: 10b01cb57; -[SCCommerceStoreDataModel initWithIsThirdpartyStore:shouldUseWebview:contactEmail:contactPhone:displayName:iconUrl:idValue:soldByText:supportUrl:storeTermsPolicy:storeReturnPolicy:snapCommercePolicy:storePixelId:categories:doesShipToUserLocation:isNativeCheckout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b01c858(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined4 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1127045b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112789efc) = param_3;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112789f00) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f04);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f04) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f08);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f08) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f0c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f0c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f10);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f14);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f14) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f18);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f1c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f1c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f20);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f24);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f24) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f28);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f2c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f2c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112789f30);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112789f30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112789f34) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112789f38) = param_17._1_1_;
  }
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
  return puVar1;
}



/* Entry: 10b01cb58; end: 10b01cb7b; -[SCCommerceStoreDataModel copyWithZone:] */

undefined8 FUN_10b01cb58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01cb7c; end: 10b01ccbf; -[SCCommerceStoreDataModel hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10b01cb7c(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = (ulong)*(byte *)(param_1 + _DAT_112789efc);
  uStack_a0 = (ulong)*(byte *)(param_1 + _DAT_112789f00);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112789f04);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112789f08);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112789f0c);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112789f10);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112789f14);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112789f18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112789f1c);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112789f20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112789f24);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112789f28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112789f2c);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112789f30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_112789f34);
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_112789f38);
  puVar3 = &uStack_a8;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b01cef0:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b01cefc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)((long)puVar3 + (long)_DAT_112789efc) ==
           *(char *)((long)param_3 + (long)_DAT_112789efc) &&
          (*(char *)((long)puVar3 + (long)_DAT_112789f00) ==
           *(char *)((long)param_3 + (long)_DAT_112789f00))) &&
         (*(char *)((long)puVar3 + (long)_DAT_112789f34) ==
          *(char *)((long)param_3 + (long)_DAT_112789f34))) &&
        (*(char *)((long)puVar3 + (long)_DAT_112789f38) ==
         *(char *)((long)param_3 + (long)_DAT_112789f38))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f04);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f04)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f08);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f08)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f0c);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f0c)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f10);
            if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f10)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f14);
              if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f14)) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f18);
                if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f18)) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f1c);
                  if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f1c)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f20);
                    if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f20)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f24);
                      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f24)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f28);
                        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f28)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + (long)_DAT_112789f2c);
                          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112789f2c)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            puVar6 = *(ulong **)((long)puVar3 + (long)_DAT_112789f30);
                            if (puVar6 != *(ulong **)((long)param_3 + (long)_DAT_112789f30)) {
                              func_0x00010c071ae0();
                              goto LAB_10b01cefc;
                            }
                            goto LAB_10b01cef0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_10b01cefc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b01ccc0; end: 10b01cf17; -[SCCommerceStoreDataModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b01ccc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01cef0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01cefc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + (long)_DAT_112789efc) == *(char *)(param_3 + (long)_DAT_112789efc) &&
          (*(char *)(param_1 + (long)_DAT_112789f00) == *(char *)(param_3 + (long)_DAT_112789f00)))
         && (*(char *)(param_1 + (long)_DAT_112789f34) == *(char *)(param_3 + (long)_DAT_112789f34))
         ) && (*(char *)(param_1 + (long)_DAT_112789f38) ==
               *(char *)(param_3 + (long)_DAT_112789f38))))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112789f04);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f04)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112789f08);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f08)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_112789f0c);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f0c)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_112789f10);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f10)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_112789f14);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f14)) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_112789f18);
                if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f18)) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + (long)_DAT_112789f1c);
                  if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f1c)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + (long)_DAT_112789f20);
                    if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f20)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + (long)_DAT_112789f24);
                      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f24)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + (long)_DAT_112789f28);
                        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f28)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + (long)_DAT_112789f2c);
                          if ((lVar3 == *(long *)(param_3 + (long)_DAT_112789f2c)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + (long)_DAT_112789f30);
                            if (lVar3 != *(long *)(param_3 + (long)_DAT_112789f30)) {
                              func_0x00010c071ae0();
                              goto LAB_10b01cefc;
                            }
                            goto LAB_10b01cef0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01cefc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01cf18; end: 10b01cf27; -[SCCommerceStoreDataModel isThirdpartyStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b01cf18(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112789efc);
}



/* Entry: 10b01cf28; end: 10b01cf37; -[SCCommerceStoreDataModel shouldUseWebview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b01cf28(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112789f00);
}



/* Entry: 10b01cf38; end: 10b01cf47; -[SCCommerceStoreDataModel contactEmail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cf38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f04);
}



/* Entry: 10b01cf48; end: 10b01cf57; -[SCCommerceStoreDataModel contactPhone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cf48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f08);
}



/* Entry: 10b01cf58; end: 10b01cf67; -[SCCommerceStoreDataModel displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cf58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f0c);
}



/* Entry: 10b01cf68; end: 10b01cf77; -[SCCommerceStoreDataModel iconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cf68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f10);
}



/* Entry: 10b01cf78; end: 10b01cf87; -[SCCommerceStoreDataModel idValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cf78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f14);
}



/* Entry: 10b01cf88; end: 10b01cf97; -[SCCommerceStoreDataModel soldByText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cf88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f18);
}



/* Entry: 10b01cf98; end: 10b01cfa7; -[SCCommerceStoreDataModel supportUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cf98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f1c);
}



/* Entry: 10b01cfa8; end: 10b01cfb7; -[SCCommerceStoreDataModel storeTermsPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cfa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f20);
}



/* Entry: 10b01cfb8; end: 10b01cfc7; -[SCCommerceStoreDataModel storeReturnPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cfb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f24);
}



/* Entry: 10b01cfc8; end: 10b01cfd7; -[SCCommerceStoreDataModel snapCommercePolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cfc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f28);
}



/* Entry: 10b01cfd8; end: 10b01cfe7; -[SCCommerceStoreDataModel storePixelId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cfd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f2c);
}



/* Entry: 10b01cfe8; end: 10b01cff7; -[SCCommerceStoreDataModel categories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b01cfe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112789f30);
}



/* Entry: 10b01cff8; end: 10b01d007; -[SCCommerceStoreDataModel doesShipToUserLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b01cff8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112789f34);
}



/* Entry: 10b01d008; end: 10b01d017; -[SCCommerceStoreDataModel isNativeCheckout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b01d008(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112789f38);
}



/* Entry: 10b01d018; end: 10b01d0f7; -[SCCommerceStoreDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b01d018(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112789f30,0);
  _objc_storeStrong(param_1 + _DAT_112789f2c,0);
  _objc_storeStrong(param_1 + _DAT_112789f28,0);
  _objc_storeStrong(param_1 + _DAT_112789f24,0);
  _objc_storeStrong(param_1 + _DAT_112789f20,0);
  _objc_storeStrong(param_1 + _DAT_112789f1c,0);
  _objc_storeStrong(param_1 + _DAT_112789f18,0);
  _objc_storeStrong(param_1 + _DAT_112789f14,0);
  _objc_storeStrong(param_1 + _DAT_112789f10,0);
  _objc_storeStrong(param_1 + _DAT_112789f0c,0);
  _objc_storeStrong(param_1 + _DAT_112789f08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112789f04,0);
  return;
}



/* Entry: 10b01d0f8; end: 10b01d20b; -[SCCommerceStoreCategoryDataModel initWithIdValue:storeId:name:isShowcase:heroImage:] */

undefined1 *
FUN_10b01d0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127045b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01d20c; end: 10b01d22f; -[SCCommerceStoreCategoryDataModel copyWithZone:] */

undefined8 FUN_10b01d20c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01d230; end: 10b01d2bf; -[SCCommerceStoreCategoryDataModel hash] */

undefined8 * FUN_10b01d230(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b01d380:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b01d38c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b01d38c;
            }
            goto LAB_10b01d380;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b01d38c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b01d2c0; end: 10b01d3a7; -[SCCommerceStoreCategoryDataModel isEqual:] */

long FUN_10b01d2c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01d380:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01d38c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b01d38c;
            }
            goto LAB_10b01d380;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01d38c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01d3a8; end: 10b01d3af; -[SCCommerceStoreCategoryDataModel idValue] */

undefined8 FUN_10b01d3a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01d3b0; end: 10b01d3b7; -[SCCommerceStoreCategoryDataModel storeId] */

undefined8 FUN_10b01d3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01d3b8; end: 10b01d3bf; -[SCCommerceStoreCategoryDataModel name] */

undefined8 FUN_10b01d3b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01d3c0; end: 10b01d3c7; -[SCCommerceStoreCategoryDataModel isShowcase] */

undefined1 FUN_10b01d3c0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b01d3c8; end: 10b01d3cf; -[SCCommerceStoreCategoryDataModel heroImage] */

undefined8 FUN_10b01d3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b01d3d0; end: 10b01d417; -[SCCommerceStoreCategoryDataModel .cxx_destruct] */

void FUN_10b01d3d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b01d418; end: 10b01d523; -[SCCommerceStoreHeroImageDataModel initWithUrl:type:productDeeplink:categoryId:] */

undefined1 *
FUN_10b01d418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127045c0;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01d524; end: 10b01d547; -[SCCommerceStoreHeroImageDataModel copyWithZone:] */

undefined8 FUN_10b01d524(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01d548; end: 10b01d5d3; -[SCCommerceStoreHeroImageDataModel hash] */

undefined8 * FUN_10b01d548(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b01d684:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b01d690;
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
              goto LAB_10b01d690;
            }
            goto LAB_10b01d684;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b01d690:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b01d5d4; end: 10b01d6ab; -[SCCommerceStoreHeroImageDataModel isEqual:] */

long FUN_10b01d5d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01d684:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01d690;
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
              goto LAB_10b01d690;
            }
            goto LAB_10b01d684;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01d690:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01d6ac; end: 10b01d6b3; -[SCCommerceStoreHeroImageDataModel url] */

undefined8 FUN_10b01d6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b01d6b4; end: 10b01d6bb; -[SCCommerceStoreHeroImageDataModel type] */

undefined8 FUN_10b01d6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01d6bc; end: 10b01d6c3; -[SCCommerceStoreHeroImageDataModel productDeeplink] */

undefined8 FUN_10b01d6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01d6c4; end: 10b01d6cb; -[SCCommerceStoreHeroImageDataModel categoryId] */

undefined8 FUN_10b01d6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01d6cc; end: 10b01d713; -[SCCommerceStoreHeroImageDataModel .cxx_destruct] */

void FUN_10b01d6cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01d714; end: 10b01d7bf; -[SCCommercePDPWidgetInfo initWithWidgetTitle:fallbackTitle:widgetQueryContext:] */

undefined1 *
FUN_10b01d714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127045c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01d7c0; end: 10b01d7e3; -[SCCommercePDPWidgetInfo copyWithZone:] */

undefined8 FUN_10b01d7c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01d7e4; end: 10b01d7eb; -[SCCommercePDPWidgetInfo widgetTitle] */

undefined8 FUN_10b01d7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b01d7ec; end: 10b01d7f3; -[SCCommercePDPWidgetInfo fallbackTitle] */

undefined8 FUN_10b01d7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01d7f4; end: 10b01d7fb; -[SCCommercePDPWidgetInfo widgetQueryContext] */

undefined8 FUN_10b01d7f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01d7fc; end: 10b01d82b; -[SCCommercePDPWidgetInfo .cxx_destruct] */

void FUN_10b01d7fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b01d82c; end: 10b01d88f; +[SCCommercePDPEntrySource catalogPageWithCatalogQuery:] */

void FUN_10b01d82c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0850;
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



/* Entry: 10b01d890; end: 10b01d8eb; +[SCCommercePDPEntrySource deeplinkWithProductId:] */

void FUN_10b01d890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0850;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01d8ec; end: 10b01d90f; -[SCCommercePDPEntrySource copyWithZone:] */

undefined8 FUN_10b01d8ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01d910; end: 10b01d97f; -[SCCommercePDPEntrySource hash] */

void FUN_10b01d910(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1127045d0;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01d980; end: 10b01d9c3; -[SCCommercePDPEntrySource internalInit] */

void FUN_10b01d980(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127045d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01d9c4; end: 10b01da73; -[SCCommercePDPEntrySource isEqual:] */

long FUN_10b01d9c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01da58;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b01da58;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b01da58;
    }
  }
  lVar3 = 1;
LAB_10b01da58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01da74; end: 10b01daf7; -[SCCommercePDPEntrySource matchCatalogPage:deeplink:] */

void FUN_10b01da74(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b01dadc;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b01dadc;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_10b01dadc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01daf8; end: 10b01db03; -[SCCommercePDPEntrySource .cxx_destruct] */

void FUN_10b01daf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b01db04; end: 10b01db6f; +[SCCommercePDPWidgetQueryContext arTryOnWidgetWithUnlockableIds:] */

void FUN_10b01db04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7eb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01db70; end: 10b01dbbb; +[SCCommercePDPWidgetQueryContext fitFinderWidget] */

void FUN_10b01db70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7eb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01dbbc; end: 10b01dc1f; +[SCCommercePDPWidgetQueryContext itemRecommendationWidgetWithQueryContext:] */

void FUN_10b01dbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7eb0;
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



/* Entry: 10b01dc20; end: 10b01dceb; +[SCCommercePDPWidgetQueryContext shopOnStoreWidgetWithStoreId:storeName:storeIconUrl:] */

void FUN_10b01dc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c7eb0;
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



/* Entry: 10b01dcec; end: 10b01dd83; +[SCCommercePDPWidgetQueryContext variantWidgetWithVariantDimensionContext:variantDimensionNames:] */

void FUN_10b01dcec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7eb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01dd84; end: 10b01dda7; -[SCCommercePDPWidgetQueryContext copyWithZone:] */

undefined8 FUN_10b01dd84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01dda8; end: 10b01de5b; -[SCCommercePDPWidgetQueryContext hash] */

void FUN_10b01dda8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1127045d8;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01de5c; end: 10b01de9f; -[SCCommercePDPWidgetQueryContext internalInit] */

void FUN_10b01de5c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127045d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01dea0; end: 10b01dfcf; -[SCCommercePDPWidgetQueryContext isEqual:] */

long FUN_10b01dea0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01dfa8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01dfb4;
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
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_10b01dfb4;
                  }
                  goto LAB_10b01dfa8;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01dfb4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01dfd0; end: 10b01e0fb; -[SCCommercePDPWidgetQueryContext matchItemRecommendationWidget:shopOnStoreWidget:variantWidget:arTryOnWidget:fitFinderWidget:] */

void FUN_10b01dfd0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if ((lVar2 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x28));
      }
      goto LAB_10b01e0c4;
    }
    if (param_3 == 0) goto LAB_10b01e0c4;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  else {
    if (lVar2 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
      }
      goto LAB_10b01e0c4;
    }
    if (lVar2 != 3) {
      if ((lVar2 == 4) && (param_7 != 0)) {
        (**(code **)(param_7 + 0x10))(param_7);
      }
      goto LAB_10b01e0c4;
    }
    if (param_6 == 0) goto LAB_10b01e0c4;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b01e0c4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01e0fc; end: 10b01e167; -[SCCommercePDPWidgetQueryContext .cxx_destruct] */

void FUN_10b01e0fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b01e168; end: 10b01e237; +[SCCommerceCatalogProductLink externalAppWithDeeplinkPath:fallbackWebsitePath:fallbackBrowserType:externalAppId:] */

void FUN_10b01e168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126be2f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01e238; end: 10b01e2a3; +[SCCommerceCatalogProductLink internalWebviewWithWebsitePath:] */

void FUN_10b01e238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be2f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01e2a4; end: 10b01e2f7; +[SCCommerceCatalogProductLink nativePDPWithProductId:] */

void FUN_10b01e2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126be2f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


