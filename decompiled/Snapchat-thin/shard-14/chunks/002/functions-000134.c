/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b020920; end: 10b020943; -[SCCommerceProductShoppingAttachment copyWithZone:] */

undefined8 FUN_10b020920(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b020944; end: 10b020987; -[SCCommerceProductShoppingAttachment internalInit] */

void FUN_10b020944(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b020988; end: 10b020a0b; -[SCCommerceProductShoppingAttachment matchSponsoredAttachment:organicAttachment:] */

void FUN_10b020988(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b0209f0;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b0209f0;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_10b0209f0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b020a0c; end: 10b020a17; -[SCCommerceProductShoppingAttachment .cxx_destruct] */

void FUN_10b020a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b020a18; end: 10b020ac3; -[SCCommerceProductGlbData initWithUrl:checksum:trueSize:] */

undefined1 *
FUN_10b020a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704628;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b020ac4; end: 10b020ae7; -[SCCommerceProductGlbData copyWithZone:] */

undefined8 FUN_10b020ac4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b020ae8; end: 10b020b5f; -[SCCommerceProductGlbData hash] */

undefined8 * FUN_10b020ae8(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b020bf0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b020bfc;
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
          goto LAB_10b020bfc;
        }
        goto LAB_10b020bf0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b020bfc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b020b60; end: 10b020c17; -[SCCommerceProductGlbData isEqual:] */

long FUN_10b020b60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b020bf0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b020bfc;
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
          goto LAB_10b020bfc;
        }
        goto LAB_10b020bf0;
      }
    }
    lVar3 = 0;
  }
LAB_10b020bfc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b020c18; end: 10b020c1f; -[SCCommerceProductGlbData url] */

undefined8 FUN_10b020c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b020c20; end: 10b020c27; -[SCCommerceProductGlbData checksum] */

undefined8 FUN_10b020c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b020c28; end: 10b020c2f; -[SCCommerceProductGlbData trueSize] */

undefined1 FUN_10b020c28(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b020c30; end: 10b020c5f; -[SCCommerceProductGlbData .cxx_destruct] */

void FUN_10b020c30(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b020c60; end: 10b020cd3; -[SCCommerceProductMakeupData initWithIfmUrl:] */

undefined1 * FUN_10b020c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704630;
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



/* Entry: 10b020cd4; end: 10b020cf7; -[SCCommerceProductMakeupData copyWithZone:] */

undefined8 FUN_10b020cd4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b020cf8; end: 10b020cff; -[SCCommerceProductMakeupData hash] */

void FUN_10b020cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b020d00; end: 10b020d8f; -[SCCommerceProductMakeupData isEqual:] */

long FUN_10b020d00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b020d74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b020d74;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b020d74;
    }
  }
  lVar3 = 1;
LAB_10b020d74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b020d90; end: 10b020d97; -[SCCommerceProductMakeupData ifmUrl] */

undefined8 FUN_10b020d90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b020d98; end: 10b020da3; -[SCCommerceProductMakeupData .cxx_destruct] */

void FUN_10b020d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b020da4; end: 10b020e47; -[SCCommerceProductGlassesData initWithGlbData:transforms:] */

undefined1 *
FUN_10b020da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704638;
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



/* Entry: 10b020e48; end: 10b020e6b; -[SCCommerceProductGlassesData copyWithZone:] */

undefined8 FUN_10b020e48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b020e6c; end: 10b020edf; -[SCCommerceProductGlassesData hash] */

undefined8 * FUN_10b020e6c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b020f60:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b020f6c;
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
          goto LAB_10b020f6c;
        }
        goto LAB_10b020f60;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b020f6c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b020ee0; end: 10b020f87; -[SCCommerceProductGlassesData isEqual:] */

long FUN_10b020ee0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b020f60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b020f6c;
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
          goto LAB_10b020f6c;
        }
        goto LAB_10b020f60;
      }
    }
    lVar3 = 0;
  }
LAB_10b020f6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b020f88; end: 10b020f8f; -[SCCommerceProductGlassesData glbData] */

undefined8 FUN_10b020f88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b020f90; end: 10b020f97; -[SCCommerceProductGlassesData transforms] */

undefined8 FUN_10b020f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b020f98; end: 10b020fc7; -[SCCommerceProductGlassesData .cxx_destruct] */

void FUN_10b020f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b020fc8; end: 10b02106b; -[SCCommerceProductTransforms initWithScale:translation:] */

undefined1 *
FUN_10b020fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704640;
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



/* Entry: 10b02106c; end: 10b02108f; -[SCCommerceProductTransforms copyWithZone:] */

undefined8 FUN_10b02106c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b021090; end: 10b021097; -[SCCommerceProductTransforms scale] */

undefined8 FUN_10b021090(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b021098; end: 10b02109f; -[SCCommerceProductTransforms translation] */

undefined8 FUN_10b021098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0210a0; end: 10b0210cf; -[SCCommerceProductTransforms .cxx_destruct] */

void FUN_10b0210a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0210d0; end: 10b02112b; -[SCCommerceProductVector initWithX:y:z:] */

void FUN_10b0210d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112704648;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
  }
  return;
}



/* Entry: 10b02112c; end: 10b02114f; -[SCCommerceProductVector copyWithZone:] */

undefined8 FUN_10b02112c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b021150; end: 10b021157; -[SCCommerceProductVector x] */

undefined8 FUN_10b021150(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b021158; end: 10b02115f; -[SCCommerceProductVector y] */

undefined8 FUN_10b021158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b021160; end: 10b021167; -[SCCommerceProductVector z] */

undefined8 FUN_10b021160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b021168; end: 10b0211cb; +[SCCommerceProductSetQuery adDataWithAdContext:] */

void FUN_10b021168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0840;
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



/* Entry: 10b0211cc; end: 10b021263; +[SCCommerceProductSetQuery attachmentToolDataWithStoreId:categoryId:] */

void FUN_10b0211cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b021264; end: 10b021367; +[SCCommerceProductSetQuery dpaAdsDataWithStoreId:productId:categoryId:adId:adToken:] */

void FUN_10b021264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x90) = param_4;
  *(undefined8 *)(puVar2 + 0x98) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b021368; end: 10b0213d3; +[SCCommerceProductSetQuery favoritesDataWithProductIds:] */

void FUN_10b021368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0213d4; end: 10b02146b; +[SCCommerceProductSetQuery lensDataWithLensContext:interactedProductId:] */

void FUN_10b0213d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b02146c; end: 10b0214d7; +[SCCommerceProductSetQuery productDeeplinkDataWithProductId:] */

void FUN_10b02146c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0214d8; end: 10b021543; +[SCCommerceProductSetQuery scanDataWithScanContext:] */

void FUN_10b0214d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0840;
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



/* Entry: 10b021544; end: 10b0215af; +[SCCommerceProductSetQuery screenshopDataWithImageContext:] */

void FUN_10b021544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0215b0; end: 10b0216a7; +[SCCommerceProductSetQuery shoppingDeeplinkDataWithProductId:storeId:source:sourceId:] */

void FUN_10b0215b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb8);
  *(undefined8 *)(puVar2 + 0xb8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  *(undefined8 *)(puVar2 + 0xc0) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 200);
  *(undefined8 *)(puVar2 + 200) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0216a8; end: 10b02179f; +[SCCommerceProductSetQuery storeDataWithStoreId:categoryId:source:sourceId:] */

void FUN_10b0216a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0217a0; end: 10b0218f7; +[SCCommerceProductSetQuery topicDataWithTopic:viewingContextInternal:productId:storeId:source:sourceId:] */

void FUN_10b0217a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
  uVar3 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 0xd0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xd8);
  *(undefined8 *)(puVar2 + 0xd8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xe0);
  *(undefined8 *)(puVar2 + 0xe0) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xe8);
  *(undefined8 *)(puVar2 + 0xe8) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf0);
  *(undefined8 *)(puVar2 + 0xf0) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf8);
  *(undefined8 *)(puVar2 + 0xf8) = param_8;
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0218f8; end: 10b02198f; +[SCCommerceProductSetQuery variantDataWithVariantItemIds:storeId:] */

void FUN_10b0218f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b021990; end: 10b0219b3; -[SCCommerceProductSetQuery copyWithZone:] */

undefined8 FUN_10b021990(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0219b4; end: 10b021b73; -[SCCommerceProductSetQuery hash] */

void FUN_10b0219b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_120;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_118 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_110 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_108 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_100 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_f8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uStack_98 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 200);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_120,0x1f);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_148 = PTR_PTR_112704650;
  puStack_150 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b021b74; end: 10b021bb7; -[SCCommerceProductSetQuery internalInit] */

void FUN_10b021b74(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704650;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b021bb8; end: 10b021f07; -[SCCommerceProductSetQuery isEqual:] */

long FUN_10b021bb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b021ee0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b021eec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))))) {
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
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x60);
                          if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x68);
                            if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x70);
                              if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x78);
                                if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x80);
                                  if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0x88);
                                    if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0x98);
                                      if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xa0);
                                        if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xa8);
                                          if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xb0);
                                            if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xb8);
                                              if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xc0);
                                                if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 200);
                                                  if ((lVar3 == *(long *)(param_3 + 200)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0xd0);
                                                    if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0xd8);
                                                      if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0xe0);
                                                        if ((lVar3 == *(long *)(param_3 + 0xe0)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0xe8);
                                                          if ((lVar3 == *(long *)(param_3 + 0xe8))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0xf0);
                                                            if ((lVar3 == *(long *)(param_3 + 0xf0))
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)) {
                                                              lVar3 = *(long *)(param_1 + 0xf8);
                                                              if (lVar3 != *(long *)(param_3 + 0xf8)
                                                                 ) {
                                                                func_0x00010c071ae0();
                                                                goto LAB_10b021eec;
                                                              }
                                                              goto LAB_10b021ee0;
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
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b021eec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b021f08; end: 10b02217f; -[SCCommerceProductSetQuery matchAdData:scanData:screenshopData:lensData:attachmentToolData:storeData:favoritesData:productDeeplinkData:variantData:dpaAdsData:shoppingDeeplinkData:topicData:] */

void FUN_10b021f08(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_3;
    goto code_r0x00010b02209c;
  case 1:
    if (param_4 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_4;
code_r0x00010b02209c:
    pcVar6 = *(code **)(lVar1 + 0x10);
    goto code_r0x00010b0220cc;
  case 2:
    if (param_5 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    pcVar6 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    goto code_r0x00010b0220cc;
  case 3:
    if (param_6 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    pcVar6 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
    goto code_r0x00010b022100;
  case 4:
    if (param_7 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    pcVar6 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    goto code_r0x00010b022100;
  case 5:
    if (param_8 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    pcVar6 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
    goto code_r0x00010b0220e8;
  case 6:
    if (param_9 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    pcVar6 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    goto code_r0x00010b0220cc;
  case 7:
    if (param_10 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    pcVar6 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
code_r0x00010b0220cc:
    (*pcVar6)(lVar1,uVar2);
    break;
  case 8:
    if (param_11 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    pcVar6 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
code_r0x00010b022100:
    (*pcVar6)(lVar1,uVar2,uVar4);
    break;
  case 9:
    if (param_12 != 0) {
      (**(code **)(param_12 + 0x10))
                (param_12,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                 *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                 *(undefined8 *)(param_1 + 0xa8));
    }
    break;
  case 10:
    if (param_13 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar5 = *(undefined8 *)(param_1 + 200);
    pcVar6 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
code_r0x00010b0220e8:
    (*pcVar6)(lVar1,uVar2,uVar3,uVar4,uVar5);
    break;
  case 0xb:
    if (param_14 != 0) {
      (**(code **)(param_14 + 0x10))
                (param_14,*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                 *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                 *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b022180; end: 10b0222f3; -[SCCommerceProductSetQuery .cxx_destruct] */

void FUN_10b022180(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0222f4; end: 10b022357; +[SCCommerceProductFilter textFilterWithText:] */

void FUN_10b0222f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126df370;
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



/* Entry: 10b022358; end: 10b02237b; -[SCCommerceProductFilter copyWithZone:] */

undefined8 FUN_10b022358(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02237c; end: 10b0223bf; -[SCCommerceProductFilter internalInit] */

void FUN_10b02237c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704658;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0223c0; end: 10b0223df; -[SCCommerceProductFilter matchTextFilter:] */

void FUN_10b0223c0(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b0223d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 10b0223e0; end: 10b0223eb; -[SCCommerceProductFilter .cxx_destruct] */

void FUN_10b0223e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0223ec; end: 10b02245f; -[SCCommerceProductSet initWithProducts:] */

undefined1 * FUN_10b0223ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704660;
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



/* Entry: 10b022460; end: 10b022483; -[SCCommerceProductSet copyWithZone:] */

undefined8 FUN_10b022460(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b022484; end: 10b02248b; -[SCCommerceProductSet products] */

undefined8 FUN_10b022484(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b02248c; end: 10b022497; -[SCCommerceProductSet .cxx_destruct] */

void FUN_10b02248c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b022498; end: 10b02257b; -[SCCommercePickerViewOption initWithOptionTitle:optionValue:idValue:optionAvailable:optionIndex:] */

undefined1 *
FUN_10b022498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112704668;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b02257c; end: 10b02259f; -[SCCommercePickerViewOption copyWithZone:] */

undefined8 FUN_10b02257c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0225a0; end: 10b022633; -[SCCommercePickerViewOption hash] */

undefined8 * FUN_10b0225a0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  long lStack_30;
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
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0226ec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0226f8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b0226f8;
          }
          goto LAB_10b0226ec;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0226f8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b022634; end: 10b022713; -[SCCommercePickerViewOption isEqual:] */

long FUN_10b022634(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0226ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0226f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b0226f8;
          }
          goto LAB_10b0226ec;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0226f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b022714; end: 10b02271b; -[SCCommercePickerViewOption optionTitle] */

undefined8 FUN_10b022714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02271c; end: 10b022723; -[SCCommercePickerViewOption optionValue] */

undefined8 FUN_10b02271c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b022724; end: 10b02272b; -[SCCommercePickerViewOption idValue] */

undefined8 FUN_10b022724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02272c; end: 10b022733; -[SCCommercePickerViewOption optionAvailable] */

undefined1 FUN_10b02272c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b022734; end: 10b02273b; -[SCCommercePickerViewOption optionIndex] */

undefined8 FUN_10b022734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b02273c; end: 10b022777; -[SCCommercePickerViewOption .cxx_destruct] */

void FUN_10b02273c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b022778; end: 10b0227eb; -[SCCommerceMerchantInfo initWithName:] */

undefined1 * FUN_10b022778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704670;
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



/* Entry: 10b0227ec; end: 10b02280f; -[SCCommerceMerchantInfo copyWithZone:] */

undefined8 FUN_10b0227ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b022810; end: 10b022817; -[SCCommerceMerchantInfo hash] */

void FUN_10b022810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b022818; end: 10b0228a7; -[SCCommerceMerchantInfo isEqual:] */

long FUN_10b022818(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02288c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b02288c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b02288c;
    }
  }
  lVar3 = 1;
LAB_10b02288c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0228a8; end: 10b0228af; -[SCCommerceMerchantInfo name] */

undefined8 FUN_10b0228a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0228b0; end: 10b0228bb; -[SCCommerceMerchantInfo .cxx_destruct] */

void FUN_10b0228b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0228bc; end: 10b022a4b; -[SCCommerceImageDetailsDataModel initWithExternalImageId:defaultImageUrl:iconImageUrl:smallImageUrl:mediumImageUrl:largeImageUrl:originalImageUrl:imageSize:] */

undefined1 *
FUN_10b0228bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112704678;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b022a4c; end: 10b022a6f; -[SCCommerceImageDetailsDataModel copyWithZone:] */

undefined8 FUN_10b022a4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b022a70; end: 10b022b63; -[SCCommerceImageDetailsDataModel hash] */

undefined8 * FUN_10b022a70(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
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
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b022c70:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b022c7c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)((long)puVar4 + 0x40) == *(double *)(param_3 + 0x40)) &&
         (bVar1 = false, !NAN(*(double *)((long)puVar4 + 0x48)) && !NAN(*(double *)(param_3 + 0x48))
         )) {
        bVar1 = *(double *)((long)puVar4 + 0x48) == *(double *)(param_3 + 0x48);
      }
      if (((((bVar1) &&
            ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x38);
        if (puVar8 != *(undefined1 **)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_10b022c7c;
        }
        goto LAB_10b022c70;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b022c7c:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b022b64; end: 10b022c97; -[SCCommerceImageDetailsDataModel isEqual:] */

long FUN_10b022b64(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b022c70:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b022c7c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x40) == *(double *)(param_3 + 0x40)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x48)) && !NAN(*(double *)(param_3 + 0x48)))) {
        bVar1 = *(double *)(param_1 + 0x48) == *(double *)(param_3 + 0x48);
      }
      if (((((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
         ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_10b022c7c;
        }
        goto LAB_10b022c70;
      }
    }
    lVar4 = 0;
  }
LAB_10b022c7c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b022c98; end: 10b022c9f; -[SCCommerceImageDetailsDataModel externalImageId] */

undefined8 FUN_10b022c98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b022ca0; end: 10b022ca7; -[SCCommerceImageDetailsDataModel defaultImageUrl] */

undefined8 FUN_10b022ca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b022ca8; end: 10b022caf; -[SCCommerceImageDetailsDataModel iconImageUrl] */

undefined8 FUN_10b022ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b022cb0; end: 10b022cb7; -[SCCommerceImageDetailsDataModel smallImageUrl] */

undefined8 FUN_10b022cb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b022cb8; end: 10b022cbf; -[SCCommerceImageDetailsDataModel mediumImageUrl] */

undefined8 FUN_10b022cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b022cc0; end: 10b022cc7; -[SCCommerceImageDetailsDataModel largeImageUrl] */

undefined8 FUN_10b022cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b022cc8; end: 10b022ccf; -[SCCommerceImageDetailsDataModel originalImageUrl] */

undefined8 FUN_10b022cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b022cd0; end: 10b022cd7; -[SCCommerceImageDetailsDataModel imageSize] */

undefined1  [16] FUN_10b022cd0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 10b022cd8; end: 10b022d43; -[SCCommerceImageDetailsDataModel .cxx_destruct] */

void FUN_10b022cd8(long param_1)

{
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



/* Entry: 10b022d44; end: 10b022e03; -[SCCommerceCustomImageInfo initWithExternalImageId:productImageHeight:productImageWidth:topLeftX:topLeftY:frameHeight:frameWidth:customImageRotationAngle:] */

undefined1 *
FUN_10b022d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112704680;
  uStack_70 = param_8;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
  }
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 10b022e04; end: 10b022e27; -[SCCommerceCustomImageInfo copyWithZone:] */

undefined8 FUN_10b022e04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b022e28; end: 10b022f73; -[SCCommerceCustomImageInfo hash] */

undefined8 * FUN_10b022e28(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_68;
  uStack_68 = uVar3;
  func_0x000107c3191c(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b023154:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b023158;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((ulong)puVar5 & 1) != 0) {
      dVar9 = ABS((double)puVar4[2] - (double)param_3[2]);
      dVar8 = ABS((double)puVar4[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        dVar9 = ABS((double)puVar4[3] - (double)param_3[3]);
        dVar8 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar2 = dVar9 < dVar8;
        }
        if (bVar2) {
          dVar9 = ABS((double)puVar4[4] - (double)param_3[4]);
          dVar8 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
            bVar2 = dVar9 < dVar8;
          }
          if (bVar2) {
            dVar9 = ABS((double)puVar4[5] - (double)param_3[5]);
            dVar8 = ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
              bVar2 = dVar9 < dVar8;
            }
            if (bVar2) {
              dVar9 = ABS((double)puVar4[6] - (double)param_3[6]);
              dVar8 = ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16;
              bVar2 = true;
              if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8)))
              {
                bVar2 = dVar9 < dVar8;
              }
              if (bVar2) {
                dVar8 = ABS((double)puVar4[7] - (double)param_3[7]);
                if ((dVar8 < 2.2250738585072014e-308) ||
                   (dVar8 < ABS((double)puVar4[7] + (double)param_3[7]) * 2.220446049250313e-16)) {
                  dVar8 = ABS((double)puVar4[8] - (double)param_3[8]);
                  if ((dVar8 < 2.2250738585072014e-308) ||
                     (dVar8 < ABS((double)puVar4[8] + (double)param_3[8]) * 2.220446049250313e-16))
                  {
                    puVar7 = (undefined8 *)puVar4[1];
                    if (puVar7 != (undefined8 *)param_3[1]) {
                      func_0x00010c071ae0();
                      goto LAB_10b023158;
                    }
                    goto LAB_10b023154;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10b023158:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b022f74; end: 10b023173; -[SCCommerceCustomImageInfo isEqual:] */

long FUN_10b022f74(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b023154:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b023158;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
            dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
              bVar1 = dVar6 < dVar5;
            }
            if (bVar1) {
              dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
              dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                      2.220446049250313e-16;
              bVar1 = true;
              if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5)))
              {
                bVar1 = dVar6 < dVar5;
              }
              if (bVar1) {
                dVar5 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
                if ((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                            2.220446049250313e-16)) {
                  dVar5 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
                  if ((dVar5 < 2.2250738585072014e-308) ||
                     (dVar5 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                              2.220446049250313e-16)) {
                    lVar4 = *(long *)(param_1 + 8);
                    if (lVar4 != *(long *)(param_3 + 8)) {
                      func_0x00010c071ae0();
                      goto LAB_10b023158;
                    }
                    goto LAB_10b023154;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b023158:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b023174; end: 10b02317b; -[SCCommerceCustomImageInfo externalImageId] */

undefined8 FUN_10b023174(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b02317c; end: 10b023183; -[SCCommerceCustomImageInfo productImageHeight] */

undefined8 FUN_10b02317c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b023184; end: 10b02318b; -[SCCommerceCustomImageInfo productImageWidth] */

undefined8 FUN_10b023184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02318c; end: 10b023193; -[SCCommerceCustomImageInfo topLeftX] */

undefined8 FUN_10b02318c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b023194; end: 10b02319b; -[SCCommerceCustomImageInfo topLeftY] */

undefined8 FUN_10b023194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


