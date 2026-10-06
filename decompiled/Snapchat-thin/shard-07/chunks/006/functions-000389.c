/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105710c28; end: 105710c33; -[SCProfileFlatlandMyProfileBitmojiService pushToValdiMarshaller:] */

undefined * FUN_105710c28(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df140;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010af9d630();
  func_0x00010af9d60c();
  return puVar1;
}



/* Entry: 105710c34; end: 105710c7b; -[SCProfileFlatlandMyProfileBitmojiService plusSubscribeDidDismiss] */

void FUN_105710c34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105710c7c; end: 105710c87; -[SCProfileFlatlandMyProfileBitmojiService _backgroundTypeForProfileBackgroundURLType:] */

bool FUN_105710c7c(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 105710c88; end: 105710d1b; -[SCProfileFlatlandMyProfileBitmojiService _showUpdateErrorNotification] */

void FUN_105710c88(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105710d1c; end: 105710d3f; -[SCProfileFlatlandMyProfileBitmojiService _titleForGranularSourceType:] */

undefined * FUN_105710d1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 7) {
    return (&PTR_PTR_1108ac878)[param_3 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 105710d40; end: 105710dc3; -[SCProfileFlatlandMyProfileBitmojiService _presentCreateFlowFromSource:] */

void FUN_105710d40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x80),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105710dc4; end: 105710e83; -[SCProfileFlatlandMyProfileBitmojiService bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_105710dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _os_unfair_lock_lock(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  puVar2 = PTR_PTR_1126b15a8;
  func_0x00010c27f660(PTR_PTR_1126b15a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105710e84; end: 105710ec3; -[SCProfileFlatlandMyProfileBitmojiService trayScopeDidDismiss] */

void FUN_105710e84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(param_1 + 0x90) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x90);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105710ec4; end: 105710fd7; -[SCProfileFlatlandMyProfileBitmojiService .cxx_destruct] */

void FUN_105710ec4(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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



/* Entry: 105710fd8; end: 10571147b; -[SCProfileFlatlandMyProfileBitmojiServiceFactory initWithAvatarIdProvider:bitmojiFlatlandInfoProvider:bitmojiFlatlandConfigProvider:bitmojiFlatlandUserUpdater:bitmojiCtaPromoManager:plusFeatureGating:plusSubscribeScopeExposer:plusSubscribeScopeServices:notificationPool:generativeBackgroundsFeatureStatusProviding:posePickerScopeExposer:selfieIdProvider:bitmojiAvatarBuilderScopeExposer:plusFeatureBadging:mapCustomizationTrayFactoryServices:] */

undefined8 *
FUN_105710fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
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
  puStack_70 = PTR_PTR_1126e9e88;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x10571137c;
    puStack_f8 = &UNK_1108ac8b0;
    _objc_retain(param_3);
    uStack_f0 = param_3;
    _objc_retain(param_4);
    uStack_e8 = param_4;
    _objc_retain(param_5);
    uStack_e0 = param_5;
    _objc_retain(param_6);
    uStack_d8 = param_6;
    _objc_retain(param_7);
    uStack_d0 = param_7;
    _objc_retain(param_8);
    uStack_c8 = param_8;
    _objc_retain(param_9);
    uStack_c0 = param_9;
    _objc_retain(param_10);
    uStack_b8 = param_10;
    _objc_retain(param_11);
    uStack_b0 = param_11;
    _objc_retain(param_12);
    uStack_a8 = param_12;
    _objc_retain(param_13);
    uStack_a0 = param_13;
    _objc_retain(param_14);
    uStack_98 = param_14;
    _objc_retain(param_15);
    uStack_90 = param_15;
    _objc_retain(param_16);
    uStack_88 = param_16;
    _objc_retain(param_17);
    uStack_80 = param_17;
    ppuVar2 = &puStack_110;
    _objc_retainBlock();
    uVar3 = puVar1[1];
    puVar1[1] = ppuVar2;
    _objc_release(uVar3);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
  }
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



/* Entry: 10571147c; end: 10571148f; -[SCProfileFlatlandMyProfileBitmojiServiceFactory createServiceWithUIContainer:actionHandler:] */

void FUN_10571147c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010571148c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3,param_4);
  return;
}



/* Entry: 105711490; end: 10571149b; -[SCProfileFlatlandMyProfileBitmojiServiceFactory .cxx_destruct] */

void FUN_105711490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10571149c; end: 1057115af; -[SCBitmojiAvatarBuilderLaunchActionModel initWithEncodedOutfit:deeplinkInfo:source:granularSource:avatarStateHistoryJson:] */

undefined1 *
FUN_10571149c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e9e90;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
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
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057115b0; end: 1057115d3; -[SCBitmojiAvatarBuilderLaunchActionModel copyWithZone:] */

undefined8 FUN_1057115b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057115d4; end: 105711663; -[SCBitmojiAvatarBuilderLaunchActionModel hash] */

undefined8 * FUN_1057115d4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105711724:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105711730;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105711730;
            }
            goto LAB_105711724;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105711730:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105711664; end: 10571174b; -[SCBitmojiAvatarBuilderLaunchActionModel isEqual:] */

long FUN_105711664(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105711724:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105711730;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105711730;
            }
            goto LAB_105711724;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105711730:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10571174c; end: 105711753; -[SCBitmojiAvatarBuilderLaunchActionModel encodedOutfit] */

undefined8 FUN_10571174c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105711754; end: 10571175b; -[SCBitmojiAvatarBuilderLaunchActionModel deeplinkInfo] */

undefined8 FUN_105711754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10571175c; end: 105711763; -[SCBitmojiAvatarBuilderLaunchActionModel source] */

undefined8 FUN_10571175c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105711764; end: 10571176b; -[SCBitmojiAvatarBuilderLaunchActionModel granularSource] */

undefined8 FUN_105711764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10571176c; end: 105711773; -[SCBitmojiAvatarBuilderLaunchActionModel avatarStateHistoryJson] */

undefined8 FUN_10571176c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105711774; end: 1057117bb; -[SCBitmojiAvatarBuilderLaunchActionModel .cxx_destruct] */

void FUN_105711774(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057117bc; end: 105711893; -[SCBitmojiShareOutfitActionModel initWithPetImageUrl:avatarId:indexOnBitmojiFeed:] */

undefined1 *
FUN_1057117bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e9e98;
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



/* Entry: 105711894; end: 1057118b7; -[SCBitmojiShareOutfitActionModel copyWithZone:] */

undefined8 FUN_105711894(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057118b8; end: 105711937; -[SCBitmojiShareOutfitActionModel hash] */

undefined8 * FUN_1057118b8(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_1057119d0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1057119dc;
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
            goto LAB_1057119dc;
          }
          goto LAB_1057119d0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1057119dc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105711938; end: 1057119f7; -[SCBitmojiShareOutfitActionModel isEqual:] */

long FUN_105711938(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057119d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057119dc;
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
            goto LAB_1057119dc;
          }
          goto LAB_1057119d0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1057119dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057119f8; end: 1057119ff; -[SCBitmojiShareOutfitActionModel petImageUrl] */

undefined8 FUN_1057119f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105711a00; end: 105711a07; -[SCBitmojiShareOutfitActionModel avatarId] */

undefined8 FUN_105711a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105711a08; end: 105711a0f; -[SCBitmojiShareOutfitActionModel indexOnBitmojiFeed] */

undefined8 FUN_105711a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105711a10; end: 105711a4b; -[SCBitmojiShareOutfitActionModel .cxx_destruct] */

void FUN_105711a10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105711a4c; end: 105711abf; -[SCBitmojiFlatlandCtaPromoServices initWithCtaPromoManager:] */

undefined1 * FUN_105711a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9ea0;
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



/* Entry: 105711ac0; end: 105711ac7; -[SCBitmojiFlatlandCtaPromoServices ctaPromoManager] */

undefined8 FUN_105711ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105711ac8; end: 105711ad3; -[SCBitmojiFlatlandCtaPromoServices .cxx_destruct] */

void FUN_105711ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105711ad4; end: 105711b5b; -[SCBitmojiAvatarBuilderDeepLinkInfo initWithAvatarBuilderCategory:sectionId:] */

undefined1 *
FUN_105711ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9ea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105711b5c; end: 105711b7f; -[SCBitmojiAvatarBuilderDeepLinkInfo copyWithZone:] */

undefined8 FUN_105711b5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105711b80; end: 105711bdf; -[SCBitmojiAvatarBuilderDeepLinkInfo hash] */

undefined8 * FUN_105711b80(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105711c64;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_105711c64;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_105711c64;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_105711c64:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105711be0; end: 105711c7f; -[SCBitmojiAvatarBuilderDeepLinkInfo isEqual:] */

long FUN_105711be0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105711c64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_105711c64;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105711c64;
    }
  }
  lVar3 = 1;
LAB_105711c64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105711c80; end: 105711c87; -[SCBitmojiAvatarBuilderDeepLinkInfo avatarBuilderCategory] */

undefined8 FUN_105711c80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105711c88; end: 105711c8f; -[SCBitmojiAvatarBuilderDeepLinkInfo sectionId] */

undefined8 FUN_105711c88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105711c90; end: 105711c9b; -[SCBitmojiAvatarBuilderDeepLinkInfo .cxx_destruct] */

void FUN_105711c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105711c9c; end: 105711d0f; -[SCBitmojiFlatlandUserServices initWithFlatlandUserUpdater:] */

undefined1 * FUN_105711c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9eb0;
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



/* Entry: 105711d10; end: 105711d17; -[SCBitmojiFlatlandUserServices flatlandUserUpdater] */

undefined8 FUN_105711d10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105711d18; end: 105711d23; -[SCBitmojiFlatlandUserServices .cxx_destruct] */

void FUN_105711d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105711d24; end: 105711d97; -[SCBitmojiProfileServices initWithBitmojiFlatlandServiceFactory:] */

undefined1 * FUN_105711d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9eb8;
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



/* Entry: 105711d98; end: 105711d9f; -[SCBitmojiProfileServices bitmojiFlatlandServiceFactory] */

undefined8 FUN_105711d98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105711da0; end: 105711dab; -[SCBitmojiProfileServices .cxx_destruct] */

void FUN_105711da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105711dac; end: 105711e27; +[SCBitmojiBitmojiLiveMirrorModelConfig descriptor] */

undefined * FUN_105711dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfb10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5d3d0,
                        &PTR____CFConstantStringClassReference_110df9598,&PTR_DAT_1130f7010,
                        &PTR_DAT_1130f7028,7,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bfb10 = puVar1;
  }
  return puRam00000001136bfb10;
}



/* Entry: 105711e28; end: 105711ff3; -[SCBitmoji3DBatchingSelfieFetcher initWithBatchedSceneFetcher:flatlandContentFetcher:avatarId:selfieIds:feature:batchSize:renderStyleProvider:] */

undefined1 *
FUN_105711e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e9ec0;
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x50) = param_7;
    func_0x00010be39560(puVar1);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105711ff4; end: 1057120fb; -[SCBitmoji3DBatchingSelfieFetcher fetchSelfie:] */

void FUN_105711ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057120fc; end: 1057121cf;  */

void FUN_1057120fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110df95b8,0xffffffffffffffff,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar4 = puVar1;
    func_0x00010be211e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057121d0; end: 1057121e3; -[SCBitmoji3DBatchingSelfieFetcher waitForWriteOperations] */

void FUN_1057121d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_performAndWait__11261bab0,
             &PTR___NSConcreteGlobalBlock_1108ac8e0);
  return;
}



/* Entry: 1057121e4; end: 10571233b; -[SCBitmoji3DBatchingSelfieFetcher _initBatchesWithSelfiesIds:batchSize:] */

void FUN_1057121e4(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar8 = param_3;
  func_0x00010bf529e0();
  if (uVar8 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    puVar5 = (undefined *)0x0;
    lVar10 = 0;
    do {
      puVar7 = puVar5;
      if (lVar10 == 0) {
        uVar3 = param_3;
        func_0x00010bf529e0();
        uVar4 = param_4;
        if (uVar3 + lVar9 <= param_4) {
          uVar4 = uVar3 + lVar9;
        }
        puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,uVar8,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      uVar4 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_2,puVar7,uVar4);
      _objc_release(uVar4);
      lVar1 = 0;
      if (lVar10 + 1U != param_4) {
        lVar1 = lVar10 + 1;
      }
      uVar8 = uVar8 + 1;
      uVar4 = param_3;
      func_0x00010bf529e0();
      lVar9 = lVar9 + -1;
      puVar5 = puVar7;
      lVar10 = lVar1;
    } while (uVar8 < uVar4);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar5;
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10571233c; end: 105712863; -[SCBitmoji3DBatchingSelfieFetcher _getOrCreateRequestForSelfieId:] */

void FUN_10571233c(long param_1,undefined1 *param_2,undefined *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_1b8 [8];
  undefined4 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x48);
  _objc_retain();
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  puVar3 = *(undefined **)(param_1 + 0x40);
  puVar14 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar4 == 0) || (lVar5 = lVar2, func_0x00010c08fa60(), lVar5 == 0)) {
      puVar3 = PTR_PTR_1126af5d0;
      puVar13 = PTR_PTR_1126ae6b8;
      puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar3;
      func_0x00010c0860a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar12);
      puVar3 = (undefined *)0x0;
    }
    else {
      _objc_initWeak(auStack_108,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain();
      lVar15 = *(long *)(param_1 + 0x38);
      func_0x00010c11f4c0(lVar4);
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c25ef60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126af5d0;
      puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c14f680(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_10571299c;
      puStack_120 = &UNK_110856f50;
      param_2 = auStack_108;
      _objc_copyWeak(auStack_110);
      uVar10 = uVar9;
      lStack_118 = lVar15;
      func_0x00010bf87460(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c11ac40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(puVar3);
      _objc_release(puVar13);
      _objc_release(uVar8);
      _objc_release(uVar7);
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      plStack_170 = (long *)0x0;
      _objc_retain(lVar15);
      lVar5 = lVar15;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        lVar16 = *plStack_170;
        do {
          lVar17 = 0;
          do {
            if (*plStack_170 != lVar16) {
              _objc_enumerationMutation(lVar15);
            }
            uStack_188 = *(undefined8 *)(lStack_178 + lVar17 * 8);
            puStack_1a8 = puVar14;
            uStack_1a0 = 0xc2000000;
            pcStack_198 = FUN_105712a88;
            puStack_190 = &UNK_1108ac970;
            uVar8 = uVar11;
            func_0x00010bfad7a0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010bfb0d80();
            _objc_retainAutoreleasedReturnValue();
            param_2 = auStack_108;
            _objc_copyWeak(auStack_1b8);
            uVar10 = uVar9;
            uStack_1b0 = uVar1;
            func_0x00010bfb2660(uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_destroyWeak(auStack_1b8);
            lVar17 = lVar17 + 1;
          } while (lVar5 != lVar17);
          lVar5 = lVar15;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar15);
      puVar3 = *(undefined **)(param_1 + 0x40);
      puVar14 = param_3;
      func_0x00010c0e00e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(uVar11);
      _objc_destroyWeak(auStack_110);
      _objc_release(lVar15);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_108);
      puVar13 = puVar3;
    }
    _objc_release(lVar4);
  }
  else {
    _objc_retain();
    puVar13 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
    puVar13 = puVar14;
    __Unwind_Resume(param_3);
    _objc_retain(param_2);
    _objc_retain(param_2);
    func_0x00010bfb2660(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105712864; end: 10571298f;  */

void FUN_105712864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010bfb2660(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105712990; end: 10571299b;  */

void FUN_105712990(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c174bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setByAddingObject__11263ad10,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10571299c; end: 105712a4f;  */

void FUN_10571299c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105712a50; end: 105712a53;  */

void FUN_105712a50(void)

{
  return;
}



/* Entry: 105712a54; end: 105712a87;  */

void FUN_105712a54(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105712a88; end: 105712b67;  */

undefined1 FUN_105712a88(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105712b68; end: 105712b9b;  */

void FUN_105712b68(long param_1,undefined8 param_2)

{
  func_0x00010bf4b900(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 105712b9c; end: 105712baf;  */

void FUN_105712b9c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105712bb0; end: 105712cff;  */

void FUN_105712bb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105712d00;
  uStack_60 = 0x105712d10;
  uStack_58 = 0;
  _objc_copyWeak(auStack_90,param_1 + 0x38);
  uStack_88 = *(undefined4 *)(param_1 + 0x40);
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_90);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105712d00; end: 105712d17;  */

void FUN_105712d00(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105712d18; end: 105712f9b;  */

void FUN_105712d18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar5);
  }
  else {
    puVar2 = *(undefined **)(lVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0e08a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105712f9c; end: 105713073; -[SCBitmoji3DBatchingSelfieFetcher _onBatchRequestError:] */

void FUN_105712f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105713074; end: 1057130a7;  */

void FUN_105713074(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12d4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057130a8; end: 10571312b; -[SCBitmoji3DBatchingSelfieFetcher .cxx_destruct] */

void FUN_1057130a8(long param_1)

{
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



/* Entry: 10571312c; end: 10571323b; -[SCBitmojiSelfieRequestBatcher initWithBatchedSceneFetcher:flatlandContentFetcher:renderStyleProvider:] */

undefined8 *
FUN_10571312c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9ec8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10571323c;
    puStack_60 = &UNK_1108aca30;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    ppuVar2 = &puStack_78;
    uStack_48 = param_5;
    _objc_retainBlock();
    uVar3 = puVar1[1];
    puVar1[1] = ppuVar2;
    _objc_release(uVar3);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10571323c; end: 1057132d7;  */

void FUN_10571323c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd6b0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff7580();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057132d8; end: 1057132f3; -[SCBitmojiSelfieRequestBatcher createBatchesForAvatarId:selfieIds:feature:batchSize:] */

void FUN_1057132d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001057132f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1057132f4; end: 1057132ff; -[SCBitmojiSelfieRequestBatcher .cxx_destruct] */

void FUN_1057132f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105713300; end: 1057134d3; -[SCBitmojiSelfieCollectionSource initWithDelegate:bitmojiAvatarProvider:bitmojiSelfieRequestBatcher:collectionView:] */

undefined8 *
FUN_105713300(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e9ed0;
  puVar1 = &uStack_60;
  uStack_60 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 10,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_opt_class(PTR_PTR_1126bd6b8);
    puVar3 = PTR_PTR_1126bd6b8;
    _objc_opt_class(PTR_PTR_1126bd6b8);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(param_7);
    _objc_release(puVar3);
    _objc_opt_class(PTR_PTR_1126bd6c0);
    puVar3 = PTR_PTR_1126bd6c0;
    _objc_opt_class(PTR_PTR_1126bd6c0);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126060(param_7);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    _objc_release(puVar3);
    puVar1[8] = param_1 * 0.0625;
    puVar1[7] = param_1 * 0.25;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1057134d4; end: 105713747; -[SCBitmojiSelfieCollectionSource reloadCollectionView:selfieIds:selectedSelfieId:] */

undefined8
FUN_1057134d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar2 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        func_0x00010c25d700(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar2);
        _objc_release(uVar2);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf12ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54c40(uVar8,param_2,uVar2,puVar1,0x2d,6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  _objc_release(uVar7);
  _objc_release(uVar2);
  lVar3 = param_4;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar3;
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar8);
  func_0x00010c128b60(param_3);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      func_0x00010bfecde0(uVar4,param_2,*(undefined8 *)(param_1 + 0x30));
      if (uVar4 != 0x7fffffffffffffff) {
        uVar5 = *(ulong *)(param_1 + 8);
        func_0x00010bf529e0();
        if (uVar4 < uVar5) {
          puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar4,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c158b60(param_3,param_2,puVar6,0,0);
          _objc_release(puVar6);
        }
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 105713748; end: 10571374f; -[SCBitmojiSelfieCollectionSource numberOfSectionsInCollectionView:] */

undefined8 FUN_105713748(void)

{
  return 1;
}



/* Entry: 105713750; end: 105713757; -[SCBitmojiSelfieCollectionSource collectionView:numberOfItemsInSection:] */

void FUN_105713750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105713758; end: 105713a2b; -[SCBitmojiSelfieCollectionSource collectionView:cellForItemAtIndexPath:] */

void FUN_105713758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd6b8;
  _objc_opt_class(PTR_PTR_1126bd6b8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010be9e540();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c142240();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar2);
  _objc_release(puVar1);
  func_0x00010c1af000(uVar2);
  func_0x00010c16dac0(uVar2);
  func_0x00010c239f60(uVar2);
  if (lVar3 != 0) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uVar7 = 0x2020000000;
    uStack_70 = 0x2020000000;
    _CACurrentMediaTime();
    uStack_68 = uVar7;
    _objc_initWeak(auStack_88,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = lVar3;
    func_0x00010c25d700(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaa000(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e0e60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(uVar2);
    _objc_copyWeak(auStack_90,auStack_88);
    uVar5 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_88);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105713a2c; end: 105713b47;  */

void FUN_105713a2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 105713b48; end: 105713c1b;  */

void FUN_105713b48(double param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c15ade0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071f40();
    _objc_release(uVar2);
    if (iVar1 != 0) {
      func_0x00010c16dac0(*(undefined8 *)(param_2 + 0x28));
    }
  }
  _CACurrentMediaTime();
  lVar3 = param_2 + 0x38;
  _objc_loadWeakRetained(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 - *(double *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18),
                      PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2fd20(lVar3);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105713c1c; end: 105713c1f;  */

void FUN_105713c1c(void)

{
  return;
}



/* Entry: 105713c20; end: 105713cbf; -[SCBitmojiSelfieCollectionSource collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_105713c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bd6c0;
  uVar3 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e120(param_3,param_2,uVar3,puVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105713cc0; end: 105713ccb; -[SCBitmojiSelfieCollectionSource collectionView:layout:sizeForItemAtIndexPath:] */

void FUN_105713cc0(void)

{
  return;
}



/* Entry: 105713ccc; end: 105713d23; -[SCBitmojiSelfieCollectionSource collectionView:didSelectItemAtIndexPath:] */

void FUN_105713ccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be9e540(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar1;
  _objc_release(uVar2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7af60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105713d24; end: 105713d2b; -[SCBitmojiSelfieCollectionSource collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_105713d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105713d2c; end: 105713d33; -[SCBitmojiSelfieCollectionSource collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_105713d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105713d34; end: 105713d4b; -[SCBitmojiSelfieCollectionSource collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_105713d34(void)

{
  return 0;
}



/* Entry: 105713d4c; end: 105713ddf; -[SCBitmojiSelfieCollectionSource collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16] FUN_105713d4c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c760();
      _CGRectGetWidth();
      _objc_release(puVar2);
      uVar3 = 0x4053000000000000;
      goto LAB_105713dcc;
    }
  }
  param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar3 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
LAB_105713dcc:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 105713de0; end: 105713e63; -[SCBitmojiSelfieCollectionSource _selfieIdAtIndexPath:] */

void FUN_105713de0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0840e0();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 < lVar2) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    func_0x00010c0dfd40(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105713e64; end: 105713eab; -[SCBitmojiSelfieCollectionSource _handleSelfieImageLoadWithTime:] */

void FUN_105713e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e4800();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105713eac; end: 105713eb3; -[SCBitmojiSelfieCollectionSource selectedSelfieId] */

undefined8 FUN_105713eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105713eb4; end: 105713f27; -[SCBitmojiSelfieCollectionSource .cxx_destruct] */

void FUN_105713eb4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105713f28; end: 105714223; -[SCBitmojiSelfiePickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105713f28(long param_1,undefined8 param_2)

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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  puVar1 = PTR_PTR_1126bd6c8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112728590;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112728594;
  lVar5 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c15af80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar11 = lVar25;
  func_0x00010c15afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112728598;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11272859c;
  lVar16 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0edb80();
  lVar18 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_1127285a0;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_1127285a4;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010be9e600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7d60(puVar1,param_2,lVar4,lVar7,lVar10,lVar12,lVar15,lVar17,lVar19,lVar21,lVar23,
                      lVar24);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar25);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar26;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105714224; end: 10571431b; -[SCBitmojiSelfiePickerEntryPoint _selfieRequestBatcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105714224(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126bd6d0;
  _objc_alloc(PTR_PTR_1126bd6d0);
  lVar2 = param_1 + _DAT_1127285a8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf173e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127285ac;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127285b0;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff75a0(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10571431c; end: 1057143a7; -[SCBitmojiSelfiePickerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571431c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11272859c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e9ed8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057143a8; end: 105714433; -[SCBitmojiSelfiePickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057143a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127285b0);
  _objc_destroyWeak(param_1 + _DAT_1127285a8);
  _objc_destroyWeak(param_1 + _DAT_1127285ac);
  _objc_destroyWeak(param_1 + _DAT_1127285a0);
  _objc_destroyWeak(param_1 + _DAT_1127285a4);
  _objc_destroyWeak(param_1 + _DAT_112728598);
  _objc_destroyWeak(param_1 + _DAT_112728594);
  _objc_destroyWeak(param_1 + _DAT_112728590);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272859c);
  return;
}



/* Entry: 105714434; end: 1057146c7; -[SCBitmojiSelfieViewController initWithBitmojiAvatarProvider:bitmojiSelfieFetcher:bitmojiSelfiePackProvider:bitmojiSelfieProvider:bitmojiLogger:page:scopeDelegate:circumstanceEngine:resourceDownloader:bitmojiSelfieRequestBatcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105714434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e9ee0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127285b4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127285b8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127285bc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127285c0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127285c4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127285c8) = param_8;
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127285cc,param_9);
    lVar4 = (long)_DAT_1127285d0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127285d4;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127285d8;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127285dc) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127285e0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127285e0) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127285e4) = 0;
    func_0x00010c189400(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057146c8; end: 105714ae7; -[SCBitmojiSelfieViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057146c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126e9ee0;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar7);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar10 = (long)_DAT_1127285e8;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  lVar7 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  uStack_a8 = uVar8;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_b8 = uVar8;
  uStack_88 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  uStack_c8 = uVar3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  uStack_e0 = uVar3;
  uStack_80 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  uStack_e8 = uVar4;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(lStack_d0);
  _objc_release(lStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a0);
  _objc_release(uStack_a8);
  puVar1 = PTR_PTR_1126bd6d8;
  _objc_alloc();
  func_0x00010c00a3c0();
  lVar9 = (long)_DAT_1127285ec;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
  lVar7 = *(long *)(param_1 + lVar10);
  func_0x00010c189840();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_105714ae8;
  puStack_128 = PTR_PTR_1126e9ee0;
  lStack_130 = lVar7;
  uStack_120 = uVar4;
  lStack_118 = lVar5;
  lStack_110 = lVar9;
  lStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_130,PTR_s_viewDidLoad_112684cd8);
  lVar5 = lVar7;
  func_0x00010c29bf00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar5);
  func_0x00010bee3d60(lVar7);
  func_0x00010c0af180(*(undefined8 *)(lVar7 + _DAT_1127285c4));
  _objc_initWeak(auStack_138,lVar7);
  uVar3 = *(undefined8 *)(lVar7 + _DAT_1127285b4);
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_140,auStack_138);
  uVar8 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar7 + _DAT_1127285f0);
  *(undefined8 *)(lVar7 + _DAT_1127285f0) = uVar8;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  return;
}



/* Entry: 105714ae8; end: 105714c47; -[SCBitmojiSelfieViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105714ae8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e9ee0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar1);
  func_0x00010bee3d60(param_1);
  func_0x00010c0af180(*(undefined8 *)(param_1 + _DAT_1127285c4));
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127285b4);
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127285f0);
  *(undefined8 *)(param_1 + _DAT_1127285f0) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105714c48; end: 105714c73;  */

void FUN_105714c48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105714c74; end: 105714d9f; -[SCBitmojiSelfieViewController _updateViewStates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105714c74(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar5 = (long)_DAT_1127285bc;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c15ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be889b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshSelfieCollectionView_11257fc08);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfaa0a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puVar4 = auStack_40;
  _objc_copyWeak(puVar4,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 105714da0; end: 105714dcb;  */

void FUN_105714da0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be889a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


