/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b02319c; end: 10b0231a3; -[SCCommerceCustomImageInfo frameHeight] */

undefined8 FUN_10b02319c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0231a4; end: 10b0231ab; -[SCCommerceCustomImageInfo frameWidth] */

undefined8 FUN_10b0231a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0231ac; end: 10b0231b3; -[SCCommerceCustomImageInfo customImageRotationAngle] */

undefined8 FUN_10b0231ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0231b4; end: 10b0231bf; -[SCCommerceCustomImageInfo .cxx_destruct] */

void FUN_10b0231b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0231c0; end: 10b0232f3; -[SCCommerceCustomBitmojiInfo initWithBitmojiImageInfoList:isTintable:colors:defaultSolomojiComicId:defaultAvatarId:defaultFriendmojiComicId:] */

undefined1 *
FUN_10b0231c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112704688;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0232f4; end: 10b023317; -[SCCommerceCustomBitmojiInfo copyWithZone:] */

undefined8 FUN_10b0232f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b023318; end: 10b02331f; -[SCCommerceCustomBitmojiInfo bitmojiImageInfoList] */

undefined8 FUN_10b023318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b023320; end: 10b023327; -[SCCommerceCustomBitmojiInfo isTintable] */

undefined1 FUN_10b023320(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b023328; end: 10b02332f; -[SCCommerceCustomBitmojiInfo colors] */

undefined8 FUN_10b023328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b023330; end: 10b023337; -[SCCommerceCustomBitmojiInfo defaultSolomojiComicId] */

undefined8 FUN_10b023330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b023338; end: 10b02333f; -[SCCommerceCustomBitmojiInfo defaultAvatarId] */

undefined8 FUN_10b023338(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b023340; end: 10b023347; -[SCCommerceCustomBitmojiInfo defaultFriendmojiComicId] */

undefined8 FUN_10b023340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b023348; end: 10b02339b; -[SCCommerceCustomBitmojiInfo .cxx_destruct] */

void FUN_10b023348(long param_1)

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



/* Entry: 10b02339c; end: 10b023467; -[SCCommerceProductOptionCategory initWithIdValue:title:options:] */

undefined1 *
FUN_10b02339c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112704690;
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



/* Entry: 10b023468; end: 10b02348b; -[SCCommerceProductOptionCategory copyWithZone:] */

undefined8 FUN_10b023468(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02348c; end: 10b02350b; -[SCCommerceProductOptionCategory hash] */

undefined8 * FUN_10b02348c(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b0235a4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0235b0;
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
            goto LAB_10b0235b0;
          }
          goto LAB_10b0235a4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0235b0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b02350c; end: 10b0235cb; -[SCCommerceProductOptionCategory isEqual:] */

long FUN_10b02350c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0235a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0235b0;
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
            goto LAB_10b0235b0;
          }
          goto LAB_10b0235a4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0235b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0235cc; end: 10b0235d3; -[SCCommerceProductOptionCategory idValue] */

undefined8 FUN_10b0235cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0235d4; end: 10b0235db; -[SCCommerceProductOptionCategory title] */

undefined8 FUN_10b0235d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0235dc; end: 10b0235e3; -[SCCommerceProductOptionCategory options] */

undefined8 FUN_10b0235dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0235e4; end: 10b02361f; -[SCCommerceProductOptionCategory .cxx_destruct] */

void FUN_10b0235e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b023620; end: 10b0236c3; -[SCCommerceProductOption initWithVariantCategoryId:title:] */

undefined1 *
FUN_10b023620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704698;
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



/* Entry: 10b0236c4; end: 10b0236e7; -[SCCommerceProductOption copyWithZone:] */

undefined8 FUN_10b0236c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0236e8; end: 10b02375b; -[SCCommerceProductOption hash] */

undefined8 * FUN_10b0236e8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b0237dc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0237e8;
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
          goto LAB_10b0237e8;
        }
        goto LAB_10b0237dc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0237e8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b02375c; end: 10b023803; -[SCCommerceProductOption isEqual:] */

long FUN_10b02375c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0237dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0237e8;
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
          goto LAB_10b0237e8;
        }
        goto LAB_10b0237dc;
      }
    }
    lVar3 = 0;
  }
LAB_10b0237e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b023804; end: 10b02380b; -[SCCommerceProductOption variantCategoryId] */

undefined8 FUN_10b023804(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b02380c; end: 10b023813; -[SCCommerceProductOption title] */

undefined8 FUN_10b02380c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b023814; end: 10b023843; -[SCCommerceProductOption .cxx_destruct] */

void FUN_10b023814(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b023844; end: 10b0238e7; -[SCCommerceProductRenderingMetadata initWithJsonString:remoteAssets:] */

undefined1 *
FUN_10b023844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127046a0;
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



/* Entry: 10b0238e8; end: 10b02390b; -[SCCommerceProductRenderingMetadata copyWithZone:] */

undefined8 FUN_10b0238e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02390c; end: 10b023913; -[SCCommerceProductRenderingMetadata jsonString] */

undefined8 FUN_10b02390c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b023914; end: 10b02391b; -[SCCommerceProductRenderingMetadata remoteAssets] */

undefined8 FUN_10b023914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02391c; end: 10b02394b; -[SCCommerceProductRenderingMetadata .cxx_destruct] */

void FUN_10b02391c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b02394c; end: 10b0239ef; -[SCCommerceProductRemoteAsset initWithUrl:checksum:] */

undefined1 *
FUN_10b02394c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127046a8;
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



/* Entry: 10b0239f0; end: 10b023a13; -[SCCommerceProductRemoteAsset copyWithZone:] */

undefined8 FUN_10b0239f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b023a14; end: 10b023a1b; -[SCCommerceProductRemoteAsset url] */

undefined8 FUN_10b023a14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b023a1c; end: 10b023a23; -[SCCommerceProductRemoteAsset checksum] */

undefined8 FUN_10b023a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b023a24; end: 10b023a53; -[SCCommerceProductRemoteAsset .cxx_destruct] */

void FUN_10b023a24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b023a54; end: 10b023b2f; -[SCCommerceCart initWithStoreMetadata:prepopulatedStoreInfo:numberOfItems:cartItemMetadata:] */

undefined1 *
FUN_10b023a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127046b0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b023b30; end: 10b023b53; -[SCCommerceCart copyWithZone:] */

undefined8 FUN_10b023b30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b023b54; end: 10b023b5b; -[SCCommerceCart storeMetadata] */

undefined8 FUN_10b023b54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b023b5c; end: 10b023b63; -[SCCommerceCart prepopulatedStoreInfo] */

undefined8 FUN_10b023b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b023b64; end: 10b023b6b; -[SCCommerceCart numberOfItems] */

undefined8 FUN_10b023b64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b023b6c; end: 10b023b73; -[SCCommerceCart cartItemMetadata] */

undefined8 FUN_10b023b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b023b74; end: 10b023baf; -[SCCommerceCart .cxx_destruct] */

void FUN_10b023b74(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b023bb0; end: 10b023f97; -[SCCommerceOrderDataModel initWithOrderId:externalOrderName:storeName:billingItems:totalPrice:subtotalPrice:discountPrice:totalTax:paymentMethods:shippingInfo:shippingAddress:contactDetails:createdAtDate:merchantEmail:supportUrl:returnPolicyUrl:termsOfServicePolicyUrl:storeIconURL:] */

undefined8 *
FUN_10b023bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1127046b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
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



/* Entry: 10b023f98; end: 10b023fbb; -[SCCommerceOrderDataModel copyWithZone:] */

undefined8 FUN_10b023f98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b023fbc; end: 10b0240ef; -[SCCommerceOrderDataModel hash] */

undefined8 * FUN_10b023fbc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_b8;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b0242f0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0242fc;
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
                          lVar5 = puVar3[0xb];
                          if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xc];
                            if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              lVar5 = puVar3[0xd];
                              if ((lVar5 == param_3[0xd]) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = puVar3[0xe];
                                if ((lVar5 == param_3[0xe]) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = puVar3[0xf];
                                  if ((lVar5 == param_3[0xf]) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = puVar3[0x10];
                                    if ((lVar5 == param_3[0x10]) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = puVar3[0x11];
                                      if ((lVar5 == param_3[0x11]) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        puVar6 = (undefined8 *)puVar3[0x12];
                                        if (puVar6 != (undefined8 *)param_3[0x12]) {
                                          func_0x00010c071ae0();
                                          goto LAB_10b0242fc;
                                        }
                                        goto LAB_10b0242f0;
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
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0242fc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0240f0; end: 10b024317; -[SCCommerceOrderDataModel isEqual:] */

long FUN_10b0240f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0242f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0242fc;
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
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
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
                                        lVar3 = *(long *)(param_1 + 0x90);
                                        if (lVar3 != *(long *)(param_3 + 0x90)) {
                                          func_0x00010c071ae0();
                                          goto LAB_10b0242fc;
                                        }
                                        goto LAB_10b0242f0;
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
LAB_10b0242fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b024318; end: 10b02431f; -[SCCommerceOrderDataModel orderId] */

undefined8 FUN_10b024318(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b024320; end: 10b024327; -[SCCommerceOrderDataModel externalOrderName] */

undefined8 FUN_10b024320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b024328; end: 10b02432f; -[SCCommerceOrderDataModel storeName] */

undefined8 FUN_10b024328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b024330; end: 10b024337; -[SCCommerceOrderDataModel billingItems] */

undefined8 FUN_10b024330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b024338; end: 10b02433f; -[SCCommerceOrderDataModel totalPrice] */

undefined8 FUN_10b024338(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b024340; end: 10b024347; -[SCCommerceOrderDataModel subtotalPrice] */

undefined8 FUN_10b024340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b024348; end: 10b02434f; -[SCCommerceOrderDataModel discountPrice] */

undefined8 FUN_10b024348(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b024350; end: 10b024357; -[SCCommerceOrderDataModel totalTax] */

undefined8 FUN_10b024350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b024358; end: 10b02435f; -[SCCommerceOrderDataModel paymentMethods] */

undefined8 FUN_10b024358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b024360; end: 10b024367; -[SCCommerceOrderDataModel shippingInfo] */

undefined8 FUN_10b024360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b024368; end: 10b02436f; -[SCCommerceOrderDataModel shippingAddress] */

undefined8 FUN_10b024368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b024370; end: 10b024377; -[SCCommerceOrderDataModel contactDetails] */

undefined8 FUN_10b024370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b024378; end: 10b02437f; -[SCCommerceOrderDataModel createdAtDate] */

undefined8 FUN_10b024378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b024380; end: 10b024387; -[SCCommerceOrderDataModel merchantEmail] */

undefined8 FUN_10b024380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b024388; end: 10b02438f; -[SCCommerceOrderDataModel supportUrl] */

undefined8 FUN_10b024388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b024390; end: 10b024397; -[SCCommerceOrderDataModel returnPolicyUrl] */

undefined8 FUN_10b024390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b024398; end: 10b02439f; -[SCCommerceOrderDataModel termsOfServicePolicyUrl] */

undefined8 FUN_10b024398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b0243a0; end: 10b0243a7; -[SCCommerceOrderDataModel storeIconURL] */

undefined8 FUN_10b0243a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b0243a8; end: 10b024497; -[SCCommerceOrderDataModel .cxx_destruct] */

void FUN_10b0243a8(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b024498; end: 10b02461f; -[SCCommerceBillingItem initWithBillingItemId:productId:variantDescription:quantity:name:price:strikethroughPrice:productImageUrl:] */

undefined1 *
FUN_10b024498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1127046c0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
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
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b024620; end: 10b024643; -[SCCommerceBillingItem copyWithZone:] */

undefined8 FUN_10b024620(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b024644; end: 10b0246ff; -[SCCommerceBillingItem hash] */

undefined8 * FUN_10b024644(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b024808:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b024814;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[8];
                  if (puVar6 != (undefined8 *)param_3[8]) {
                    func_0x00010c071ae0();
                    goto LAB_10b024814;
                  }
                  goto LAB_10b024808;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b024814:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b024700; end: 10b02482f; -[SCCommerceBillingItem isEqual:] */

long FUN_10b024700(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b024808:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b024814;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
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
                    goto LAB_10b024814;
                  }
                  goto LAB_10b024808;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b024814:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b024830; end: 10b024837; -[SCCommerceBillingItem billingItemId] */

undefined8 FUN_10b024830(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b024838; end: 10b02483f; -[SCCommerceBillingItem productId] */

undefined8 FUN_10b024838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b024840; end: 10b024847; -[SCCommerceBillingItem variantDescription] */

undefined8 FUN_10b024840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b024848; end: 10b02484f; -[SCCommerceBillingItem quantity] */

undefined8 FUN_10b024848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b024850; end: 10b024857; -[SCCommerceBillingItem name] */

undefined8 FUN_10b024850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b024858; end: 10b02485f; -[SCCommerceBillingItem price] */

undefined8 FUN_10b024858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b024860; end: 10b024867; -[SCCommerceBillingItem strikethroughPrice] */

undefined8 FUN_10b024860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b024868; end: 10b02486f; -[SCCommerceBillingItem productImageUrl] */

undefined8 FUN_10b024868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b024870; end: 10b0248db; -[SCCommerceBillingItem .cxx_destruct] */

void FUN_10b024870(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0248dc; end: 10b024a0f; -[SCCommerceStoreMetadata initWithName:storeId:iconUrl:categories:isNativeCheckoutEligible:returnPolicyUrl:] */

undefined1 *
FUN_10b0248dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127046c8;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b024a10; end: 10b024a33; -[SCCommerceStoreMetadata copyWithZone:] */

undefined8 FUN_10b024a10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b024a34; end: 10b024acf; -[SCCommerceStoreMetadata hash] */

undefined8 * FUN_10b024a34(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b024ba8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b024bb4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10b024bb4;
              }
              goto LAB_10b024ba8;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b024bb4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b024ad0; end: 10b024bcf; -[SCCommerceStoreMetadata isEqual:] */

long FUN_10b024ad0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b024ba8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b024bb4;
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
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b024bb4;
              }
              goto LAB_10b024ba8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b024bb4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b024bd0; end: 10b024bd7; -[SCCommerceStoreMetadata name] */

undefined8 FUN_10b024bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b024bd8; end: 10b024bdf; -[SCCommerceStoreMetadata storeId] */

undefined8 FUN_10b024bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b024be0; end: 10b024be7; -[SCCommerceStoreMetadata iconUrl] */

undefined8 FUN_10b024be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b024be8; end: 10b024bef; -[SCCommerceStoreMetadata categories] */

undefined8 FUN_10b024be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b024bf0; end: 10b024bf7; -[SCCommerceStoreMetadata isNativeCheckoutEligible] */

undefined1 FUN_10b024bf0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b024bf8; end: 10b024bff; -[SCCommerceStoreMetadata returnPolicyUrl] */

undefined8 FUN_10b024bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b024c00; end: 10b024c53; -[SCCommerceStoreMetadata .cxx_destruct] */

void FUN_10b024c00(long param_1)

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



/* Entry: 10b024c54; end: 10b024d1f; -[SCCommerceShippingInfo initWithIdValue:title:price:] */

undefined1 *
FUN_10b024c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1127046d0;
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



/* Entry: 10b024d20; end: 10b024d43; -[SCCommerceShippingInfo copyWithZone:] */

undefined8 FUN_10b024d20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b024d44; end: 10b024dc3; -[SCCommerceShippingInfo hash] */

undefined8 * FUN_10b024d44(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b024e5c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b024e68;
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
            goto LAB_10b024e68;
          }
          goto LAB_10b024e5c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b024e68:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b024dc4; end: 10b024e83; -[SCCommerceShippingInfo isEqual:] */

long FUN_10b024dc4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b024e5c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b024e68;
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
            goto LAB_10b024e68;
          }
          goto LAB_10b024e5c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b024e68:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b024e84; end: 10b024e8b; -[SCCommerceShippingInfo idValue] */

undefined8 FUN_10b024e84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b024e8c; end: 10b024e93; -[SCCommerceShippingInfo title] */

undefined8 FUN_10b024e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b024e94; end: 10b024e9b; -[SCCommerceShippingInfo price] */

undefined8 FUN_10b024e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b024e9c; end: 10b024ed7; -[SCCommerceShippingInfo .cxx_destruct] */

void FUN_10b024e9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


