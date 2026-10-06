/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d761a8; end: 106d761c7; -[SCSelectorForwardingCollectionView externalDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d761a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d9b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d761c8; end: 106d761db; -[SCSelectorForwardingCollectionView setExternalDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d761c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275d9b0,param_3);
  return;
}



/* Entry: 106d761dc; end: 106d761fb; -[SCSelectorForwardingCollectionView externalDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d761dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d9ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d761fc; end: 106d7620f; -[SCSelectorForwardingCollectionView setExternalDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d761fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275d9ac,param_3);
  return;
}



/* Entry: 106d76210; end: 106d76247; -[SCSelectorForwardingCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d76210(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275d9ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275d9b0);
  return;
}



/* Entry: 106d76248; end: 106d762cb; -[SCCommerceHeroCellViewModel initWithImage:contentMode:] */

undefined1 *
FUN_106d76248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f6ce8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d762cc; end: 106d762ef; -[SCCommerceHeroCellViewModel copyWithZone:] */

undefined8 FUN_106d762cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d762f0; end: 106d762f7; -[SCCommerceHeroCellViewModel image] */

undefined8 FUN_106d762f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d762f8; end: 106d762ff; -[SCCommerceHeroCellViewModel contentMode] */

undefined8 FUN_106d762f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d76300; end: 106d7630b; -[SCCommerceHeroCellViewModel .cxx_destruct] */

void FUN_106d76300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d7630c; end: 106d7658b; -[SCCommerceCatalogProductCellViewModel initWithProductId:storeId:titleText:price:strikethroughPrice:imageURL:isSoldOutVisible:isCheckmarkVisible:productIdentifier:actionModel:subtitleText:contentMode:trackingId:favoriteState:] */

undefined8 *
FUN_106d7630c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f6cf0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
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
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    puVar1[0xb] = param_14;
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    puVar1[0xd] = param_16;
  }
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d7658c; end: 106d765af; -[SCCommerceCatalogProductCellViewModel copyWithZone:] */

undefined8 FUN_106d7658c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d765b0; end: 106d766a7; -[SCCommerceCatalogProductCellViewModel hash] */

undefined8 * FUN_106d765b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x58);
  uStack_38 = *(undefined8 *)(param_1 + 0x60);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x68);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_98;
  func_0x000100505190(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106d76828:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106d76834;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
          (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
         (puVar3[0xb] == param_3[0xb])) && (puVar3[0xd] == param_3[0xd])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[10];
                      if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = (undefined8 *)puVar3[0xc];
                        if (puVar6 != (undefined8 *)param_3[0xc]) {
                          func_0x00010c071ae0();
                          goto LAB_106d76834;
                        }
                        goto LAB_106d76828;
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
    puVar6 = (undefined8 *)0x0;
  }
LAB_106d76834:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106d766a8; end: 106d7684f; -[SCCommerceCatalogProductCellViewModel isEqual:] */

long FUN_106d766a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106d76828:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d76834;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
        (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))))) {
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
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if (lVar3 != *(long *)(param_3 + 0x60)) {
                          func_0x00010c071ae0();
                          goto LAB_106d76834;
                        }
                        goto LAB_106d76828;
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
LAB_106d76834:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106d76850; end: 106d76857; -[SCCommerceCatalogProductCellViewModel productId] */

undefined8 FUN_106d76850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d76858; end: 106d7685f; -[SCCommerceCatalogProductCellViewModel storeId] */

undefined8 FUN_106d76858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d76860; end: 106d76867; -[SCCommerceCatalogProductCellViewModel titleText] */

undefined8 FUN_106d76860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d76868; end: 106d7686f; -[SCCommerceCatalogProductCellViewModel price] */

undefined8 FUN_106d76868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d76870; end: 106d76877; -[SCCommerceCatalogProductCellViewModel strikethroughPrice] */

undefined8 FUN_106d76870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d76878; end: 106d7687f; -[SCCommerceCatalogProductCellViewModel imageURL] */

undefined8 FUN_106d76878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d76880; end: 106d76887; -[SCCommerceCatalogProductCellViewModel isSoldOutVisible] */

undefined1 FUN_106d76880(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d76888; end: 106d7688f; -[SCCommerceCatalogProductCellViewModel isCheckmarkVisible] */

undefined1 FUN_106d76888(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106d76890; end: 106d76897; -[SCCommerceCatalogProductCellViewModel productIdentifier] */

undefined8 FUN_106d76890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d76898; end: 106d7689f; -[SCCommerceCatalogProductCellViewModel actionModel] */

undefined8 FUN_106d76898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d768a0; end: 106d768a7; -[SCCommerceCatalogProductCellViewModel subtitleText] */

undefined8 FUN_106d768a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106d768a8; end: 106d768af; -[SCCommerceCatalogProductCellViewModel contentMode] */

undefined8 FUN_106d768a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106d768b0; end: 106d768b7; -[SCCommerceCatalogProductCellViewModel trackingId] */

undefined8 FUN_106d768b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106d768b8; end: 106d768bf; -[SCCommerceCatalogProductCellViewModel favoriteState] */

undefined8 FUN_106d768b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106d768c0; end: 106d7694f; -[SCCommerceCatalogProductCellViewModel .cxx_destruct] */

void FUN_106d768c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106d76950; end: 106d76a83; -[SCCommerceCatalogStoreCellViewModel initWithStoreTitle:subtitle:imageURL:isCheckmarkVisible:storeIdentifier:actionModel:] */

undefined1 *
FUN_106d76950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f6cf8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d76a84; end: 106d76aa7; -[SCCommerceCatalogStoreCellViewModel copyWithZone:] */

undefined8 FUN_106d76a84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d76aa8; end: 106d76aaf; -[SCCommerceCatalogStoreCellViewModel storeTitle] */

undefined8 FUN_106d76aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d76ab0; end: 106d76ab7; -[SCCommerceCatalogStoreCellViewModel subtitle] */

undefined8 FUN_106d76ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d76ab8; end: 106d76abf; -[SCCommerceCatalogStoreCellViewModel imageURL] */

undefined8 FUN_106d76ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d76ac0; end: 106d76ac7; -[SCCommerceCatalogStoreCellViewModel isCheckmarkVisible] */

undefined1 FUN_106d76ac0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d76ac8; end: 106d76acf; -[SCCommerceCatalogStoreCellViewModel storeIdentifier] */

undefined8 FUN_106d76ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d76ad0; end: 106d76ad7; -[SCCommerceCatalogStoreCellViewModel actionModel] */

undefined8 FUN_106d76ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d76ad8; end: 106d76b2b; -[SCCommerceCatalogStoreCellViewModel .cxx_destruct] */

void FUN_106d76ad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d76b2c; end: 106d76b9f; -[SCCommercePaginationErrorViewModel initWithErrorText:] */

undefined1 * FUN_106d76b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6d00;
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



/* Entry: 106d76ba0; end: 106d76bc3; -[SCCommercePaginationErrorViewModel copyWithZone:] */

undefined8 FUN_106d76ba0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d76bc4; end: 106d76bcb; -[SCCommercePaginationErrorViewModel errorText] */

undefined8 FUN_106d76bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d76bcc; end: 106d76bd7; -[SCCommercePaginationErrorViewModel .cxx_destruct] */

void FUN_106d76bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d76bd8; end: 106d76d97; -[SCCommerceProductSharingPreviewViewModel initWithProductId:storeId:trackingId:title:price:strikethroughPrice:isSoldOutVisible:merchantName:image:contentMode:] */

undefined8 *
FUN_106d76bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

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
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f6d08;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
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
    *(undefined1 *)(puVar1 + 1) = param_9;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    puVar1[10] = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d76d98; end: 106d76dbb; -[SCCommerceProductSharingPreviewViewModel copyWithZone:] */

undefined8 FUN_106d76d98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d76dbc; end: 106d76dc3; -[SCCommerceProductSharingPreviewViewModel productId] */

undefined8 FUN_106d76dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d76dc4; end: 106d76dcb; -[SCCommerceProductSharingPreviewViewModel storeId] */

undefined8 FUN_106d76dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d76dcc; end: 106d76dd3; -[SCCommerceProductSharingPreviewViewModel trackingId] */

undefined8 FUN_106d76dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d76dd4; end: 106d76ddb; -[SCCommerceProductSharingPreviewViewModel title] */

undefined8 FUN_106d76dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d76ddc; end: 106d76de3; -[SCCommerceProductSharingPreviewViewModel price] */

undefined8 FUN_106d76ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d76de4; end: 106d76deb; -[SCCommerceProductSharingPreviewViewModel strikethroughPrice] */

undefined8 FUN_106d76de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d76dec; end: 106d76df3; -[SCCommerceProductSharingPreviewViewModel isSoldOutVisible] */

undefined1 FUN_106d76dec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d76df4; end: 106d76dfb; -[SCCommerceProductSharingPreviewViewModel merchantName] */

undefined8 FUN_106d76df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d76dfc; end: 106d76e03; -[SCCommerceProductSharingPreviewViewModel image] */

undefined8 FUN_106d76dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d76e04; end: 106d76e0b; -[SCCommerceProductSharingPreviewViewModel contentMode] */

undefined8 FUN_106d76e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106d76e0c; end: 106d76e83; -[SCCommerceProductSharingPreviewViewModel .cxx_destruct] */

void FUN_106d76e0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106d76e84; end: 106d77033; -[SCCommerceLineItemCellViewModel initWithThumbnailView:titleLabel:titleStyle:discountedPriceLabel:discountedPriceStyle:priceLabel:priceStyle:variantLabel:variantStyle:quantityLabel:removeButtonLabel:] */

undefined8 *
FUN_106d76e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f6d10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar1[3] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar1[5] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar1[7] = param_9;
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    puVar1[9] = param_11;
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d77034; end: 106d77057; -[SCCommerceLineItemCellViewModel copyWithZone:] */

undefined8 FUN_106d77034(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d77058; end: 106d7705f; -[SCCommerceLineItemCellViewModel thumbnailView] */

undefined8 FUN_106d77058(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d77060; end: 106d77067; -[SCCommerceLineItemCellViewModel titleLabel] */

undefined8 FUN_106d77060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d77068; end: 106d7706f; -[SCCommerceLineItemCellViewModel titleStyle] */

undefined8 FUN_106d77068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d77070; end: 106d77077; -[SCCommerceLineItemCellViewModel discountedPriceLabel] */

undefined8 FUN_106d77070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d77078; end: 106d7707f; -[SCCommerceLineItemCellViewModel discountedPriceStyle] */

undefined8 FUN_106d77078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d77080; end: 106d77087; -[SCCommerceLineItemCellViewModel priceLabel] */

undefined8 FUN_106d77080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d77088; end: 106d7708f; -[SCCommerceLineItemCellViewModel priceStyle] */

undefined8 FUN_106d77088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d77090; end: 106d77097; -[SCCommerceLineItemCellViewModel variantLabel] */

undefined8 FUN_106d77090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d77098; end: 106d7709f; -[SCCommerceLineItemCellViewModel variantStyle] */

undefined8 FUN_106d77098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d770a0; end: 106d770a7; -[SCCommerceLineItemCellViewModel quantityLabel] */

undefined8 FUN_106d770a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106d770a8; end: 106d770af; -[SCCommerceLineItemCellViewModel removeButtonLabel] */

undefined8 FUN_106d770a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106d770b0; end: 106d7711b; -[SCCommerceLineItemCellViewModel .cxx_destruct] */

void FUN_106d770b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d7711c; end: 106d7720f; -[SCCommerceStoreCellViewModel initWithThumbnailImage:storeTitle:storeStyle:quantity:quantityStyle:enableNavigationToStorePage:] */

undefined1 *
FUN_106d7711c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f6d18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d77210; end: 106d77233; -[SCCommerceStoreCellViewModel copyWithZone:] */

undefined8 FUN_106d77210(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d77234; end: 106d7723b; -[SCCommerceStoreCellViewModel thumbnailImage] */

undefined8 FUN_106d77234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d7723c; end: 106d77243; -[SCCommerceStoreCellViewModel storeTitle] */

undefined8 FUN_106d7723c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d77244; end: 106d7724b; -[SCCommerceStoreCellViewModel storeStyle] */

undefined8 FUN_106d77244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d7724c; end: 106d77253; -[SCCommerceStoreCellViewModel quantity] */

undefined8 FUN_106d7724c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d77254; end: 106d7725b; -[SCCommerceStoreCellViewModel quantityStyle] */

undefined8 FUN_106d77254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d7725c; end: 106d77263; -[SCCommerceStoreCellViewModel enableNavigationToStorePage] */

undefined1 FUN_106d7725c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d77264; end: 106d7729f; -[SCCommerceStoreCellViewModel .cxx_destruct] */

void FUN_106d77264(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d772a0; end: 106d7746f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_106d772a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126be518;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar15 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  _objc_retain();
  _objc_alloc();
  puVar3 = PTR_PTR_1126be540;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = 0x1e0;
  uStack_70 = 0x1e0;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_80 = param_1;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c02f240(*(undefined8 *)PTR__CGRectNull_1103475e8,
                      *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8),
                      *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10),
                      *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18),0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar6 = (undefined **)PTR_PTR_1126be520;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0x407e000000000000;
  uVar13 = 0x407e000000000000;
  func_0x00010c01b800(uVar14,uVar15);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return ppuVar6;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106d77470;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = PTR_PTR_1126f6d20;
  ppuVar5 = &puStack_128;
  uVar9 = uVar14;
  puStack_128 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(ppuVar5,PTR_s_initWithFrame__1125e2948);
  lVar11 = 0;
  if (ppuVar5 != (undefined **)0x0) {
    puVar1 = PTR_PTR_1126b0648;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar15,uVar12,uVar13);
    lVar11 = (long)_DAT_11275da7c;
    uVar15 = *(undefined8 *)((long)ppuVar5 + lVar11);
    *(undefined **)((long)ppuVar5 + lVar11) = puVar1;
    _objc_release(uVar15);
    func_0x00010c1aa9a0(*(undefined8 *)((long)ppuVar5 + lVar11));
    func_0x00010befbb60(ppuVar5);
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar11 = (long)_DAT_11275da80;
    uVar15 = *(undefined8 *)((long)ppuVar5 + lVar11);
    *(undefined **)((long)ppuVar5 + lVar11) = puVar1;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)ppuVar5 + lVar11));
    func_0x00010c1a8560(*(undefined8 *)((long)ppuVar5 + lVar11));
    func_0x00010befbb60(ppuVar5);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    ppuVar6 = *(undefined ***)((long)ppuVar5 + lVar11);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    func_0x00010bf34860(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_118 = ppuVar8;
    uVar9 = *(undefined8 *)((long)ppuVar5 + lVar11);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar5;
    func_0x00010bf348e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_110 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar15);
    _objc_release(ppuVar10);
    _objc_release(uVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    lVar11 = *(long *)((long)ppuVar5 + (long)_DAT_11275da84);
    *(undefined **)((long)ppuVar5 + (long)_DAT_11275da84) = puVar1;
    _objc_release();
    uVar9 = uVar14;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106d776dc;
  puStack_168 = PTR_PTR_1126f6d20;
  lStack_170 = lVar11;
  uStack_160 = uVar12;
  uStack_158 = uVar13;
  ppuStack_150 = ppuVar6;
  ppuStack_148 = ppuVar5;
  ppuStack_140 = &puStack_90;
  _objc_msgSendSuper2(&lStack_170,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(lVar11);
  _CGRectGetWidth();
  uVar14 = uVar9;
  func_0x00010bf20c00(lVar11);
  _CGRectGetHeight();
  ppuVar6 = *(undefined ***)(lVar11 + _DAT_11275da7c);
  func_0x00010c19f0e0(0,0,uVar9,uVar14,ppuVar6);
  return ppuVar6;
}



/* Entry: 106d77470; end: 106d776db; -[SCCompositeNetworkImageView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106d77470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126f6d20;
  puVar7 = &uStack_a8;
  uVar8 = param_1;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(puVar7,PTR_s_initWithFrame__1125e2948);
  lVar9 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126b0648;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar9 = (long)_DAT_11275da7c;
    uVar8 = *(undefined8 *)((long)puVar7 + lVar9);
    *(undefined **)((long)puVar7 + lVar9) = puVar1;
    _objc_release(uVar8);
    func_0x00010c1aa9a0(*(undefined8 *)((long)puVar7 + lVar9));
    func_0x00010befbb60(puVar7);
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar9 = (long)_DAT_11275da80;
    uVar8 = *(undefined8 *)((long)puVar7 + lVar9);
    *(undefined **)((long)puVar7 + lVar9) = puVar1;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)puVar7 + lVar9));
    func_0x00010c1a8560(*(undefined8 *)((long)puVar7 + lVar9));
    func_0x00010befbb60(puVar7);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(undefined8 *)((long)puVar7 + lVar9);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010bf34860(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar8;
    uVar3 = *(undefined8 *)((long)puVar7 + lVar9);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010bf348e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(unaff_x20);
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    lVar9 = *(long *)((long)puVar7 + (long)_DAT_11275da84);
    *(undefined **)((long)puVar7 + (long)_DAT_11275da84) = puVar1;
    _objc_release();
    uVar8 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106d776dc;
  puStack_e8 = PTR_PTR_1126f6d20;
  lStack_f0 = lVar9;
  uStack_e0 = param_3;
  uStack_d8 = param_4;
  uStack_d0 = unaff_x20;
  puStack_c8 = puVar7;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_f0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(lVar9);
  _CGRectGetWidth();
  uVar5 = uVar8;
  func_0x00010bf20c00(lVar9);
  _CGRectGetHeight();
  puVar7 = *(undefined8 **)(lVar9 + _DAT_11275da7c);
  func_0x00010c19f0e0(0,0,uVar8,uVar5,puVar7);
  return puVar7;
}



/* Entry: 106d776dc; end: 106d7775f; -[SCCompositeNetworkImageView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d776dc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6d20;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  uVar1 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c19f0e0(0,0,param_1,uVar1,*(undefined8 *)(param_2 + _DAT_11275da7c));
  return;
}



/* Entry: 106d77760; end: 106d7783b; -[SCCompositeNetworkImageView setCompositeNetworkImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d77760(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11275da88;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_106d77824;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + _DAT_11275da8c) = 0;
    func_0x00010beb99c0(param_1);
    func_0x00010be4cd60(param_1,param_2,param_3);
  }
LAB_106d77824:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d7783c; end: 106d77897; -[SCCompositeNetworkImageView _showLoadingIndicatorAfterDelay] */

void FUN_106d7783c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106d77898;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_38);
  return;
}



/* Entry: 106d77898; end: 106d778bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d77898(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275da8c) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275da80),
             PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 106d778c0; end: 106d778cf; -[SCCompositeNetworkImageView displayedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d778c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275da7c),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106d778d0; end: 106d778ff; -[SCCompositeNetworkImageView referenceView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d778d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275da7c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d77900; end: 106d77a8b; -[SCCompositeNetworkImageView _loadCompositeNetworkImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d77900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11275da80));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275da90);
  func_0x00010bfa5c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = uVar1;
  func_0x00010c0b9a80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar4 = uVar2;
  func_0x00010c2519e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010bf87420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa620(*(undefined8 *)(param_1 + _DAT_11275da7c));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106d77a8c; end: 106d77ab7;  */

void FUN_106d77a8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2aa00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d77ab8; end: 106d77b0f; -[SCCompositeNetworkImageView _handleImageLoadCompletion] */

void FUN_106d77ab8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106d77b10;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106d77b10; end: 106d77b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d77b10(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275da8c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275da80),
             PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 106d77b38; end: 106d77b47; -[SCCompositeNetworkImageView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d77b38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275da90);
}



/* Entry: 106d77b48; end: 106d77b87; -[SCCompositeNetworkImageView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d77b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275da90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d77b88; end: 106d77b97; -[SCCompositeNetworkImageView compositeNetworkImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d77b88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275da88);
}



/* Entry: 106d77b98; end: 106d77c07; -[SCCompositeNetworkImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d77b98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275da88,0);
  _objc_storeStrong(param_1 + _DAT_11275da84,0);
  _objc_storeStrong(param_1 + _DAT_11275da80,0);
  _objc_storeStrong(param_1 + _DAT_11275da7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275da90,0);
  return;
}



/* Entry: 106d77c08; end: 106d77cd3; -[SCCommerceStaticImageServices initWithCommerceImageProvider:paymentSettingsImageProvider:commerceIconProvider:] */

undefined1 *
FUN_106d77c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6d28;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d77cd4; end: 106d77cdb; -[SCCommerceStaticImageServices commerceImageProvider] */

undefined8 FUN_106d77cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d77cdc; end: 106d77ce3; -[SCCommerceStaticImageServices paymentSettingsImageProvider] */

undefined8 FUN_106d77cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d77ce4; end: 106d77ceb; -[SCCommerceStaticImageServices commerceIconProvider] */

undefined8 FUN_106d77ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d77cec; end: 106d77d27; -[SCCommerceStaticImageServices .cxx_destruct] */

void FUN_106d77cec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d77d28; end: 106d77def;  */

void FUN_106d77d28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2978e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_106d780a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


