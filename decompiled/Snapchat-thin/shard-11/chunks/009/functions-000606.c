/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bb1adc; end: 108bb1ae3; -[SCUnlockablesTrackRequest includeAdsRequest] */

undefined1 FUN_108bb1adc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bb1ae4; end: 108bb1b13; -[SCUnlockablesTrackRequest .cxx_destruct] */

void FUN_108bb1ae4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bb1b14; end: 108bb1b1f; -[SCBitmoji3DStickerServices .cxx_destruct] */

void FUN_108bb1b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb1b20; end: 108bb1b27; -[SCBitmojiAppServices bitmojiGoToAppHelper] */

undefined8 FUN_108bb1b20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb1b28; end: 108bb1b2f; -[SCBitmojiAppServices appInfoProvider] */

undefined8 FUN_108bb1b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb1b30; end: 108bb1b37; -[SCBitmojiAppServices appEventsEmitter] */

undefined8 FUN_108bb1b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb1b38; end: 108bb1b3f; -[SCBitmojiAppServices appPasteboardObserver] */

undefined8 FUN_108bb1b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bb1b40; end: 108bb1b87; -[SCBitmojiAppServices .cxx_destruct] */

void FUN_108bb1b40(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb1b88; end: 108bb1bcf; +[SCBitmojiAppEvent didAuthenticate] */

void FUN_108bb1b88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bdf10;
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



/* Entry: 108bb1bd0; end: 108bb1c1b; +[SCBitmojiAppEvent didChangeAvatar] */

void FUN_108bb1bd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bdf10;
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



/* Entry: 108bb1c1c; end: 108bb1c3f; -[SCBitmojiAppEvent copyWithZone:] */

undefined8 FUN_108bb1c1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bb1c40; end: 108bb1c47; -[SCBitmojiAppEvent hash] */

undefined8 FUN_108bb1c40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb1c48; end: 108bb1c8b; -[SCBitmojiAppEvent internalInit] */

void FUN_108bb1c48(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fd748;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bb1c8c; end: 108bb1d13; -[SCBitmojiAppEvent isEqual:] */

bool FUN_108bb1c8c(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108bb1d14; end: 108bb1d8b; -[SCBitmojiAppEvent matchDidAuthenticate:didChangeAvatar:] */

void FUN_108bb1d14(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_108bb1d5c;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_108bb1d5c;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_108bb1d5c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bb1d8c; end: 108bb1e97; -[SCBitmojiPastedSticker initWithAvatarID:comicID:friendAvatarID:packID:] */

undefined1 *
FUN_108bb1d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fd750;
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



/* Entry: 108bb1e98; end: 108bb1ebb; -[SCBitmojiPastedSticker copyWithZone:] */

undefined8 FUN_108bb1e98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bb1ebc; end: 108bb1f47; -[SCBitmojiPastedSticker hash] */

undefined8 * FUN_108bb1ebc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108bb1ff8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bb2004;
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
              goto LAB_108bb2004;
            }
            goto LAB_108bb1ff8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108bb2004:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108bb1f48; end: 108bb201f; -[SCBitmojiPastedSticker isEqual:] */

long FUN_108bb1f48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bb1ff8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bb2004;
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
              goto LAB_108bb2004;
            }
            goto LAB_108bb1ff8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108bb2004:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bb2020; end: 108bb2027; -[SCBitmojiPastedSticker avatarID] */

undefined8 FUN_108bb2020(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb2028; end: 108bb202f; -[SCBitmojiPastedSticker comicID] */

undefined8 FUN_108bb2028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb2030; end: 108bb2037; -[SCBitmojiPastedSticker friendAvatarID] */

undefined8 FUN_108bb2030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb2038; end: 108bb203f; -[SCBitmojiPastedSticker packID] */

undefined8 FUN_108bb2038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bb2040; end: 108bb2087; -[SCBitmojiPastedSticker .cxx_destruct] */

void FUN_108bb2040(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb2088; end: 108bb210f; -[SCBitmojiDeferredGoToAppRequest initWithSource:page:] */

undefined1 *
FUN_108bb2088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fd758;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb2110; end: 108bb2133; -[SCBitmojiDeferredGoToAppRequest copyWithZone:] */

undefined8 FUN_108bb2110(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bb2134; end: 108bb21a7; -[SCBitmojiDeferredGoToAppRequest hash] */

undefined8 * FUN_108bb2134(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bb222c;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_108bb222c;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_108bb222c;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_108bb222c:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 108bb21a8; end: 108bb2247; -[SCBitmojiDeferredGoToAppRequest isEqual:] */

long FUN_108bb21a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bb222c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_108bb222c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108bb222c;
    }
  }
  lVar3 = 1;
LAB_108bb222c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bb2248; end: 108bb224f; -[SCBitmojiDeferredGoToAppRequest source] */

undefined8 FUN_108bb2248(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb2250; end: 108bb2257; -[SCBitmojiDeferredGoToAppRequest page] */

undefined8 FUN_108bb2250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb2258; end: 108bb2263; -[SCBitmojiDeferredGoToAppRequest .cxx_destruct] */

void FUN_108bb2258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb2264; end: 108bb226b; -[SCBitmojiAvatarBuilderServices avatarDataProvider] */

undefined8 FUN_108bb2264(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb226c; end: 108bb2273; -[SCBitmojiAvatarBuilderServices avatarDataServices] */

undefined8 FUN_108bb226c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb2274; end: 108bb227b; -[SCBitmojiAvatarBuilderServices imageAssetProvider] */

undefined8 FUN_108bb2274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb227c; end: 108bb2283; -[SCBitmojiAvatarBuilderServices circumstanceEngine] */

undefined8 FUN_108bb227c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bb2284; end: 108bb22cb; -[SCBitmojiAvatarBuilderServices .cxx_destruct] */

void FUN_108bb2284(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb22cc; end: 108bb2333; +[AvatarData descriptor] */

void FUN_108bb22cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb20a0,
                        &PTR____CFConstantStringClassReference_110eeb1b8,
                        &PTR_s_snapchat_bitmoji_api_11328dba8,&PTR_s_gender_11328dbc0,3,0x20,0x1c);
    puRam000000011372dd38 = puVar1;
  }
  return;
}



/* Entry: 108bb2334; end: 108bb233b; -[SCBitmojiCppFetcherServices bitmojiFetcher] */

undefined8 FUN_108bb2334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb233c; end: 108bb2347; -[SCBitmojiCppFetcherServices .cxx_destruct] */

void FUN_108bb233c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb2348; end: 108bb2447; -[SCNBitmojiFetcherBitmojiSpec initWithAvatarId:sceneId:contentType:scale:encoding:] */

undefined1 *
FUN_108bb2348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fd770;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb2448; end: 108bb244f; -[SCNBitmojiFetcherBitmojiSpec avatarId] */

undefined8 FUN_108bb2448(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb2450; end: 108bb2457; -[SCNBitmojiFetcherBitmojiSpec sceneId] */

undefined8 FUN_108bb2450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb2458; end: 108bb245f; -[SCNBitmojiFetcherBitmojiSpec contentType] */

undefined8 FUN_108bb2458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb2460; end: 108bb2467; -[SCNBitmojiFetcherBitmojiSpec scale] */

undefined8 FUN_108bb2460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bb2468; end: 108bb246f; -[SCNBitmojiFetcherBitmojiSpec encoding] */

undefined8 FUN_108bb2468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bb2470; end: 108bb249f; -[SCNBitmojiFetcherBitmojiSpec .cxx_destruct] */

void FUN_108bb2470(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb24a0; end: 108bb24ab; -[SCCustomojiServices .cxx_destruct] */

void FUN_108bb24a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb24ac; end: 108bb2577; -[SCMinervaServices initWithImageProcessor:magicCaptionsGenerator:aiStoryReplyGenerator:] */

undefined1 *
FUN_108bb24ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fd780;
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



/* Entry: 108bb2578; end: 108bb257f; -[SCMinervaServices imageProcessor] */

undefined8 FUN_108bb2578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb2580; end: 108bb2587; -[SCMinervaServices magicCaptionsGenerator] */

undefined8 FUN_108bb2580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb2588; end: 108bb258f; -[SCMinervaServices aiStoryReplyGenerator] */

undefined8 FUN_108bb2588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb2590; end: 108bb25cb; -[SCMinervaServices .cxx_destruct] */

void FUN_108bb2590(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb25cc; end: 108bb26ef; -[SCMinervaGrpcServices initWithMinervaProcessMediaGrpcService:minervaMagicCaptionGrpcService:minervaAISnapGrpcService:minervaAISongGrpcService:minervaSuggestedPromptsService:] */

undefined1 *
FUN_108bb25cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fd788;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb26f0; end: 108bb26f7; -[SCMinervaGrpcServices minervaProcessMediaGrpcService] */

undefined8 FUN_108bb26f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb26f8; end: 108bb26ff; -[SCMinervaGrpcServices minervaMagicCaptionGrpcService] */

undefined8 FUN_108bb26f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb2700; end: 108bb2707; -[SCMinervaGrpcServices minervaAISnapGrpcService] */

undefined8 FUN_108bb2700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb2708; end: 108bb270f; -[SCMinervaGrpcServices minervaAISongGrpcService] */

undefined8 FUN_108bb2708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bb2710; end: 108bb2717; -[SCMinervaGrpcServices minervaSuggestedPromptsService] */

undefined8 FUN_108bb2710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bb2718; end: 108bb276b; -[SCMinervaGrpcServices .cxx_destruct] */

void FUN_108bb2718(long param_1)

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



/* Entry: 108bb276c; end: 108bb2863; -[SCMinervaImageProcessingExtendParams initWithCoder:] */

undefined1 *
FUN_108bb276c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd790;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb2864; end: 108bb28e7; -[SCMinervaImageProcessingExtendParams initWithOriginalImageSize:leftSideDelta:rightSideDelta:topSideDelta:bottomSideDelta:downscaleImage:] */

void FUN_108bb2864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fd790;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  return;
}



/* Entry: 108bb28e8; end: 108bb290b; -[SCMinervaImageProcessingExtendParams copyWithZone:] */

undefined8 FUN_108bb28e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bb290c; end: 108bb29e3; -[SCMinervaImageProcessingExtendParams encodeWithCoder:] */

void FUN_108bb290c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = param_3;
  _objc_retain(param_3);
  _NSStringFromCGSize(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb218);
  _objc_release(uVar1);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eeb238);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110eeb258);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110eeb278);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110eeb298);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110eeb2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bb29e4; end: 108bb2a8f; -[SCMinervaImageProcessingExtendParams hash] */

ulong * FUN_108bb29e4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  func_0x000107c3191c(&uStack_50,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((((ulong)puVar3 & 1) == 0) ||
          (((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(long *)((long)puVar2 + 0x20) != *(long *)(param_3 + 0x20))))) ||
         ((*(long *)((long)puVar2 + 0x28) != *(long *)(param_3 + 0x28) ||
          (*(char *)((long)puVar2 + 8) != param_3[8])))) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        uVar4 = 0;
        if (*(double *)((long)puVar2 + 0x38) == *(double *)(param_3 + 0x38)) {
          uVar4 = (uint)(*(double *)((long)puVar2 + 0x30) == *(double *)(param_3 + 0x30));
        }
        puVar6 = (undefined1 *)(ulong)uVar4;
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 108bb2a90; end: 108bb2b6f; -[SCMinervaImageProcessingExtendParams isEqual:] */

bool FUN_108bb2a90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
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
      if ((((uVar2 & 1) == 0) ||
          (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) ||
         ((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
          (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if (*(double *)(param_1 + 0x38) == *(double *)(param_3 + 0x38)) {
          bVar3 = *(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30);
        }
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 108bb2b70; end: 108bb2b77; -[SCMinervaImageProcessingExtendParams originalImageSize] */

undefined1  [16] FUN_108bb2b70(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 108bb2b78; end: 108bb2b7f; -[SCMinervaImageProcessingExtendParams leftSideDelta] */

undefined8 FUN_108bb2b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb2b80; end: 108bb2b87; -[SCMinervaImageProcessingExtendParams rightSideDelta] */

undefined8 FUN_108bb2b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb2b88; end: 108bb2b8f; -[SCMinervaImageProcessingExtendParams topSideDelta] */

undefined8 FUN_108bb2b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bb2b90; end: 108bb2b97; -[SCMinervaImageProcessingExtendParams bottomSideDelta] */

undefined8 FUN_108bb2b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bb2b98; end: 108bb2b9f; -[SCMinervaImageProcessingExtendParams downscaleImage] */

undefined1 FUN_108bb2b98(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bb2ba0; end: 108bb2c63; -[SCMinervaImageProcessingParams initWithCoder:] */

undefined1 * FUN_108bb2ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd798;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb2c64; end: 108bb2cff; -[SCMinervaImageProcessingParams initWithImageProcessingType:imageExtendParams:imageEnhanceScaleParams:imageRetouchScaleParams:] */

undefined1 *
FUN_108bb2c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fd798;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb2d00; end: 108bb2d23; -[SCMinervaImageProcessingParams copyWithZone:] */

undefined8 FUN_108bb2d00(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bb2d24; end: 108bb2dab; -[SCMinervaImageProcessingParams encodeWithCoder:] */

void FUN_108bb2d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb2d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eeb2f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110eeb318);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110eeb338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bb2dac; end: 108bb2e23; -[SCMinervaImageProcessingParams hash] */

undefined8 * FUN_108bb2dac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  puVar2 = &uStack_48;
  uStack_40 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bb2ec8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((puVar2[1] != param_3[1] || (puVar2[3] != param_3[3])) || (puVar2[4] != param_3[4])))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_108bb2ec8;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108bb2ec8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_108bb2ec8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108bb2e24; end: 108bb2ee3; -[SCMinervaImageProcessingParams isEqual:] */

long FUN_108bb2e24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bb2ec8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_108bb2ec8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108bb2ec8;
    }
  }
  lVar3 = 1;
LAB_108bb2ec8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bb2ee4; end: 108bb2eeb; -[SCMinervaImageProcessingParams imageProcessingType] */

undefined8 FUN_108bb2ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb2eec; end: 108bb2ef3; -[SCMinervaImageProcessingParams imageExtendParams] */

undefined8 FUN_108bb2eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb2ef4; end: 108bb2efb; -[SCMinervaImageProcessingParams imageEnhanceScaleParams] */

undefined8 FUN_108bb2ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb2efc; end: 108bb2f03; -[SCMinervaImageProcessingParams imageRetouchScaleParams] */

undefined8 FUN_108bb2efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bb2f04; end: 108bb2f0f; -[SCMinervaImageProcessingParams .cxx_destruct] */

void FUN_108bb2f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bb2f10; end: 108bb2f6b; -[SCMinervaImageProcessingLoggingInfo initWithImageProcessingType:processingTimeMs:errorCode:] */

void FUN_108bb2f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd7a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 108bb2f6c; end: 108bb2f8f; -[SCMinervaImageProcessingLoggingInfo copyWithZone:] */

undefined8 FUN_108bb2f6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bb2f90; end: 108bb2ff3; -[SCMinervaImageProcessingLoggingInfo hash] */

undefined8 * FUN_108bb2f90(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_20 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 108bb2ff4; end: 108bb309b; -[SCMinervaImageProcessingLoggingInfo isEqual:] */

bool FUN_108bb2ff4(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108bb309c; end: 108bb30a3; -[SCMinervaImageProcessingLoggingInfo imageProcessingType] */

undefined8 FUN_108bb309c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb30a4; end: 108bb30ab; -[SCMinervaImageProcessingLoggingInfo processingTimeMs] */

undefined8 FUN_108bb30a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb30ac; end: 108bb30b3; -[SCMinervaImageProcessingLoggingInfo errorCode] */

undefined8 FUN_108bb30ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb30b4; end: 108bb3257; -[SCMinervaMagicCaptionGenerationParams initWithIsOver18:batchSize:utcOffsetMinutes:captureTimestampMs:chatGPTVersion:generationRequestId:initialGenerationRequestId:pastCaptions:] */

undefined1 *
FUN_108bb30b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fd7a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb3258; end: 108bb327b; -[SCMinervaMagicCaptionGenerationParams copyWithZone:] */

undefined8 FUN_108bb3258(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bb327c; end: 108bb332f; -[SCMinervaMagicCaptionGenerationParams hash] */

undefined8 * FUN_108bb327c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lStack_48 = (long)*(int *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
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
LAB_108bb3438:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bb3444;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)(puVar3 + 1) == *(int *)(param_3 + 1))) {
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
                  puVar6 = (undefined8 *)puVar3[8];
                  if (puVar6 != (undefined8 *)param_3[8]) {
                    func_0x00010c071ae0();
                    goto LAB_108bb3444;
                  }
                  goto LAB_108bb3438;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108bb3444:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108bb3330; end: 108bb345f; -[SCMinervaMagicCaptionGenerationParams isEqual:] */

long FUN_108bb3330(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bb3438:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bb3444;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
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
                    goto LAB_108bb3444;
                  }
                  goto LAB_108bb3438;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108bb3444:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bb3460; end: 108bb3467; -[SCMinervaMagicCaptionGenerationParams isOver18] */

undefined8 FUN_108bb3460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb3468; end: 108bb346f; -[SCMinervaMagicCaptionGenerationParams batchSize] */

undefined8 FUN_108bb3468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb3470; end: 108bb3477; -[SCMinervaMagicCaptionGenerationParams utcOffsetMinutes] */

undefined8 FUN_108bb3470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bb3478; end: 108bb347f; -[SCMinervaMagicCaptionGenerationParams captureTimestampMs] */

undefined8 FUN_108bb3478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bb3480; end: 108bb3487; -[SCMinervaMagicCaptionGenerationParams chatGPTVersion] */

undefined4 FUN_108bb3480(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108bb3488; end: 108bb348f; -[SCMinervaMagicCaptionGenerationParams generationRequestId] */

undefined8 FUN_108bb3488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bb3490; end: 108bb3497; -[SCMinervaMagicCaptionGenerationParams initialGenerationRequestId] */

undefined8 FUN_108bb3490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


