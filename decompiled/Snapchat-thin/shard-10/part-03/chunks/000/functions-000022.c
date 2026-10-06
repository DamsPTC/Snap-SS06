/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d55d10; end: 107d55dab; -[SCMemoriesPickerV2Config .cxx_destruct] */

void FUN_107d55d10(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 107d55dac; end: 107d55e0f; +[SCMemoriesPickerV2ActionHandling customActionHandlerWithCustomActionHandler:] */

void FUN_107d55dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aff78;
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



/* Entry: 107d55e10; end: 107d55e7b; +[SCMemoriesPickerV2ActionHandling defaultActionHanlderDelegateWithDefaultActionHanlderDelegate:] */

void FUN_107d55e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aff78;
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



/* Entry: 107d55e7c; end: 107d55fdb; -[SCMemoriesPickerV2ActionHandling initWithCoder:] */

undefined8 * FUN_107d55e7c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126fada8;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_107d55f68;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_107d55f68:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 107d55fdc; end: 107d55fff; -[SCMemoriesPickerV2ActionHandling copyWithZone:] */

undefined8 FUN_107d55fdc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d56000; end: 107d5605f; -[SCMemoriesPickerV2ActionHandling encodeWithCoder:] */

void FUN_107d56000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ebb218;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_107d56050;
    ppuVar1 = &PTR____CFConstantStringClassReference_110ebb238;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_107d56050:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d56060; end: 107d560d7; -[SCMemoriesPickerV2ActionHandling hash] */

void FUN_107d56060(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126fada8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d560d8; end: 107d5611b; -[SCMemoriesPickerV2ActionHandling internalInit] */

void FUN_107d560d8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fada8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5611c; end: 107d561d3; -[SCMemoriesPickerV2ActionHandling isEqual:] */

long FUN_107d5611c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d561ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d561b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d561b8;
        }
        goto LAB_107d561ac;
      }
    }
    lVar3 = 0;
  }
LAB_107d561b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d561d4; end: 107d56257; -[SCMemoriesPickerV2ActionHandling matchCustomActionHandler:defaultActionHanlderDelegate:] */

void FUN_107d561d4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_107d5623c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_107d5623c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_107d5623c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d56258; end: 107d56287; -[SCMemoriesPickerV2ActionHandling .cxx_destruct] */

void FUN_107d56258(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d56288; end: 107d562eb; +[SCMemoriesPickerV2PickerItem cameraRollAssetWithAsset:] */

void FUN_107d56288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3060;
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



/* Entry: 107d562ec; end: 107d56383; +[SCMemoriesPickerV2PickerItem galleryItemWithEntry:snap:] */

void FUN_107d562ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b3060;
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
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d56384; end: 107d563ef; +[SCMemoriesPickerV2PickerItem memoriesSnapWithSnapId:] */

void FUN_107d56384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3060;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d563f0; end: 107d56413; -[SCMemoriesPickerV2PickerItem copyWithZone:] */

undefined8 FUN_107d563f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d56414; end: 107d564a3; -[SCMemoriesPickerV2PickerItem hash] */

void FUN_107d56414(long param_1)

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
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126fadb0;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d564a4; end: 107d564e7; -[SCMemoriesPickerV2PickerItem internalInit] */

void FUN_107d564a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fadb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d564e8; end: 107d565cf; -[SCMemoriesPickerV2PickerItem isEqual:] */

long FUN_107d564e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d565a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d565b4;
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
              goto LAB_107d565b4;
            }
            goto LAB_107d565a8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d565b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d565d0; end: 107d56683; -[SCMemoriesPickerV2PickerItem matchCameraRollAsset:galleryItem:memoriesSnap:] */

void FUN_107d565d0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_107d56660;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_107d56660;
    }
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_107d56660;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_107d56660:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d56684; end: 107d566cb; -[SCMemoriesPickerV2PickerItem .cxx_destruct] */

void FUN_107d56684(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d566cc; end: 107d567af; -[SCMemoriesPickerCameraRollConfig initWithPageSize:validator:lazyPagingWhenFiltered:preselectedCollection:] */

undefined1 *
FUN_107d566cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fadb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d567b0; end: 107d567d3; -[SCMemoriesPickerCameraRollConfig copyWithZone:] */

undefined8 FUN_107d567b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d567d4; end: 107d567db; -[SCMemoriesPickerCameraRollConfig pageSize] */

undefined8 FUN_107d567d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d567dc; end: 107d567e3; -[SCMemoriesPickerCameraRollConfig validator] */

undefined8 FUN_107d567dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d567e4; end: 107d567eb; -[SCMemoriesPickerCameraRollConfig lazyPagingWhenFiltered] */

undefined1 FUN_107d567e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d567ec; end: 107d567f3; -[SCMemoriesPickerCameraRollConfig preselectedCollection] */

undefined8 FUN_107d567ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d567f4; end: 107d5682f; -[SCMemoriesPickerCameraRollConfig .cxx_destruct] */

void FUN_107d567f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d56830; end: 107d569c3; -[SCChatStickerFuzzySearch initWithUserSession:repositoryExperiments:stickerSearcher:creativeToolsABProvider:] */

undefined1 *
FUN_107d56830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fadc0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined ***)((long)puVar1 + 0x10) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c2550e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7a08;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d569c4; end: 107d569eb; -[SCChatStickerFuzzySearch searchResultsFinishedObservable] */

void FUN_107d569c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d569ec; end: 107d56a2b; -[SCChatStickerFuzzySearch searchChatStickersWithQuery:] */

void FUN_107d569ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c26b3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1535e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d56a2c; end: 107d56dc7; -[SCChatStickerFuzzySearch searchChatStickersWithFuzzyText:] */

void FUN_107d56a2c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf51e00();
  puVar3 = PTR_PTR_1126cbde8;
  func_0x00010c115860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar4 = puVar3;
  func_0x00010c0720c0();
  if ((int)puVar4 == 0) {
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if ((undefined *)0x1 < puVar4) {
      _objc_retain(puVar3);
      uVar6 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar3;
      _objc_release(uVar6);
      _objc_retain(puVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar2;
      _objc_release(uVar6);
      puVar4 = PTR_PTR_1126cbde8;
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0b5ac0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07fb40();
      _objc_release(uVar6);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x00010bed5340(param_1);
        goto LAB_107d56d6c;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_107d56ef4;
      puStack_90 = &UNK_110a0af68;
      ppuVar8 = &puStack_a8;
      _objc_copyWeak(auStack_80,auStack_48);
      _objc_retain(puVar3);
      puStack_88 = puVar3;
      func_0x00010c154340(uVar7);
      _objc_release(uVar6);
      puVar4 = puStack_88;
LAB_107d56d60:
      _objc_release(puVar4);
      _objc_destroyWeak(ppuVar8 + 5);
      goto LAB_107d56d6c;
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined ***)(param_1 + 8) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined ***)(param_1 + 0x10) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puVar4 = PTR_PTR_1126d7a10;
    _objc_alloc(PTR_PTR_1126d7a10);
    func_0x00010c042b60();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar4);
    func_0x00010bf04760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf377c0();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010c070040();
    if (iVar1 != 0) {
      uVar5 = *(ulong *)(param_1 + 0x10);
      func_0x00010c0720c0();
      if ((uVar5 & 1) == 0) {
        _objc_retain(puVar2);
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        *(undefined **)(param_1 + 0x10) = puVar2;
        _objc_release(uVar6);
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_107d56dc8;
        puStack_60 = &UNK_110a0af68;
        ppuVar8 = &puStack_78;
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(puVar2);
        puStack_58 = puVar2;
        func_0x00010c154340(uVar7);
        _objc_release(uVar6);
        puVar4 = puStack_58;
        goto LAB_107d56d60;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puVar4 = PTR_PTR_1126d7a10;
    _objc_alloc(PTR_PTR_1126d7a10);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x50));
    func_0x00010c042b60(puVar4);
    func_0x00010c0d9840(uVar6);
    param_1 = puVar4;
  }
  _objc_release(param_1);
LAB_107d56d6c:
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar3);
  return;
}



/* Entry: 107d56dc8; end: 107d56eb7;  */

void FUN_107d56dc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d56eb8;
  puStack_60 = &UNK_110848218;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_4;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107d56eb8; end: 107d56ef3;  */

void FUN_107d56eb8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d56ef4; end: 107d5700b;  */

void FUN_107d56ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107d5700c;
  puStack_70 = &UNK_11085ae98;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_2);
  uStack_60 = param_2;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_4;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107d5700c; end: 107d57043;  */

void FUN_107d5700c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d57044; end: 107d5705b; -[SCChatStickerFuzzySearch resetChatSearchText] */

void FUN_107d57044(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)(param_1 + 8) = &PTR____CFConstantStringClassReference_110daafd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d5705c; end: 107d571bf; -[SCChatStickerFuzzySearch _updateChatSearchResultsWithStickers:bitmojiStickerSearchResults:customojiSearchResults:searchTerm:] */

void FUN_107d5705c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0 || param_4 != 0) {
    if (param_4 == 0) {
      _objc_retain(param_3);
      lVar3 = param_3;
    }
    else {
      lVar3 = param_4;
      func_0x00010bf09f80(param_4,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar1 = lVar3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_5;
  func_0x00010bf51e00(param_5);
  func_0x00010bf09f80(uVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR_PTR_1126d7a10;
  _objc_alloc(PTR_PTR_1126d7a10);
  lVar3 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0(lVar3);
  func_0x00010c042b60(puVar2,param_2,param_6,lVar3 != 0);
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bf377c0(*(undefined8 *)(param_1 + 0x58),param_2,param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d571c0; end: 107d57243; -[SCChatStickerFuzzySearch searchDynamicDebounceForSearchText:] */

double FUN_107d571c0(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(param_4);
  func_0x00010bf35f40(uVar2);
  uVar1 = param_4;
  func_0x00010c08fa60();
  _objc_release(param_4);
  dVar3 = (double)uVar1 * 0.01 + 0.1;
  dVar4 = 1.0;
  if (dVar3 <= 1.0) {
    dVar4 = dVar3;
  }
  dVar3 = dVar4 * (double)param_1;
  if (param_1 <= 0.0) {
    dVar3 = dVar4;
  }
  return dVar3;
}



/* Entry: 107d57244; end: 107d5724b; -[SCChatStickerFuzzySearch chatSearchResults] */

undefined8 FUN_107d57244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d5724c; end: 107d57253; -[SCChatStickerFuzzySearch announcer] */

undefined8 FUN_107d5724c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d57254; end: 107d572ef; -[SCChatStickerFuzzySearch .cxx_destruct] */

void FUN_107d57254(long param_1)

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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d572f0; end: 107d57377; -[SCLocalStickerSearchFinishedInformation initWithSearchTerm:notifySearchResult:] */

undefined1 *
FUN_107d572f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fadc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d57378; end: 107d5739b; -[SCLocalStickerSearchFinishedInformation copyWithZone:] */

undefined8 FUN_107d57378(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d5739c; end: 107d57407; -[SCLocalStickerSearchFinishedInformation hash] */

undefined8 * FUN_107d5739c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d5748c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107d5748c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107d5748c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107d5748c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107d57408; end: 107d574a7; -[SCLocalStickerSearchFinishedInformation isEqual:] */

long FUN_107d57408(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d5748c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107d5748c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107d5748c;
    }
  }
  lVar3 = 1;
LAB_107d5748c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d574a8; end: 107d574af; -[SCLocalStickerSearchFinishedInformation searchTerm] */

undefined8 FUN_107d574a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d574b0; end: 107d574b7; -[SCLocalStickerSearchFinishedInformation notifySearchResult] */

undefined1 FUN_107d574b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d574b8; end: 107d574c3; -[SCLocalStickerSearchFinishedInformation .cxx_destruct] */

void FUN_107d574b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d574c4; end: 107d57683; -[SCDiscoverFeedBaseDeepLinkProcessor initWithNavigationDelegate:containerViewController:discoverFeedDeeplinkHandler:featureStartupEventBus:addFriendSheetScopeExposer:addFriendSheetScopeServices:circumstanceEngine:storiesConfigProvider:adPrefetchServices:] */

undefined1 *
FUN_107d574c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fadd0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d57684; end: 107d5779f; -[SCDiscoverFeedBaseDeepLinkProcessor handleOpenURL:additionalInfo:] */

undefined8 FUN_107d57684(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becfa20(param_1,param_2,lVar2,param_4);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126af680;
  func_0x00010c22ba80(PTR_PTR_1126af680);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0();
  _objc_release(puVar3);
  lVar2 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf32ee0();
  if (lVar4 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x0001005929c0();
    if (iVar1 == 0) {
      uVar5 = 0;
      goto LAB_107d57768;
    }
  }
  func_0x00010be7aea0(param_1,param_2,param_3,param_4,lVar2,lVar4 == 0);
  uVar5 = 1;
LAB_107d57768:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107d577a0; end: 107d579cf; -[SCDiscoverFeedBaseDeepLinkProcessor _triggerAdPrefetchForFeature:additionalInfo:] */

void FUN_107d577a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if ((lVar3 == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_107d579ac;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x000108f4b6ec();
  if (iVar2 == 0) goto LAB_107d579ac;
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea1738);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea1638);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf32ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110ecc3d8);
  if (((lVar3 == 0) ||
      (lVar3 = param_3,
      func_0x00010bf32ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110f14978),
      lVar3 == 0)) ||
     (lVar3 = param_3,
     func_0x00010bf32ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110f14938),
     lVar3 == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf4c220(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107460();
LAB_107d5798c:
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf32ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110db3b58);
    if (lVar3 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf1f440(uVar6,param_2,&PTR____CFConstantStringClassReference_110ebb258,0,0);
      ppuVar1 = &PTR____CFConstantStringClassReference_110dfbff8;
      if ((int)uVar6 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110db3b58;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(ppuVar1);
      func_0x00010bf4c220(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c107460();
      _objc_release(ppuVar1);
      _objc_release(uVar6);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c293ae0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24ffa0();
      goto LAB_107d5798c;
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_107d579ac:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d579d0; end: 107d57b7f; -[SCDiscoverFeedBaseDeepLinkProcessor _presentDeeplinkUrl:additionalInfo:feature:featureIsSpotlight:] */

void FUN_107d579d0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
                  ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(uVar2);
  }
  else {
    _objc_retain(uVar2);
  }
  lVar5 = param_5;
  func_0x00010bf32ee0();
  if ((((lVar5 == 0) || (lVar5 = param_5, func_0x00010bf32ee0(), (param_6 & 1) != 0)) ||
      (lVar5 == 0)) ||
     (((lVar5 = param_5, func_0x00010bf32ee0(), lVar5 == 0 ||
       (lVar5 = param_5, func_0x00010bf32ee0(), lVar5 == 0)) ||
      (lVar5 = param_5, func_0x00010bf32ee0(), uVar4 = uVar2, lVar5 == 0)))) {
    uVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(uVar4);
    _objc_release(uVar2);
  }
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c10be20(*(undefined8 *)(param_1 + 0x18));
  func_0x00010be0caa0(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107d57b80; end: 107d57d93; -[SCDiscoverFeedBaseDeepLinkProcessor _exposeAddFriendSheetScopeIfNeeded:additionalInfo:] */

void FUN_107d57b80(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110ebb298);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    puVar1 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c11db20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = param_3;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
    }
    puVar4 = puVar1;
    func_0x00010c11db20(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc3418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bdc1b20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar6;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (puVar4 != (undefined *)0x0 && lVar5 != 0) {
      lVar6 = *(long *)(param_1 + 0x28);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf23ba0(uVar7,param_2,lVar5,param_1,puVar4,0,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,uVar7);
        _objc_release(uVar7);
      }
    }
    _objc_release(lVar5);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d57d94; end: 107d57ddb; -[SCDiscoverFeedBaseDeepLinkProcessor endAddFriendSheetScope] */

void FUN_107d57d94(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107d57ddc; end: 107d57e57; -[SCDiscoverFeedBaseDeepLinkProcessor .cxx_destruct] */

void FUN_107d57ddc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107d57e58; end: 107d57ecb; -[SCDiscoverFeedDeepLinkProcessorServices initWithDiscoverFeedDeepLinkProcessor:] */

undefined1 * FUN_107d57e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fadd8;
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



/* Entry: 107d57ecc; end: 107d57ed3; -[SCDiscoverFeedDeepLinkProcessorServices discoverFeedDeepLinkProcessor] */

undefined8 FUN_107d57ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d57ed4; end: 107d57edf; -[SCDiscoverFeedDeepLinkProcessorServices .cxx_destruct] */

void FUN_107d57ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d57ee0; end: 107d5812f; -[SCDiscoverFeedDeepLinkProcessorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d57ee0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126d7a18;
  _objc_alloc();
  lVar19 = (long)_DAT_11276e658;
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar5 = lVar19;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11276e65c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf817c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11276e660;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfa2bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + _DAT_11276e664);
  lVar12 = param_1 + _DAT_11276e668;
  _objc_loadWeakRetained(lVar12);
  lVar13 = param_1 + _DAT_11276e66c;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11276e670;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11276e674;
  _objc_loadWeakRetained();
  func_0x00010c02e660(puVar1,param_2,lVar4,lVar7,lVar9,lVar11,uVar18,lVar12,lVar14,lVar16,param_1);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar17 = PTR_PTR_1126d7a20;
  _objc_alloc(PTR_PTR_1126d7a20);
  func_0x00010c00cde0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 107d58130; end: 107d5814f; -[SCDiscoverFeedDeepLinkProcessorServiceProvider storiesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d58130(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276e670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d58150; end: 107d58163; -[SCDiscoverFeedDeepLinkProcessorServiceProvider setStoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d58150(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276e670,param_3);
  return;
}



/* Entry: 107d58164; end: 107d581f3; -[SCDiscoverFeedDeepLinkProcessorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d58164(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276e664,0);
  _objc_destroyWeak(param_1 + _DAT_11276e668);
  _objc_destroyWeak(param_1 + _DAT_11276e674);
  _objc_destroyWeak(param_1 + _DAT_11276e670);
  _objc_destroyWeak(param_1 + _DAT_11276e66c);
  _objc_destroyWeak(param_1 + _DAT_11276e660);
  _objc_destroyWeak(param_1 + _DAT_11276e65c);
  _objc_destroyWeak(param_1 + _DAT_11276e658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276e678);
  return;
}



/* Entry: 107d581f4; end: 107d582ef; -[SCAddFriendSheetScope initWithUIContainer:addFriendSheetDelegate:inviteID:isLens:deepLinkHash:] */

undefined1 *
FUN_107d581f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fade0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d582f0; end: 107d582f7; -[SCAddFriendSheetScope uiContainer] */

undefined8 FUN_107d582f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d582f8; end: 107d5830f; -[SCAddFriendSheetScope addFriendSheetDelegate] */

void FUN_107d582f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d58310; end: 107d58317; -[SCAddFriendSheetScope inviteID] */

undefined8 FUN_107d58310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d58318; end: 107d5831f; -[SCAddFriendSheetScope isLens] */

undefined1 FUN_107d58318(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d58320; end: 107d58327; -[SCAddFriendSheetScope deepLinkHash] */

undefined8 FUN_107d58320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d58328; end: 107d5836b; -[SCAddFriendSheetScope .cxx_destruct] */

void FUN_107d58328(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d5836c; end: 107d583df; -[SCDiscoverFeedDeeplinkHandlingServices initWithDiscoverFeedDeeplinkHandler:] */

undefined1 * FUN_107d5836c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fade8;
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



/* Entry: 107d583e0; end: 107d583e7; -[SCDiscoverFeedDeeplinkHandlingServices discoverFeedDeeplinkHandler] */

undefined8 FUN_107d583e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d583e8; end: 107d583f3; -[SCDiscoverFeedDeeplinkHandlingServices .cxx_destruct] */

void FUN_107d583e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d583f4; end: 107d58583; -[SCAdOperaCollectionItem initWithAttachmentType:iconImageKey:webViewUrl:deepLinkUri:deepLinkFallbackType:deepLinkFallBackStoreVCParams:deepLinkFallBackUrl:appInstallStoreVCParams:showcaseModelUpdate:] */

undefined1 *
FUN_107d583f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fadf0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d58584; end: 107d589f7; -[SCAdOperaCollectionItem initWithProperties:] */

undefined8 FUN_107d58584(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar1 = PTR_PTR_1126bfe00;
  _objc_retain(param_3);
  func_0x00010bf3fe60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bfe00;
  func_0x00010bef2400(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126bfe00;
  func_0x00010bef23a0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126bfe00;
  func_0x00010bef2360(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar4);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bfe00;
  func_0x00010bef2380(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  _objc_release(uVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar1);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126bfe00;
  func_0x00010bef2340(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf51e00();
  _objc_release(uVar5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar1);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126bfe00;
  func_0x00010bef2320(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf51e00();
  _objc_release(uVar6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar1);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  puVar1 = PTR_PTR_1126bfe00;
  func_0x00010bef23c0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf51e00();
  _objc_release(uVar7);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar1);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  puVar1 = PTR_PTR_1126bfe00;
  func_0x00010bef23e0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar9 = uVar8;
  func_0x00010bf51e00();
  _objc_release(uVar8);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca670;
  _objc_opt_class(PTR_PTR_1126ca670);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar1);
  uVar8 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar9);
  func_0x00010bff4ca0(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 107d589f8; end: 107d58cc7; -[SCAdOperaCollectionItem isEqual:] */

undefined8 FUN_107d589f8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126ca338;
  _objc_opt_class();
  if (puVar1 != puVar5) {
    uVar6 = 0;
    goto LAB_107d58ca0;
  }
  if (param_1 == param_3) {
    uVar6 = 1;
    goto LAB_107d58ca0;
  }
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 8);
  puVar1 = param_3;
  func_0x00010bf0d600();
  if (puVar5 == puVar1) {
    puVar5 = *(undefined **)(param_1 + 0x18);
    puVar1 = param_3;
    func_0x00010c2a4480();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar1);
    if (puVar5 == puVar1) {
      _objc_release(puVar1);
      _objc_release(puVar5);
LAB_107d58af0:
      puVar7 = *(undefined **)(param_1 + 0x20);
      puVar5 = param_3;
      func_0x00010bf68320();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar7);
      _objc_retain(puVar5);
      if (puVar7 == puVar5) {
        _objc_release(puVar5);
        _objc_release(puVar7);
LAB_107d58b5c:
        puVar8 = *(undefined **)(param_1 + 0x28);
        puVar7 = param_3;
        func_0x00010bf67dc0();
        if (puVar8 != puVar7) goto LAB_107d58c44;
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        puVar7 = param_3;
        func_0x00010bf67d60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar6,puVar7);
        if ((int)uVar6 == 0) goto LAB_107d58c4c;
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        puVar8 = param_3;
        func_0x00010bfe5700(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar6,puVar8);
        if ((int)uVar6 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x30);
          puVar2 = param_3;
          func_0x00010bf67cc0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bd86de8(uVar6,puVar2);
          if ((int)uVar6 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(param_1 + 0x40);
            puVar3 = param_3;
            func_0x00010bf05700(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bd86de8(uVar6,puVar3);
            if ((int)uVar6 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined8 *)(param_1 + 0x48);
              puVar4 = param_3;
              func_0x00010c23b060(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bd86de8(uVar6,puVar4);
              _objc_release(puVar4);
            }
            _objc_release(puVar3);
          }
          _objc_release(puVar2);
        }
        _objc_release(puVar8);
      }
      else {
        if (puVar5 != (undefined *)0x0) {
          puVar8 = puVar7;
          func_0x00010c071ae0();
          _objc_release(puVar5);
          _objc_release(puVar7);
          if ((int)puVar8 == 0) goto LAB_107d58c44;
          goto LAB_107d58b5c;
        }
LAB_107d58c4c:
        uVar6 = 0;
      }
      _objc_release(puVar7);
LAB_107d58c88:
      _objc_release(puVar5);
    }
    else {
      if (puVar1 == (undefined *)0x0) {
LAB_107d58c44:
        uVar6 = 0;
        goto LAB_107d58c88;
      }
      puVar7 = puVar5;
      func_0x00010c071ae0();
      _objc_release(puVar1);
      _objc_release(puVar5);
      if ((int)puVar7 != 0) goto LAB_107d58af0;
      uVar6 = 0;
    }
    _objc_release(puVar1);
  }
  else {
    uVar6 = 0;
  }
  _objc_release(param_3);
LAB_107d58ca0:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107d58cc8; end: 107d58ccf; -[SCAdOperaCollectionItem attachmentType] */

undefined8 FUN_107d58cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d58cd0; end: 107d58cd7; -[SCAdOperaCollectionItem iconImageKey] */

undefined8 FUN_107d58cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d58cd8; end: 107d58cdf; -[SCAdOperaCollectionItem webViewUrl] */

undefined8 FUN_107d58cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d58ce0; end: 107d58ce7; -[SCAdOperaCollectionItem deepLinkUri] */

undefined8 FUN_107d58ce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d58ce8; end: 107d58cef; -[SCAdOperaCollectionItem deepLinkFallbackType] */

undefined8 FUN_107d58ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d58cf0; end: 107d58cf7; -[SCAdOperaCollectionItem deepLinkFallBackStoreVCParams] */

undefined8 FUN_107d58cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d58cf8; end: 107d58cff; -[SCAdOperaCollectionItem deepLinkFallBackUrl] */

undefined8 FUN_107d58cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d58d00; end: 107d58d07; -[SCAdOperaCollectionItem appInstallStoreVCParams] */

undefined8 FUN_107d58d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d58d08; end: 107d58d0f; -[SCAdOperaCollectionItem showcaseModelUpdate] */

undefined8 FUN_107d58d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d58d10; end: 107d58d7b; -[SCAdOperaCollectionItem .cxx_destruct] */

void FUN_107d58d10(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d58d7c; end: 107d58e33; -[SCCameraLensItem initWithProperties:] */

undefined1 * FUN_107d58d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fadf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d58e34; end: 107d58fab; -[SCCameraLensItem isEqual:] */

undefined * FUN_107d58e34(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d7a28;
  _objc_opt_class();
  if (puVar3 != puVar1) {
    puVar3 = (undefined *)0x0;
    goto LAB_107d58f8c;
  }
  if (param_1 == param_3) {
    puVar3 = (undefined *)0x1;
    goto LAB_107d58f8c;
  }
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 8);
  puVar1 = param_3;
  func_0x00010c14f6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  if (puVar2 == puVar1) {
    _objc_release(puVar1);
    _objc_release(puVar2);
LAB_107d58f08:
    puVar4 = *(undefined **)(param_1 + 0x10);
    puVar2 = param_3;
    func_0x00010c14f6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar2);
    if (puVar4 == puVar2) {
      puVar3 = (undefined *)0x1;
    }
    else if (puVar2 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar4;
      func_0x00010c071ae0(puVar4,param_2,puVar2);
    }
    _objc_release(puVar2);
    _objc_release(puVar4);
LAB_107d58f74:
    _objc_release(puVar2);
  }
  else {
    if (puVar1 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
      goto LAB_107d58f74;
    }
    puVar3 = puVar2;
    func_0x00010c071ae0(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    if ((int)puVar3 != 0) goto LAB_107d58f08;
    puVar3 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
LAB_107d58f8c:
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 107d58fac; end: 107d58fb3; -[SCCameraLensItem scancodeId] */

undefined8 FUN_107d58fac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d58fb4; end: 107d58fbb; -[SCCameraLensItem scancodeVersion] */

undefined8 FUN_107d58fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d58fbc; end: 107d58feb; -[SCCameraLensItem .cxx_destruct] */

void FUN_107d58fbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d58fec; end: 107d59037; +[SCAdComposerDpaLayer layerWithPage:] */

void FUN_107d58fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca6a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d59038; end: 107d59237; -[SCAdComposerDpaLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d59038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fae00;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010bef2480(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276e6c0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276e6c0) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010bef2460(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276e6c4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010bef2a80(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197920(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010bef24c0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_11276e6c8) = (char)uVar5;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010bef24a0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276e6cc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276e6cc) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d59238; end: 107d59497; -[SCAdComposerDpaLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107d59238(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_60;
  undefined *puStack_58;
  
  iVar3 = (int)&lStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fae00;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_isEqual__1125fa0c8,param_3);
  puVar4 = PTR_PTR_1126ca6a0;
  if (iVar3 == 0) {
    uVar7 = 0;
    goto LAB_107d59470;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar4);
  uVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar6 = *(ulong *)(param_1 + _DAT_11276e6c0);
  uVar5 = uVar1;
  func_0x00010bf976e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  if (uVar6 == uVar5) {
    _objc_release(uVar5);
    _objc_release(uVar6);
LAB_107d59344:
    uVar8 = *(ulong *)(param_1 + _DAT_11276e6c4);
    uVar6 = uVar1;
    func_0x00010bf97560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    _objc_retain(uVar6);
    if (uVar8 == uVar6) {
      _objc_release(uVar6);
      _objc_release(uVar8);
LAB_107d593b8:
      bVar2 = *(byte *)(param_1 + _DAT_11276e6c8);
      uVar7 = uVar1;
      func_0x00010bf91520();
      if ((uint)bVar2 != (uint)uVar7) goto LAB_107d59424;
      uVar9 = *(ulong *)(param_1 + _DAT_11276e6cc);
      uVar8 = uVar1;
      func_0x00010bf200a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar9);
      _objc_retain(uVar8);
      if (uVar9 == uVar8) {
        uVar7 = 1;
      }
      else if (uVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar9;
        func_0x00010c071ae0(uVar9);
      }
      _objc_release(uVar8);
      _objc_release(uVar9);
    }
    else {
      if (uVar6 != 0) {
        uVar7 = uVar8;
        func_0x00010c071ae0();
        _objc_release(uVar6);
        _objc_release(uVar8);
        if ((int)uVar7 == 0) goto LAB_107d59424;
        goto LAB_107d593b8;
      }
      uVar7 = 0;
    }
    _objc_release(uVar8);
LAB_107d59458:
    _objc_release(uVar6);
  }
  else {
    if (uVar5 == 0) {
LAB_107d59424:
      uVar7 = 0;
      goto LAB_107d59458;
    }
    uVar7 = uVar6;
    func_0x00010c071ae0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    if ((int)uVar7 != 0) goto LAB_107d59344;
    uVar7 = 0;
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
LAB_107d59470:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 107d59498; end: 107d5949f; -[SCAdComposerDpaLayer layerContentType] */

undefined8 FUN_107d59498(void)

{
  return 1;
}



/* Entry: 107d594a0; end: 107d594af; -[SCAdComposerDpaLayer entryPointViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d594a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6c0);
}



/* Entry: 107d594b0; end: 107d594ef; -[SCAdComposerDpaLayer setEntryPointViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d594b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276e6c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d594f0; end: 107d594ff; -[SCAdComposerDpaLayer entryPointContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d594f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6c4);
}



/* Entry: 107d59500; end: 107d5953f; -[SCAdComposerDpaLayer setEntryPointContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d59500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276e6c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d59540; end: 107d5954f; -[SCAdComposerDpaLayer enableRedBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d59540(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276e6c8);
}



/* Entry: 107d59550; end: 107d5955f; -[SCAdComposerDpaLayer bottomContentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d59550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e6cc);
}


