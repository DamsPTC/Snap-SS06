/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f76904; end: 108f7693f; -[SCUnifiedProfileStoriesListViewSnapCellViewModel .cxx_destruct] */

void FUN_108f76904(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f76940; end: 108f76a17; -[SCUnifiedProfileStoriesListCellCountsViewModel initWithViewCount:screenshotCount:storyReplyCount:exportActionModel:exportImage:shouldShowSpotlightCellCountsView:] */

undefined1 *
FUN_108f76940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ff6f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
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
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 108f76a18; end: 108f76a3b; -[SCUnifiedProfileStoriesListCellCountsViewModel copyWithZone:] */

undefined8 FUN_108f76a18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f76a3c; end: 108f76abf; -[SCUnifiedProfileStoriesListCellCountsViewModel hash] */

undefined8 * FUN_108f76a3c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_60,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f76b80:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f76b8c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))))) &&
       (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x28);
      if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
        if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_108f76b8c;
        }
        goto LAB_108f76b80;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f76b8c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f76ac0; end: 108f76ba7; -[SCUnifiedProfileStoriesListCellCountsViewModel isEqual:] */

long FUN_108f76ac0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f76b80:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f76b8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) &&
       (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_108f76b8c;
        }
        goto LAB_108f76b80;
      }
    }
    lVar3 = 0;
  }
LAB_108f76b8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f76ba8; end: 108f76baf; -[SCUnifiedProfileStoriesListCellCountsViewModel viewCount] */

undefined8 FUN_108f76ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f76bb0; end: 108f76bb7; -[SCUnifiedProfileStoriesListCellCountsViewModel screenshotCount] */

undefined8 FUN_108f76bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f76bb8; end: 108f76bbf; -[SCUnifiedProfileStoriesListCellCountsViewModel storyReplyCount] */

undefined8 FUN_108f76bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f76bc0; end: 108f76bc7; -[SCUnifiedProfileStoriesListCellCountsViewModel exportActionModel] */

undefined8 FUN_108f76bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f76bc8; end: 108f76bcf; -[SCUnifiedProfileStoriesListCellCountsViewModel exportImage] */

undefined8 FUN_108f76bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f76bd0; end: 108f76bd7; -[SCUnifiedProfileStoriesListCellCountsViewModel shouldShowSpotlightCellCountsView] */

undefined1 FUN_108f76bd0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f76bd8; end: 108f76c07; -[SCUnifiedProfileStoriesListCellCountsViewModel .cxx_destruct] */

void FUN_108f76bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 108f76c08; end: 108f76c7f; -[SCUnifiedProfileStoriesListCellMoreButtonViewModel initWithTapActionModel:] */

undefined1 * FUN_108f76c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff6f8;
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



/* Entry: 108f76c80; end: 108f76ca3; -[SCUnifiedProfileStoriesListCellMoreButtonViewModel copyWithZone:] */

undefined8 FUN_108f76c80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f76ca4; end: 108f76cab; -[SCUnifiedProfileStoriesListCellMoreButtonViewModel hash] */

void FUN_108f76ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108f76cac; end: 108f76d3b; -[SCUnifiedProfileStoriesListCellMoreButtonViewModel isEqual:] */

long FUN_108f76cac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f76d20;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108f76d20;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f76d20;
    }
  }
  lVar3 = 1;
LAB_108f76d20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f76d3c; end: 108f76d43; -[SCUnifiedProfileStoriesListCellMoreButtonViewModel tapActionModel] */

undefined8 FUN_108f76d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f76d44; end: 108f76d4f; -[SCUnifiedProfileStoriesListCellMoreButtonViewModel .cxx_destruct] */

void FUN_108f76d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f76d50; end: 108f76dfb; -[SCUnifiedProfileEmptyStateViewModel initWithText:buttonViewModel:] */

undefined1 *
FUN_108f76d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff700;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f76dfc; end: 108f76e1f; -[SCUnifiedProfileEmptyStateViewModel copyWithZone:] */

undefined8 FUN_108f76dfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f76e20; end: 108f76e93; -[SCUnifiedProfileEmptyStateViewModel hash] */

undefined8 * FUN_108f76e20(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108f76f14:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f76f20;
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
          goto LAB_108f76f20;
        }
        goto LAB_108f76f14;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f76f20:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f76e94; end: 108f76f3b; -[SCUnifiedProfileEmptyStateViewModel isEqual:] */

long FUN_108f76e94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f76f14:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f76f20;
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
          goto LAB_108f76f20;
        }
        goto LAB_108f76f14;
      }
    }
    lVar3 = 0;
  }
LAB_108f76f20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f76f3c; end: 108f76f43; -[SCUnifiedProfileEmptyStateViewModel text] */

undefined8 FUN_108f76f3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f76f44; end: 108f76f4b; -[SCUnifiedProfileEmptyStateViewModel buttonViewModel] */

undefined8 FUN_108f76f44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f76f4c; end: 108f76f7b; -[SCUnifiedProfileEmptyStateViewModel .cxx_destruct] */

void FUN_108f76f4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f76f7c; end: 108f7702f; -[SCUnifiedProfileFriendsCellViewModel initWithShowSilhouetteBackground:bitmojiAvatarViewModels:tapActionModel:] */

undefined1 *
FUN_108f76f7c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ff708;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 108f77030; end: 108f77053; -[SCUnifiedProfileFriendsCellViewModel copyWithZone:] */

undefined8 FUN_108f77030(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f77054; end: 108f770cf; -[SCUnifiedProfileFriendsCellViewModel hash] */

ulong * FUN_108f77054(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_108f77160:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f7716c;
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
          goto LAB_108f7716c;
        }
        goto LAB_108f77160;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f7716c:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 108f770d0; end: 108f77187; -[SCUnifiedProfileFriendsCellViewModel isEqual:] */

long FUN_108f770d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f77160:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7716c;
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
          goto LAB_108f7716c;
        }
        goto LAB_108f77160;
      }
    }
    lVar3 = 0;
  }
LAB_108f7716c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f77188; end: 108f7718f; -[SCUnifiedProfileFriendsCellViewModel showSilhouetteBackground] */

undefined1 FUN_108f77188(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f77190; end: 108f77197; -[SCUnifiedProfileFriendsCellViewModel bitmojiAvatarViewModels] */

undefined8 FUN_108f77190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f77198; end: 108f7719f; -[SCUnifiedProfileFriendsCellViewModel tapActionModel] */

undefined8 FUN_108f77198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f771a0; end: 108f771cf; -[SCUnifiedProfileFriendsCellViewModel .cxx_destruct] */

void FUN_108f771a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f771d0; end: 108f7727b; -[SCUnifiedProfileFooterEngravingViewCellViewModel initWithText:engravedGhostImage:] */

undefined1 *
FUN_108f771d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff710;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7727c; end: 108f7729f; -[SCUnifiedProfileFooterEngravingViewCellViewModel copyWithZone:] */

undefined8 FUN_108f7727c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f772a0; end: 108f77313; -[SCUnifiedProfileFooterEngravingViewCellViewModel hash] */

undefined8 * FUN_108f772a0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108f77394:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f773a0;
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
          goto LAB_108f773a0;
        }
        goto LAB_108f77394;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f773a0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f77314; end: 108f773bb; -[SCUnifiedProfileFooterEngravingViewCellViewModel isEqual:] */

long FUN_108f77314(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f77394:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f773a0;
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
          goto LAB_108f773a0;
        }
        goto LAB_108f77394;
      }
    }
    lVar3 = 0;
  }
LAB_108f773a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f773bc; end: 108f773c3; -[SCUnifiedProfileFooterEngravingViewCellViewModel text] */

undefined8 FUN_108f773bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f773c4; end: 108f773cb; -[SCUnifiedProfileFooterEngravingViewCellViewModel engravedGhostImage] */

undefined8 FUN_108f773c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f773cc; end: 108f773fb; -[SCUnifiedProfileFooterEngravingViewCellViewModel .cxx_destruct] */

void FUN_108f773cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f773fc; end: 108f774bf; -[SCUnifiedProfileProminentActionViewModel initWithProminentAction:actionModel:iconImageName:isDisabled:] */

undefined1 *
FUN_108f773fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ff718;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
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
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108f774c0; end: 108f774e3; -[SCUnifiedProfileProminentActionViewModel copyWithZone:] */

undefined8 FUN_108f774c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f774e4; end: 108f7755f; -[SCUnifiedProfileProminentActionViewModel hash] */

undefined8 * FUN_108f774e4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f77600:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f7760c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[2] == param_3[2] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_108f7760c;
        }
        goto LAB_108f77600;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f7760c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f77560; end: 108f77627; -[SCUnifiedProfileProminentActionViewModel isEqual:] */

long FUN_108f77560(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f77600:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7760c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_108f7760c;
        }
        goto LAB_108f77600;
      }
    }
    lVar3 = 0;
  }
LAB_108f7760c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f77628; end: 108f7762f; -[SCUnifiedProfileProminentActionViewModel prominentAction] */

undefined8 FUN_108f77628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f77630; end: 108f77637; -[SCUnifiedProfileProminentActionViewModel actionModel] */

undefined8 FUN_108f77630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f77638; end: 108f7763f; -[SCUnifiedProfileProminentActionViewModel iconImageName] */

undefined8 FUN_108f77638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f77640; end: 108f77647; -[SCUnifiedProfileProminentActionViewModel isDisabled] */

undefined1 FUN_108f77640(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f77648; end: 108f77677; -[SCUnifiedProfileProminentActionViewModel .cxx_destruct] */

void FUN_108f77648(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108f77678; end: 108f77707; -[SCUnifiedProfileProminentActionsCellViewModel initWithProminentActionViewModels:shouldHideCallActions:shouldAddTopPadding:] */

undefined1 *
FUN_108f77678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff720;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f77708; end: 108f7772b; -[SCUnifiedProfileProminentActionsCellViewModel copyWithZone:] */

undefined8 FUN_108f77708(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7772c; end: 108f7779f; -[SCUnifiedProfileProminentActionsCellViewModel hash] */

undefined8 * FUN_108f7772c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f77834;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_108f77834;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f77834;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_108f77834:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 108f777a0; end: 108f7784f; -[SCUnifiedProfileProminentActionsCellViewModel isEqual:] */

long FUN_108f777a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f77834;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_108f77834;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f77834;
    }
  }
  lVar3 = 1;
LAB_108f77834:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f77850; end: 108f77857; -[SCUnifiedProfileProminentActionsCellViewModel prominentActionViewModels] */

undefined8 FUN_108f77850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f77858; end: 108f7785f; -[SCUnifiedProfileProminentActionsCellViewModel shouldHideCallActions] */

undefined1 FUN_108f77858(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f77860; end: 108f77867; -[SCUnifiedProfileProminentActionsCellViewModel shouldAddTopPadding] */

undefined1 FUN_108f77860(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f77868; end: 108f77873; -[SCUnifiedProfileProminentActionsCellViewModel .cxx_destruct] */

void FUN_108f77868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f77874; end: 108f77903; -[SCUnifiedProfileListCellLayoutAttributes initWithLeftIconSize:leftIconMarginX:rightIconSize:rightIconMarginX:listCellHeight:leftIconLabelPadding:titleMinimumScaleFactor:] */

void FUN_108f77874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 in_stack_00000000;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff728;
  uStack_60 = param_9;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    *(undefined8 *)((long)puVar1 + 0x28) = in_stack_00000000;
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
  }
  return;
}



/* Entry: 108f77904; end: 108f77927; -[SCUnifiedProfileListCellLayoutAttributes copyWithZone:] */

undefined8 FUN_108f77904(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f77928; end: 108f77a9f; -[SCUnifiedProfileListCellLayoutAttributes hash] */

ulong * FUN_108f77928(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_60,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        bVar2 = false;
        if ((*(double *)((long)puVar3 + 0x30) == *(double *)(param_3 + 0x30)) &&
           (bVar2 = false,
           !NAN(*(double *)((long)puVar3 + 0x38)) && !NAN(*(double *)(param_3 + 0x38)))) {
          bVar2 = *(double *)((long)puVar3 + 0x38) == *(double *)(param_3 + 0x38);
        }
        if (bVar2) {
          dVar8 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
          dVar7 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                  2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            puVar6 = (undefined1 *)0x0;
            if ((*(double *)((long)puVar3 + 0x40) != *(double *)(param_3 + 0x40)) ||
               (*(double *)((long)puVar3 + 0x48) != *(double *)(param_3 + 0x48)))
            goto LAB_108f77c00;
            dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
            dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
              dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                      2.220446049250313e-16;
              bVar2 = true;
              if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7)))
              {
                bVar2 = dVar8 < dVar7;
              }
              if (bVar2) {
                dVar7 = ABS(*(double *)((long)puVar3 + 0x20) - *(double *)(param_3 + 0x20));
                if ((dVar7 < 2.2250738585072014e-308) ||
                   (dVar7 < ABS(*(double *)((long)puVar3 + 0x20) + *(double *)(param_3 + 0x20)) *
                            2.220446049250313e-16)) {
                  dVar7 = ABS(*(double *)((long)puVar3 + 0x28) + *(double *)(param_3 + 0x28)) *
                          2.220446049250313e-16;
                  if (dVar7 <= 2.2250738585072014e-308) {
                    dVar7 = 2.2250738585072014e-308;
                  }
                  puVar6 = (undefined1 *)
                           (ulong)(ABS(*(double *)((long)puVar3 + 0x28) -
                                       *(double *)(param_3 + 0x28)) < dVar7);
                  goto LAB_108f77c00;
                }
              }
            }
          }
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_108f77c00:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 108f77aa0; end: 108f77c53; -[SCUnifiedProfileListCellLayoutAttributes isEqual:] */

bool FUN_108f77aa0(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = false;
        if ((*(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30)) &&
           (bVar1 = false, !NAN(*(double *)(param_1 + 0x38)) && !NAN(*(double *)(param_3 + 0x38))))
        {
          bVar1 = *(double *)(param_1 + 0x38) == *(double *)(param_3 + 0x38);
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
          dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            bVar1 = false;
            if ((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
               (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_108f77c00;
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
              if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4)))
              {
                bVar1 = dVar5 < dVar4;
              }
              if (bVar1) {
                dVar4 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
                if ((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                            2.220446049250313e-16)) {
                  dVar4 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                          2.220446049250313e-16;
                  if (dVar4 <= 2.2250738585072014e-308) {
                    dVar4 = 2.2250738585072014e-308;
                  }
                  bVar1 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28)) < dVar4;
                  goto LAB_108f77c00;
                }
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_108f77c00:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108f77c54; end: 108f77c5b; -[SCUnifiedProfileListCellLayoutAttributes leftIconSize] */

undefined1  [16] FUN_108f77c54(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 108f77c5c; end: 108f77c63; -[SCUnifiedProfileListCellLayoutAttributes leftIconMarginX] */

undefined8 FUN_108f77c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f77c64; end: 108f77c6b; -[SCUnifiedProfileListCellLayoutAttributes rightIconSize] */

undefined1  [16] FUN_108f77c64(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 108f77c6c; end: 108f77c73; -[SCUnifiedProfileListCellLayoutAttributes rightIconMarginX] */

undefined8 FUN_108f77c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f77c74; end: 108f77c7b; -[SCUnifiedProfileListCellLayoutAttributes listCellHeight] */

undefined8 FUN_108f77c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f77c7c; end: 108f77c83; -[SCUnifiedProfileListCellLayoutAttributes leftIconLabelPadding] */

undefined8 FUN_108f77c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f77c84; end: 108f77c8b; -[SCUnifiedProfileListCellLayoutAttributes titleMinimumScaleFactor] */

undefined8 FUN_108f77c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f77c8c; end: 108f77f23; -[SCUnifiedProfileListCellViewModel initWithTitle:subtitle:leftIconViewModel:rightIconViewModel:badgeViewModel:tapActionModel:longPressActionModel:leftIconTapActionModel:rightIconTapActionModel:layoutAttributes:accessibilityIdentifier:leftSIGIcon:] */

undefined8 *
FUN_108f77c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  _objc_retain();
  puStack_68 = PTR_PTR_1126ff730;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108f77f24; end: 108f77f47; -[SCUnifiedProfileListCellViewModel copyWithZone:] */

undefined8 FUN_108f77f24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f77f48; end: 108f78033; -[SCUnifiedProfileListCellViewModel hash] */

undefined8 * FUN_108f77f48(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
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
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_88;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f781a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f781b0;
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
                            puVar6 = (undefined8 *)puVar3[0xc];
                            if (puVar6 != (undefined8 *)param_3[0xc]) {
                              func_0x00010c071ae0();
                              goto LAB_108f781b0;
                            }
                            goto LAB_108f781a4;
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
LAB_108f781b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f78034; end: 108f781cb; -[SCUnifiedProfileListCellViewModel isEqual:] */

long FUN_108f78034(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f781a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f781b0;
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
                            if (lVar3 != *(long *)(param_3 + 0x60)) {
                              func_0x00010c071ae0();
                              goto LAB_108f781b0;
                            }
                            goto LAB_108f781a4;
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
LAB_108f781b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f781cc; end: 108f781d3; -[SCUnifiedProfileListCellViewModel title] */

undefined8 FUN_108f781cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f781d4; end: 108f781db; -[SCUnifiedProfileListCellViewModel subtitle] */

undefined8 FUN_108f781d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f781dc; end: 108f781e3; -[SCUnifiedProfileListCellViewModel leftIconViewModel] */

undefined8 FUN_108f781dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f781e4; end: 108f781eb; -[SCUnifiedProfileListCellViewModel rightIconViewModel] */

undefined8 FUN_108f781e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f781ec; end: 108f781f3; -[SCUnifiedProfileListCellViewModel badgeViewModel] */

undefined8 FUN_108f781ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f781f4; end: 108f781fb; -[SCUnifiedProfileListCellViewModel tapActionModel] */

undefined8 FUN_108f781f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f781fc; end: 108f78203; -[SCUnifiedProfileListCellViewModel longPressActionModel] */

undefined8 FUN_108f781fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f78204; end: 108f7820b; -[SCUnifiedProfileListCellViewModel leftIconTapActionModel] */

undefined8 FUN_108f78204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f7820c; end: 108f78213; -[SCUnifiedProfileListCellViewModel rightIconTapActionModel] */

undefined8 FUN_108f7820c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f78214; end: 108f7821b; -[SCUnifiedProfileListCellViewModel layoutAttributes] */

undefined8 FUN_108f78214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f7821c; end: 108f78223; -[SCUnifiedProfileListCellViewModel accessibilityIdentifier] */

undefined8 FUN_108f7821c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f78224; end: 108f7822b; -[SCUnifiedProfileListCellViewModel leftSIGIcon] */

undefined8 FUN_108f78224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f7822c; end: 108f782d3; -[SCUnifiedProfileListCellViewModel .cxx_destruct] */

void FUN_108f7822c(long param_1)

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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f782d4; end: 108f7831b; -[SCUnifiedProfileListCellActionButtonViewModel initWithType:] */

void FUN_108f782d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff738;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108f7831c; end: 108f7833f; -[SCUnifiedProfileListCellActionButtonViewModel copyWithZone:] */

undefined8 FUN_108f7831c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f78340; end: 108f7834f; -[SCUnifiedProfileListCellActionButtonViewModel hash] */

long FUN_108f78340(long param_1)

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



/* Entry: 108f78350; end: 108f783d7; -[SCUnifiedProfileListCellActionButtonViewModel isEqual:] */

bool FUN_108f78350(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 108f783d8; end: 108f783df; -[SCUnifiedProfileListCellActionButtonViewModel type] */

undefined8 FUN_108f783d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f783e0; end: 108f78443; +[SCUnifiedProfileDisplayTitleViewModel displayNameButtonWithButtonViewModel:] */

void FUN_108f783e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dcb78;
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



/* Entry: 108f78444; end: 108f78527; +[SCUnifiedProfileDisplayTitleViewModel displayNameTextWithText:maxLinesCount:isMuted:tapActionModel:mutedIconTapActionModel:] */

void FUN_108f78444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126dcb78;
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
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puVar2[0x28] = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f78528; end: 108f7854b; -[SCUnifiedProfileDisplayTitleViewModel copyWithZone:] */

undefined8 FUN_108f78528(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7854c; end: 108f785ef; -[SCUnifiedProfileDisplayTitleViewModel hash] */

void FUN_108f7854c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  uStack_40 = (ulong)*(byte *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126ff740;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f785f0; end: 108f78633; -[SCUnifiedProfileDisplayTitleViewModel internalInit] */

void FUN_108f785f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff740;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f78634; end: 108f7873b; -[SCUnifiedProfileDisplayTitleViewModel isEqual:] */

long FUN_108f78634(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f78714:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f78720;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if (lVar3 != *(long *)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_108f78720;
            }
            goto LAB_108f78714;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f78720:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f7873c; end: 108f787cb; -[SCUnifiedProfileDisplayTitleViewModel matchDisplayNameButton:displayNameText:] */

void FUN_108f7873c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined1 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f787cc; end: 108f78813; -[SCUnifiedProfileDisplayTitleViewModel .cxx_destruct] */

void FUN_108f787cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f78814; end: 108f7889b; -[SCUnifiedProfileViewMoreViewModel initWithLabelText:isLoading:] */

undefined1 *
FUN_108f78814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff748;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7889c; end: 108f788bf; -[SCUnifiedProfileViewMoreViewModel copyWithZone:] */

undefined8 FUN_108f7889c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


