/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bd2334; end: 105bd2337; -[SCFriendsFeedViewAllCellViewModel isEqualToDiffableObject:] */

void FUN_105bd2334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isEqual__1125fa0c8);
  return;
}



/* Entry: 105bd2338; end: 105bd233f; -[SCFriendsFeedViewAllCellViewModel cellIdentifier] */

undefined8 FUN_105bd2338(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd2340; end: 105bd234b; -[SCFriendsFeedViewAllCellViewModel .cxx_destruct] */

void FUN_105bd2340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd234c; end: 105bd2493; -[SCFriendsFeedAnimationModel initWithPeekAPeekAnimationModel:avatarAnimationModel:mainLabelAnimationModel:subLabelAnimationModel:feedIconAnimationModel:typingAnimationState:] */

undefined1 *
FUN_105bd234c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ec2b0;
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd2494; end: 105bd24b7; -[SCFriendsFeedAnimationModel copyWithZone:] */

undefined8 FUN_105bd2494(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bd24b8; end: 105bd2553; -[SCFriendsFeedAnimationModel hash] */

undefined8 * FUN_105bd24b8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = &uStack_58;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105bd262c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105bd2638;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[6] == param_3[6])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[5];
              if (puVar6 != (undefined8 *)param_3[5]) {
                func_0x00010c071ae0();
                goto LAB_105bd2638;
              }
              goto LAB_105bd262c;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105bd2638:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105bd2554; end: 105bd2653; -[SCFriendsFeedAnimationModel isEqual:] */

long FUN_105bd2554(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105bd262c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bd2638;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
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
                goto LAB_105bd2638;
              }
              goto LAB_105bd262c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105bd2638:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bd2654; end: 105bd265b; -[SCFriendsFeedAnimationModel peekAPeekAnimationModel] */

undefined8 FUN_105bd2654(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd265c; end: 105bd2663; -[SCFriendsFeedAnimationModel avatarAnimationModel] */

undefined8 FUN_105bd265c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd2664; end: 105bd266b; -[SCFriendsFeedAnimationModel mainLabelAnimationModel] */

undefined8 FUN_105bd2664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd266c; end: 105bd2673; -[SCFriendsFeedAnimationModel subLabelAnimationModel] */

undefined8 FUN_105bd266c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bd2674; end: 105bd267b; -[SCFriendsFeedAnimationModel feedIconAnimationModel] */

undefined8 FUN_105bd2674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105bd267c; end: 105bd2683; -[SCFriendsFeedAnimationModel typingAnimationState] */

undefined8 FUN_105bd267c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105bd2684; end: 105bd26d7; -[SCFriendsFeedAnimationModel .cxx_destruct] */

void FUN_105bd2684(long param_1)

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



/* Entry: 105bd26d8; end: 105bd2837; -[SCFriendsFeedFriendmojiViewModel initWithFriendmojiText:friendmojiTextSize:expiringStreakFriendmojiText:expiringStreakFriendmojiTextSize:streakViewModelInfo:trailingIcon:badgeImage:] */

undefined1 *
FUN_105bd26d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ec2b8;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd2838; end: 105bd285b; -[SCFriendsFeedFriendmojiViewModel copyWithZone:] */

undefined8 FUN_105bd2838(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bd285c; end: 105bd2977; -[SCFriendsFeedFriendmojiViewModel hash] */

undefined8 * FUN_105bd285c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_105bd2a80:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105bd2a84;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)((long)puVar4 + 0x30) == *(double *)(param_3 + 0x30)) &&
         (bVar1 = false, !NAN(*(double *)((long)puVar4 + 0x38)) && !NAN(*(double *)(param_3 + 0x38))
         )) {
        bVar1 = *(double *)((long)puVar4 + 0x38) == *(double *)(param_3 + 0x38);
      }
      if (bVar1) {
        puVar8 = (undefined1 *)0x0;
        if ((*(double *)((long)puVar4 + 0x40) != *(double *)(param_3 + 0x40)) ||
           (*(double *)((long)puVar4 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_105bd2a84;
        lVar6 = *(long *)((long)puVar4 + 8);
        if (((((lVar6 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined1 **)((long)puVar4 + 0x28);
          if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_105bd2a84;
          }
          goto LAB_105bd2a80;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_105bd2a84:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 105bd2978; end: 105bd2a9f; -[SCFriendsFeedFriendmojiViewModel isEqual:] */

long FUN_105bd2978(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105bd2a80:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bd2a84;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x38)) && !NAN(*(double *)(param_3 + 0x38)))) {
        bVar1 = *(double *)(param_1 + 0x38) == *(double *)(param_3 + 0x38);
      }
      if (bVar1) {
        lVar4 = 0;
        if ((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
           (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_105bd2a84;
        lVar4 = *(long *)(param_1 + 8);
        if (((((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_105bd2a84;
          }
          goto LAB_105bd2a80;
        }
      }
    }
    lVar4 = 0;
  }
LAB_105bd2a84:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105bd2aa0; end: 105bd2aa7; -[SCFriendsFeedFriendmojiViewModel friendmojiText] */

undefined8 FUN_105bd2aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd2aa8; end: 105bd2aaf; -[SCFriendsFeedFriendmojiViewModel friendmojiTextSize] */

undefined1  [16] FUN_105bd2aa8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 105bd2ab0; end: 105bd2ab7; -[SCFriendsFeedFriendmojiViewModel expiringStreakFriendmojiText] */

undefined8 FUN_105bd2ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd2ab8; end: 105bd2abf; -[SCFriendsFeedFriendmojiViewModel expiringStreakFriendmojiTextSize] */

undefined1  [16] FUN_105bd2ab8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 105bd2ac0; end: 105bd2ac7; -[SCFriendsFeedFriendmojiViewModel streakViewModelInfo] */

undefined8 FUN_105bd2ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd2ac8; end: 105bd2acf; -[SCFriendsFeedFriendmojiViewModel trailingIcon] */

undefined8 FUN_105bd2ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bd2ad0; end: 105bd2ad7; -[SCFriendsFeedFriendmojiViewModel badgeImage] */

undefined8 FUN_105bd2ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105bd2ad8; end: 105bd2b2b; -[SCFriendsFeedFriendmojiViewModel .cxx_destruct] */

void FUN_105bd2ad8(long param_1)

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



/* Entry: 105bd2b2c; end: 105bd2b8b; -[SCFriendsFeedPostSnapActionsConfig initWithDefaultExpirationTimestamp:lensExplicitExpirationTimestamp:lensImplicitExpirationTimestamp:turnBasedPromptLensExpirationTimestamp:] */

void FUN_105bd2b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec2c0;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 105bd2b8c; end: 105bd2baf; -[SCFriendsFeedPostSnapActionsConfig copyWithZone:] */

undefined8 FUN_105bd2b8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bd2bb0; end: 105bd2c83; -[SCFriendsFeedPostSnapActionsConfig hash] */

ulong * FUN_105bd2bb0(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
        dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
          dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
            dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
              if (dVar7 <= 2.2250738585072014e-308) {
                dVar7 = 2.2250738585072014e-308;
              }
              puVar6 = (ulong *)(ulong)(ABS((double)puVar3[4] - (double)param_3[4]) < dVar7);
              goto LAB_105bd2db0;
            }
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_105bd2db0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105bd2c84; end: 105bd2dcb; -[SCFriendsFeedPostSnapActionsConfig isEqual:] */

bool FUN_105bd2c84(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
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
              goto LAB_105bd2db0;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_105bd2db0:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105bd2dcc; end: 105bd2dd3; -[SCFriendsFeedPostSnapActionsConfig defaultExpirationTimestamp] */

undefined8 FUN_105bd2dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd2dd4; end: 105bd2ddb; -[SCFriendsFeedPostSnapActionsConfig lensExplicitExpirationTimestamp] */

undefined8 FUN_105bd2dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd2ddc; end: 105bd2de3; -[SCFriendsFeedPostSnapActionsConfig lensImplicitExpirationTimestamp] */

undefined8 FUN_105bd2ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd2de4; end: 105bd2deb; -[SCFriendsFeedPostSnapActionsConfig turnBasedPromptLensExpirationTimestamp] */

undefined8 FUN_105bd2de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bd2dec; end: 105bd2ec3; -[SCFriendsFeedInteractionState initWithLastSnapSendByUserTimestamp:lastSnapViewByUserTimestamp:lastChatSendByUserTimestamp:] */

undefined1 *
FUN_105bd2dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ec2c8;
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



/* Entry: 105bd2ec4; end: 105bd2ee7; -[SCFriendsFeedInteractionState copyWithZone:] */

undefined8 FUN_105bd2ec4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bd2ee8; end: 105bd2f67; -[SCFriendsFeedInteractionState hash] */

undefined8 * FUN_105bd2ee8(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_105bd3000:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105bd300c;
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
            goto LAB_105bd300c;
          }
          goto LAB_105bd3000;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105bd300c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105bd2f68; end: 105bd3027; -[SCFriendsFeedInteractionState isEqual:] */

long FUN_105bd2f68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105bd3000:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bd300c;
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
            goto LAB_105bd300c;
          }
          goto LAB_105bd3000;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105bd300c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bd3028; end: 105bd302f; -[SCFriendsFeedInteractionState lastSnapSendByUserTimestamp] */

undefined8 FUN_105bd3028(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd3030; end: 105bd3037; -[SCFriendsFeedInteractionState lastSnapViewByUserTimestamp] */

undefined8 FUN_105bd3030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd3038; end: 105bd303f; -[SCFriendsFeedInteractionState lastChatSendByUserTimestamp] */

undefined8 FUN_105bd3038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd3040; end: 105bd307b; -[SCFriendsFeedInteractionState .cxx_destruct] */

void FUN_105bd3040(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd307c; end: 105bd30f3; -[SCFriendsFeedCellVisibilityEvent initWithCells:] */

undefined1 * FUN_105bd307c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec2d0;
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



/* Entry: 105bd30f4; end: 105bd3117; -[SCFriendsFeedCellVisibilityEvent copyWithZone:] */

undefined8 FUN_105bd30f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bd3118; end: 105bd311f; -[SCFriendsFeedCellVisibilityEvent hash] */

void FUN_105bd3118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105bd3120; end: 105bd31af; -[SCFriendsFeedCellVisibilityEvent isEqual:] */

long FUN_105bd3120(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bd3194;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105bd3194;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105bd3194;
    }
  }
  lVar3 = 1;
LAB_105bd3194:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bd31b0; end: 105bd31b7; -[SCFriendsFeedCellVisibilityEvent cells] */

undefined8 FUN_105bd31b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd31b8; end: 105bd31c3; -[SCFriendsFeedCellVisibilityEvent .cxx_destruct] */

void FUN_105bd31b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd31c4; end: 105bd327f; -[SCFriendsFeedVisibleCell initWithViewModel:percentVisible:index:] */

undefined1 *
FUN_105bd31c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ec2d8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd3280; end: 105bd32a3; -[SCFriendsFeedVisibleCell copyWithZone:] */

undefined8 FUN_105bd3280(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bd32a4; end: 105bd333b; -[SCFriendsFeedVisibleCell hash] */

undefined8 * FUN_105bd32a4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_105bd33f0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105bd33fc;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105bd33fc;
        }
        goto LAB_105bd33f0;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_105bd33fc:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 105bd333c; end: 105bd3417; -[SCFriendsFeedVisibleCell isEqual:] */

long FUN_105bd333c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105bd33f0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bd33fc;
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
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105bd33fc;
        }
        goto LAB_105bd33f0;
      }
    }
    lVar4 = 0;
  }
LAB_105bd33fc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105bd3418; end: 105bd341f; -[SCFriendsFeedVisibleCell viewModel] */

undefined8 FUN_105bd3418(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd3420; end: 105bd3427; -[SCFriendsFeedVisibleCell percentVisible] */

undefined8 FUN_105bd3420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd3428; end: 105bd342f; -[SCFriendsFeedVisibleCell index] */

undefined8 FUN_105bd3428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd3430; end: 105bd345f; -[SCFriendsFeedVisibleCell .cxx_destruct] */

void FUN_105bd3430(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd3460; end: 105bd3577; -[SCBillboardFeedHeaderPromptScope initWithHeaderViewContainer:navigationUIContainer:uiContainer:delegate:attributedPage:] */

undefined1 *
FUN_105bd3460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ec2e0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd3578; end: 105bd357f; -[SCBillboardFeedHeaderPromptScope headerViewContainer] */

undefined8 FUN_105bd3578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd3580; end: 105bd3587; -[SCBillboardFeedHeaderPromptScope navigationUIContainer] */

undefined8 FUN_105bd3580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd3588; end: 105bd358f; -[SCBillboardFeedHeaderPromptScope uiContainer] */

undefined8 FUN_105bd3588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd3590; end: 105bd3597; -[SCBillboardFeedHeaderPromptScope isDisplayingObservable] */

undefined8 FUN_105bd3590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bd3598; end: 105bd35af; -[SCBillboardFeedHeaderPromptScope delegate] */

void FUN_105bd3598(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd35b0; end: 105bd35bb; -[SCBillboardFeedHeaderPromptScope setDelegate:] */

void FUN_105bd35b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105bd35bc; end: 105bd35c3; -[SCBillboardFeedHeaderPromptScope attributedPage] */

undefined8 FUN_105bd35bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105bd35c4; end: 105bd3613; -[SCBillboardFeedHeaderPromptScope .cxx_destruct] */

void FUN_105bd35c4(long param_1)

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



/* Entry: 105bd3614; end: 105bd3797; -[SCFeedHeaderPromptItemViewModel initWithImageIcon:title:subtitle:accessibilityIdentifier:accessibilityLabel:extraButtonText:canDismiss:v3LayoutVariant:] */

undefined1 *
FUN_105bd3614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ec2e8;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd3798; end: 105bd37bb; -[SCFeedHeaderPromptItemViewModel copyWithZone:] */

undefined8 FUN_105bd3798(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bd37bc; end: 105bd386b; -[SCFeedHeaderPromptItemViewModel hash] */

undefined8 * FUN_105bd37bc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
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
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  puVar3 = &uStack_68;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105bd396c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105bd3978;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[8] == param_3[8])))) {
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
                puVar6 = (undefined8 *)puVar3[7];
                if (puVar6 != (undefined8 *)param_3[7]) {
                  func_0x00010c071ae0();
                  goto LAB_105bd3978;
                }
                goto LAB_105bd396c;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105bd3978:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105bd386c; end: 105bd3993; -[SCFeedHeaderPromptItemViewModel isEqual:] */

long FUN_105bd386c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105bd396c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bd3978;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
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
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_105bd3978;
                }
                goto LAB_105bd396c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105bd3978:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bd3994; end: 105bd399b; -[SCFeedHeaderPromptItemViewModel imageIcon] */

undefined8 FUN_105bd3994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd399c; end: 105bd39a3; -[SCFeedHeaderPromptItemViewModel title] */

undefined8 FUN_105bd399c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd39a4; end: 105bd39ab; -[SCFeedHeaderPromptItemViewModel subtitle] */

undefined8 FUN_105bd39a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bd39ac; end: 105bd39b3; -[SCFeedHeaderPromptItemViewModel accessibilityIdentifier] */

undefined8 FUN_105bd39ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105bd39b4; end: 105bd39bb; -[SCFeedHeaderPromptItemViewModel accessibilityLabel] */

undefined8 FUN_105bd39b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105bd39bc; end: 105bd39c3; -[SCFeedHeaderPromptItemViewModel extraButtonText] */

undefined8 FUN_105bd39bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105bd39c4; end: 105bd39cb; -[SCFeedHeaderPromptItemViewModel canDismiss] */

undefined1 FUN_105bd39c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105bd39cc; end: 105bd39d3; -[SCFeedHeaderPromptItemViewModel v3LayoutVariant] */

undefined8 FUN_105bd39cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105bd39d4; end: 105bd3a33; -[SCFeedHeaderPromptItemViewModel .cxx_destruct] */

void FUN_105bd39d4(long param_1)

{
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



/* Entry: 105bd3a34; end: 105bd3adb; +[SCFeedHeaderPromptItemImageIcon bitmojiSceneWithAvatarId:sceneId:renderStyle:] */

void FUN_105bd3a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae9d8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bd3adc; end: 105bd3ba7; +[SCFeedHeaderPromptItemImageIcon bitmojiSelfieWithAvatarId:userId:selfieId:] */

void FUN_105bd3adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae9d8;
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
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bd3ba8; end: 105bd3c13; +[SCFeedHeaderPromptItemImageIcon emojiWithEmojiString:] */

void FUN_105bd3ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae9d8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bd3c14; end: 105bd3c77; +[SCFeedHeaderPromptItemImageIcon urlWithIconUrl:] */

void FUN_105bd3c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae9d8;
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



/* Entry: 105bd3c78; end: 105bd3c9b; -[SCFeedHeaderPromptItemImageIcon copyWithZone:] */

undefined8 FUN_105bd3c78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bd3c9c; end: 105bd3d5b; -[SCFeedHeaderPromptItemImageIcon hash] */

void FUN_105bd3c9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
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
  lVar1 = *(long *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126ec2f0;
  puStack_a0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd3d5c; end: 105bd3d9f; -[SCFeedHeaderPromptItemImageIcon internalInit] */

void FUN_105bd3d5c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ec2f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd3da0; end: 105bd3edf; -[SCFeedHeaderPromptItemImageIcon isEqual:] */

long FUN_105bd3da0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105bd3eb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bd3ec4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
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
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_105bd3ec4;
                  }
                  goto LAB_105bd3eb8;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105bd3ec4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bd3ee0; end: 105bd3fdb; -[SCFeedHeaderPromptItemImageIcon matchUrl:bitmojiSelfie:bitmojiScene:emoji:] */

void FUN_105bd3ee0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 < 2) {
    if (lVar4 == 0) {
      if (param_3 == 0) goto LAB_105bd3fac;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar5 = *(code **)(param_3 + 0x10);
      lVar4 = param_3;
LAB_105bd3f8c:
      (*pcVar5)(lVar4,uVar1);
      goto LAB_105bd3fac;
    }
    if ((lVar4 != 1) || (param_4 == 0)) goto LAB_105bd3fac;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    pcVar5 = *(code **)(param_4 + 0x10);
    lVar4 = param_4;
  }
  else {
    if (lVar4 != 2) {
      if ((lVar4 != 3) || (param_6 == 0)) goto LAB_105bd3fac;
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      pcVar5 = *(code **)(param_6 + 0x10);
      lVar4 = param_6;
      goto LAB_105bd3f8c;
    }
    if (param_5 == 0) goto LAB_105bd3fac;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    pcVar5 = *(code **)(param_5 + 0x10);
    lVar4 = param_5;
  }
  (*pcVar5)(lVar4,uVar1,uVar2,uVar3);
LAB_105bd3fac:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bd3fdc; end: 105bd4047; -[SCFeedHeaderPromptItemImageIcon .cxx_destruct] */

void FUN_105bd3fdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105bd4048; end: 105bd413b; -[SCCommunitiesFeedSectionScope initWithCommunityId:delegate:viewContainer:uiContainer:] */

undefined1 *
FUN_105bd4048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126ec2f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd413c; end: 105bd4143; -[SCCommunitiesFeedSectionScope communityId] */

undefined8 FUN_105bd413c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd4144; end: 105bd414b; -[SCCommunitiesFeedSectionScope viewContainer] */

undefined8 FUN_105bd4144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd414c; end: 105bd4163; -[SCCommunitiesFeedSectionScope delegate] */

void FUN_105bd414c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd4164; end: 105bd416f; -[SCCommunitiesFeedSectionScope setDelegate:] */

void FUN_105bd4164(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105bd4170; end: 105bd4177; -[SCCommunitiesFeedSectionScope uiContainer] */

undefined8 FUN_105bd4170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bd4178; end: 105bd41bb; -[SCCommunitiesFeedSectionScope .cxx_destruct] */

void FUN_105bd4178(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd41bc; end: 105bd428f; -[SCFriendsFeedMoreUnreadScope initWithViewContainer:delegate:countObservable:unreadButtonShouldMatchNewChat:] */

undefined1 *
FUN_105bd41bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ec300;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd4290; end: 105bd4297; -[SCFriendsFeedMoreUnreadScope viewContainer] */

undefined8 FUN_105bd4290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd4298; end: 105bd42af; -[SCFriendsFeedMoreUnreadScope delegate] */

void FUN_105bd4298(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd42b0; end: 105bd42bb; -[SCFriendsFeedMoreUnreadScope setDelegate:] */

void FUN_105bd42b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105bd42bc; end: 105bd42c3; -[SCFriendsFeedMoreUnreadScope countObservable] */

undefined8 FUN_105bd42bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


