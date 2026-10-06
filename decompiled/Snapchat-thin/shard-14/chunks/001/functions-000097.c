/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afcca38; end: 10afcca3f; -[SCFriendsFeedFriendshipFlashbackContent messageTimestamp] */

undefined8 FUN_10afcca38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afcca40; end: 10afcca47; -[SCFriendsFeedFriendshipFlashbackContent messageCount] */

undefined8 FUN_10afcca40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afcca48; end: 10afcca77; -[SCFriendsFeedFriendshipFlashbackContent .cxx_destruct] */

void FUN_10afcca48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afcca78; end: 10afccb47; -[SCFriendsFeedItemInfo initWithFeedId:type:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10afcca78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112703aa0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112788098);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112788098) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278809c) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127880a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127880a0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afccb48; end: 10afccb6b; -[SCFriendsFeedItemInfo copyWithZone:] */

undefined8 FUN_10afccb48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afccb6c; end: 10afccbfb; -[SCFriendsFeedItemInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10afccb6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112788098);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11278809c);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127880a0);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afccca4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afcccb0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11278809c) == *(long *)(param_3 + _DAT_11278809c))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112788098);
      if ((lVar5 == *(long *)(param_3 + _DAT_112788098)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_1127880a0);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_1127880a0)) {
          func_0x00010c071ae0();
          goto LAB_10afcccb0;
        }
        goto LAB_10afccca4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afcccb0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afccbfc; end: 10afccccb; -[SCFriendsFeedItemInfo isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10afccbfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afccca4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afcccb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11278809c) == *(long *)(param_3 + (long)_DAT_11278809c))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112788098);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112788098)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_1127880a0);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_1127880a0)) {
          func_0x00010c071ae0();
          goto LAB_10afcccb0;
        }
        goto LAB_10afccca4;
      }
    }
    lVar3 = 0;
  }
LAB_10afcccb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afccccc; end: 10afcccdb; -[SCFriendsFeedItemInfo feedId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10afccccc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112788098);
}



/* Entry: 10afcccdc; end: 10afccceb; -[SCFriendsFeedItemInfo type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10afcccdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278809c);
}



/* Entry: 10afcccec; end: 10afcccfb; -[SCFriendsFeedItemInfo conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10afcccec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127880a0);
}



/* Entry: 10afcccfc; end: 10afccd3b; -[SCFriendsFeedItemInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afcccfc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127880a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112788098,0);
  return;
}



/* Entry: 10afccd3c; end: 10afccdaf; -[SCMapLocationContextServices initWithLocationContextFetcher:] */

undefined1 * FUN_10afccd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703aa8;
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



/* Entry: 10afccdb0; end: 10afccdb7; -[SCMapLocationContextServices locationContextFetcher] */

undefined8 FUN_10afccdb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afccdb8; end: 10afccdc3; -[SCMapLocationContextServices .cxx_destruct] */

void FUN_10afccdb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afccdc4; end: 10afcce9b; -[SCMapFriendLocationContext initWithFriendId:actionmojiSelfieId:locationContextCaptions:] */

undefined1 *
FUN_10afccdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112703ab0;
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



/* Entry: 10afcce9c; end: 10afccebf; -[SCMapFriendLocationContext copyWithZone:] */

undefined8 FUN_10afcce9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afccec0; end: 10afccf3f; -[SCMapFriendLocationContext hash] */

undefined8 * FUN_10afccec0(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10afccfd8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afccfe4;
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
            goto LAB_10afccfe4;
          }
          goto LAB_10afccfd8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afccfe4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afccf40; end: 10afccfff; -[SCMapFriendLocationContext isEqual:] */

long FUN_10afccf40(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afccfd8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afccfe4;
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
            goto LAB_10afccfe4;
          }
          goto LAB_10afccfd8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afccfe4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afcd000; end: 10afcd007; -[SCMapFriendLocationContext friendId] */

undefined8 FUN_10afcd000(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afcd008; end: 10afcd00f; -[SCMapFriendLocationContext actionmojiSelfieId] */

undefined8 FUN_10afcd008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afcd010; end: 10afcd017; -[SCMapFriendLocationContext locationContextCaptions] */

undefined8 FUN_10afcd010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afcd018; end: 10afcd053; -[SCMapFriendLocationContext .cxx_destruct] */

void FUN_10afcd018(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afcd054; end: 10afcd153; -[SCMapLocationContextCaption initWithType:text:effectiveSecsAgo:expireAfterSecs:priority:additionalInfo:timeZoneInfo:] */

undefined1 *
FUN_10afcd054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112703ab8;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10afcd154; end: 10afcd177; -[SCMapLocationContextCaption copyWithZone:] */

undefined8 FUN_10afcd154(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afcd178; end: 10afcd24b; -[SCMapLocationContextCaption hash] */

undefined8 * FUN_10afcd178(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x30);
  lStack_38 = -lVar6;
  if (-1 < lVar6) {
    lStack_38 = lVar6;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10afcd36c:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afcd378;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30))))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
        dVar9 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if (((bVar1) &&
            ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined1 **)((long)puVar4 + 0x38);
          if (puVar8 != *(undefined1 **)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10afcd378;
          }
          goto LAB_10afcd36c;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10afcd378:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10afcd24c; end: 10afcd393; -[SCMapLocationContextCaption isEqual:] */

long FUN_10afcd24c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afcd36c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afcd378;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
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
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x38);
          if (lVar4 != *(long *)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10afcd378;
          }
          goto LAB_10afcd36c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10afcd378:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afcd394; end: 10afcd39b; -[SCMapLocationContextCaption type] */

undefined8 FUN_10afcd394(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afcd39c; end: 10afcd3a3; -[SCMapLocationContextCaption text] */

undefined8 FUN_10afcd39c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afcd3a4; end: 10afcd3ab; -[SCMapLocationContextCaption effectiveSecsAgo] */

undefined8 FUN_10afcd3a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afcd3ac; end: 10afcd3b3; -[SCMapLocationContextCaption expireAfterSecs] */

undefined8 FUN_10afcd3ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afcd3b4; end: 10afcd3bb; -[SCMapLocationContextCaption priority] */

undefined8 FUN_10afcd3b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afcd3bc; end: 10afcd3c3; -[SCMapLocationContextCaption additionalInfo] */

undefined8 FUN_10afcd3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afcd3c4; end: 10afcd3cb; -[SCMapLocationContextCaption timeZoneInfo] */

undefined8 FUN_10afcd3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afcd3cc; end: 10afcd407; -[SCMapLocationContextCaption .cxx_destruct] */

void FUN_10afcd3cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afcd408; end: 10afcd47f; -[SCMapLocationContextRequest initWithFriendIds:] */

undefined1 * FUN_10afcd408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703ac0;
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



/* Entry: 10afcd480; end: 10afcd4a3; -[SCMapLocationContextRequest copyWithZone:] */

undefined8 FUN_10afcd480(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afcd4a4; end: 10afcd4ab; -[SCMapLocationContextRequest hash] */

void FUN_10afcd4a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10afcd4ac; end: 10afcd53b; -[SCMapLocationContextRequest isEqual:] */

long FUN_10afcd4ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afcd520;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10afcd520;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afcd520;
    }
  }
  lVar3 = 1;
LAB_10afcd520:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afcd53c; end: 10afcd543; -[SCMapLocationContextRequest friendIds] */

undefined8 FUN_10afcd53c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afcd544; end: 10afcd54f; -[SCMapLocationContextRequest .cxx_destruct] */

void FUN_10afcd544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afcd550; end: 10afcd5d7; -[SCMapLocationContextResponse initWithFriendLocationContexts:nextRequestAfterSecs:] */

undefined1 *
FUN_10afcd550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703ac8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afcd5d8; end: 10afcd5fb; -[SCMapLocationContextResponse copyWithZone:] */

undefined8 FUN_10afcd5d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afcd5fc; end: 10afcd687; -[SCMapLocationContextResponse hash] */

undefined8 * FUN_10afcd5fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afcd724:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afcd730;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10afcd730;
        }
        goto LAB_10afcd724;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afcd730:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afcd688; end: 10afcd74b; -[SCMapLocationContextResponse isEqual:] */

long FUN_10afcd688(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afcd724:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afcd730;
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
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10afcd730;
        }
        goto LAB_10afcd724;
      }
    }
    lVar4 = 0;
  }
LAB_10afcd730:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afcd74c; end: 10afcd753; -[SCMapLocationContextResponse friendLocationContexts] */

undefined8 FUN_10afcd74c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afcd754; end: 10afcd75b; -[SCMapLocationContextResponse nextRequestAfterSecs] */

undefined8 FUN_10afcd754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afcd75c; end: 10afcd767; -[SCMapLocationContextResponse .cxx_destruct] */

void FUN_10afcd75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afcd768; end: 10afcd7af; -[SCMapLocationContextTimeZoneInfo initWithUtcOffsetSecs:] */

void FUN_10afcd768(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112703ad0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10afcd7b0; end: 10afcd7d3; -[SCMapLocationContextTimeZoneInfo copyWithZone:] */

undefined8 FUN_10afcd7b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afcd7d4; end: 10afcd7fb; -[SCMapLocationContextTimeZoneInfo hash] */

ulong FUN_10afcd7d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
  return uVar1 ^ uVar1 >> 0x16;
}



/* Entry: 10afcd7fc; end: 10afcd8a7; -[SCMapLocationContextTimeZoneInfo isEqual:] */

bool FUN_10afcd7fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
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
      if ((uVar2 & 1) == 0) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10afcd8a8; end: 10afcd8af; -[SCMapLocationContextTimeZoneInfo utcOffsetSecs] */

undefined8 FUN_10afcd8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afcd8b0; end: 10afcd9e7; -[SCMapFriendContextInfo initWithFriendId:friendIconUrl:friendIconType:actionmojiSelfieId:locationContext:] */

undefined1 *
FUN_10afcd8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112703ad8;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afcd9e8; end: 10afcda0b; -[SCMapFriendContextInfo copyWithZone:] */

undefined8 FUN_10afcd9e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afcda0c; end: 10afcdaa3; -[SCMapFriendContextInfo hash] */

undefined8 * FUN_10afcda0c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afcdb6c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afcdb78;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10afcdb78;
              }
              goto LAB_10afcdb6c;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afcdb78:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afcdaa4; end: 10afcdb93; -[SCMapFriendContextInfo isEqual:] */

long FUN_10afcdaa4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afcdb6c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afcdb78;
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
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10afcdb78;
              }
              goto LAB_10afcdb6c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afcdb78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afcdb94; end: 10afcdb9b; -[SCMapFriendContextInfo friendId] */

undefined8 FUN_10afcdb94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afcdb9c; end: 10afcdba3; -[SCMapFriendContextInfo friendIconUrl] */

undefined8 FUN_10afcdb9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afcdba4; end: 10afcdbab; -[SCMapFriendContextInfo friendIconType] */

undefined8 FUN_10afcdba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afcdbac; end: 10afcdbb3; -[SCMapFriendContextInfo actionmojiSelfieId] */

undefined8 FUN_10afcdbac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afcdbb4; end: 10afcdbbb; -[SCMapFriendContextInfo locationContext] */

undefined8 FUN_10afcdbb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afcdbbc; end: 10afcdc0f; -[SCMapFriendContextInfo .cxx_destruct] */

void FUN_10afcdbbc(long param_1)

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



/* Entry: 10afcdc10; end: 10afcdccf; -[SCMapFriendsFeedLocationContext initWithType:text:effectiveSecsAgo:expireAfterSecs:] */

undefined1 *
FUN_10afcdc10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703ae0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10afcdcd0; end: 10afcdcf3; -[SCMapFriendsFeedLocationContext copyWithZone:] */

undefined8 FUN_10afcdcd0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afcdcf4; end: 10afcddab; -[SCMapFriendsFeedLocationContext hash] */

undefined8 * FUN_10afcdcf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_40 = uVar3;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10afcde94:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afcdea0;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS((double)puVar4[3] - (double)param_3[3]);
      dVar9 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS((double)puVar4[4] - (double)param_3[4]);
        dVar9 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if ((bVar1) &&
           ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = (undefined8 *)puVar4[2];
          if (puVar8 != (undefined8 *)param_3[2]) {
            func_0x00010c071ae0();
            goto LAB_10afcdea0;
          }
          goto LAB_10afcde94;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10afcdea0:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10afcddac; end: 10afcdebb; -[SCMapFriendsFeedLocationContext isEqual:] */

long FUN_10afcddac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afcde94:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afcdea0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
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
        if ((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x10);
          if (lVar4 != *(long *)(param_3 + 0x10)) {
            func_0x00010c071ae0();
            goto LAB_10afcdea0;
          }
          goto LAB_10afcde94;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10afcdea0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afcdebc; end: 10afcdec3; -[SCMapFriendsFeedLocationContext type] */

undefined8 FUN_10afcdebc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afcdec4; end: 10afcdecb; -[SCMapFriendsFeedLocationContext text] */

undefined8 FUN_10afcdec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afcdecc; end: 10afcded3; -[SCMapFriendsFeedLocationContext effectiveSecsAgo] */

undefined8 FUN_10afcdecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afcded4; end: 10afcdedb; -[SCMapFriendsFeedLocationContext expireAfterSecs] */

undefined8 FUN_10afcded4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afcdedc; end: 10afcdf0b; -[SCMapFriendsFeedLocationContext .cxx_destruct] */

void FUN_10afcdedc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afcdf0c; end: 10afcdfbf; -[SCMapGroupLocationContextCaption initWithCaptionText:effectiveSecsAgo:applicableUserIds:] */

undefined1 *
FUN_10afcdf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112703ae8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afcdfc0; end: 10afcdfe3; -[SCMapGroupLocationContextCaption copyWithZone:] */

undefined8 FUN_10afcdfc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afcdfe4; end: 10afce063; -[SCMapGroupLocationContextCaption hash] */

undefined8 * FUN_10afcdfe4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10afce0f4:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afce100;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afce100;
        }
        goto LAB_10afce0f4;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10afce100:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10afce064; end: 10afce11b; -[SCMapGroupLocationContextCaption isEqual:] */

long FUN_10afce064(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afce0f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afce100;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afce100;
        }
        goto LAB_10afce0f4;
      }
    }
    lVar3 = 0;
  }
LAB_10afce100:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afce11c; end: 10afce123; -[SCMapGroupLocationContextCaption captionText] */

undefined8 FUN_10afce11c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afce124; end: 10afce12b; -[SCMapGroupLocationContextCaption effectiveSecsAgo] */

undefined8 FUN_10afce124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afce12c; end: 10afce133; -[SCMapGroupLocationContextCaption applicableUserIds] */

undefined8 FUN_10afce12c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afce134; end: 10afce163; -[SCMapGroupLocationContextCaption .cxx_destruct] */

void FUN_10afce134(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afce164; end: 10afce1db; -[SCMapGroupLocationContextRequest initWithUserIds:] */

undefined1 * FUN_10afce164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703af0;
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



/* Entry: 10afce1dc; end: 10afce1ff; -[SCMapGroupLocationContextRequest copyWithZone:] */

undefined8 FUN_10afce1dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afce200; end: 10afce207; -[SCMapGroupLocationContextRequest hash] */

void FUN_10afce200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10afce208; end: 10afce297; -[SCMapGroupLocationContextRequest isEqual:] */

long FUN_10afce208(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afce27c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10afce27c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afce27c;
    }
  }
  lVar3 = 1;
LAB_10afce27c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afce298; end: 10afce29f; -[SCMapGroupLocationContextRequest userIds] */

undefined8 FUN_10afce298(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afce2a0; end: 10afce2ab; -[SCMapGroupLocationContextRequest .cxx_destruct] */

void FUN_10afce2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afce2ac; end: 10afce333; -[SCMapGroupLocationContextResponse initWithGroupLocationContextCaptions:nextRequestAfterSecs:] */

undefined1 *
FUN_10afce2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703af8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afce334; end: 10afce357; -[SCMapGroupLocationContextResponse copyWithZone:] */

undefined8 FUN_10afce334(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afce358; end: 10afce3e3; -[SCMapGroupLocationContextResponse hash] */

undefined8 * FUN_10afce358(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afce480:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afce48c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10afce48c;
        }
        goto LAB_10afce480;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afce48c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afce3e4; end: 10afce4a7; -[SCMapGroupLocationContextResponse isEqual:] */

long FUN_10afce3e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afce480:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afce48c;
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
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10afce48c;
        }
        goto LAB_10afce480;
      }
    }
    lVar4 = 0;
  }
LAB_10afce48c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afce4a8; end: 10afce4af; -[SCMapGroupLocationContextResponse groupLocationContextCaptions] */

undefined8 FUN_10afce4a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afce4b0; end: 10afce4b7; -[SCMapGroupLocationContextResponse nextRequestAfterSecs] */

undefined8 FUN_10afce4b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afce4b8; end: 10afce4c3; -[SCMapGroupLocationContextResponse .cxx_destruct] */

void FUN_10afce4b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afce4c4; end: 10afce4e7; -[SCNMessagingUploadResult copyWithZone:] */

undefined8 FUN_10afce4c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afce4e8; end: 10afce4ef; -[SCNativeMessagingServices nativeCommunityFeedManager] */

undefined8 FUN_10afce4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afce4f0; end: 10afce4f7; -[SCNativeMessagingServices conversationUpdateAccumulatedAnnouncer] */

undefined8 FUN_10afce4f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afce4f8; end: 10afce4ff; -[SCNativeMessagingServices notificationCenterUpdateAnnouncer] */

undefined8 FUN_10afce4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afce500; end: 10afce507; -[SCNativeMessagingServices topGroupsIdsObservable] */

undefined8 FUN_10afce500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10afce508; end: 10afce50f; -[SCNativeMessagingServices nativePostSnapInteractionEvents] */

undefined8 FUN_10afce508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10afce510; end: 10afce60b; -[SCNativeMessagingServices .cxx_destruct] */

void FUN_10afce510(long param_1)

{
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



/* Entry: 10afce60c; end: 10afce787; -[SCArroyoFeedDataUpdateListenerAnnouncer description] */

void FUN_10afce60c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  func_0x000107c2bc88(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


