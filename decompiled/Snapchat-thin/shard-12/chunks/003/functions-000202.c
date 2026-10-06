/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f7ebfc; end: 108f7ecb3; -[SCFriendUnifiedProfileConfiguration isEqual:] */

bool FUN_108f7ebfc(ulong param_1,undefined8 param_2,ulong param_3)

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
         (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108f7ecb4; end: 108f7ecbb; -[SCFriendUnifiedProfileConfiguration hideRecursiveOptions] */

undefined1 FUN_108f7ecb4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f7ecbc; end: 108f7ecc3; -[SCFriendUnifiedProfileConfiguration nonFriendAddSourceType] */

undefined8 FUN_108f7ecbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7ecc4; end: 108f7eccb; -[SCFriendUnifiedProfileConfiguration nonFriendAddPlacementType] */

undefined8 FUN_108f7ecc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f7eccc; end: 108f7ecd3; -[SCFriendUnifiedProfileConfiguration suppressSnapProProfileOpen] */

undefined1 FUN_108f7eccc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f7ecd4; end: 108f7edbb; -[SCUnifiedProfileOpenFriendProfileActionData initWithSnapchatter:userId:configuration:attributedPage:] */

undefined1 *
FUN_108f7ecd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ff7e0;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7edbc; end: 108f7eddf; -[SCUnifiedProfileOpenFriendProfileActionData copyWithZone:] */

undefined8 FUN_108f7edbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7ede0; end: 108f7ee6b; -[SCUnifiedProfileOpenFriendProfileActionData hash] */

undefined8 * FUN_108f7ede0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lStack_30;
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
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f7ef14:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f7ef20;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_108f7ef20;
          }
          goto LAB_108f7ef14;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f7ef20:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f7ee6c; end: 108f7ef3b; -[SCUnifiedProfileOpenFriendProfileActionData isEqual:] */

long FUN_108f7ee6c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f7ef14:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7ef20;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108f7ef20;
          }
          goto LAB_108f7ef14;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f7ef20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f7ef3c; end: 108f7ef43; -[SCUnifiedProfileOpenFriendProfileActionData snapchatter] */

undefined8 FUN_108f7ef3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f7ef44; end: 108f7ef4b; -[SCUnifiedProfileOpenFriendProfileActionData userId] */

undefined8 FUN_108f7ef44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7ef4c; end: 108f7ef53; -[SCUnifiedProfileOpenFriendProfileActionData configuration] */

undefined8 FUN_108f7ef4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f7ef54; end: 108f7ef5b; -[SCUnifiedProfileOpenFriendProfileActionData attributedPage] */

undefined8 FUN_108f7ef54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f7ef5c; end: 108f7ef97; -[SCUnifiedProfileOpenFriendProfileActionData .cxx_destruct] */

void FUN_108f7ef5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f7ef98; end: 108f7f0bb; -[SCLegacyGroupProfileScope initWithContainerViewController:groupId:sourcePageType:delegate:] */

undefined1 *
FUN_108f7ef98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ff7e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x18),param_3);
    puVar1 = PTR_DAT_1126a4e58;
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x000107c318f8(param_3,puVar1);
    uVar4 = param_3;
    if ((int)uVar3 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar3 = uVar4;
    func_0x00010c0f2220();
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar2 + 0x30) = uVar3;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_4;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar2 + 0x28) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x38),param_6);
    *(undefined1 *)((long)puVar2 + 8) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 108f7f0bc; end: 108f7f1bb; -[SCLegacyGroupProfileScope initWithUiContainer:groupId:sourcePageType:delegate:] */

undefined1 *
FUN_108f7f0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(&PTR____CFConstantStringClassReference_110eb8918);
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110eb8918);
  _objc_release(&PTR____CFConstantStringClassReference_110eb8918);
  puStack_48 = PTR_PTR_1126ff7e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bc8f3c8();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7f1bc; end: 108f7f1c3; -[SCLegacyGroupProfileScope uiContainer] */

undefined8 FUN_108f7f1bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7f1c4; end: 108f7f1cb; -[SCLegacyGroupProfileScope isOverlayPresentation] */

undefined1 FUN_108f7f1c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f7f1cc; end: 108f7f1e3; -[SCLegacyGroupProfileScope containerViewController] */

void FUN_108f7f1cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7f1e4; end: 108f7f1eb; -[SCLegacyGroupProfileScope groupId] */

undefined8 FUN_108f7f1e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f7f1ec; end: 108f7f1f3; -[SCLegacyGroupProfileScope sourcePageType] */

undefined8 FUN_108f7f1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f7f1f4; end: 108f7f1fb; -[SCLegacyGroupProfileScope sourcePageViewName] */

undefined8 FUN_108f7f1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f7f1fc; end: 108f7f203; -[SCLegacyGroupProfileScope setSourcePageViewName:] */

void FUN_108f7f1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108f7f204; end: 108f7f21b; -[SCLegacyGroupProfileScope delegate] */

void FUN_108f7f204(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7f21c; end: 108f7f227; -[SCLegacyGroupProfileScope setDelegate:] */

void FUN_108f7f21c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 108f7f228; end: 108f7f22f; -[SCLegacyGroupProfileScope launchBehavior] */

undefined8 FUN_108f7f228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f7f230; end: 108f7f237; -[SCLegacyGroupProfileScope setLaunchBehavior:] */

void FUN_108f7f230(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108f7f238; end: 108f7f23f; -[SCLegacyGroupProfileScope flashbackId] */

undefined8 FUN_108f7f238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f7f240; end: 108f7f247; -[SCLegacyGroupProfileScope setFlashbackId:] */

void FUN_108f7f240(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108f7f248; end: 108f7f293; -[SCLegacyGroupProfileScope .cxx_destruct] */

void FUN_108f7f248(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f7f294; end: 108f7f29f; +[SCListViewMoreCollectionViewCell containerStyleWithGroupingStyle:] */

undefined1  [16] FUN_108f7f294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108f7f2a0; end: 108f7f3a7; -[SCListViewMoreCollectionViewCell initWithFrame:] */

undefined1 * FUN_108f7f2a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff7f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213780();
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a880();
    _objc_release(puVar2);
    func_0x00010c160fc0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c18b5e0();
    func_0x00010c1d0120(puVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f7f3a8; end: 108f7f59b; -[SCListViewMoreCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7f3a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11277e83c;
  uVar1 = *(ulong *)(param_1 + lVar9);
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126b5aa8;
  if ((uVar1 & 1) == 0) {
    uVar8 = *(ulong *)(param_1 + lVar9);
    _objc_retain(uVar8);
    _objc_opt_class(puVar2);
    uVar3 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar2);
    uVar1 = uVar8;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126b5aa8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar8 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar8 = uVar3;
    func_0x00010c06ef40();
    if ((int)uVar8 != 0) {
      puVar2 = PTR_PTR_1126dcbe0;
      func_0x00010c22ba80(PTR_PTR_1126dcbe0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2074a0(param_1);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126dcbe8;
    func_0x00010bfcf7e0(uVar3);
    func_0x00010bf4b060(puVar2);
    func_0x00010c20eaa0(param_1);
    uVar8 = uVar1;
    func_0x00010c2716a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2716a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar8);
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar3;
      func_0x00010c2716a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216540();
      _objc_release(lVar6);
      _objc_release(uVar8);
    }
    uVar8 = uVar3;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = uVar8;
    _objc_release(uVar7);
    func_0x00010c1cbe20(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f7f59c; end: 108f7f6bf; +[SCListViewMoreCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108f7f59c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  dVar6 = param_1;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b5aa8;
  _objc_opt_class(PTR_PTR_1126b5aa8);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar4 = PTR_PTR_1126dcbe8;
  func_0x00010bfcf7e0(uVar1);
  func_0x00010bf4b060(puVar4);
  uVar3 = uVar1;
  func_0x00010c06ef40();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    func_0x00010bfe0740(PTR_PTR_1126b2780);
  }
  else {
    puVar5 = PTR_PTR_1126dcbe0;
    func_0x00010c22ba80(PTR_PTR_1126dcbe0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b86a780(puVar4,puVar2,0,puVar5);
    _objc_release(puVar5);
    dVar6 = param_3 + dVar6 + 30.0;
  }
  _objc_release(param_6);
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 108f7f6c0; end: 108f7f6c3; -[SCListViewMoreCollectionViewCell setSelected:] */

void FUN_108f7f6c0(void)

{
  return;
}



/* Entry: 108f7f6c4; end: 108f7f703; -[SCListViewMoreCollectionViewCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_108f7f6c4(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c0722e0();
  _objc_release(in_x3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108f7f704; end: 108f7f73f; -[SCListViewMoreCollectionViewCell _didSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7f704(long param_1)

{
  param_1 = param_1 + _DAT_11277e840;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29de20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f7f740; end: 108f7f74f; -[SCListViewMoreCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7f740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e83c);
}



/* Entry: 108f7f750; end: 108f7f76f; -[SCListViewMoreCollectionViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7f750(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277e840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7f770; end: 108f7f783; -[SCListViewMoreCollectionViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7f770(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277e840,param_3);
  return;
}



/* Entry: 108f7f784; end: 108f7f7bf; -[SCListViewMoreCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7f784(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277e840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e83c,0);
  return;
}



/* Entry: 108f7f7c0; end: 108f7f813; +[SCRecipientCollectionViewCell containerStyleForCellViewModel:] */

undefined1  [16] FUN_108f7f7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfcf7e0(param_3);
  uVar2 = param_3;
  func_0x00010bf9e0a0(param_3);
  _objc_release(param_3);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 108f7f814; end: 108f7fa43; -[SCRecipientCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f7f814(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff7f8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108f7fa44;
    puStack_78 = &UNK_11085c2d0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e844);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e844) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = puVar2;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x108f7fa84;
    puStack_a0 = &UNK_110acd8e0;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e848);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e848) = puVar3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_c0,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e84c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e84c) = puVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return puVar1;
}



/* Entry: 108f7fa44; end: 108f7fb03;  */

void FUN_108f7fa44(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebc380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f7fb04; end: 108f7fc23; -[SCRecipientCollectionViewCell updateConfigurationUsingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7fb04(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff7f8;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_updateConfigurationUsingState__11253e948);
  puVar1 = PTR_PTR_1126b52c0;
  puVar3 = *(undefined **)(param_2 + _DAT_11277e850);
  _objc_retain(puVar3);
  _objc_opt_class(puVar1);
  puVar2 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  func_0x00010c16e440(param_2);
  func_0x00010bf52600(puVar1);
  if (0.0 < param_1) {
    func_0x00010bf52600(0,puVar1);
  }
  func_0x00010c16e520(param_2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 108f7fc24; end: 108f7fc9f; -[SCRecipientCollectionViewCell prepareForReuse] */

void FUN_108f7fc24(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff7f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  func_0x00010c16e520(0,param_1);
  return;
}



/* Entry: 108f7fca0; end: 108f80413; -[SCRecipientCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7fca0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_4);
  lVar12 = (long)_DAT_11277e850;
  uVar2 = *(ulong *)(param_2 + lVar12);
  func_0x00010c071ae0();
  puVar3 = PTR_PTR_1126b52c0;
  if ((uVar2 & 1) != 0) goto LAB_108f803d0;
  uVar10 = *(ulong *)(param_2 + lVar12);
  _objc_retain(uVar10);
  _objc_opt_class(puVar3);
  uVar4 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar3);
  uVar2 = uVar10;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar10);
  puVar3 = PTR_PTR_1126b52c0;
  _objc_retain(param_4);
  _objc_opt_class();
  uVar10 = param_4;
  _objc_opt_isKindOfClass();
  uVar4 = param_4;
  if ((uVar10 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_4);
  uVar10 = uVar4;
  func_0x00010c06ef40();
  if ((int)uVar10 != 0) {
    uVar10 = uVar4;
    func_0x00010bf20580();
    puVar5 = PTR_PTR_1126dcbe0;
    if ((uVar10 & 1) == 0) {
      func_0x00010c22ba80(PTR_PTR_1126dcbe0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c22bac0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2074a0(param_2);
    _objc_release(puVar5);
  }
  func_0x00010bf4b040(PTR_PTR_1126b5290);
  func_0x00010c20eaa0(param_2);
  func_0x00010c271760(uVar4);
  lVar7 = param_2;
  func_0x00010c27f7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213780();
  _objc_release(lVar7);
  uVar10 = uVar4;
  func_0x00010bf33820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_2);
  _objc_release(uVar10);
  uVar10 = uVar2;
  func_0x00010beee800();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010beee800(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c071ae0();
  _objc_release(uVar9);
  _objc_release(uVar10);
  if ((uVar6 & 1) == 0) {
    uVar10 = uVar4;
    func_0x00010beee800(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed2760(param_2);
    _objc_release(uVar10);
    uVar10 = uVar4;
    func_0x00010c279320(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    param_1 = 0xc2000000;
    func_0x00010c0bda40(uVar10);
    bVar1 = *(byte *)(puStack_88 + 3);
    puVar3 = (undefined *)0x0;
    __Block_object_dispose(&uStack_90);
    _objc_release(uVar10);
    _objc_release(uVar10);
    uVar13 = bVar1 ^ 1;
  }
  else {
    uVar13 = 1;
  }
  uVar10 = uVar2;
  func_0x00010c08ddc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c08ddc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c071ae0();
  _objc_release(uVar9);
  _objc_release(uVar10);
  if ((uVar6 & 1) == 0) {
    uVar10 = uVar4;
    func_0x00010c08ddc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beda920(param_2);
    _objc_release(uVar10);
  }
  uVar10 = uVar2;
  func_0x00010c0cd300();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c0cd300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c071ae0();
  _objc_release(uVar9);
  _objc_release(uVar10);
  if ((uVar6 & 1) == 0) {
    uVar10 = uVar4;
    func_0x00010c0cd300(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedbb40(param_2);
    _objc_release(uVar10);
  }
  uVar10 = uVar2;
  func_0x00010c279320();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c279320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c071ae0();
  _objc_release(uVar9);
  _objc_release(uVar10);
  if ((uVar13 & (uint)uVar6 & 1) == 0) {
    uVar10 = uVar4;
    func_0x00010beee800(uVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_108f80414();
    _objc_release(uVar10);
    uVar10 = uVar4;
    func_0x00010c279320(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee28c0(param_2);
    _objc_release(uVar10);
  }
  uVar10 = uVar4;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar10 != 0) {
    lVar11 = (long)_DAT_11277e844;
    lVar7 = *(long *)(param_2 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_2 + lVar11));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010c27f7a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_2 + lVar11);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040(lVar7);
      _objc_release(uVar8);
      _objc_release(lVar7);
    }
  }
  uVar10 = uVar4;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar10 != 0) {
    lVar11 = (long)_DAT_11277e848;
    lVar7 = *(long *)(param_2 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_2 + lVar11));
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c0b4e80(uVar4);
      uVar8 = *(undefined8 *)(param_2 + lVar11);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8340(param_1);
      _objc_release(uVar8);
      lVar7 = param_2;
      func_0x00010c27f7a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_2 + lVar11);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040(lVar7);
      _objc_release(uVar8);
      _objc_release(lVar7);
    }
  }
  func_0x00010bf01b40(uVar4);
  lVar7 = param_2;
  func_0x00010c27f7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(lVar7);
  uVar10 = uVar4;
  func_0x00010c229f80();
  if ((int)uVar10 != 0) {
    func_0x00010c229f80(uVar4);
    func_0x00010c1fe760(param_2);
  }
  uVar10 = uVar4;
  func_0x00010c239300();
  lVar7 = (long)_DAT_11277e84c;
  uVar9 = *(ulong *)(param_2 + lVar7);
  func_0x00010c06f880();
  if ((int)uVar10 == 0) {
    if ((int)uVar9 != 0) {
      uVar8 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733a0(0);
      goto LAB_108f80398;
    }
  }
  else {
    if ((uVar9 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_2 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar8 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    func_0x00010c1842e0(0x4024000000000000,uVar8);
    lVar7 = param_2;
    func_0x00010c25dfa0();
    if (lVar7 != 0) {
      func_0x00010c25dfa0(param_2);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010c25dfa0(param_2);
      }
      func_0x00010c25dfa0(param_2);
      uVar13 = (uint)puVar3;
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010c25dfa0(param_2);
      }
      func_0x00010c25dfa0(param_2);
      if ((uVar13 >> 2 & 1) != 0) {
        func_0x00010c25dfa0(param_2);
      }
      func_0x00010c25dfa0(param_2);
      if ((uVar13 >> 2 & 1) != 0) {
        func_0x00010c25dfa0(param_2);
      }
    }
    func_0x00010c184380(uVar8);
LAB_108f80398:
    _objc_release(uVar8);
  }
  uVar10 = uVar4;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_2 + lVar12);
  *(ulong *)(param_2 + lVar12) = uVar10;
  _objc_release(uVar8);
  func_0x00010c1cbe20(param_2);
  _objc_release(uVar4);
  _objc_release(uVar2);
LAB_108f803d0:
  _objc_release(param_4);
  return;
}



/* Entry: 108f80414; end: 108f804cb;  */

undefined1 FUN_108f80414(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bfba0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f804cc; end: 108f80613; +[SCRecipientCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108f804cc(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  dVar6 = param_1;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b52c0;
  _objc_opt_class(PTR_PTR_1126b52c0);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar4 = PTR_PTR_1126b5290;
  func_0x00010bf4b040(PTR_PTR_1126b5290);
  uVar3 = uVar1;
  func_0x00010c06ef40();
  puVar5 = PTR_PTR_1126b2780;
  if ((int)uVar3 == 0) {
    func_0x00010bf34120(uVar1);
    _objc_release(uVar1);
    func_0x00010bfe0740(puVar5);
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf20580();
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126dcbe0;
    if ((uVar3 & 1) == 0) {
      func_0x00010c22ba80(PTR_PTR_1126dcbe0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c22bac0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010b86a780(puVar4,puVar2,0,puVar5);
    dVar6 = param_3 + dVar6 + 48.0 + 2.0;
    _objc_release(puVar5);
  }
  _objc_release(param_6);
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 108f80614; end: 108f806cb; -[SCRecipientCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f80614(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e854;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  if (uVar2 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar2);
    }
    else {
      uVar1 = uVar2;
      func_0x00010c071ae0(uVar2,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar2);
      if ((uVar1 & 1) != 0) goto LAB_108f806b4;
    }
    _objc_retain(param_3);
    uVar2 = *(ulong *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
  }
  _objc_release(uVar2);
LAB_108f806b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f806cc; end: 108f80783; -[SCRecipientCollectionViewCell setAvatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f806cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e858;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  if (uVar2 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar2);
    }
    else {
      uVar1 = uVar2;
      func_0x00010c071ae0(uVar2,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar2);
      if ((uVar1 & 1) != 0) goto LAB_108f8076c;
    }
    _objc_retain(param_3);
    uVar2 = *(ulong *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
  }
  _objc_release(uVar2);
LAB_108f8076c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f80784; end: 108f8083b; -[SCRecipientCollectionViewCell triggerSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f80784(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b52c0;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e850);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    func_0x00010beee800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    FUN_108f80414();
    _objc_release(uVar4);
    if (param_3 != (int)uVar3) {
      func_0x00010be00720(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f8083c; end: 108f80843; -[SCRecipientCollectionViewCell triggerSingleTap] */

void FUN_108f8083c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSingleTap__11255db68,0);
  return;
}



/* Entry: 108f80844; end: 108f808e7; -[SCRecipientCollectionViewCell isSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108f80844(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b52c0;
  uVar3 = *(ulong *)(param_1 + _DAT_11277e850);
  _objc_retain(uVar3);
  _objc_opt_class(puVar2);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010beee800(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_108f80414();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 108f808e8; end: 108f80bc7; -[SCRecipientCollectionViewCell showTooltipWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f808e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  
  puVar1 = PTR_PTR_1126b09c0;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c051640();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c740(0x4014000000000000,puVar1);
  _objc_release(uVar2);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf49480(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010beee7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49580(0x4066800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(param_1);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  puVar17 = PTR_PTR_1126b52c0;
  uVar21 = *(ulong *)(puVar1 + _DAT_11277e850);
  _objc_retain(uVar21);
  _objc_opt_class(puVar17);
  uVar18 = uVar21;
  _objc_opt_isKindOfClass(uVar21,puVar17);
  uVar19 = uVar21;
  if ((uVar18 & 1) == 0) {
    uVar19 = 0;
  }
  _objc_retain(uVar19);
  _objc_release(uVar21);
  uVar18 = uVar19;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  uVar21 = uVar18;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  puVar17 = PTR_PTR_1126b5658;
  _objc_opt_class(PTR_PTR_1126b5658);
  uVar18 = uVar21;
  _objc_opt_isKindOfClass(uVar21,puVar17);
  uVar19 = uVar21;
  if ((uVar18 & 1) == 0) {
    uVar19 = 0;
  }
  _objc_retain(uVar19);
  _objc_release(uVar21);
  uVar18 = uVar19;
  func_0x00010c15a7c0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  uVar19 = uVar18;
  func_0x00010bfb1920(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar21);
  return;
}



/* Entry: 108f80bc8; end: 108f80ceb; -[SCRecipientCollectionViewCell getSectionIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f80bc8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126b52c0;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e850);
  _objc_retain(uVar4);
  _objc_opt_class(puVar1);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar2 = uVar3;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar4 = uVar2;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b5658;
  _objc_opt_class(PTR_PTR_1126b5658);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar2 = uVar3;
  func_0x00010c15a7c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f80cec; end: 108f80cef; -[SCRecipientCollectionViewCell setSelected:] */

void FUN_108f80cec(void)

{
  return;
}



/* Entry: 108f80cf0; end: 108f80d2f; -[SCRecipientCollectionViewCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_108f80cf0(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c0722e0();
  _objc_release(in_x3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108f80d30; end: 108f80deb; -[SCRecipientCollectionViewCell _updateLeadingAccessoryWithViewModel:] */

void FUN_108f80d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108f80dec;
  puStack_20 = &UNK_110acf580;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108f80df8;
  puStack_48 = &UNK_110acf5b0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x108f80e04;
  puStack_70 = &UNK_110acf5e0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x108f80e10;
  puStack_98 = &UNK_1108450c8;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bc9e0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 108f80dec; end: 108f80e1b;  */

void FUN_108f80dec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed3930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateAvatarWithViewModel__1125927f0,param_2);
  return;
}



/* Entry: 108f80e1c; end: 108f80e93; -[SCRecipientCollectionViewCell _updateMiddleAccessoryWithViewModel:] */

void FUN_108f80e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108f80e94;
  puStack_20 = &UNK_110acf610;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108f80ea4;
  puStack_48 = &UNK_11086ceb8;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bca60(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 108f80e94; end: 108f80eb3;  */

void FUN_108f80e94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed3fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateBasicWithViewModel_offici_112592998,
             param_2,param_3);
  return;
}



/* Entry: 108f80eb4; end: 108f8100f; -[SCRecipientCollectionViewCell _updateTrailingAccessoryWithViewModel:isSelected:] */

void FUN_108f80eb4(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1947a0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(uVar1);
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108f81010;
  puStack_50 = &UNK_110acf640;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x108f8101c;
  puStack_78 = &UNK_110acf670;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x108f81028;
  puStack_a8 = &UNK_110acf6a0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x108f8103c;
  puStack_d0 = &UNK_110acf6d0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x108f81048;
  puStack_f8 = &UNK_11084d858;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_98 = param_4;
  uStack_70 = param_1;
  uStack_48 = param_1;
  func_0x00010c0bda40(param_3,param_2,&puStack_68,&puStack_90,&puStack_c0,&puStack_e8,&puStack_110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f81010; end: 108f81053;  */

void FUN_108f81010(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed7670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateEmojiWithViewModel__112593740,param_2);
  return;
}



/* Entry: 108f81054; end: 108f81103; -[SCRecipientCollectionViewCell _updateActionIndicatorWithViewModel:] */

void FUN_108f81054(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108f81104;
    puStack_30 = &UNK_11086b930;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108f812bc;
    puStack_58 = &UNK_110842e18;
    uStack_50 = param_1;
    uStack_28 = param_1;
    func_0x00010c0bfba0(param_3,param_2,&puStack_48,&puStack_70);
    return;
  }
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f81104; end: 108f812bb;  */

void FUN_108f81104(long param_1,int param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fadc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  if (param_4 == 0) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    if (param_3 == 0) {
      if (param_2 == 0) {
        func_0x00010bf338a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf338e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bf338c0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c27f7a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010beee7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c27f7a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010beee7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010beee7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f812bc; end: 108f81337;  */

void FUN_108f812bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010beee7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f81338; end: 108f814e7; -[SCRecipientCollectionViewCell _updateAvatarWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f81338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126dcbf0;
  _objc_retain(param_3);
  _objc_opt_new();
  lVar6 = (long)_DAT_11277e85c;
  lVar2 = *(long *)(param_1 + lVar6);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_108faabbc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar3;
    _objc_release(uVar5);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + lVar6);
  }
  func_0x00010c160fc0(lVar2,param_2,&PTR____CFConstantStringClassReference_110f12858);
  lVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e854);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar6),param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e858);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2284c0();
  _objc_release(uVar5);
  func_0x00010c161280(puVar1,param_2,*(undefined8 *)(param_1 + lVar6));
  uVar5 = param_3;
  func_0x00010beeecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010beed360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(puVar4);
  _objc_release(uVar5);
  func_0x00010c1619c0(puVar1,param_2,param_1);
  func_0x00010c2226c0(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e860);
  *(undefined **)(param_1 + _DAT_11277e860) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108f814e8; end: 108f815ab; -[SCRecipientCollectionViewCell _updateLeadingAccessoryWithImageModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f814e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c160fc0();
  puVar2 = PTR_PTR_1126dcbf8;
  _objc_opt_new();
  func_0x00010c161280();
  func_0x00010c1619c0(puVar2,param_2,param_1);
  func_0x00010c2226c0(puVar2,param_2,param_3);
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277e860);
  *(undefined **)(param_1 + _DAT_11277e860) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f815ac; end: 108f81637; -[SCRecipientCollectionViewCell _updateTrailingAccessoryWithImage:] */

void FUN_108f815ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01bf60();
  _objc_release(param_3);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f12878);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f81638; end: 108f81957; -[SCRecipientCollectionViewCell _updateLeadingAccessoryWithInitialsWithinCircleViewModel:] */

void FUN_108f81638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b52f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
  puVar2 = PTR_PTR_1126b52f0;
  _objc_alloc(PTR_PTR_1126b52f0);
  func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bfb68e0();
  func_0x00010bf19a00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  puVar4 = puVar2;
  func_0x00010c22a660(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a660(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar3);
  uVar5 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar2;
  func_0x00010c22a660(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(puVar3);
  _objc_release(uVar5);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
  uVar5 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c25dbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3,param_2,uVar5);
  _objc_release(uVar5);
  func_0x00010c213040(puVar3,param_2,1);
  func_0x00010c21ad00(puVar3,param_2,0x16);
  func_0x00010befbb60(puVar1,param_2,puVar3);
  puVar4 = PTR_PTR_1126c2eb0;
  _objc_alloc(PTR_PTR_1126c2eb0);
  uVar7 = 0;
  func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
  func_0x00010bf20c00(puVar1);
  _CGRectGetMidX();
  uVar5 = uVar7;
  func_0x00010bf20c00(puVar1);
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar7,uVar5,puVar4);
  puVar6 = PTR_PTR_1126bd8e0;
  _objc_alloc(PTR_PTR_1126bd8e0);
  uVar5 = param_3;
  func_0x00010c25dbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff9340(0x3ff0000000000000,0x3ff0000000000000,puVar6,param_2,uVar5,0,0,0);
  func_0x00010c2226c0(puVar4,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  func_0x00010befbb60(puVar1,param_2,puVar4);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f12858);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f81958; end: 108f81b73; -[SCRecipientCollectionViewCell _updateLeadingAccessoryWithEmoji:] */

void FUN_108f81958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b52f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2c);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b52f0;
  _objc_alloc(PTR_PTR_1126b52f0);
  func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bfb68e0();
  func_0x00010bf19a00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  puVar5 = puVar3;
  func_0x00010c22a660(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c22a660(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar4);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc0fe0();
  puVar4 = puVar3;
  func_0x00010c22a660(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(puVar4);
  func_0x00010befbb60(puVar1,param_2,puVar3);
  puVar4 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
  func_0x00010c212f20();
  _objc_release(param_3);
  func_0x00010c213040(puVar4,param_2,1);
  func_0x00010c21ad00(puVar4,param_2,0x17);
  func_0x00010befbb60(puVar1,param_2,puVar4);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f12858);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f81b74; end: 108f81cc7; -[SCRecipientCollectionViewCell _updateBasicWithViewModel:officialBadgeType:] */

void FUN_108f81b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010befdb60(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e40();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2716a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2716a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf6f6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f81cc8; end: 108f81dbb; -[SCRecipientCollectionViewCell _updateAttributedWithTitle:detailText:] */

void FUN_108f81cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b7a0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c25cd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b660();
  _objc_release(param_4);
  _objc_release(uVar1);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f81dbc; end: 108f81e53; -[SCRecipientCollectionViewCell _updateEmojiWithViewModel:] */

void FUN_108f81dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1947a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f81e54; end: 108f81eeb; -[SCRecipientCollectionViewCell _updateBadgeWithViewModel:] */

void FUN_108f81e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ed60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f81eec; end: 108f82073; -[SCRecipientCollectionViewCell _updateButtonWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f81eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1947a0();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277e864;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                      &PTR____CFConstantStringClassReference_110f12878);
  puVar1 = PTR_PTR_1126dcc00;
  _objc_opt_new();
  func_0x00010c161280();
  uVar3 = param_3;
  func_0x00010beeecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beed360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(puVar2);
  _objc_release(uVar3);
  func_0x00010c1619c0(puVar1,param_2,param_1);
  func_0x00010c2226c0(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277e868);
  *(undefined **)(param_1 + _DAT_11277e868) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010beed360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108f82074; end: 108f8226f; -[SCRecipientCollectionViewCell _updateDropdownButtonWithViewModel:isSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f82074(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1947a0();
  _objc_release(puVar1);
  if (((param_4 & 1) == 0) && (uVar3 = param_3, func_0x00010c0e8c80(), (int)uVar3 != 0)) {
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    puVar2 = param_1;
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108f82270;
    puStack_60 = &UNK_110acf700;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x108f822b0;
    puStack_88 = &UNK_1109f5558;
    puStack_80 = param_1;
    puStack_58 = param_1;
    func_0x00010c0bd2e0(param_3,param_2,&puStack_78,&puStack_a0);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + _DAT_11277e864),param_2,
                        &PTR____CFConstantStringClassReference_110f12878);
    puVar1 = PTR_PTR_1126dc9d8;
    _objc_opt_new();
    func_0x00010c161280();
    uVar3 = param_3;
    func_0x00010beeecc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010beed360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(puVar2);
    _objc_release(uVar3);
    func_0x00010c1619c0(puVar1,param_2,param_1);
    func_0x00010c2226c0(puVar1,param_2,param_3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277e868);
    *(undefined **)(param_1 + _DAT_11277e868) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar3);
    puVar2 = puVar1;
    func_0x00010beed360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(param_1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f82270; end: 108f822ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f82270(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc9e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277e864);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_11277e864) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f822f0; end: 108f8230b; -[SCRecipientCollectionViewCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f822f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e86c),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 108f8230c; end: 108f823f3; -[SCRecipientCollectionViewCell _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8230c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x00010c252440();
  puVar2 = PTR_PTR_1126b52c0;
  if (param_3 == 1) {
    uVar4 = *(ulong *)(param_1 + _DAT_11277e850);
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar3 = uVar1;
    func_0x00010c0b4d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_11277e86c);
      uVar3 = uVar1;
      func_0x00010c0b4d20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar5);
      _objc_release(uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108f823f4; end: 108f824bb; -[SCRecipientCollectionViewCell _didSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f823f4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b52c0;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e850);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277e86c);
    uVar3 = uVar1;
    func_0x00010c23cf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f824bc; end: 108f8251f; -[SCRecipientCollectionViewCell touchesBegan:withEvent:] */

void FUN_108f824bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff7f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesBegan_withEvent__11267b780);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8860();
  _objc_release(param_1);
  return;
}



/* Entry: 108f82520; end: 108f82583; -[SCRecipientCollectionViewCell touchesEnded:withEvent:] */

void FUN_108f82520(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff7f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesEnded_withEvent__11267b788);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8860();
  _objc_release(param_1);
  return;
}



/* Entry: 108f82584; end: 108f825e7; -[SCRecipientCollectionViewCell touchesCancelled:withEvent:] */

void FUN_108f82584(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff7f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesCancelled_withEvent__112526c90);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8860();
  _objc_release(param_1);
  return;
}



/* Entry: 108f825e8; end: 108f82647; -[SCRecipientCollectionViewCell _singleTapGestureRecognizer] */

void FUN_108f825e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010c1d0120(puVar1,param_2,1);
  func_0x00010c178280(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f82648; end: 108f8269f; -[SCRecipientCollectionViewCell _longPressGestureRecognizer] */

void FUN_108f82648(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c1c8340(0x3fd3333333333333);
  func_0x00010c178280(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f826a0; end: 108f826f3; -[SCRecipientCollectionViewCell _setupPlusGoldenBorderView] */

void FUN_108f826a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2978;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4860(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f826f4; end: 108f82703; -[SCRecipientCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f826f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e850);
}



/* Entry: 108f82704; end: 108f82713; -[SCRecipientCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f82704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e86c);
}



/* Entry: 108f82714; end: 108f82753; -[SCRecipientCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f82714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e86c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f82754; end: 108f82823; -[SCRecipientCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f82754(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e86c,0);
  _objc_storeStrong(param_1 + _DAT_11277e850,0);
  _objc_storeStrong(param_1 + _DAT_11277e858,0);
  _objc_storeStrong(param_1 + _DAT_11277e84c,0);
  _objc_storeStrong(param_1 + _DAT_11277e85c,0);
  _objc_storeStrong(param_1 + _DAT_11277e854,0);
  _objc_storeStrong(param_1 + _DAT_11277e868,0);
  _objc_storeStrong(param_1 + _DAT_11277e864,0);
  _objc_storeStrong(param_1 + _DAT_11277e860,0);
  _objc_storeStrong(param_1 + _DAT_11277e844,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e848,0);
  return;
}



/* Entry: 108f82824; end: 108f8282b; +[SIGCompressedRecipientCollectionViewCell cellStyle] */

undefined8 FUN_108f82824(void)

{
  return 1;
}



/* Entry: 108f8282c; end: 108f8298b; +[SIGCompressedRecipientCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108f8282c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  dVar6 = param_1;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b52c0;
  _objc_opt_class(PTR_PTR_1126b52c0);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar4 = PTR_PTR_1126b5290;
  func_0x00010bf4b040(PTR_PTR_1126b5290);
  uVar3 = uVar1;
  func_0x00010c06ef40();
  puVar5 = PTR_PTR_1126b2780;
  if ((int)uVar3 == 0) {
    func_0x00010bf34120(uVar1);
    func_0x00010bfe0740(puVar5);
    dVar7 = 10.0;
  }
  else {
    puVar5 = PTR_PTR_1126dcbe0;
    func_0x00010c22ba80(PTR_PTR_1126dcbe0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b86a780(puVar4,puVar2,0,puVar5);
    _objc_release(puVar5);
    dVar6 = param_3 + dVar6 + 48.0;
    dVar7 = 2.0;
  }
  func_0x00010c2a50a0(param_1,param_2,PTR_PTR_1126dcc10);
  _objc_release(uVar1);
  _objc_release(param_6);
  auVar8._8_8_ = dVar6 + dVar7;
  auVar8._0_8_ = (double)((float)(int)param_1 + -1.0);
  return auVar8;
}



/* Entry: 108f8298c; end: 108f8299b;  */

void FUN_108f8298c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 108f8299c; end: 108f829cb;  */

void FUN_108f8299c(long param_1,undefined1 param_2)

{
  func_0x00010c0e8c80();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 108f829cc; end: 108f82a3f; -[SCRecipientCollectionViewCellIndexer initWithCollectionView:] */

undefined1 * FUN_108f829cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff800;
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



/* Entry: 108f82a40; end: 108f82cdf; -[SCRecipientCollectionViewCellIndexer topVisibleCellIndexKey] */

void FUN_108f82a40(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    uVar12 = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        puVar13 = *(undefined **)(lVar14 * 8);
        puVar7 = puVar13;
        func_0x00010c1554e0();
        puVar8 = puVar5;
        func_0x00010c1554e0();
        if ((long)puVar7 < (long)puVar8) {
LAB_108f82b30:
          _objc_retain(puVar13);
          _objc_release(puVar5);
          puVar5 = puVar13;
        }
        else {
          puVar7 = puVar13;
          func_0x00010c1554e0();
          puVar8 = puVar5;
          func_0x00010c1554e0();
          if (puVar7 == puVar8) {
            puVar7 = puVar13;
            func_0x00010c142240();
            puVar8 = puVar5;
            func_0x00010c142240();
            if ((long)puVar7 < (long)puVar8) goto LAB_108f82b30;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    uVar9 = *(ulong *)(param_1 + 8);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b5290;
    _objc_opt_class(PTR_PTR_1126b5290);
    uVar12 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar7);
    uVar1 = uVar9;
    if ((uVar12 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar9);
    if (uVar1 == 0) {
      uVar12 = 0;
    }
    else {
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b52c0;
      _objc_opt_class(PTR_PTR_1126b52c0);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar7);
      uVar12 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar12 = 0;
      }
      _objc_retain(uVar12);
      _objc_release(uVar9);
      uVar9 = uVar12;
      func_0x00010bfecc60(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      uVar12 = uVar9;
      func_0x00010bfecc40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
    }
    _objc_release(uVar1);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 108f82ce0; end: 108f82ceb; -[SCRecipientCollectionViewCellIndexer .cxx_destruct] */

void FUN_108f82ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f82cec; end: 108f83397; -[SCScriptIndexer initWithSortedEntities:indexes:] */

/* WARNING: Possible PIC construction at 0x000108f82f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f83170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f82f1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108f83174) */
/* WARNING: Removing unreachable block (ram,0x000108f831a0) */
/* WARNING: Removing unreachable block (ram,0x000108f831bc) */
/* WARNING: Removing unreachable block (ram,0x000108f82f80) */
/* WARNING: Removing unreachable block (ram,0x000108f82fb0) */
/* WARNING: Removing unreachable block (ram,0x000108f82f20) */
/* WARNING: Removing unreachable block (ram,0x000108f82f38) */

undefined8 * FUN_108f82cec(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  lVar8 = param_3;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(param_4);
    uVar11 = param_4;
    func_0x00010bf52a60();
    if (uVar11 != 0) {
      lVar8 = *plStack_1a0;
      do {
        uVar9 = 0;
        do {
          if (*plStack_1a0 != lVar8) {
            _objc_enumerationMutation(param_4);
          }
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar2);
          uVar9 = uVar9 + 1;
        } while (uVar11 != uVar9);
        uVar11 = param_4;
        func_0x00010bf52a60();
      } while (uVar11 != 0);
    }
    _objc_release(param_4);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    puStack_1e8 = (undefined8 *)0x0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    _objc_retain(param_3);
    lVar8 = param_3;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      if (*plStack_1e0 != *plStack_1e0) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *puStack_1e8;
      func_0x00010c156240(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = param_4;
      func_0x00010bf4b900();
      if ((uVar11 & 1) == 0) {
        _objc_retain(&PTR____CFConstantStringClassReference_110dbf518);
        _objc_release(uVar10);
        func_0x00010befa120(param_4);
      }
      else {
        func_0x00010befa120(puVar1);
      }
      goto code_r0x00010c0e00e0;
    }
    _objc_release(param_3);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  puVar4 = puVar1;
  func_0x00010bf52a60();
  if (puVar4 == (undefined *)0x0) {
    for (uVar11 = 0; uVar9 = param_4, func_0x00010bf529e0(), uVar11 < uVar9; uVar11 = uVar11 + 1) {
      uVar9 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar9);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(param_4);
    puStack_1f8 = PTR_PTR_1126ff808;
    puVar6 = &uStack_200;
    uStack_200 = param_1;
    _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
    if (puVar6 != (undefined8 *)0x0) {
      _objc_retain(param_3);
      uVar10 = puVar6[1];
      puVar6[1] = param_3;
      _objc_release(uVar10);
      _objc_retain(param_4);
      uVar10 = puVar6[2];
      puVar6[2] = param_4;
      _objc_release(uVar10);
      _objc_retain(puVar7);
      uVar10 = puVar6[3];
      puVar6[3] = puVar7;
      _objc_release(uVar10);
      _objc_retain(puVar2);
      uVar10 = puVar6[4];
      puVar6[4] = puVar2;
      _objc_release(uVar10);
      _objc_retain(puVar3);
      uVar10 = puVar6[5];
      puVar6[5] = puVar3;
      _objc_release(uVar10);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar6;
    }
    ___stack_chk_fail();
    puVar7 = *(undefined8 **)(param_3 + 0x18);
  }
  else {
    uVar11 = 0;
    if (*plStack_160 != *plStack_160) {
      _objc_enumerationMutation(puVar1);
    }
    uVar9 = param_4;
    func_0x00010bfecde0();
    do {
      uVar5 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar1);
      uVar11 = uVar11 + 1;
      _objc_release(uVar5);
    } while (uVar11 <= uVar9);
  }
code_r0x00010c0e00e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_objectForKeyedSubscript__112615a50);
  return puVar7;
}


