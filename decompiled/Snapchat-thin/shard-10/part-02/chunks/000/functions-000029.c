/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a29cec; end: 107a29da3; -[SCStoryManagementSnapchatterCellViewModel hash] */

undefined8 * FUN_107a29cec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107a29ebc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107a29ec8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_107a29ec8;
                  }
                  goto LAB_107a29ebc;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107a29ec8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107a29da4; end: 107a29ee3; -[SCStoryManagementSnapchatterCellViewModel isEqual:] */

long FUN_107a29da4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a29ebc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a29ec8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_107a29ec8;
                  }
                  goto LAB_107a29ebc;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107a29ec8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a29ee4; end: 107a29eeb; -[SCStoryManagementSnapchatterCellViewModel avatarViewModel] */

undefined8 FUN_107a29ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a29eec; end: 107a29ef3; -[SCStoryManagementSnapchatterCellViewModel displayName] */

undefined8 FUN_107a29eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a29ef4; end: 107a29efb; -[SCStoryManagementSnapchatterCellViewModel trailingIcon] */

undefined8 FUN_107a29ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a29efc; end: 107a29f03; -[SCStoryManagementSnapchatterCellViewModel ownerIcon] */

undefined8 FUN_107a29efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a29f04; end: 107a29f0b; -[SCStoryManagementSnapchatterCellViewModel groupingStyle] */

undefined8 FUN_107a29f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a29f0c; end: 107a29f13; -[SCStoryManagementSnapchatterCellViewModel externalEdges] */

undefined8 FUN_107a29f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a29f14; end: 107a29f1b; -[SCStoryManagementSnapchatterCellViewModel tapActionModel] */

undefined8 FUN_107a29f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107a29f1c; end: 107a29f23; -[SCStoryManagementSnapchatterCellViewModel tapStoryActionModel] */

undefined8 FUN_107a29f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107a29f24; end: 107a29f2b; -[SCStoryManagementSnapchatterCellViewModel viewTimestamp] */

undefined8 FUN_107a29f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107a29f2c; end: 107a29f97; -[SCStoryManagementSnapchatterCellViewModel .cxx_destruct] */

void FUN_107a29f2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a29f98; end: 107a2a00f; -[SCStoryManagementSnapViewersFailedUploadCellViewModel initWithTapActionModel:] */

undefined1 * FUN_107a29f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f95c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a2a010; end: 107a2a033; -[SCStoryManagementSnapViewersFailedUploadCellViewModel copyWithZone:] */

undefined8 FUN_107a2a010(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a2a034; end: 107a2a03b; -[SCStoryManagementSnapViewersFailedUploadCellViewModel hash] */

void FUN_107a2a034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107a2a03c; end: 107a2a0cb; -[SCStoryManagementSnapViewersFailedUploadCellViewModel isEqual:] */

long FUN_107a2a03c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a2a0b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107a2a0b0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107a2a0b0;
    }
  }
  lVar3 = 1;
LAB_107a2a0b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a2a0cc; end: 107a2a0d3; -[SCStoryManagementSnapViewersFailedUploadCellViewModel tapActionModel] */

undefined8 FUN_107a2a0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a2a0d4; end: 107a2a0df; -[SCStoryManagementSnapViewersFailedUploadCellViewModel .cxx_destruct] */

void FUN_107a2a0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a2a0e0; end: 107a2a147; +[SCStoryManagementSnapViewersPlaceholderIcon imageWithImage:] */

void FUN_107a2a0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5f10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a2a148; end: 107a2a18f; +[SCStoryManagementSnapViewersPlaceholderIcon loadingIndicator] */

void FUN_107a2a148(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d5f10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a2a190; end: 107a2a1b3; -[SCStoryManagementSnapViewersPlaceholderIcon copyWithZone:] */

undefined8 FUN_107a2a190(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a2a1b4; end: 107a2a213; -[SCStoryManagementSnapViewersPlaceholderIcon hash] */

void FUN_107a2a1b4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f95c8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2a214; end: 107a2a257; -[SCStoryManagementSnapViewersPlaceholderIcon internalInit] */

void FUN_107a2a214(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f95c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2a258; end: 107a2a2f7; -[SCStoryManagementSnapViewersPlaceholderIcon isEqual:] */

long FUN_107a2a258(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a2a2dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107a2a2dc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107a2a2dc;
    }
  }
  lVar3 = 1;
LAB_107a2a2dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a2a2f8; end: 107a2a37b; -[SCStoryManagementSnapViewersPlaceholderIcon matchLoadingIndicator:image:] */

void FUN_107a2a2f8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a2a37c; end: 107a2a387; -[SCStoryManagementSnapViewersPlaceholderIcon .cxx_destruct] */

void FUN_107a2a37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a2a388; end: 107a2a433; -[SCStoryManagementSnapViewersPlaceholderViewModel initWithIcon:text:] */

undefined1 *
FUN_107a2a388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f95d0;
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



/* Entry: 107a2a434; end: 107a2a457; -[SCStoryManagementSnapViewersPlaceholderViewModel copyWithZone:] */

undefined8 FUN_107a2a434(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a2a458; end: 107a2a4cb; -[SCStoryManagementSnapViewersPlaceholderViewModel hash] */

undefined8 * FUN_107a2a458(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107a2a54c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107a2a558;
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
          goto LAB_107a2a558;
        }
        goto LAB_107a2a54c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107a2a558:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107a2a4cc; end: 107a2a573; -[SCStoryManagementSnapViewersPlaceholderViewModel isEqual:] */

long FUN_107a2a4cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a2a54c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a2a558;
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
          goto LAB_107a2a558;
        }
        goto LAB_107a2a54c;
      }
    }
    lVar3 = 0;
  }
LAB_107a2a558:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a2a574; end: 107a2a57b; -[SCStoryManagementSnapViewersPlaceholderViewModel icon] */

undefined8 FUN_107a2a574(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a2a57c; end: 107a2a583; -[SCStoryManagementSnapViewersPlaceholderViewModel text] */

undefined8 FUN_107a2a57c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a2a584; end: 107a2a5b3; -[SCStoryManagementSnapViewersPlaceholderViewModel .cxx_destruct] */

void FUN_107a2a584(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a2a5b4; end: 107a2a5cf; +[SCImpalaSnapInsightsOverlayActionHandling valdiMarshallableObjectDescriptor] */

void FUN_107a2a5b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109f5650;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107a2a5d0; end: 107a2a627;  */

undefined8 FUN_107a2a5d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5f78;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x000107a2a91c();
  return param_1;
}



/* Entry: 107a2a628; end: 107a2a633; +[SCCCompactReactionPicker componentPath] */

undefined ** FUN_107a2a628(void)

{
  return &PTR____CFConstantStringClassReference_110eaa118;
}



/* Entry: 107a2a634; end: 107a2a653; -[SCCCompactReactionPicker initWithViewModel:componentContext:runtime:] */

void FUN_107a2a634(void)

{
  FUN_107a2a908(PTR_PTR_1126f95d8);
  return;
}



/* Entry: 107a2a654; end: 107a2a687; -[SCCCompactReactionPicker setViewModel:] */

void FUN_107a2a654(void)

{
  func_0x000107a2a928();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a938();
  func_0x000107a2a944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107a2a688; end: 107a2a6bf; -[SCCCompactReactionPicker viewModel] */

void FUN_107a2a688(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2a6c0; end: 107a2a6cb; +[SCImpalaSnapInsightsV3OverlayView componentPath] */

undefined ** FUN_107a2a6c0(void)

{
  return &PTR____CFConstantStringClassReference_110eaa138;
}



/* Entry: 107a2a6cc; end: 107a2a6eb; -[SCImpalaSnapInsightsV3OverlayView initWithViewModel:componentContext:runtime:] */

void FUN_107a2a6cc(void)

{
  FUN_107a2a908(PTR_PTR_1126f95e0);
  return;
}



/* Entry: 107a2a6ec; end: 107a2a71f; -[SCImpalaSnapInsightsV3OverlayView setViewModel:] */

void FUN_107a2a6ec(void)

{
  func_0x000107a2a928();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a938();
  func_0x000107a2a944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107a2a720; end: 107a2a757; -[SCImpalaSnapInsightsV3OverlayView viewModel] */

void FUN_107a2a720(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2a758; end: 107a2a763; +[SCImpalaSnapInsightsV3View componentPath] */

undefined ** FUN_107a2a758(void)

{
  return &PTR____CFConstantStringClassReference_110eaa158;
}



/* Entry: 107a2a764; end: 107a2a783; -[SCImpalaSnapInsightsV3View initWithViewModel:componentContext:runtime:] */

void FUN_107a2a764(void)

{
  FUN_107a2a908(PTR_PTR_1126f95e8);
  return;
}



/* Entry: 107a2a784; end: 107a2a7b7; -[SCImpalaSnapInsightsV3View setViewModel:] */

void FUN_107a2a784(void)

{
  func_0x000107a2a928();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a938();
  func_0x000107a2a944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107a2a7b8; end: 107a2a7ef; -[SCImpalaSnapInsightsV3View viewModel] */

void FUN_107a2a7b8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2a7f0; end: 107a2a82f; -[SCImpalaSnapInsightsV3View tabViewSection] */

void FUN_107a2a7f0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2a830; end: 107a2a86f; -[SCImpalaSnapInsightsV3View scrollProxy] */

void FUN_107a2a830(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2a870; end: 107a2a87b; +[SCUnifiedSnapManagementFooter componentPath] */

undefined ** FUN_107a2a870(void)

{
  return &PTR____CFConstantStringClassReference_110eaa1b8;
}



/* Entry: 107a2a87c; end: 107a2a89b; -[SCUnifiedSnapManagementFooter initWithViewModel:componentContext:runtime:] */

void FUN_107a2a87c(void)

{
  FUN_107a2a908(PTR_PTR_1126f95f0);
  return;
}



/* Entry: 107a2a89c; end: 107a2a8cf; -[SCUnifiedSnapManagementFooter setViewModel:] */

void FUN_107a2a89c(void)

{
  func_0x000107a2a928();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a938();
  func_0x000107a2a944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107a2a8d0; end: 107a2a907; -[SCUnifiedSnapManagementFooter viewModel] */

void FUN_107a2a8d0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2a91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2a908; end: 107a2a963;  */

void FUN_107a2a908(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 107a2a964; end: 107a2a977; +[SCPayoutsExternalAppHandling valdiMarshallableObjectDescriptor] */

void FUN_107a2a964(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109f5680;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107a2a978; end: 107a2a9b3;  */

undefined8 FUN_107a2a978(undefined8 param_1)

{
  func_0x000107a2afa8();
  func_0x000107a2af94();
  func_0x000107a2af00();
  func_0x000107a2aedc();
  return param_1;
}



/* Entry: 107a2a9b4; end: 107a2a9d7; +[SCPayoutsFetcher valdiMarshallableObjectDescriptor] */

void FUN_107a2a9b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109f5740;
  param_1[1] = &PTR_DAT_1109f57a0;
  param_1[2] = &PTR_DAT_1109f56e0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107a2a9d8; end: 107a2aa07;  */

undefined8 FUN_107a2a9d8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[4],*param_2,param_2[1],param_2[2],param_2[3],param_2[5]);
  return 0;
}



/* Entry: 107a2aa08; end: 107a2aa57;  */

void FUN_107a2aa08(void)

{
  func_0x000107a2af84();
  func_0x000107a2af74();
  func_0x000107a2af10(FUN_107a2ae3c);
  func_0x000107a2af8c();
  func_0x000107a2af38();
  func_0x000107a2aef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2aa58; end: 107a2aa7b;  */

undefined8 FUN_107a2aa58(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 107a2aa7c; end: 107a2aacb;  */

void FUN_107a2aa7c(void)

{
  func_0x000107a2af84();
  func_0x000107a2af74();
  func_0x000107a2af10(0x107a2ae6c);
  func_0x000107a2af8c();
  func_0x000107a2af38();
  func_0x000107a2aef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2aacc; end: 107a2aaf7;  */

undefined8 FUN_107a2aacc(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],param_2[3],*param_2,param_2[1],param_2[4],param_2[5]);
  return 0;
}



/* Entry: 107a2aaf8; end: 107a2ab47;  */

void FUN_107a2aaf8(void)

{
  func_0x000107a2af84();
  func_0x000107a2af74();
  func_0x000107a2af10(0x107a2ae9c);
  func_0x000107a2af8c();
  func_0x000107a2af38();
  func_0x000107a2aef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2ab48; end: 107a2ab83;  */

undefined8 FUN_107a2ab48(undefined8 param_1)

{
  func_0x000107a2afa8();
  func_0x000107a2af94();
  func_0x000107a2af00();
  func_0x000107a2aedc();
  return param_1;
}



/* Entry: 107a2ab84; end: 107a2ab9f; +[SCPayoutsPresenting valdiMarshallableObjectDescriptor] */

void FUN_107a2ab84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109f57c0;
  param_1[1] = &PTR_DAT_1109f5808;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107a2aba0; end: 107a2abdb;  */

undefined8 FUN_107a2aba0(undefined8 param_1)

{
  func_0x000107a2afa8();
  func_0x000107a2af94();
  func_0x000107a2af00();
  func_0x000107a2aedc();
  return param_1;
}



/* Entry: 107a2abdc; end: 107a2abe7; +[SCCrystalsInvalidatedDialog componentPath] */

undefined ** FUN_107a2abdc(void)

{
  return &PTR____CFConstantStringClassReference_110eaa1d8;
}



/* Entry: 107a2abe8; end: 107a2ac07; -[SCCrystalsInvalidatedDialog initWithViewModel:componentContext:runtime:] */

void FUN_107a2abe8(void)

{
  FUN_107a2aec8(PTR_PTR_1126f95f8);
  return;
}



/* Entry: 107a2ac08; end: 107a2ac3b; -[SCCrystalsInvalidatedDialog setViewModel:] */

void FUN_107a2ac08(void)

{
  func_0x000107a2aee8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2af20();
  func_0x000107a2aef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107a2ac3c; end: 107a2ac73; -[SCCrystalsInvalidatedDialog viewModel] */

void FUN_107a2ac3c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2aedc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2ac74; end: 107a2ac7f; +[SCGiftSendingView componentPath] */

undefined ** FUN_107a2ac74(void)

{
  return &PTR____CFConstantStringClassReference_110eaa1f8;
}



/* Entry: 107a2ac80; end: 107a2ac9f; -[SCGiftSendingView initWithViewModel:componentContext:runtime:] */

void FUN_107a2ac80(void)

{
  FUN_107a2aec8(PTR_PTR_1126f9600);
  return;
}



/* Entry: 107a2aca0; end: 107a2acd3; -[SCGiftSendingView setViewModel:] */

void FUN_107a2aca0(void)

{
  func_0x000107a2aee8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2af20();
  func_0x000107a2aef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107a2acd4; end: 107a2ad0b; -[SCGiftSendingView viewModel] */

void FUN_107a2acd4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2aedc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2ad0c; end: 107a2ad17; +[SCOnboardingChecklistView componentPath] */

undefined ** FUN_107a2ad0c(void)

{
  return &PTR____CFConstantStringClassReference_110eaa218;
}



/* Entry: 107a2ad18; end: 107a2ad37; -[SCOnboardingChecklistView initWithViewModel:componentContext:runtime:] */

void FUN_107a2ad18(void)

{
  FUN_107a2aec8(PTR_PTR_1126f9608);
  return;
}



/* Entry: 107a2ad38; end: 107a2ad6b; -[SCOnboardingChecklistView setViewModel:] */

void FUN_107a2ad38(void)

{
  func_0x000107a2aee8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2af20();
  func_0x000107a2aef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107a2ad6c; end: 107a2ada3; -[SCOnboardingChecklistView viewModel] */

void FUN_107a2ad6c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2aedc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2ada4; end: 107a2adaf; +[SCPayoutsView componentPath] */

undefined ** FUN_107a2ada4(void)

{
  return &PTR____CFConstantStringClassReference_110eaa238;
}



/* Entry: 107a2adb0; end: 107a2adcf; -[SCPayoutsView initWithViewModel:componentContext:runtime:] */

void FUN_107a2adb0(void)

{
  FUN_107a2aec8(PTR_PTR_1126f9610);
  return;
}



/* Entry: 107a2add0; end: 107a2ae03; -[SCPayoutsView setViewModel:] */

void FUN_107a2add0(void)

{
  func_0x000107a2aee8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2af20();
  func_0x000107a2aef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107a2ae04; end: 107a2ae3b; -[SCPayoutsView viewModel] */

void FUN_107a2ae04(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a2aedc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a2ae3c; end: 107a2aec7;  */

void FUN_107a2ae3c(long param_1)

{
  func_0x000107a2af9c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 107a2aec8; end: 107a2afaf;  */

void FUN_107a2aec8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 107a2afb0; end: 107a2afb7; -[SCUnifiedSnapManagementContentType__Enum init] */

void FUN_107a2afb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 107a2afb8; end: 107a2afeb; -[SCCCompactReactionPickerContext init] */

void FUN_107a2afb8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9618;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 107a2afec; end: 107a2afff; +[SCCCompactReactionPickerContext valdiMarshallableObjectDescriptor] */

void FUN_107a2afec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109f5878;
  param_1[1] = &PTR_DAT_1109f58f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b000; end: 107a2b043; -[SCCCompactReactionPickerViewModel initWithDisplayName:message:timestampMs:conversationId:messageId:hasReaction:] */

void FUN_107a2b000(void)

{
  func_0x000107a2b664();
  func_0x000107a2b604();
  return;
}



/* Entry: 107a2b044; end: 107a2b05b; +[SCCCompactReactionPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_107a2b044(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_displayName_1109f5908;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b05c; end: 107a2b123; -[SCImpalaSnapInsightsOverlayContext initWithOperaActionHandler:alertPresenter:actionHandler:snapActionHandler:cofStore:openUrl:blizzardLogger:navigator:] */

undefined8 FUN_107a2b05c(void)

{
  undefined8 uVar1;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  func_0x000107a2b634();
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  _objc_retain();
  func_0x000107a2b6d4();
  func_0x000107a2b6c4();
  func_0x000107a2b6b4();
  func_0x000107a2b678();
  _objc_retainBlock(in_x7);
  uVar1 = in_x7;
  func_0x000107a2b688();
  func_0x000107a2b664();
  func_0x000107a2b614();
  _objc_release(in_stack_00000008);
  func_0x000107a2b6e4();
  func_0x000107a2b6dc();
  func_0x000107a2b6cc();
  func_0x000107a2b6bc();
  func_0x000107a2b6ac();
  func_0x000107a2b670();
  _objc_release(in_x7);
  return uVar1;
}



/* Entry: 107a2b124; end: 107a2b1bf; -[SCImpalaSnapInsightsOverlayContext initWithOperaActionHandler:alertPresenter:actionHandler:snapActionHandler:cofStore:openUrl:blizzardLogger:] */

undefined8 FUN_107a2b124(void)

{
  undefined8 uVar1;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  func_0x000107a2b634();
  _objc_retain(in_stack_00000000);
  _objc_retain();
  func_0x000107a2b6d4();
  func_0x000107a2b6c4();
  func_0x000107a2b6b4();
  func_0x000107a2b678();
  _objc_retainBlock(in_x7);
  uVar1 = in_x7;
  func_0x000107a2b688();
  func_0x000107a2b664();
  func_0x000107a2b614();
  func_0x000107a2b6e4();
  func_0x000107a2b6dc();
  func_0x000107a2b6cc();
  func_0x000107a2b6bc();
  func_0x000107a2b6ac();
  func_0x000107a2b670();
  _objc_release(in_x7);
  return uVar1;
}



/* Entry: 107a2b1c0; end: 107a2b247; -[SCImpalaSnapInsightsOverlayContext initWithOperaActionHandler:alertPresenter:actionHandler:snapActionHandler:cofStore:openUrl:] */

undefined8 FUN_107a2b1c0(void)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
  func_0x000107a2b634();
  _objc_retain(in_x6);
  func_0x000107a2b6d4();
  func_0x000107a2b6c4();
  func_0x000107a2b6b4();
  func_0x000107a2b678();
  _objc_retainBlock(in_x7);
  func_0x000107a2b688();
  func_0x000107a2b664();
  func_0x000107a2b614();
  func_0x000107a2b6dc();
  func_0x000107a2b6cc();
  func_0x000107a2b6bc();
  func_0x000107a2b6ac();
  func_0x000107a2b670();
  func_0x000107a2b6e4();
  return in_x7;
}



/* Entry: 107a2b248; end: 107a2b27b; -[SCImpalaSnapInsightsOverlayContext initWithOperaActionHandler:alertPresenter:actionHandler:snapActionHandler:cofStore:] */

void FUN_107a2b248(void)

{
  func_0x000107a2b688();
  func_0x000107a2b664();
  func_0x000107a2b604();
  return;
}



/* Entry: 107a2b27c; end: 107a2b2b7; -[SCImpalaSnapInsightsOverlayContext initWithOperaActionHandler:alertPresenter:actionHandler:snapActionHandler:] */

void FUN_107a2b27c(undefined8 param_1)

{
  undefined8 auStack_20 [2];
  
  func_0x000107a2b688();
  auStack_20[0] = param_1;
  func_0x000107a2b664();
  func_0x000107a2b62c(auStack_20);
  return;
}



/* Entry: 107a2b2b8; end: 107a2b2cb; +[SCImpalaSnapInsightsOverlayContext valdiMarshallableObjectDescriptor] */

void FUN_107a2b2b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109f5a58;
  param_1[1] = &PTR_DAT_1109f5b30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b2cc; end: 107a2b30f; -[SCImpalaSnapInsightsOverlayViewModel initWithSnap:] */

void FUN_107a2b2cc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9630;
  uStack_20 = param_1;
  func_0x000107a2b664();
  func_0x000107a2b62c(&uStack_20);
  return;
}



/* Entry: 107a2b310; end: 107a2b323; +[SCImpalaSnapInsightsOverlayViewModel valdiMarshallableObjectDescriptor] */

void FUN_107a2b310(undefined8 *param_1)

{
  *param_1 = &PTR_s_snap_1109f5b70;
  param_1[1] = &PTR_DAT_1109f5c18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b324; end: 107a2b393; -[SCImpalaSnapInsightsSnapInsightsContext initWithPresentationHandler:operaActionHandler:networkingClient:serviceConfig:chatActionHandler:friendStore:profilePresenter:alertPresenter:quotingActionHandler:application:blockedUserStore:chatReactionMetadataProvider:] */

void FUN_107a2b324(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9638;
  uStack_30 = param_1;
  func_0x000107a2b62c(&uStack_30,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 107a2b394; end: 107a2b3bb; +[SCImpalaSnapInsightsSnapInsightsContext valdiMarshallableObjectDescriptor] */

void FUN_107a2b394(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109f5c68;
  param_1[1] = &PTR_DAT_1109f5f08;
  param_1[2] = &PTR_s_ob_v_1109f5c38;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107a2b3bc; end: 107a2b3e3;  */

undefined8 FUN_107a2b3bc(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}


