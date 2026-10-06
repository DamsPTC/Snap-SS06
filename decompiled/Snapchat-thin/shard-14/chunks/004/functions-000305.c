/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2558f4; end: 10b2558fb; -[SCEmojiInfo emojiPickerDesc] */

undefined8 FUN_10b2558f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b2558fc; end: 10b255903; -[SCEmojiInfo defaultVal] */

undefined8 FUN_10b2558fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b255904; end: 10b25590b; -[SCEmojiInfo emojiLegendRank] */

undefined8 FUN_10b255904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b25590c; end: 10b25596b; -[SCEmojiInfo .cxx_destruct] */

void FUN_10b25590c(long param_1)

{
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



/* Entry: 10b25596c; end: 10b25599b; -[SCNotificationsServices .cxx_destruct] */

void FUN_10b25596c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25599c; end: 10b2559a3; -[SCPlusServices featureBadging] */

undefined8 FUN_10b25599c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2559a4; end: 10b2559ab; -[SCPlusServices upsellManaging] */

undefined8 FUN_10b2559a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b2559ac; end: 10b2559b3; -[SCPlusServices mockSubscriptionManager] */

undefined8 FUN_10b2559ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b2559b4; end: 10b255a13; -[SCPlusServices .cxx_destruct] */

void FUN_10b2559b4(long param_1)

{
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



/* Entry: 10b255a14; end: 10b255a1b; -[SCPlusValueProvider currentValue] */

undefined8 FUN_10b255a14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b255a1c; end: 10b255a23; -[SCPlusValueProvider updates] */

undefined8 FUN_10b255a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b255a24; end: 10b255a53; -[SCPlusValueProvider .cxx_destruct] */

void FUN_10b255a24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b255a54; end: 10b255a77; -[SCPlusGatingStateValue copyWithZone:] */

undefined8 FUN_10b255a54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b255a78; end: 10b255a87; -[SCPlusGatingStateValue hash] */

long FUN_10b255a78(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10b255a88; end: 10b255aab; -[SCPlusSubscriptionInfo copyWithZone:] */

undefined8 FUN_10b255a88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b255aac; end: 10b255bbf; -[SCPlusSubscriptionInfo hash] */

ulong FUN_10b255aac(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar4 = &uStack_80;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  lVar2 = *(long *)(param_1 + 0x28);
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8);
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar9 >> 0x30);
  uStack_80 = (ulong)uVar1 & 0xff;
  uStack_78 = uVar9 >> 0x10 & 0xff;
  uVar9 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_68 = (ulong)uVar6;
  lStack_50 = -lVar2;
  if (-1 < lVar2) {
    lStack_50 = lVar2;
  }
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  lVar2 = *(long *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  lStack_40 = -lVar2;
  if (-1 < lVar2) {
    lStack_40 = lVar2;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar1 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  uStack_30 = (ulong)uVar1;
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  uStack_20 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_70 = uVar9;
  func_0x000107c3191c(&uStack_80,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return uVar9;
  }
  ___stack_chk_fail();
  return *(ulong *)((long)puVar4 + 0x30);
}



/* Entry: 10b255bc0; end: 10b255bc7; -[SCPlusSubscriptionInfo statusUpdatedAt] */

undefined8 FUN_10b255bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b255bc8; end: 10b255c27; -[SCPlusUpsellImpression initWithIsVisible:isTop:feature:] */

void FUN_10b255bc8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705e70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
  }
  return;
}



/* Entry: 10b255c28; end: 10b255c4b; -[SCPlusUpsellImpression copyWithZone:] */

undefined8 FUN_10b255c28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b255c4c; end: 10b255cb7; -[SCPlusUpsellImpression hash] */

ulong * FUN_10b255c4c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  lVar3 = *(long *)(param_1 + 0x10);
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
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 10b255cb8; end: 10b255d5f; -[SCPlusUpsellImpression isEqual:] */

bool FUN_10b255cb8(ulong param_1,undefined8 param_2,ulong param_3)

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
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b255d60; end: 10b255d67; -[SCPlusUpsellImpression isVisible] */

undefined1 FUN_10b255d60(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b255d68; end: 10b255d6f; -[SCPlusUpsellImpression isTop] */

undefined1 FUN_10b255d68(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b255d70; end: 10b255d77; -[SCPlusUpsellImpression feature] */

undefined8 FUN_10b255d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b255d78; end: 10b255dd7; +[SCPlusFeatureBadgingState badgeWithCutoffTime:lastClearTime:] */

void FUN_10b255d78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d19b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b255dd8; end: 10b255e2f; +[SCPlusFeatureBadgingState noBadgeWithCutoffTime:] */

void FUN_10b255dd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d19b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b255e30; end: 10b255e53; -[SCPlusFeatureBadgingState copyWithZone:] */

undefined8 FUN_10b255e30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b255e54; end: 10b255f0b; -[SCPlusFeatureBadgingState hash] */

void FUN_10b255e54(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 8);
  uVar2 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_30 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_28 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_20 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar1 = &uStack_38;
  func_0x000107c3191c(puVar1,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112705e78;
  puStack_70 = puVar1;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b255f0c; end: 10b255f4f; -[SCPlusFeatureBadgingState internalInit] */

void FUN_10b255f0c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112705e78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b255f50; end: 10b256073; -[SCPlusFeatureBadgingState isEqual:] */

bool FUN_10b255f50(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
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
      if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
        dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
          dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                    2.220446049250313e-16;
            if (dVar4 <= 2.2250738585072014e-308) {
              dVar4 = 2.2250738585072014e-308;
            }
            bVar1 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) < dVar4;
            goto LAB_10b256058;
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10b256058:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b256074; end: 10b2560fb; -[SCPlusFeatureBadgingState matchNoBadge:badge:] */

void FUN_10b256074(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_4);
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(*(undefined8 *)(param_1 + 0x10),param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2560fc; end: 10b25612b; -[SCOnDemandResourceDownloaderServices setDownloader:] */

void FUN_10b2560fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b25612c; end: 10b256137; -[SCOnDemandResourceDownloaderServices .cxx_destruct] */

void FUN_10b25612c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b256138; end: 10b2561a3; +[SCOnDemandResource scaleInsensitiveWithUrl:] */

void FUN_10b256138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aebd8;
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



/* Entry: 10b2561a4; end: 10b256233; +[SCOnDemandResource scaleSensitiveWithUrl2x:url3x:] */

void FUN_10b2561a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aebd8;
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



/* Entry: 10b256234; end: 10b256257; -[SCOnDemandResource copyWithZone:] */

undefined8 FUN_10b256234(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b256258; end: 10b2562db; -[SCOnDemandResource hash] */

void FUN_10b256258(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112705e88;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2562dc; end: 10b25631f; -[SCOnDemandResource internalInit] */

void FUN_10b2562dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112705e88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b256320; end: 10b2563ef; -[SCOnDemandResource isEqual:] */

long FUN_10b256320(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b2563c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b2563d4;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b2563d4;
          }
          goto LAB_10b2563c8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b2563d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b2563f0; end: 10b256477; -[SCOnDemandResource matchScaleSensitive:scaleInsensitive:] */

void FUN_10b2563f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b256478; end: 10b2564b3; -[SCOnDemandResource .cxx_destruct] */

void FUN_10b256478(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b2564b4; end: 10b256527; -[SCDynamicImageViewServices initWithDynamicImageViewFactory:] */

undefined1 * FUN_10b2564b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705e90;
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



/* Entry: 10b256528; end: 10b25652f; -[SCDynamicImageViewServices dynamicImageViewFactory] */

undefined8 FUN_10b256528(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b256530; end: 10b25655f; -[SCDynamicImageViewServices setDynamicImageViewFactory:] */

void FUN_10b256530(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b256560; end: 10b25656b; -[SCDynamicImageViewServices .cxx_destruct] */

void FUN_10b256560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25656c; end: 10b25659b; -[SCDynamicImageSourceProviderServices setDynamicImageSourceProviderFactory:] */

void FUN_10b25656c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b25659c; end: 10b2565a7; -[SCDynamicImageSourceProviderServices .cxx_destruct] */

void FUN_10b25659c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2565a8; end: 10b256653; -[SCDynamicImageSourceProviderConfigBuilder initWithContentReference:pageHierarchy:ttlInMinutes:] */

undefined1 *
FUN_10b2565a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705ea0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b256654; end: 10b2566b7; -[SCDynamicImageSourceProviderConfigBuilder setEncryptionKey:encryptionIV:] */

void FUN_10b256654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2566b8; end: 10b256707; -[SCDynamicImageSourceProviderConfigBuilder buildConfig] */

void FUN_10b2566b8(void)

{
  _objc_alloc(PTR_PTR_1126dfd28);
  func_0x00010c003ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b256708; end: 10b25674f; -[SCDynamicImageSourceProviderConfigBuilder .cxx_destruct] */

void FUN_10b256708(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b256750; end: 10b256863; -[SCDynamicImageSourceProviderConfig initWithContentReference:ttlInMinutes:pageHierarchy:encryptionKey:encryptionIV:] */

undefined1 *
FUN_10b256750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112705ea8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b256864; end: 10b256887; -[SCDynamicImageSourceProviderConfig copyWithZone:] */

undefined8 FUN_10b256864(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b256888; end: 10b256917; -[SCDynamicImageSourceProviderConfig hash] */

undefined8 * FUN_10b256888(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b2569d8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b2569e4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b2569e4;
            }
            goto LAB_10b2569d8;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b2569e4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b256918; end: 10b2569ff; -[SCDynamicImageSourceProviderConfig isEqual:] */

long FUN_10b256918(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b2569d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b2569e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b2569e4;
            }
            goto LAB_10b2569d8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b2569e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b256a00; end: 10b256a07; -[SCDynamicImageSourceProviderConfig contentReference] */

undefined8 FUN_10b256a00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b256a08; end: 10b256a0f; -[SCDynamicImageSourceProviderConfig ttlInMinutes] */

undefined8 FUN_10b256a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b256a10; end: 10b256a17; -[SCDynamicImageSourceProviderConfig pageHierarchy] */

undefined8 FUN_10b256a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b256a18; end: 10b256a1f; -[SCDynamicImageSourceProviderConfig encryptionKey] */

undefined8 FUN_10b256a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b256a20; end: 10b256a27; -[SCDynamicImageSourceProviderConfig encryptionIV] */

undefined8 FUN_10b256a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b256a28; end: 10b256b43; -[SCDynamicImageSourceProviderConfig .cxx_destruct] */

void FUN_10b256a28(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b256b44; end: 10b256b4f; -[SCFeatureSettingsService isBirthdayPartyEnabledAvailable] */

void FUN_10b256b44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e740b8);
  return;
}



/* Entry: 10b256b50; end: 10b256b5b; -[SCFeatureSettingsService birthdayPartyEnabledServerParam] */

undefined ** FUN_10b256b50(void)

{
  return &PTR____CFConstantStringClassReference_110e740b8;
}



/* Entry: 10b256b5c; end: 10b256b6b; -[SCFeatureSettingsService setBirthdayPartyEnabled:] */

void FUN_10b256b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e740b8,param_3);
  return;
}



/* Entry: 10b256b6c; end: 10b256b73; -[SCFeatureSettingsService is_birthday_party_enabled_client_value:] */

undefined * FUN_10b256b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b256b74; end: 10b256b7b; -[SCFeatureSettingsService is_birthday_party_enabled_server_value:] */

void FUN_10b256b74(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b256b7c; end: 10b256b8b; -[SCFeatureSettingsService birthdayPartyEnabled] */

void FUN_10b256b7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e740b8,0);
  return;
}



/* Entry: 10b256b8c; end: 10b256b97; -[SCFeatureSettingsService isBitmojiMerchUnifiedProfileCellProdDeeplinkURLAvailable] */

void FUN_10b256b8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e031f8);
  return;
}



/* Entry: 10b256b98; end: 10b256ba3; -[SCFeatureSettingsService bitmojiMerchUnifiedProfileCellProdDeeplinkURLServerParam] */

undefined ** FUN_10b256b98(void)

{
  return &PTR____CFConstantStringClassReference_110e031f8;
}



/* Entry: 10b256ba4; end: 10b256bcb; -[SCFeatureSettingsService snap_store_myprofile_prod_deeplink_client_value:] */

void FUN_10b256ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b256bcc; end: 10b256bf3; -[SCFeatureSettingsService snap_store_myprofile_prod_deeplink_server_value:] */

void FUN_10b256bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b256bf4; end: 10b256c03; -[SCFeatureSettingsService bitmojiMerchUnifiedProfileCellProdDeeplinkURL] */

void FUN_10b256bf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110e031f8,0);
  return;
}



/* Entry: 10b256c04; end: 10b256c0f; -[SCFeatureSettingsService isLogoutVerificationPromptsAvailable] */

void FUN_10b256c04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f1d8);
  return;
}



/* Entry: 10b256c10; end: 10b256c1b; -[SCFeatureSettingsService logoutVerificationPromptsServerParam] */

undefined ** FUN_10b256c10(void)

{
  return &PTR____CFConstantStringClassReference_110f5f1d8;
}



/* Entry: 10b256c1c; end: 10b256c2b; -[SCFeatureSettingsService setLogoutVerificationPrompts:] */

void FUN_10b256c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f1d8,param_3);
  return;
}



/* Entry: 10b256c2c; end: 10b256c33; -[SCFeatureSettingsService logout_verification_prompts_client_value:] */

void FUN_10b256c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b256c34; end: 10b256c3b; -[SCFeatureSettingsService logout_verification_prompts_server_value:] */

void FUN_10b256c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b256c3c; end: 10b256c4b; -[SCFeatureSettingsService logoutVerificationPrompts] */

void FUN_10b256c3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f1d8,0);
  return;
}



/* Entry: 10b256c4c; end: 10b256c57; -[SCFeatureSettingsService isNotificationUserTaggingAvailable] */

void FUN_10b256c4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f1f8);
  return;
}



/* Entry: 10b256c58; end: 10b256c63; -[SCFeatureSettingsService notificationUserTaggingServerParam] */

undefined ** FUN_10b256c58(void)

{
  return &PTR____CFConstantStringClassReference_110f5f1f8;
}



/* Entry: 10b256c64; end: 10b256c73; -[SCFeatureSettingsService setNotificationUserTagging:] */

void FUN_10b256c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f1f8,param_3);
  return;
}



/* Entry: 10b256c74; end: 10b256c7b; -[SCFeatureSettingsService notification_user_tagging_client_value:] */

undefined * FUN_10b256c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b256c7c; end: 10b256c83; -[SCFeatureSettingsService notification_user_tagging_server_value:] */

void FUN_10b256c7c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b256c84; end: 10b256c93; -[SCFeatureSettingsService notificationUserTagging] */

void FUN_10b256c84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f1f8,1);
  return;
}



/* Entry: 10b256c94; end: 10b256c9f; -[SCFeatureSettingsService isNotificationMemoriesAvailable] */

void FUN_10b256c94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f218);
  return;
}



/* Entry: 10b256ca0; end: 10b256cab; -[SCFeatureSettingsService notificationMemoriesServerParam] */

undefined ** FUN_10b256ca0(void)

{
  return &PTR____CFConstantStringClassReference_110f5f218;
}



/* Entry: 10b256cac; end: 10b256cbb; -[SCFeatureSettingsService setNotificationMemories:] */

void FUN_10b256cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f218,param_3);
  return;
}



/* Entry: 10b256cbc; end: 10b256cc3; -[SCFeatureSettingsService notification_memories_client_value:] */

undefined * FUN_10b256cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b256cc4; end: 10b256ccb; -[SCFeatureSettingsService notification_memories_server_value:] */

void FUN_10b256cc4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b256ccc; end: 10b256cdb; -[SCFeatureSettingsService notificationMemories] */

void FUN_10b256ccc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f218,1);
  return;
}



/* Entry: 10b256cdc; end: 10b256ce7; -[SCFeatureSettingsService isNotificationDreamsSuggestionsAvailable] */

void FUN_10b256cdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f238);
  return;
}



/* Entry: 10b256ce8; end: 10b256cf3; -[SCFeatureSettingsService notificationDreamsSuggestionsServerParam] */

undefined ** FUN_10b256ce8(void)

{
  return &PTR____CFConstantStringClassReference_110f5f238;
}



/* Entry: 10b256cf4; end: 10b256d03; -[SCFeatureSettingsService setNotificationDreamsSuggestions:] */

void FUN_10b256cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f238,param_3);
  return;
}



/* Entry: 10b256d04; end: 10b256d0b; -[SCFeatureSettingsService notification_dreams_suggestions_client_value:] */

undefined * FUN_10b256d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b256d0c; end: 10b256d13; -[SCFeatureSettingsService notification_dreams_suggestions_server_value:] */

void FUN_10b256d0c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b256d14; end: 10b256d23; -[SCFeatureSettingsService notificationDreamsSuggestions] */

void FUN_10b256d14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f238,1);
  return;
}



/* Entry: 10b256d24; end: 10b256d2f; -[SCFeatureSettingsService isNotificationFriendsBirthdayAvailable] */

void FUN_10b256d24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f258);
  return;
}



/* Entry: 10b256d30; end: 10b256d3b; -[SCFeatureSettingsService notificationFriendsBirthdayServerParam] */

undefined ** FUN_10b256d30(void)

{
  return &PTR____CFConstantStringClassReference_110f5f258;
}



/* Entry: 10b256d3c; end: 10b256d4b; -[SCFeatureSettingsService setNotificationFriendsBirthday:] */

void FUN_10b256d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f258,param_3);
  return;
}



/* Entry: 10b256d4c; end: 10b256d53; -[SCFeatureSettingsService notification_friends_birthday_client_value:] */

undefined * FUN_10b256d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}


