/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004b5b4c; end: 004b5b53; -[SCExtensionSnapchatter bitmojiInfo] */

undefined8 FUN_004b5b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 004b5b54; end: 004b5b5b; -[SCExtensionSnapchatter streakInfo] */

undefined8 FUN_004b5b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 004b5b5c; end: 004b5b63; -[SCExtensionSnapchatter birthday] */

undefined8 FUN_004b5b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 004b5b64; end: 004b5b6b; -[SCExtensionSnapchatter isMutualFriend] */

undefined1 FUN_004b5b64(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 004b5b6c; end: 004b5bef; -[SCExtensionSnapchatter .cxx_destruct] */

void FUN_004b5b6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 004b5bf0; end: 004b5cfb; -[SCExtensionSnapchatterRepository initWithBestFriends:recents:friends:groups:] */

undefined1 *
FUN_004b5bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_00ac3e00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
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



/* Entry: 004b5cfc; end: 004b5dfb; -[SCExtensionSnapchatterRepository initWithCoder:] */

undefined1 * FUN_004b5cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3e00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004b5dfc; end: 004b5e1f; -[SCExtensionSnapchatterRepository copyWithZone:] */

undefined8 FUN_004b5dfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004b5e20; end: 004b5ea7; -[SCExtensionSnapchatterRepository encodeWithCoder:] */

void FUN_004b5e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0078bfa0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a29840);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a29860);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a29880);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                  &PTR____CFConstantStringClassReference_00a298a0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004b5ea8; end: 004b5f33; -[SCExtensionSnapchatterRepository hash] */

undefined8 * FUN_004b5ea8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x007843a0();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x0076fd30(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_004b5fe4:
    puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_004b5ff0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x007877e0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x007877e0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x007877e0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x007877e0();
              goto LAB_004b5ff0;
            }
            goto LAB_004b5fe4;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_004b5ff0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 004b5f34; end: 004b600b; -[SCExtensionSnapchatterRepository isEqual:] */

long FUN_004b5f34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004b5fe4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004b5ff0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x007877e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x007877e0();
              goto LAB_004b5ff0;
            }
            goto LAB_004b5fe4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_004b5ff0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004b600c; end: 004b6013; -[SCExtensionSnapchatterRepository bestFriends] */

undefined8 FUN_004b600c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004b6014; end: 004b601b; -[SCExtensionSnapchatterRepository recents] */

undefined8 FUN_004b6014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004b601c; end: 004b6023; -[SCExtensionSnapchatterRepository friends] */

undefined8 FUN_004b601c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004b6024; end: 004b602b; -[SCExtensionSnapchatterRepository groups] */

undefined8 FUN_004b6024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004b602c; end: 004b6073; -[SCExtensionSnapchatterRepository .cxx_destruct] */

void FUN_004b602c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004b6074; end: 004b6213; -[SCExtensionBitmojiAvatarInfo initWithCoder:] */

undefined1 * FUN_004b6074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCExtensionBitmojiAvatarInfo_00ac3e08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004b6214; end: 004b63db; -[SCExtensionBitmojiAvatarInfo initWithUserId:bitmojiDownloadUrl:bitmojiBiggieDownloadUrl:bitmoji3DBiggieDownloadUrl:bitmojiAttribution:silhouetteColor:avatarId:backgroundId:] */

undefined1 *
FUN_004b6214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR__OBJC_CLASS___SCExtensionBitmojiAvatarInfo_00ac3e08;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
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



/* Entry: 004b63dc; end: 004b63ff; -[SCExtensionBitmojiAvatarInfo copyWithZone:] */

undefined8 FUN_004b63dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004b6400; end: 004b64d7; -[SCExtensionBitmojiAvatarInfo encodeWithCoder:] */

void FUN_004b6400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0078bfa0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a29700);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a298c0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a298e0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                  &PTR____CFConstantStringClassReference_00a29900);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                  &PTR____CFConstantStringClassReference_00a29920);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                  &PTR____CFConstantStringClassReference_00a29940);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                  &PTR____CFConstantStringClassReference_00a29960);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                  &PTR____CFConstantStringClassReference_00a29980);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004b64d8; end: 004b6593; -[SCExtensionBitmojiAvatarInfo hash] */

undefined8 * FUN_004b64d8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x007843a0();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x0076fd30(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_004b66a4:
    puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_004b66b0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x007877e0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x007877e0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x007877e0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x007877e0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x007877e0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00787820(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x007877e0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[8];
                    if (puVar6 != (undefined8 *)param_3[8]) {
                      func_0x007877e0();
                      goto LAB_004b66b0;
                    }
                    goto LAB_004b66a4;
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
LAB_004b66b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 004b6594; end: 004b66cb; -[SCExtensionBitmojiAvatarInfo isEqual:] */

long FUN_004b6594(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004b66a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004b66b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x007877e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x007877e0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x007877e0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00787820(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x007877e0(), (int)lVar3 != 0))
                  {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if (lVar3 != *(long *)(param_3 + 0x40)) {
                      func_0x007877e0();
                      goto LAB_004b66b0;
                    }
                    goto LAB_004b66a4;
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
LAB_004b66b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004b66cc; end: 004b66d3; -[SCExtensionBitmojiAvatarInfo userId] */

undefined8 FUN_004b66cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004b66d4; end: 004b66db; -[SCExtensionBitmojiAvatarInfo bitmojiDownloadUrl] */

undefined8 FUN_004b66d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004b66dc; end: 004b66e3; -[SCExtensionBitmojiAvatarInfo bitmojiBiggieDownloadUrl] */

undefined8 FUN_004b66dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004b66e4; end: 004b66eb; -[SCExtensionBitmojiAvatarInfo bitmoji3DBiggieDownloadUrl] */

undefined8 FUN_004b66e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004b66ec; end: 004b66f3; -[SCExtensionBitmojiAvatarInfo bitmojiAttribution] */

undefined8 FUN_004b66ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004b66f4; end: 004b66fb; -[SCExtensionBitmojiAvatarInfo silhouetteColor] */

undefined8 FUN_004b66f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 004b66fc; end: 004b6703; -[SCExtensionBitmojiAvatarInfo avatarId] */

undefined8 FUN_004b66fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 004b6704; end: 004b670b; -[SCExtensionBitmojiAvatarInfo backgroundId] */

undefined8 FUN_004b6704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 004b670c; end: 004b6783; -[SCExtensionBitmojiAvatarInfo .cxx_destruct] */

void FUN_004b670c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004b6784; end: 004b681f; -[SCExtensionSnapchatterStreakInfo initWithCoder:] */

undefined1 * FUN_004b6784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3e10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00781ac0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004b6820; end: 004b68a7; -[SCExtensionSnapchatterStreakInfo initWithStreakCount:expirationDate:] */

undefined1 *
FUN_004b6820(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3e10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 004b68a8; end: 004b68cb; -[SCExtensionSnapchatterStreakInfo copyWithZone:] */

undefined8 FUN_004b68a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004b68cc; end: 004b692b; -[SCExtensionSnapchatterStreakInfo encodeWithCoder:] */

void FUN_004b68cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00782740(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a299a0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a299c0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004b692c; end: 004b698f; -[SCExtensionSnapchatterStreakInfo hash] */

long * FUN_004b692c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_28 = (long)*(int *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  plVar2 = &lStack_28;
  uStack_20 = uVar1;
  func_0x0076fd30(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != param_3) {
    plVar4 = (long *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_004b6a14;
    plVar4 = plVar2;
    _objc_opt_class(plVar2);
    plVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar4);
    if ((((ulong)plVar3 & 1) == 0) || ((int)plVar2[1] != (int)param_3[1])) {
      plVar4 = (long *)0x0;
      goto LAB_004b6a14;
    }
    plVar4 = (long *)plVar2[2];
    if (plVar4 != (long *)param_3[2]) {
      func_0x007877e0();
      goto LAB_004b6a14;
    }
  }
  plVar4 = (long *)((long)&MACH_HEADER.magic + 1);
LAB_004b6a14:
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 004b6990; end: 004b6a2f; -[SCExtensionSnapchatterStreakInfo isEqual:] */

long FUN_004b6990(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004b6a14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_004b6a14;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x007877e0();
      goto LAB_004b6a14;
    }
  }
  lVar3 = 1;
LAB_004b6a14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004b6a30; end: 004b6a37; -[SCExtensionSnapchatterStreakInfo streakCount] */

undefined4 FUN_004b6a30(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 004b6a38; end: 004b6a3f; -[SCExtensionSnapchatterStreakInfo expirationDate] */

undefined8 FUN_004b6a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004b6a40; end: 004b6a4b; -[SCExtensionSnapchatterStreakInfo .cxx_destruct] */

void FUN_004b6a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 004b6a4c; end: 004b6abf; -[SCExtensionGrpcAuthContextDelegate initWithTokenProvider:] */

undefined1 * FUN_004b6a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_00ac3e18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004b6ac0; end: 004b6e2b; -[SCExtensionGrpcAuthContextDelegate getAuthContext:callback:] */

void FUN_004b6ac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00783180(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 004b6e2c; end: 004b6e37; -[SCExtensionGrpcAuthContextDelegate .cxx_destruct] */

void FUN_004b6e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004b6e38; end: 004b6f1f; +[SCNMessagingUUID UUIDWithString:] */

void FUN_004b6e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_00ac2fe0;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00786c40();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00784120(puVar1,param_2,auStack_48);
    puVar2 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007815e0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,auStack_48,0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___SCNMessagingUUID_00ac2fe8;
    _objc_alloc();
    func_0x00785860();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
    puVar1 = PTR__OBJC_CLASS___NSUUID_00ac2fe0;
    func_0x0077bce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00784120();
    puVar2 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007815e0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,auStack_98,0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___SCNMessagingUUID_00ac2fe8;
    _objc_alloc();
    func_0x00785860();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_88) {
      ___stack_chk_fail();
      puVar2 = PTR__OBJC_CLASS___NSUUID_00ac2fe0;
      _objc_alloc(PTR__OBJC_CLASS___NSUUID_00ac2fe0);
      func_0x00784560(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      _objc_retainAutorelease();
      func_0x0077fde0();
      func_0x00786c20(puVar2,param_2,puVar3);
      _objc_release(puVar1);
      puVar1 = puVar2;
      func_0x0077bd00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00788bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 004b6f20; end: 004b6fdf; +[SCNMessagingUUID RandomUUID] */

void FUN_004b6f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSUUID_00ac2fe0;
  func_0x0077bce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00784120();
  puVar2 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x007815e0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,auStack_48,0x10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCNMessagingUUID_00ac2fe8;
  _objc_alloc();
  func_0x00785860();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSUUID_00ac2fe0;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_00ac2fe0);
    func_0x00784560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    _objc_retainAutorelease();
    func_0x0077fde0();
    func_0x00786c20(puVar2,param_2,puVar3);
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x0077bd00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00788bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 004b6fe0; end: 004b707f; -[SCNMessagingUUID toString] */

void FUN_004b6fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_00ac2fe0;
  _objc_alloc(PTR__OBJC_CLASS___NSUUID_00ac2fe0);
  func_0x00784560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  _objc_retainAutorelease();
  func_0x0077fde0();
  func_0x00786c20(puVar1,param_2,uVar2);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x0077bd00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00788bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 004b7080; end: 004b70a3; -[SCNMessagingUUID copyWithZone:] */

undefined8 FUN_004b7080(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004b70a4; end: 004b721f;  */

undefined8 * FUN_004b70a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_198;
  undefined1 auStack_190 [24];
  undefined1 uStack_178;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_198 = 0x200000001;
  FUN_00425cb4(auStack_190,
               "\nDROP TABLE IF EXISTS NotifConversations;\nDROP TABLE IF EXISTS NotifDeltaSyncResponses;\nCREATE TABLE IF NOT EXISTS NotifConversations (\n    conversation_id TEXT NOT NULL,\n    conversation_metadata BLOB NOT NULL,\n    PRIMARY KEY(conversation_id)\n);\nCREATE TABLE IF NOT EXISTS NotifDeltaSyncResponses (\n    conversation_id TEXT NOT NULL,\n    conversation_version INTEGER NOT NULL,\n    delta_sync_data BLOB NOT NULL,\n    PRIMARY KEY(conversation_id, conversation_version)\n)\n"
              );
  uStack_178 = 0;
  uStack_148 = 0;
  uStack_140 = 0x300000002;
  FUN_00425cb4(auStack_138,
               "\nCREATE TABLE IF NOT EXISTS NotifFailedSyncConversations (\n    conversation_id TEXT NOT NULL,\n    last_known_version INTEGER NOT NULL DEFAULT 0,\n    PRIMARY KEY(conversation_id)\n)\n"
              );
  uStack_120 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x400000003;
  FUN_00425cb4(auStack_e0,
               "\nDROP TABLE IF EXISTS NotifFailedSyncConversations;\nCREATE TABLE IF NOT EXISTS NotifFailedSyncConversations (\n    conversation_id TEXT NOT NULL,\n    last_known_version INTEGER NOT NULL DEFAULT 0,\n    PRIMARY KEY(conversation_id)\n)\n"
              );
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0x500000004;
  FUN_00425cb4(auStack_88,
               "\nCREATE TABLE IF NOT EXISTS NotifKrakenEpochKeys (\n    conversation_id TEXT NOT NULL,\n    epoch_number INTEGER NOT NULL,\n    epoch_key BLOB NOT NULL,\n    PRIMARY KEY(conversation_id, epoch_number)\n)\n"
              );
  uStack_70 = 0;
  uStack_40 = 0;
  uVar2 = 5;
  FUN_006450b8(param_1,5,
               "\nCREATE TABLE IF NOT EXISTS NotifDeltaSyncResponses (\n    conversation_id TEXT NOT NULL,\n    conversation_version INTEGER NOT NULL,\n    delta_sync_data BLOB NOT NULL,\n    PRIMARY KEY(conversation_id, conversation_version)\n);\nCREATE TABLE IF NOT EXISTS NotifFailedSyncConversations (\n    conversation_id TEXT NOT NULL,\n    last_known_version INTEGER NOT NULL DEFAULT 0,\n    PRIMARY KEY(conversation_id)\n);\nCREATE TABLE IF NOT EXISTS NotifKrakenEpochKeys (\n    conversation_id TEXT NOT NULL,\n    epoch_number INTEGER NOT NULL,\n    epoch_key BLOB NOT NULL,\n    PRIMARY KEY(conversation_id, epoch_number)\n);\nCREATE TABLE IF NOT EXISTS NotifConversations (\n    conversation_id TEXT NOT NULL,\n    conversation_metadata BLOB NOT NULL,\n    PRIMARY KEY(conversation_id)\n);\n"
               ,&uStack_198,4);
  lVar3 = 0x108;
  do {
    puVar1 = (undefined8 *)(auStack_190 + lVar3 + -8);
    FUN_00456130();
    lVar3 = lVar3 + -0x58;
  } while (lVar3 != -0x58);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = &uStack_90;
  lVar3 = -0x160;
  do {
    FUN_00456130();
    puVar1 = puVar1 + -0xb;
    lVar3 = lVar3 + 0x58;
  } while (lVar3 != 0);
  func_0x004b7a48();
  *puVar1 = &PTR_FUN_009ecc20;
  puVar1[1] = uVar2;
  FUN_004b72b0(puVar1 + 2,uVar2);
  FUN_004b72f0(puVar1 + 3,uVar2);
  FUN_004b7324(puVar1 + 4,uVar2);
  FUN_004b7358(puVar1 + 5,uVar2);
  return puVar1;
}



/* Entry: 004b7220; end: 004b72af;  */

undefined8 * FUN_004b7220(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009ecc20;
  param_1[1] = param_2;
  FUN_004b72b0(param_1 + 2,param_2);
  FUN_004b72f0(param_1 + 3,param_2);
  FUN_004b7324(param_1 + 4,param_2);
  FUN_004b7358(param_1 + 5,param_2);
  return param_1;
}



/* Entry: 004b72b0; end: 004b72ef;  */

void FUN_004b72b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x278;
  __Znwm();
  FUN_004b8da8();
  *param_1 = uVar1;
  return;
}



/* Entry: 004b72f0; end: 004b7323;  */

void FUN_004b72f0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x004b7a58();
  FUN_004b7a74();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 004b7324; end: 004b7357;  */

void FUN_004b7324(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x004b7a58();
  FUN_004b9d10();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 004b7358; end: 004b7397;  */

void FUN_004b7358(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x188;
  __Znwm();
  FUN_004b85bc();
  *param_1 = uVar1;
  return;
}



/* Entry: 004b7398; end: 004b73ff;  */

undefined8 * FUN_004b7398(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_009ecc20;
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_00648d18(lVar1 + 0x100);
    FUN_00648d18(lVar1 + 0x78);
    func_0x004b7950(lVar1);
    __ZdlPv();
  }
  func_0x004b77c0(param_1 + 4);
  func_0x004b7630(param_1 + 3);
  FUN_004b7418(param_1 + 2);
  return param_1;
}



/* Entry: 004b7400; end: 004b7403;  */

undefined8 * FUN_004b7400(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_009ecc20;
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_00648d18(lVar1 + 0x100);
    FUN_00648d18(lVar1 + 0x78);
    func_0x004b7950(lVar1);
    __ZdlPv();
  }
  func_0x004b77c0(param_1 + 4);
  func_0x004b7630(param_1 + 3);
  FUN_004b7418(param_1 + 2);
  return param_1;
}



/* Entry: 004b7404; end: 004b7417;  */

void FUN_004b7404(void)

{
  FUN_004b7398();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b7418; end: 004b743b;  */

undefined8 FUN_004b7418(undefined8 param_1)

{
  FUN_004b743c(param_1,0);
  return param_1;
}



/* Entry: 004b743c; end: 004b7453;  */

void FUN_004b743c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_004b7470(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004b7454; end: 004b746f;  */

void FUN_004b7454(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_004b7470(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b7470; end: 004b74d3;  */

void FUN_004b7470(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_00648d18(param_1 + 0x1f0);
  FUN_00648d18(param_1 + 0x168);
  func_0x004b74b0(param_1 + 0xf0);
  func_0x004b7530(param_1 + 0x78);
  func_0x004b7a3c(param_1);
  FUN_004b75d4();
  func_0x004b7a34();
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(unaff_x19);
  return;
}



/* Entry: 004b74d4; end: 004b7513;  */

void FUN_004b74d4(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_004b79d0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004b7514();
    }
  }
  return;
}



/* Entry: 004b7514; end: 004b7553;  */

void FUN_004b7514(void)

{
  func_0x004b79f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b7554; end: 004b7593;  */

void FUN_004b7554(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_004b79d0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004b7594();
    }
  }
  return;
}



/* Entry: 004b7594; end: 004b75d3;  */

void FUN_004b7594(void)

{
  func_0x004b79f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b75d4; end: 004b7613;  */

void FUN_004b75d4(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_004b79d0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004b7614();
    }
  }
  return;
}



/* Entry: 004b7614; end: 004b7653;  */

void FUN_004b7614(void)

{
  func_0x004b79f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b7654; end: 004b766b;  */

void FUN_004b7654(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_004b7688(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004b766c; end: 004b7687;  */

void FUN_004b766c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_004b7688(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b7688; end: 004b76e3;  */

void FUN_004b7688(void)

{
  long unaff_x19;
  
  func_0x004b7a68();
  FUN_00648d18(unaff_x19 + 0x178);
  FUN_00648d18(unaff_x19 + 0xf0);
  func_0x004b76c0(unaff_x19 + 0x78);
  func_0x004b7a3c();
  FUN_004b7764();
  func_0x004b7a34();
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(unaff_x19);
  return;
}



/* Entry: 004b76e4; end: 004b7723;  */

void FUN_004b76e4(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_004b79d0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004b7724();
    }
  }
  return;
}



/* Entry: 004b7724; end: 004b7763;  */

void FUN_004b7724(void)

{
  func_0x004b79f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b7764; end: 004b77a3;  */

void FUN_004b7764(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_004b79d0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004b77a4();
    }
  }
  return;
}



/* Entry: 004b77a4; end: 004b77e3;  */

void FUN_004b77a4(void)

{
  func_0x004b79f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b77e4; end: 004b77fb;  */

void FUN_004b77e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_004b7818(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004b77fc; end: 004b7817;  */

void FUN_004b77fc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_004b7818(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b7818; end: 004b7873;  */

void FUN_004b7818(void)

{
  long unaff_x19;
  
  func_0x004b7a68();
  FUN_00648d18(unaff_x19 + 0x178);
  FUN_00648d18(unaff_x19 + 0xf0);
  func_0x004b7850(unaff_x19 + 0x78);
  func_0x004b7a3c();
  FUN_004b78f4();
  func_0x004b7a34();
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(unaff_x19);
  return;
}



/* Entry: 004b7874; end: 004b78b3;  */

void FUN_004b7874(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_004b79d0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004b78b4();
    }
  }
  return;
}



/* Entry: 004b78b4; end: 004b78f3;  */

void FUN_004b78b4(void)

{
  func_0x004b79f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b78f4; end: 004b7933;  */

void FUN_004b78f4(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_004b79d0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004b7934();
    }
  }
  return;
}



/* Entry: 004b7934; end: 004b7973;  */

void FUN_004b7934(void)

{
  func_0x004b79f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b7974; end: 004b79b3;  */

void FUN_004b7974(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_004b79d0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004b79b4();
    }
  }
  return;
}



/* Entry: 004b79b4; end: 004b79cf;  */

void FUN_004b79b4(void)

{
  func_0x004b79f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b79d0; end: 004b7a73;  */

void FUN_004b79d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*param_1 + 8);
  lVar2 = *(long *)param_1[1];
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  param_1[2] = 0;
  return;
}



/* Entry: 004b7a74; end: 004b7b43;  */

long FUN_004b7a74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_004b7c90(param_1,param_2,"SELECT * FROM NotifFailedSyncConversations",0x2a);
  FUN_004b7cbc(lVar1 + 0x78,param_2,
               "SELECT 1 FROM NotifFailedSyncConversations WHERE conversation_id = ?",0x44);
  FUN_00648ba8(param_1 + 0xf0,param_2,
               "INSERT OR REPLACE INTO NotifFailedSyncConversations(\n    conversation_id, last_known_version\n) VALUES (?, ?)"
               ,0x6c);
  FUN_00648ba8(param_1 + 0x178,param_2,
               "DELETE FROM NotifFailedSyncConversations WHERE conversation_id = ?",0x42);
  FUN_00648ba8(param_1 + 0x200,param_2,"DELETE FROM NotifFailedSyncConversations",0x28);
  return param_1;
}



/* Entry: 004b7b44; end: 004b7b93;  */

void FUN_004b7b44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_004b7ce8();
  uStack_28 = param_2;
  func_0x004b7e5c(param_1,&uStack_28);
  return;
}



/* Entry: 004b7b94; end: 004b7bbb;  */

void FUN_004b7b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_004b7bbc(param_1 + 0xf0,param_2,&uStack_18);
  return;
}



/* Entry: 004b7bbc; end: 004b7c2f;  */

void FUN_004b7bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  func_0x004b83f0(param_1,param_2,param_3);
  FUN_006490e4(param_1);
  func_0x004b8524();
  func_0x004b851c();
  return;
}



/* Entry: 004b7c30; end: 004b7c8f;  */

void FUN_004b7c30(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_004b82b4(param_1,param_2);
  FUN_006490e4(param_1);
  func_0x004b8524();
  func_0x004b851c();
  return;
}



/* Entry: 004b7c90; end: 004b7cbb;  */

void FUN_004b7c90(void)

{
  func_0x004b8490();
  func_0x004b8584();
  func_0x004b85a8();
  return;
}



/* Entry: 004b7cbc; end: 004b7ce7;  */

void FUN_004b7cbc(void)

{
  func_0x004b8490();
  func_0x004b8584();
  func_0x004b85a8();
  return;
}



/* Entry: 004b7ce8; end: 004b7dbf;  */

long FUN_004b7ce8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long unaff_x19;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [16];
  undefined **appuStack_c8 [17];
  undefined8 uStack_40;
  
  func_0x004b8464();
  plVar5 = (long *)(unaff_x19 + 0x68);
  do {
    lVar4 = *plVar5;
    uVar1 = lVar4 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      FUN_00456f00(auStack_d8);
      lVar4 = (long)*(char *)(unaff_x19 + 0x5f);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x48);
        lVar4 = *(long *)(unaff_x19 + 0x50);
      }
      else {
        lVar3 = unaff_x19 + 0x48;
      }
      FUN_00648ba8(appuStack_c8,*(undefined8 *)(unaff_x19 + 0x40),lVar3,lVar4);
      appuStack_c8[0] = &PTR_FUN_009ecc50;
      uStack_40 = 0;
      func_0x00456f38(auStack_d8);
      param_1 = 0xa0;
      __Znwm();
      func_0x004b853c();
      func_0x004b8428();
      goto LAB_004b7d84;
    }
    plVar5 = (long *)(lVar4 + 8);
  } while (*(long *)(lVar4 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar5;
  if (!(bool)uVar1) {
    func_0x004b84e0();
  }
LAB_004b7d84:
  lVar4 = *(long *)(unaff_x19 + 0x60);
  *(long *)(lVar4 + 0x98) = unaff_x19;
  func_0x004b850c();
  func_0x004b8564();
  if ((bool)uVar1) {
    return lVar4 + 0x10;
  }
  ___stack_chk_fail();
  uVar2 = param_1;
  func_0x004b850c();
  func_0x004b84d8();
  pcStack_e8 = FUN_004b7dc0;
  lVar3 = extraout_x8;
  uStack_108 = uVar2;
  lStack_100 = lVar4;
  uStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x004b7e5c(extraout_x8,&uStack_108);
  return lVar3;
}



/* Entry: 004b7dc0; end: 004b7e1f;  */

void FUN_004b7dc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x004b7e5c(param_1,&uStack_28);
  return;
}



/* Entry: 004b7e20; end: 004b7e23;  */

undefined8 * FUN_004b7e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004b7e24; end: 004b7e37;  */

void FUN_004b7e24(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b7e38; end: 004b7e8b;  */

void FUN_004b7e38(void)

{
  long unaff_x19;
  
  func_0x004b852c();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 004b7e8c; end: 004b7ecb;  */

void FUN_004b7e8c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x004b84bc();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_004b7ecc();
  return;
}



/* Entry: 004b7ecc; end: 004b7f3f;  */

void FUN_004b7ecc(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_40 [32];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_006490e4(), (int)lVar1 != 0)) {
    FUN_004b7f98(auStack_40,*param_1);
    FUN_004b7f40(param_1 + 1,auStack_40);
    FUN_0040d974(auStack_40);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    FUN_0040d974();
    *(undefined1 *)(plVar2 + 4) = 0;
  }
  return;
}



/* Entry: 004b7f40; end: 004b7f73;  */

long FUN_004b7f40(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_004b803c();
  }
  else {
    FUN_004b8068();
  }
  return param_1;
}



/* Entry: 004b7f74; end: 004b7f97;  */

void FUN_004b7f74(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_0040d974();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 004b7f98; end: 004b7fe3;  */

void FUN_004b7f98(long param_1,undefined8 param_2)

{
  FUN_00648c94();
  FUN_004b7fe4(param_1);
  FUN_00644fbc(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


