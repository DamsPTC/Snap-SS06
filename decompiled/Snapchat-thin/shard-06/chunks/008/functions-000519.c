/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104df43b8; end: 104df443b; -[SCCommerceProductPageAction .cxx_destruct] */

void FUN_104df43b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 104df443c; end: 104df44df; -[SCCommerceProductWidgetViewModel initWithTitleText:widgetContent:] */

undefined1 *
FUN_104df443c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4400;
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



/* Entry: 104df44e0; end: 104df4503; -[SCCommerceProductWidgetViewModel copyWithZone:] */

undefined8 FUN_104df44e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df4504; end: 104df450b; -[SCCommerceProductWidgetViewModel titleText] */

undefined8 FUN_104df4504(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104df450c; end: 104df4513; -[SCCommerceProductWidgetViewModel widgetContent] */

undefined8 FUN_104df450c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df4514; end: 104df4543; -[SCCommerceProductWidgetViewModel .cxx_destruct] */

void FUN_104df4514(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104df4544; end: 104df458f; +[SCCommerceProductWidgetContentViewModel fitFinder] */

void FUN_104df4544(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b08f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df4590; end: 104df45ff; +[SCCommerceProductWidgetContentViewModel productListWithHasMoreProducts:viewModels:] */

void FUN_104df4590(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df4600; end: 104df466b; +[SCCommerceProductWidgetContentViewModel storeListWithViewModel:] */

void FUN_104df4600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df466c; end: 104df46d7; +[SCCommerceProductWidgetContentViewModel variantSelectorsWithViewModels:] */

void FUN_104df466c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08f8;
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



/* Entry: 104df46d8; end: 104df46fb; -[SCCommerceProductWidgetContentViewModel copyWithZone:] */

undefined8 FUN_104df46d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df46fc; end: 104df473f; -[SCCommerceProductWidgetContentViewModel internalInit] */

void FUN_104df46fc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e4408;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104df4740; end: 104df4837; -[SCCommerceProductWidgetContentViewModel matchProductList:storeList:variantSelectors:fitFinder:] */

void FUN_104df4740(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_104df4808;
    }
    if ((lVar2 != 1) || (param_4 == 0)) goto LAB_104df4808;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  else {
    if (lVar2 != 2) {
      if ((lVar2 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))(param_6);
      }
      goto LAB_104df4808;
    }
    if (param_5 == 0) goto LAB_104df4808;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_104df4808:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104df4838; end: 104df4873; -[SCCommerceProductWidgetContentViewModel .cxx_destruct] */

void FUN_104df4838(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 104df4874; end: 104df48ff; -[SCCommerceProductGalleryViewModel initWithImageUrls:contentMode:tryOnButtonVisible:] */

undefined1 *
FUN_104df4874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4410;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104df4900; end: 104df4923; -[SCCommerceProductGalleryViewModel copyWithZone:] */

undefined8 FUN_104df4900(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df4924; end: 104df499f; -[SCCommerceProductGalleryViewModel hash] */

undefined8 * FUN_104df4924(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104df4a34;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)((long)puVar2 + 8) != param_3[8])))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_104df4a34;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104df4a34;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_104df4a34:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 104df49a0; end: 104df4a4f; -[SCCommerceProductGalleryViewModel isEqual:] */

long FUN_104df49a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104df4a34;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_104df4a34;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104df4a34;
    }
  }
  lVar3 = 1;
LAB_104df4a34:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104df4a50; end: 104df4a57; -[SCCommerceProductGalleryViewModel imageUrls] */

undefined8 FUN_104df4a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df4a58; end: 104df4a5f; -[SCCommerceProductGalleryViewModel contentMode] */

undefined8 FUN_104df4a58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104df4a60; end: 104df4a67; -[SCCommerceProductGalleryViewModel tryOnButtonVisible] */

undefined1 FUN_104df4a60(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104df4a68; end: 104df4a73; -[SCCommerceProductGalleryViewModel .cxx_destruct] */

void FUN_104df4a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104df4a74; end: 104df4baf; -[SCCommerceProductTitleViewModel initWithTitle:price:strikethroughPrice:isSoldOutVisible:brandName:merchantName:favoriteState:] */

undefined1 *
FUN_104df4a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  puStack_58 = PTR_PTR_1126e4418;
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
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104df4bb0; end: 104df4bd3; -[SCCommerceProductTitleViewModel copyWithZone:] */

undefined8 FUN_104df4bb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df4bd4; end: 104df4c7b; -[SCCommerceProductTitleViewModel hash] */

undefined8 * FUN_104df4bd4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104df4d64:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104df4d70;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_104df4d70;
              }
              goto LAB_104df4d64;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104df4d70:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104df4c7c; end: 104df4d8b; -[SCCommerceProductTitleViewModel isEqual:] */

long FUN_104df4c7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104df4d64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104df4d70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_104df4d70;
              }
              goto LAB_104df4d64;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104df4d70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104df4d8c; end: 104df4d93; -[SCCommerceProductTitleViewModel title] */

undefined8 FUN_104df4d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df4d94; end: 104df4d9b; -[SCCommerceProductTitleViewModel price] */

undefined8 FUN_104df4d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104df4d9c; end: 104df4da3; -[SCCommerceProductTitleViewModel strikethroughPrice] */

undefined8 FUN_104df4d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104df4da4; end: 104df4dab; -[SCCommerceProductTitleViewModel isSoldOutVisible] */

undefined1 FUN_104df4da4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104df4dac; end: 104df4db3; -[SCCommerceProductTitleViewModel brandName] */

undefined8 FUN_104df4dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104df4db4; end: 104df4dbb; -[SCCommerceProductTitleViewModel merchantName] */

undefined8 FUN_104df4db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104df4dbc; end: 104df4dc3; -[SCCommerceProductTitleViewModel favoriteState] */

undefined8 FUN_104df4dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104df4dc4; end: 104df4e17; -[SCCommerceProductTitleViewModel .cxx_destruct] */

void FUN_104df4dc4(long param_1)

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



/* Entry: 104df4e18; end: 104df4ebb; -[SCCommerceProductDescriptionViewModel initWithProductDetailsTitle:productDescription:] */

undefined1 *
FUN_104df4e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4420;
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



/* Entry: 104df4ebc; end: 104df4edf; -[SCCommerceProductDescriptionViewModel copyWithZone:] */

undefined8 FUN_104df4ebc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df4ee0; end: 104df4f53; -[SCCommerceProductDescriptionViewModel hash] */

undefined8 * FUN_104df4ee0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_104df4fd4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104df4fe0;
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
          goto LAB_104df4fe0;
        }
        goto LAB_104df4fd4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104df4fe0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104df4f54; end: 104df4ffb; -[SCCommerceProductDescriptionViewModel isEqual:] */

long FUN_104df4f54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104df4fd4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104df4fe0;
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
          goto LAB_104df4fe0;
        }
        goto LAB_104df4fd4;
      }
    }
    lVar3 = 0;
  }
LAB_104df4fe0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104df4ffc; end: 104df5003; -[SCCommerceProductDescriptionViewModel productDetailsTitle] */

undefined8 FUN_104df4ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104df5004; end: 104df500b; -[SCCommerceProductDescriptionViewModel productDescription] */

undefined8 FUN_104df5004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df500c; end: 104df503b; -[SCCommerceProductDescriptionViewModel .cxx_destruct] */

void FUN_104df500c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104df503c; end: 104df5293; -[SCCommerceProductPageViewModel initWithHeaderText:showBackArrow:showCartButton:cartItemCount:galleryModel:titleModel:descriptionModel:buttonModel:widgetModels:actionButtonText:loadingErrorText:pickerViewOptions:availableModules:] */

undefined8 *
FUN_104df503c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e4428;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    puVar1[3] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
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
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104df5294; end: 104df52b7; -[SCCommerceProductPageViewModel copyWithZone:] */

undefined8 FUN_104df5294(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df52b8; end: 104df52bf; -[SCCommerceProductPageViewModel headerText] */

undefined8 FUN_104df52b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df52c0; end: 104df52c7; -[SCCommerceProductPageViewModel showBackArrow] */

undefined1 FUN_104df52c0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104df52c8; end: 104df52cf; -[SCCommerceProductPageViewModel showCartButton] */

undefined1 FUN_104df52c8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104df52d0; end: 104df52d7; -[SCCommerceProductPageViewModel cartItemCount] */

undefined8 FUN_104df52d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104df52d8; end: 104df52df; -[SCCommerceProductPageViewModel galleryModel] */

undefined8 FUN_104df52d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104df52e0; end: 104df52e7; -[SCCommerceProductPageViewModel titleModel] */

undefined8 FUN_104df52e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104df52e8; end: 104df52ef; -[SCCommerceProductPageViewModel descriptionModel] */

undefined8 FUN_104df52e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104df52f0; end: 104df52f7; -[SCCommerceProductPageViewModel buttonModel] */

undefined8 FUN_104df52f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104df52f8; end: 104df52ff; -[SCCommerceProductPageViewModel widgetModels] */

undefined8 FUN_104df52f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104df5300; end: 104df5307; -[SCCommerceProductPageViewModel actionButtonText] */

undefined8 FUN_104df5300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104df5308; end: 104df530f; -[SCCommerceProductPageViewModel loadingErrorText] */

undefined8 FUN_104df5308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104df5310; end: 104df5317; -[SCCommerceProductPageViewModel pickerViewOptions] */

undefined8 FUN_104df5310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104df5318; end: 104df531f; -[SCCommerceProductPageViewModel availableModules] */

undefined8 FUN_104df5318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104df5320; end: 104df53af; -[SCCommerceProductPageViewModel .cxx_destruct] */

void FUN_104df5320(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104df53b0; end: 104df547b; -[SCCommerceShopOnStoreViewModel initWithStoreId:storeName:storeIconUrl:] */

undefined1 *
FUN_104df53b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4430;
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



/* Entry: 104df547c; end: 104df549f; -[SCCommerceShopOnStoreViewModel copyWithZone:] */

undefined8 FUN_104df547c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df54a0; end: 104df551f; -[SCCommerceShopOnStoreViewModel hash] */

undefined8 * FUN_104df54a0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104df55b8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104df55c4;
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
            goto LAB_104df55c4;
          }
          goto LAB_104df55b8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104df55c4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104df5520; end: 104df55df; -[SCCommerceShopOnStoreViewModel isEqual:] */

long FUN_104df5520(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104df55b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104df55c4;
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
            goto LAB_104df55c4;
          }
          goto LAB_104df55b8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104df55c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104df55e0; end: 104df55e7; -[SCCommerceShopOnStoreViewModel storeId] */

undefined8 FUN_104df55e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104df55e8; end: 104df55ef; -[SCCommerceShopOnStoreViewModel storeName] */

undefined8 FUN_104df55e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df55f0; end: 104df55f7; -[SCCommerceShopOnStoreViewModel storeIconUrl] */

undefined8 FUN_104df55f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104df55f8; end: 104df5633; -[SCCommerceShopOnStoreViewModel .cxx_destruct] */

void FUN_104df55f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104df5634; end: 104df567f; +[SCCommerceVariantSelectorViewModel errorViewModel] */

void FUN_104df5634(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0910;
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



/* Entry: 104df5680; end: 104df56cb; +[SCCommerceVariantSelectorViewModel loadingViewModel] */

void FUN_104df5680(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0910;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df56cc; end: 104df575b; +[SCCommerceVariantSelectorViewModel viewModelWithVariantDimensionName:variantDimensionValue:] */

void FUN_104df56cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0910;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df575c; end: 104df577f; -[SCCommerceVariantSelectorViewModel copyWithZone:] */

undefined8 FUN_104df575c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df5780; end: 104df57f7; -[SCCommerceVariantSelectorViewModel hash] */

void FUN_104df5780(long param_1)

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
  puStack_68 = PTR_PTR_1126e4438;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104df57f8; end: 104df583b; -[SCCommerceVariantSelectorViewModel internalInit] */

void FUN_104df57f8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e4438;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104df583c; end: 104df58f3; -[SCCommerceVariantSelectorViewModel isEqual:] */

long FUN_104df583c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104df58cc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104df58d8;
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
          goto LAB_104df58d8;
        }
        goto LAB_104df58cc;
      }
    }
    lVar3 = 0;
  }
LAB_104df58d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104df58f4; end: 104df599f; -[SCCommerceVariantSelectorViewModel matchViewModel:loadingViewModel:errorViewModel:] */

void FUN_104df58f4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_104df597c;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 != 1) {
      if ((lVar1 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_104df597c;
    }
    if (param_4 == 0) goto LAB_104df597c;
    pcVar2 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  (*pcVar2)(lVar1);
LAB_104df597c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104df59a0; end: 104df59cf; -[SCCommerceVariantSelectorViewModel .cxx_destruct] */

void FUN_104df59a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104df59d0; end: 104df5a5b; -[SCCommerceProductButtonViewModel initWithShopButtonTitle:isLoading:isEnabled:] */

undefined1 *
FUN_104df59d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4440;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104df5a5c; end: 104df5a7f; -[SCCommerceProductButtonViewModel copyWithZone:] */

undefined8 FUN_104df5a5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df5a80; end: 104df5af3; -[SCCommerceProductButtonViewModel hash] */

undefined8 * FUN_104df5a80(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104df5b88;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_104df5b88;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104df5b88;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_104df5b88:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 104df5af4; end: 104df5ba3; -[SCCommerceProductButtonViewModel isEqual:] */

long FUN_104df5af4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104df5b88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_104df5b88;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104df5b88;
    }
  }
  lVar3 = 1;
LAB_104df5b88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104df5ba4; end: 104df5bab; -[SCCommerceProductButtonViewModel shopButtonTitle] */

undefined8 FUN_104df5ba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df5bac; end: 104df5bb3; -[SCCommerceProductButtonViewModel isLoading] */

undefined1 FUN_104df5bac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104df5bb4; end: 104df5bbb; -[SCCommerceProductButtonViewModel isEnabled] */

undefined1 FUN_104df5bb4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104df5bbc; end: 104df5bc7; -[SCCommerceProductButtonViewModel .cxx_destruct] */

void FUN_104df5bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104df5bc8; end: 104df5ce3; -[SCCommerceFitFinderCellScope initWithUIContainer:productId:queryContext:eventLogger:delegate:] */

undefined1 *
FUN_104df5bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e4448;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104df5ce4; end: 104df5ceb; -[SCCommerceFitFinderCellScope uiContainer] */

undefined8 FUN_104df5ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104df5cec; end: 104df5cf3; -[SCCommerceFitFinderCellScope productId] */

undefined8 FUN_104df5cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df5cf4; end: 104df5cfb; -[SCCommerceFitFinderCellScope queryContext] */

undefined8 FUN_104df5cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104df5cfc; end: 104df5d03; -[SCCommerceFitFinderCellScope eventLogger] */

undefined8 FUN_104df5cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104df5d04; end: 104df5d1b; -[SCCommerceFitFinderCellScope delegate] */

void FUN_104df5d04(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104df5d1c; end: 104df5d6b; -[SCCommerceFitFinderCellScope .cxx_destruct] */

void FUN_104df5d1c(long param_1)

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



/* Entry: 104df5d6c; end: 104df5e37; -[SCCommerceProductFitRecommendation initWithVariantUrl:productId:size:] */

undefined1 *
FUN_104df5d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4450;
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



/* Entry: 104df5e38; end: 104df5e5b; -[SCCommerceProductFitRecommendation copyWithZone:] */

undefined8 FUN_104df5e38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df5e5c; end: 104df5e63; -[SCCommerceProductFitRecommendation variantUrl] */

undefined8 FUN_104df5e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104df5e64; end: 104df5e6b; -[SCCommerceProductFitRecommendation productId] */

undefined8 FUN_104df5e64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df5e6c; end: 104df5e73; -[SCCommerceProductFitRecommendation size] */

undefined8 FUN_104df5e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104df5e74; end: 104df5eaf; -[SCCommerceProductFitRecommendation .cxx_destruct] */

void FUN_104df5e74(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104df5eb0; end: 104df5eff; -[SCCommerceHeroCarouselCell initWithFrame:] */

undefined1 * FUN_104df5eb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104df5f00; end: 104df5f4b; -[SCCommerceHeroCarouselCell prepareForReuse] */

void FUN_104df5f00(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bea7720(param_1);
  return;
}



/* Entry: 104df5f4c; end: 104df6007; -[SCCommerceHeroCarouselCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df5f4c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4458;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127136a0);
  func_0x00010bfd6780();
  puVar1 = PTR_PTR_1126b08d8;
  if ((iVar2 != 0) && (lVar4 = *(long *)(param_1 + _DAT_1127136a4), lVar4 != 0)) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010085b3c8(0x4010000000000000,0x3fb99999a0000000,0x3ff0000000000000,0x3ff0000000000000,
                        puVar1,lVar4,puVar3);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 104df6008; end: 104df6177; -[SCCommerceHeroCarouselCell setCellConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df6008(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined1 *)0x0) {
    lVar6 = (long)_DAT_1127136a0;
    puVar4 = *(undefined1 **)(param_1 + lVar6);
    puVar1 = param_3;
    func_0x00010c071ae0();
    if (((ulong)puVar1 & 1) == 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      *(undefined1 **)(param_1 + lVar6) = param_3;
      _objc_release(uVar2);
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      lVar6 = param_1;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar3;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar7 = *plStack_110;
        do {
          lVar8 = 0;
          do {
            if (*plStack_110 != lVar7) {
              _objc_enumerationMutation(lVar3);
            }
            func_0x00010c12c960(*(undefined8 *)(lStack_118 + lVar8 * 8));
            lVar8 = lVar8 + 1;
          } while (lVar6 != lVar8);
          lVar6 = lVar3;
          puVar5 = &uStack_120;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar3);
      func_0x00010beb14e0(param_1);
      func_0x00010c1cbe20(param_1);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (puVar4 != (undefined1 *)0x0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + _DAT_1127136a8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea7730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s__setShimmerOn__112587770,puVar4 == (undefined1 *)0x0);
  return;
}



/* Entry: 104df6178; end: 104df61bb; -[SCCommerceHeroCarouselCell populateWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df6178(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127136a8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea7730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setShimmerOn__112587770,param_3 == 0);
  return;
}


