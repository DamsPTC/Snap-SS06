/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069e95e4; end: 1069e96bb; -[SCChatInputMediaAccessory scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e95e4(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_5);
  func_0x00010bfe2ae0(*(undefined8 *)(param_3 + _DAT_11275578c));
  func_0x00010bf4cdc0(param_5);
  lVar4 = (long)_DAT_112755794;
  dVar5 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar4));
  _CGRectGetWidth();
  if (0.0 < dVar5) {
    func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar4));
    _CGRectGetWidth();
    uVar3 = param_5;
    func_0x00010c0f36c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00();
    _objc_release(uVar3);
    bVar1 = false;
    bVar2 = true;
    if ((long)(param_1 / dVar5) == 0) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_2)) {
        bVar1 = param_2 == 48.0;
        bVar2 = 48.0 <= param_2;
      }
    }
    if (!bVar2 || bVar1) {
      func_0x00010c1f7b20(*(undefined8 *)(param_3 + lVar4),param_4,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069e96bc; end: 1069e972f; -[SCChatInputMediaAccessory scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e96bc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010be439e0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112755790);
    func_0x00010bf4cdc0(param_4);
    uVar3 = param_1;
    func_0x00010bfb68e0(param_4);
    _CGRectGetWidth();
    func_0x00010c267bc0(param_1,uVar3,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069e9730; end: 1069e9767; -[SCChatInputMediaAccessory scrollViewDidEndDragging:willDecelerate:] */

void FUN_1069e9730(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf770e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e9768; end: 1069e9797; -[SCChatInputMediaAccessory scrollViewDidEndScrollingAnimation:] */

void FUN_1069e9768(undefined8 param_1)

{
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf770e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e9798; end: 1069e97c7; -[SCChatInputMediaAccessory scrollViewDidEndDecelerating:] */

void FUN_1069e9798(undefined8 param_1)

{
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf770e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e97c8; end: 1069e985b; -[SCChatInputMediaAccessory tabControllerDidLoad:] */

void FUN_1069e97c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c065880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c152980(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0f36c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126d20(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e985c; end: 1069e985f; -[SCChatInputMediaAccessory isInSelectionMode:] */

void FUN_1069e985c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be439f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isSelecting_11256e818);
  return;
}



/* Entry: 1069e9860; end: 1069e9943; -[SCChatInputMediaAccessory getDrawerItemSelectedIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069e9860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0x7fffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127556e8);
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1);
  uVar1 = puStack_48[3];
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1069e9944; end: 1069e99d7;  */

void FUN_1069e9944(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0844e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1069e99d8; end: 1069e9a83; -[SCChatInputMediaAccessory tabController:canSelectDrawerItem:] */

undefined8 FUN_1069e99d8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c084c40();
  puVar2 = PTR_PTR_1126cf9e0;
  if (uVar1 == 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    func_0x00010be41d60();
    _objc_release(uVar1);
    if ((param_1 & 1) != 0) {
      uVar4 = 0;
      goto LAB_1069e9a68;
    }
  }
  uVar4 = 1;
LAB_1069e9a68:
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 1069e9a84; end: 1069e9a93; -[SCChatInputMediaAccessory tabController:didSelectDrawerItem:] */

void FUN_1069e9a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__selectDrawerItem_tabController__112584fe0,param_4,param_3);
  return;
}



/* Entry: 1069e9a94; end: 1069e9aa3; -[SCChatInputMediaAccessory tabController:didDeselectDrawerItem:] */

void FUN_1069e9a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__deselectDrawerItem_tabControlle_11255c5d8,param_4,param_3);
  return;
}



/* Entry: 1069e9aa4; end: 1069e9aab; -[SCChatInputMediaAccessory tabControllerDidRequestExitSelectMode:] */

void FUN_1069e9aa4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitHorizontalModeIfNeeded__1125609e8,2);
  return;
}



/* Entry: 1069e9aac; end: 1069e9f27; -[SCChatInputMediaAccessory tabController:refreshWithDrawerItemList:] */

/* WARNING: Possible PIC construction at 0x0001069e9dd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069e9dd8) */
/* WARNING: Removing unreachable block (ram,0x0001069e9e00) */
/* WARNING: Removing unreachable block (ram,0x0001069e9e0c) */
/* WARNING: Removing unreachable block (ram,0x0001069e9e18) */
/* WARNING: Removing unreachable block (ram,0x0001069e9dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e9aac(ulong param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c084c40();
  if (param_3 == 1) {
    uVar2 = param_1;
    func_0x00010bdf72c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c084c40();
    if (uVar3 == 1) {
      uVar3 = param_1;
      func_0x00010be439e0();
      _objc_release(uVar2);
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if ((int)uVar3 != 0) {
        uVar9 = param_4;
        func_0x00010c0b8600(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c225c20(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = (long)_DAT_1127556e8;
        lVar12 = *(long *)(param_1 + lVar1);
        _objc_retain(lVar12);
        lVar6 = lVar12;
        func_0x00010bf52a60();
        puVar7 = puRam0000000000000000;
        if (lVar6 != 0) goto code_r0x00010c0844e0;
        _objc_release(lVar12);
        uVar9 = *(undefined8 *)(param_1 + lVar1);
        *(undefined **)(param_1 + lVar1) = puVar5;
        _objc_retain(puVar5);
        _objc_release(uVar9);
        uVar9 = *(undefined8 *)(param_1 + (long)_DAT_112755790);
        func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar1));
        func_0x00010c289ac0(uVar9);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
    }
    else {
      _objc_release(uVar2);
    }
    func_0x00010c128b60(*(undefined8 *)(param_1 + (long)_DAT_112755794));
LAB_1069e9ea8:
    func_0x00010c1398e0(*(undefined8 *)(param_1 + (long)_DAT_112755798));
    func_0x00010bee19e0(param_1);
    uVar2 = param_1;
    func_0x00010be439e0();
    if ((uVar2 & 1) == 0) {
      func_0x00010be941a0(param_1);
    }
    else {
      func_0x00010bedf9c0(param_1);
    }
  }
  else {
    if (param_3 != 0) goto LAB_1069e9ea8;
    uVar2 = param_1;
    func_0x00010be439e0();
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf72c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c084c40();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        lVar12 = (long)_DAT_1127556e8;
        lVar1 = *(long *)(param_1 + lVar12);
        func_0x00010bf51e00();
        uVar2 = param_1;
        func_0x00010bee51c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0d3c80();
        uVar9 = *(undefined8 *)(param_1 + lVar12);
        *(ulong *)(param_1 + lVar12) = uVar3;
        _objc_release(uVar9);
        _objc_release(uVar2);
        lVar13 = (long)_DAT_11275579c;
        *(undefined8 *)(param_1 + lVar13) = 0;
        lVar14 = (long)_DAT_1127557a0;
        *(undefined8 *)(param_1 + lVar14) = 0;
        dVar15 = 0.0;
        _objc_retain(lVar1);
        lVar6 = lVar1;
        func_0x00010bf52a60();
        puVar4 = puRam0000000000000000;
        while (lVar6 != 0) {
          lVar10 = 0;
          do {
            if (puRam0000000000000000 != puVar4) {
              _objc_enumerationMutation(lVar1);
            }
            param_2 = PTR_PTR_1126cf9e0;
            uVar11 = *(ulong *)(lVar10 * 8);
            _objc_retain(uVar11);
            _objc_opt_class(param_2);
            uVar3 = uVar11;
            _objc_opt_isKindOfClass(uVar11,param_2);
            uVar2 = uVar11;
            if ((uVar3 & 1) == 0) {
              uVar2 = 0;
            }
            _objc_retain(uVar2);
            _objc_release(uVar11);
            if (uVar2 != 0) {
              func_0x00010bf8b160(uVar11);
              dVar15 = dVar15 + *(double *)(param_1 + lVar14);
              *(double *)(param_1 + lVar14) = dVar15;
              func_0x00010bfad040(uVar11);
              dVar15 = dVar15 + *(double *)(param_1 + lVar13);
              *(double *)(param_1 + lVar13) = dVar15;
            }
            _objc_release(uVar2);
            lVar10 = lVar10 + 1;
          } while (lVar6 != lVar10);
          lVar6 = lVar1;
          func_0x00010bf52a60();
        }
        _objc_release(lVar1);
        uVar9 = *(undefined8 *)(param_1 + (long)_DAT_112755790);
        func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar12));
        func_0x00010c289ac0(uVar9);
        _objc_release(lVar1);
        goto LAB_1069e9ea8;
      }
    }
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = param_2;
code_r0x00010c0844e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0844f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_itemId_1125feb48);
  return;
}



/* Entry: 1069e9f28; end: 1069e9f2f;  */

void FUN_1069e9f28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0844f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_itemId_1125feb48);
  return;
}



/* Entry: 1069e9f30; end: 1069e9f9b; -[SCChatInputMediaAccessory tabController:willBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e9f30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275578c;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c152980(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd5560(param_2);
  func_0x00010c1f7d80(0,param_1,uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c23a650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar2),PTR_s_showTableIndexAnimated_11266c3b8);
  return;
}



/* Entry: 1069e9f9c; end: 1069e9fd3; -[SCChatInputMediaAccessory tabController:didScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e9f9c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11275578c);
  func_0x00010bdd5560();
                    /* WARNING: Could not recover jumptable at 0x00010c28ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,uVar1,PTR_s_updateTableIndexPositionWithTopO_112680508,1);
  return;
}



/* Entry: 1069e9fd4; end: 1069e9feb; -[SCChatInputMediaAccessory tabController:didEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e9fd4(long param_1)

{
  uint in_w4;
  
  if ((in_w4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf75b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275578c),PTR_s_didEndScrolling_1125bb078);
  return;
}



/* Entry: 1069e9fec; end: 1069ea063; -[SCChatInputMediaAccessory tabControllerDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e9fec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf75b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275578c),PTR_s_didEndScrolling_1125bb078);
  return;
}



/* Entry: 1069ea064; end: 1069ea077; -[SCChatInputMediaAccessory pillControllerWillBeginScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755794),PTR_s_setScrollEnabled__11265b8f0,0);
  return;
}



/* Entry: 1069ea078; end: 1069ea08b; -[SCChatInputMediaAccessory pillControllerDidEndScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755794),PTR_s_setScrollEnabled__11265b8f0,1);
  return;
}



/* Entry: 1069ea08c; end: 1069ea0cb; -[SCChatInputMediaAccessory isDrawerFullyExpanded] */

bool FUN_1069ea08c(long param_1)

{
  long lVar1;
  
  func_0x00010c065880();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 1069ea0cc; end: 1069ea0d3; -[SCChatInputMediaAccessory tabController:didRequestEditItem:] */

void FUN_1069ea0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentPreviewForDrawerItem__11257cf70,param_4);
  return;
}



/* Entry: 1069ea0d4; end: 1069ea10f; -[SCChatInputMediaAccessory _updateTabBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea0d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755790);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755778);
  func_0x00010bfbcd00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_updateTabBarWithGalleryEntryCoun_1126804d0,uVar1);
  return;
}



/* Entry: 1069ea110; end: 1069ea2b7; -[SCChatInputMediaAccessory _updateSendBar] */

/* WARNING: Possible PIC construction at 0x0001069ea160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001069ea284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001069ea29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069ea288) */
/* WARNING: Removing unreachable block (ram,0x0001069ea164) */
/* WARNING: Removing unreachable block (ram,0x0001069ea2a0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea110(double param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  
  lVar8 = param_2;
  func_0x00010be439e0();
  if ((int)lVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be35c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__hideSendBar_11256b0b8);
    return;
  }
  func_0x00010bebabe0(param_2);
  lVar8 = (long)_DAT_1127556e8;
  uVar1 = *(ulong *)(param_2 + lVar8);
  func_0x00010bf529e0();
  if (1 < uVar1) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112755798);
    uVar7 = 1;
code_r0x00010c1fbfe0:
                    /* WARNING: Could not recover jumptable at 0x00010c1fbff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setSendButtonEnabled__11265ca20,uVar7);
    return;
  }
  lVar3 = *(long *)(param_2 + lVar8);
  func_0x00010bf529e0();
  if (lVar3 != 1) {
    lVar8 = (long)_DAT_112755798;
    func_0x00010c193600(*(undefined8 *)(param_2 + lVar8));
    func_0x00010c23a760(*(undefined8 *)(param_2 + lVar8));
    uVar2 = *(undefined8 *)(param_2 + lVar8);
    uVar7 = 0;
    goto code_r0x00010c1fbfe0;
  }
  uVar4 = *(ulong *)(param_2 + lVar8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cfa58;
  _objc_opt_class(PTR_PTR_1126cfa58);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126cf9e0;
  _objc_opt_class(PTR_PTR_1126cf9e0);
  uVar6 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar5);
  if ((uVar6 & 1) != 0) {
    func_0x00010bf8b160(uVar1);
    dVar9 = param_1;
    func_0x00010be07000(param_2);
    if (dVar9 < param_1) {
      uVar2 = 0;
      goto LAB_1069ea278;
    }
  }
  uVar2 = 1;
LAB_1069ea278:
                    /* WARNING: Could not recover jumptable at 0x00010c193610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_112755798),PTR_s_setEditButtonEnabled__1126427a0,uVar2);
  return;
}



/* Entry: 1069ea2b8; end: 1069ea2fb; -[SCChatInputMediaAccessory _showSendBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea2b8(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112755798;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c074c20();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,0);
    return;
  }
  return;
}



/* Entry: 1069ea2fc; end: 1069ea33f; -[SCChatInputMediaAccessory _hideSendBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea2fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112755798;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010c074c20();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1069ea340; end: 1069ea3eb; -[SCChatInputMediaAccessory textForGalleryTableIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c267e60(*(undefined8 *)(param_5 + _DAT_11275578c));
  func_0x00010bdf72c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c0851c0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107e89650();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1069ea3ec; end: 1069ea42b; -[SCChatInputMediaAccessory galleryTableIndex:isDraggedToPercent:] */

void FUN_1069ea3ec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152680(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069ea42c; end: 1069ea46f; -[SCChatInputMediaAccessory _exitHorizontalModeIfNeeded:] */

void FUN_1069ea42c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be439e0();
  if ((int)uVar1 != 0) {
    func_0x00010be941a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde0910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearMediaSelectionCache_112555be0);
    return;
  }
  return;
}



/* Entry: 1069ea470; end: 1069ea4c3; -[SCChatInputMediaAccessory _clearMediaSelectionCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea470(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127557a4);
  *(undefined8 *)(param_1 + _DAT_1127557a4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755754);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069ea4c4; end: 1069ea77b; -[SCChatInputMediaAccessory _resetToVerticalMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea4c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127556e8;
  uVar4 = *(undefined8 *)(param_2 + lVar5);
  *(undefined **)(param_2 + lVar5) = puVar1;
  _objc_release(uVar4);
  *(undefined8 *)(param_2 + _DAT_11275579c) = 0;
  *(undefined8 *)(param_2 + _DAT_1127557a0) = 0;
  func_0x00010c1398e0(*(undefined8 *)(param_2 + _DAT_112755798));
  func_0x00010be35c60(param_2);
  uVar4 = *(undefined8 *)(param_2 + _DAT_112755790);
  func_0x00010bf529e0(*(undefined8 *)(param_2 + lVar5));
  func_0x00010c289ac0(uVar4);
  lVar5 = param_2;
  func_0x00010c065880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440();
  _objc_release(lVar5);
  if (param_4 < 2) {
    if (param_4 == 0) goto LAB_1069ea5f4;
  }
  else if (((param_4 != 4) && (param_4 != 3)) && (param_4 == 2)) {
    func_0x00010c106f20(param_2);
  }
  lVar5 = param_2;
  func_0x00010c065880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a900();
  _objc_release(lVar5);
LAB_1069ea5f4:
  lVar6 = (long)_DAT_112755774;
  func_0x00010bf02d60(*(undefined8 *)(param_2 + lVar6));
  lVar7 = (long)_DAT_112755778;
  func_0x00010bf02d60(*(undefined8 *)(param_2 + lVar7));
  uVar4 = *(undefined8 *)(param_2 + _DAT_11275578c);
  func_0x00010bdd5560(param_2);
  func_0x00010c28ab80(0,param_1,uVar4);
  lVar2 = *(long *)(param_2 + lVar6);
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar5 != 0) {
    lVar5 = param_2;
    func_0x00010c065880(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c152980(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126d20(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar5);
  }
  lVar2 = *(long *)(param_2 + lVar7);
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar5 != 0) {
    lVar5 = param_2;
    func_0x00010c065880(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c152980(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126d20(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_112755794),PTR_s_setScrollEnabled__11265b8f0,1);
  return;
}



/* Entry: 1069ea77c; end: 1069ea80b; -[SCChatInputMediaAccessory didPressEdit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ea77c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  lVar4 = (long)_DAT_1127556e8;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (lVar2 == 1) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7d740(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1069ea80c; end: 1069ea8f3; -[SCChatInputMediaAccessory _presentPreviewForDrawerItem:] */

void FUN_1069ea80c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00010c084c40();
    puVar2 = PTR_PTR_1126cfa58;
    puVar3 = PTR_PTR_1126af4c0;
    uVar4 = param_3;
    if (uVar1 == 1) {
      _objc_retain(param_3);
      _objc_opt_class(puVar3);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((uVar1 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(param_3);
      func_0x00010be7d780(param_1);
    }
    else {
      if (uVar1 != 0) goto LAB_1069ea8e0;
      _objc_retain(param_3);
      _objc_opt_class(puVar2);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      if ((uVar1 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(param_3);
      func_0x00010be7d760(param_1);
    }
    _objc_release(uVar4);
  }
LAB_1069ea8e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069ea8f4; end: 1069eaa13; -[SCChatInputMediaAccessory _presentPreviewForDrawerMedia:] */

void FUN_1069ea8f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  func_0x00010c0e3dc0(param_1);
  puVar1 = PTR_PTR_1126cfa30;
  _objc_opt_class(PTR_PTR_1126cfa30);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126cf9e0;
    _objc_opt_class(PTR_PTR_1126cf9e0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c10db80(param_1);
    }
  }
  else {
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retain(param_3);
    func_0x00010bfa91a0(param_3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069eaa14; end: 1069eaadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eaa14(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11275577c);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1069eaae0; end: 1069eab7f;  */

void FUN_1069eaae0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c109f40(*(undefined8 *)(param_1 + 0x20));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1069eab80;
  puStack_40 = &UNK_110848ba8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  uStack_30 = uVar3;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 1069eab80; end: 1069eabef;  */

void FUN_1069eab80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0fa940(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c242120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7d7e0(uVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1069eabf0; end: 1069eace3; -[SCChatInputMediaAccessory _presentPreviewForGalleryEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eabf0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if ((uVar1 & 0xfffffffffffffff7) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275577c);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069eace4; end: 1069eafc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eace4(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *unaff_x20;
  undefined *unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *unaff_x23;
  long lVar9;
  undefined *puVar10;
  undefined **unaff_x27;
  undefined1 auStack_118 [8];
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126af4d0;
  if (lVar2 != 0) {
    lVar9 = (long)_DAT_1127556e0;
    uVar3 = *(undefined8 *)(lVar2 + lVar9);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa73a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    unaff_x21 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = *(long *)(param_1 + 0x20);
    func_0x000107da0750(unaff_x22,puVar4);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR____NSArray0__struct_11034ab48;
    if (unaff_x22 != 0) {
      unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = unaff_x22;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = unaff_x23;
    func_0x00010bf529e0();
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      uStack_78 = *(undefined8 *)(param_1 + 0x20);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar2 + lVar9);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      func_0x000107da0820(puVar5,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(puVar5);
    }
    puVar5 = unaff_x21;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar5 != (undefined *)0x0;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1069eafc8;
    puStack_b8 = &UNK_110952aa0;
    _objc_copyWeak(auStack_88,param_1 + 0x28);
    uStack_80 = bVar1;
    _objc_retain(puVar4);
    puStack_b0 = puVar4;
    _objc_retain(puVar10);
    puStack_a8 = puVar10;
    _objc_retain(unaff_x23);
    param_1 = *(long *)(param_1 + 0x20);
    puStack_a0 = unaff_x23;
    _objc_retain(param_1);
    lStack_98 = param_1;
    _objc_retain(unaff_x21);
    puStack_90 = unaff_x21;
    func_0x00010c0f7fc0(puVar5);
    _objc_release(puVar5);
    _objc_release(puStack_90);
    _objc_release(lStack_98);
    _objc_release(puStack_a0);
    _objc_release(puStack_a8);
    _objc_release(puStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar10);
    _objc_release(unaff_x21);
    _objc_release(puVar4);
    unaff_x20 = puVar4;
    unaff_x27 = &puStack_d0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined1 *)((long)unaff_x27 + 0x48));
    lVar6 = lVar2;
    __Unwind_Resume();
    pcStack_d8 = FUN_1069eafc8;
    lVar9 = lVar6 + 0x48;
    lStack_110 = param_1;
    puStack_108 = unaff_x23;
    lStack_100 = unaff_x22;
    puStack_f8 = unaff_x21;
    puStack_f0 = unaff_x20;
    lStack_e8 = lVar2;
    puStack_e0 = &stack0xfffffffffffffff0;
    _objc_loadWeakRetained();
    if (lVar9 != 0) {
      if ((*(byte *)(lVar6 + 0x50) & 1) == 0) {
        func_0x000108df9400(lVar9);
      }
      else {
        puVar4 = PTR_PTR_1126b24c8;
        _objc_alloc(PTR_PTR_1126b24c8);
        func_0x00010c017280();
        _objc_copyWeak(auStack_118,lVar6 + 0x48);
        uVar7 = *(undefined8 *)(lVar6 + 0x20);
        _objc_retain(uVar7);
        uVar8 = *(undefined8 *)(lVar6 + 0x38);
        _objc_retain(uVar8);
        uVar3 = *(undefined8 *)(lVar6 + 0x40);
        _objc_retain(uVar3);
        func_0x00010c142c20(puVar4);
        _objc_release(uVar3);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_destroyWeak(auStack_118);
        _objc_release(puVar4);
      }
    }
    _objc_release(lVar9);
    return;
  }
  return;
}



/* Entry: 1069eafc8; end: 1069eb15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eafc8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      func_0x000108df9400(lVar1);
    }
    else {
      puVar2 = PTR_PTR_1126b24c8;
      _objc_alloc(PTR_PTR_1126b24c8);
      func_0x00010c017280();
      _objc_copyWeak(auStack_48,param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar3);
      func_0x00010c142c20(puVar2);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_48);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1069eb160; end: 1069eb5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eb160(undefined1 *param_1,undefined1 *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined *unaff_x26;
  undefined1 *puVar17;
  long lVar18;
  undefined1 *unaff_x28;
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [8];
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined *puStack_1b0;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (((ulong)param_2 & 1) == 0) {
    param_2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (param_2 != (undefined1 *)0x0) {
      if ((param_8 == 0) || (lVar10 = param_8, func_0x00010bf3ec40(), lVar10 == 0xda)) {
        uVar1 = *(undefined8 *)(param_2 + _DAT_112755738);
        puStack_88 = param_3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf22420();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = (long)_DAT_1127557a8;
        uVar9 = *(undefined8 *)(param_2 + lVar10);
        *(undefined8 *)(param_2 + lVar10) = uVar2;
        _objc_release(uVar9);
        _objc_release(uVar1);
        puVar7 = param_2;
        func_0x00010be3c1e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = param_2;
        func_0x00010beb4000();
        _objc_release(puVar7);
        puStack_80 = (undefined1 *)0x0;
        if (((ulong)puVar17 & 1) == 0) {
          puVar7 = param_2;
          func_0x00010be3c1e0();
          _objc_retainAutoreleasedReturnValue();
          puStack_80 = puVar7;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = *(undefined1 **)(param_1 + 0x28);
        uVar2 = uVar1;
        func_0x00010b5f9bfc();
        _objc_retainAutoreleasedReturnValue();
        uStack_90 = uVar2;
        _objc_release(uVar1);
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c241220(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puStack_88;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uStack_d0 = *(undefined8 *)(param_2 + lVar10);
        uStack_d8 = *(undefined8 *)(param_1 + 0x28);
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        uStack_e0 = uVar2;
        if (puVar3 == (undefined *)0x0) {
          puStack_b0 = PTR____NSArray0__struct_11034ab48;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_78 = puVar3;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          puStack_b0 = puVar4;
        }
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_4;
        uStack_c0 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        uStack_c8 = uVar1;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_5;
        uStack_e8 = uVar9;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = (long)_DAT_1127556e4;
        puVar17 = param_2 + lVar10;
        uStack_98 = uVar2;
        _objc_loadWeakRetained();
        puStack_f0 = puVar17;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_2 + lVar10;
        puStack_a0 = puVar17;
        _objc_loadWeakRetained();
        puStack_f8 = puVar5;
        func_0x00010c131e40();
        _objc_retainAutoreleasedReturnValue();
        puStack_100 = puVar5;
        func_0x00010c131ca0();
        _objc_retainAutoreleasedReturnValue();
        param_1 = param_2 + lVar10;
        puStack_a8 = puVar5;
        _objc_loadWeakRetained();
        puStack_108 = param_1;
        func_0x00010c074920();
        puStack_b8 = puVar3;
        if (((ulong)param_1 & 1) == 0) {
          puVar17 = param_2 + lVar10;
          _objc_loadWeakRetained();
          puStack_110 = puVar17;
          func_0x00010c122e00();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar17 = (undefined1 *)0x0;
        }
        unaff_x28 = param_2 + lVar10;
        _objc_loadWeakRetained();
        puVar5 = unaff_x28;
        func_0x00010c074920();
        uVar2 = uStack_c8;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_130 = 6;
        uStack_128 = 0;
        uStack_138 = SUB81(puVar5,0);
        puStack_148 = puStack_a8;
        puStack_150 = puStack_a0;
        puStack_158 = puStack_80;
        puStack_160 = param_2;
        puStack_140 = puVar17;
        func_0x00010c10db00(uStack_d0);
        _objc_release(unaff_x28);
        if (((ulong)param_1 & 1) == 0) {
          _objc_release(puVar17);
          _objc_release(puStack_110);
        }
        _objc_release(puStack_108);
        _objc_release(puStack_a8);
        _objc_release(puStack_100);
        _objc_release(puStack_f8);
        _objc_release(puStack_a0);
        _objc_release(puStack_f0);
        _objc_release(uStack_98);
        _objc_release(uStack_e8);
        _objc_release(uVar2);
        _objc_release(uStack_c0);
        param_3 = puStack_88;
        unaff_x26 = puStack_b8;
        if (puStack_b8 != (undefined *)0x0) {
          _objc_release(puStack_b0);
        }
        _objc_release(unaff_x26);
        _objc_release(uStack_90);
        _objc_release(puStack_80);
      }
      else {
        func_0x000108df7438(param_2);
      }
    }
    _objc_release(param_2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_1069eb5b0;
  ppuVar12 = &puStack_380;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_PTR_1126b6b08;
  puStack_1c0 = unaff_x28;
  puStack_1b8 = param_1;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = param_2;
  lStack_1a0 = param_8;
  uStack_198 = param_7;
  uStack_190 = param_6;
  uStack_188 = param_5;
  uStack_180 = param_4;
  puStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110e674b8;
  func_0x00010c0b2e20();
  _objc_release(puVar4);
  puVar13 = puVar3;
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar13;
  func_0x00010c084c40();
  puVar4 = puVar13;
  _objc_release();
  if (puVar6 == (undefined *)0x1) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lVar11 = *(long *)(puVar3 + _DAT_1127556e8);
    _objc_retain(lVar11);
    lVar10 = lVar11;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar15 = *plStack_340;
      do {
        lVar16 = 0;
        do {
          if (*plStack_340 != lVar15) {
            _objc_enumerationMutation(lVar11);
          }
          uVar14 = *(ulong *)(lStack_348 + lVar16 * 8);
          puVar13 = PTR_PTR_1126af4c0;
          _objc_opt_class(PTR_PTR_1126af4c0);
          _objc_opt_isKindOfClass(uVar14,puVar13);
          if ((uVar14 & 1) != 0) {
            func_0x00010befa120(puVar4);
          }
          lVar16 = lVar16 + 1;
        } while (lVar10 != lVar16);
        lVar10 = lVar11;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar11);
    _objc_initWeak(auStack_358,puVar3);
    puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_378 = 0xc2000000;
    pcStack_370 = FUN_1069eb92c;
    puStack_368 = &UNK_1108434e0;
    puVar7 = auStack_358;
    _objc_copyWeak(auStack_360,puVar7);
    func_0x00010be78560(puVar3);
    ppuVar8 = (undefined **)0x3;
    func_0x00010be0c120(puVar3);
    _objc_destroyWeak(auStack_360);
    _objc_destroyWeak(auStack_358);
  }
  else {
    ppuVar12 = (undefined **)puVar13;
    if (puVar6 != (undefined *)0x0) goto LAB_1069eb8c8;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    lVar15 = (long)_DAT_1127556e8;
    lVar11 = *(long *)(puVar3 + lVar15);
    _objc_retain(lVar11);
    lVar10 = lVar11;
    func_0x00010bf52a60();
    if (lVar10 == 0) {
      ppuVar12 = (undefined **)0xffffffffffffffff;
    }
    else {
      lVar16 = *plStack_300;
      ppuVar12 = (undefined **)0xffffffffffffffff;
      do {
        lVar18 = 0;
        do {
          if (*plStack_300 != lVar16) {
            _objc_enumerationMutation(lVar11);
          }
          puVar13 = *(undefined **)(lStack_308 + lVar18 * 8);
          puVar4 = puVar13;
          func_0x00010c247720();
          if (puVar4 < ppuVar12) {
            func_0x00010c247720();
            ppuVar12 = (undefined **)puVar13;
          }
          lVar18 = lVar18 + 1;
        } while (lVar10 != lVar18);
        lVar10 = lVar11;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar11);
    puVar4 = PTR_PTR_1126cfab0;
    _objc_alloc();
    uVar2 = *(undefined8 *)(puVar3 + lVar15);
    func_0x00010bf51e00();
    func_0x00010c0293a0();
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(puVar3 + _DAT_112755734));
    *(long *)(puVar3 + _DAT_112755788) = *(long *)(puVar3 + _DAT_112755788) + 1;
    ppuVar8 = (undefined **)0x3;
    func_0x00010be0c120(puVar3);
  }
  _objc_release();
LAB_1069eb8c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined *)((long)ppuVar12 + 0x20));
    _objc_destroyWeak(auStack_358);
    __Unwind_Resume();
    _objc_retain(puVar7);
    puVar4 = puVar4 + 0x20;
    _objc_loadWeakRetained();
    if ((ppuVar8 == (undefined **)0x0) && (puVar4 != (undefined *)0x0)) {
      puVar3 = PTR_PTR_1126cfab0;
      _objc_alloc(PTR_PTR_1126cfab0);
      func_0x00010c0293a0();
      func_0x00010c0d9840(*(undefined8 *)(puVar4 + _DAT_112755734));
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 1069eb5b0; end: 1069eb92b; -[SCChatInputMediaAccessory didPressSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eb5b0(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  ppuVar7 = &puStack_220;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e674b8;
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  puVar8 = param_1;
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c084c40();
  puVar1 = puVar8;
  _objc_release();
  if (puVar2 == (undefined *)0x1) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lVar6 = *(long *)(param_1 + _DAT_1127556e8);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar10 = *plStack_1e0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1e0 != lVar10) {
            _objc_enumerationMutation(lVar6);
          }
          uVar9 = *(ulong *)(lStack_1e8 + lVar11 * 8);
          puVar8 = PTR_PTR_1126af4c0;
          _objc_opt_class(PTR_PTR_1126af4c0);
          _objc_opt_isKindOfClass(uVar9,puVar8);
          if ((uVar9 & 1) != 0) {
            func_0x00010befa120(puVar1);
          }
          lVar11 = lVar11 + 1;
        } while (lVar3 != lVar11);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar6);
    _objc_initWeak(auStack_1f8,param_1);
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_1069eb92c;
    puStack_208 = &UNK_1108434e0;
    param_2 = auStack_1f8;
    _objc_copyWeak(auStack_200,param_2);
    func_0x00010be78560(param_1);
    ppuVar5 = (undefined **)0x3;
    func_0x00010be0c120(param_1);
    _objc_destroyWeak(auStack_200);
    _objc_destroyWeak(auStack_1f8);
  }
  else {
    ppuVar7 = (undefined **)puVar8;
    if (puVar2 != (undefined *)0x0) goto LAB_1069eb8c8;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar10 = (long)_DAT_1127556e8;
    lVar6 = *(long *)(param_1 + lVar10);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      ppuVar7 = (undefined **)0xffffffffffffffff;
    }
    else {
      lVar11 = *plStack_1a0;
      ppuVar7 = (undefined **)0xffffffffffffffff;
      do {
        lVar12 = 0;
        do {
          if (*plStack_1a0 != lVar11) {
            _objc_enumerationMutation(lVar6);
          }
          puVar8 = *(undefined **)(lStack_1a8 + lVar12 * 8);
          puVar1 = puVar8;
          func_0x00010c247720();
          if (puVar1 < ppuVar7) {
            func_0x00010c247720();
            ppuVar7 = (undefined **)puVar8;
          }
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar6);
    puVar1 = PTR_PTR_1126cfab0;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf51e00();
    func_0x00010c0293a0();
    _objc_release(uVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112755734));
    *(long *)(param_1 + _DAT_112755788) = *(long *)(param_1 + _DAT_112755788) + 1;
    ppuVar5 = (undefined **)0x3;
    func_0x00010be0c120(param_1);
  }
  _objc_release();
LAB_1069eb8c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined *)((long)ppuVar7 + 0x20));
    _objc_destroyWeak(auStack_1f8);
    __Unwind_Resume();
    _objc_retain(param_2);
    puVar1 = puVar1 + 0x20;
    _objc_loadWeakRetained();
    if ((ppuVar5 == (undefined **)0x0) && (puVar1 != (undefined *)0x0)) {
      puVar8 = PTR_PTR_1126cfab0;
      _objc_alloc(PTR_PTR_1126cfab0);
      func_0x00010c0293a0();
      func_0x00010c0d9840(*(undefined8 *)(puVar1 + _DAT_112755734));
      _objc_release(puVar8);
    }
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1069eb92c; end: 1069eb9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eb92c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    puVar1 = PTR_PTR_1126cfab0;
    _objc_alloc(PTR_PTR_1126cfab0);
    func_0x00010c0293a0();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112755734));
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069eb9bc; end: 1069ebab7; -[SCChatInputMediaAccessory _prepareAndSend:cloudFiles:snapDocs:] */

void FUN_1069eb9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bdebee0(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069ebab8; end: 1069ebb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ebab8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      puVar1 = PTR_PTR_1126cfab0;
      _objc_alloc(PTR_PTR_1126cfab0);
      func_0x00010c0293a0();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112755734));
      _objc_release(puVar1);
    }
    else {
      func_0x000108df7438(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069ebb54; end: 1069ebc67; -[SCChatInputMediaAccessory _prepareGalleryEntries:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ebb54(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275577c);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069ebc68; end: 1069ebf97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ebc68(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_1 + 6;
  _objc_loadWeakRetained();
  ppuVar5 = param_1;
  if (ppuVar1 != (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar9 = param_1[4];
    _objc_retain(puVar9);
    puVar10 = puVar9;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(puVar9);
          }
          puVar4 = PTR_PTR_1126af4d0;
          lVar11 = *(long *)(lStack_128 + (long)puVar7 * 8);
          uVar3 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_1127556e0);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa73a0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          func_0x00010befa160(puVar2);
          func_0x000107da0750(lVar11,puVar4);
          _objc_retainAutoreleasedReturnValue();
          if (lVar11 != 0) {
            func_0x00010befa120(puVar6);
          }
          _objc_release(lVar11);
          _objc_release(puVar4);
          puVar7 = puVar7 + 1;
        } while (puVar10 != puVar7);
        puVar10 = puVar9;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    puVar10 = puVar6;
    func_0x00010bf529e0();
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      uVar3 = 0;
    }
    else {
      puVar10 = param_1[4];
      uVar3 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_1127556e0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107da0820(puVar10,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_1069ebf98;
    puStack_160 = &UNK_11084cbf0;
    ppuVar5 = &puStack_178;
    _objc_copyWeak(auStack_138,param_1 + 6);
    _objc_retain(puVar2);
    puStack_158 = puVar2;
    _objc_retain(puVar10);
    puStack_150 = puVar10;
    _objc_retain(puVar6);
    puVar9 = param_1[5];
    puStack_148 = puVar6;
    _objc_retain(puVar9);
    puStack_140 = puVar9;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar3);
    _objc_release(puStack_140);
    _objc_release(puStack_148);
    _objc_release(puStack_150);
    _objc_release(puStack_158);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar5 + 8);
  __Unwind_Resume();
  ppuVar5 = ppuVar1 + 8;
  _objc_loadWeakRetained();
  if (ppuVar5 != (undefined **)0x0) {
    puVar2 = PTR_PTR_1126b24c8;
    _objc_alloc(PTR_PTR_1126b24c8);
    puVar6 = ppuVar1[4];
    func_0x00010bf51e00(puVar6);
    func_0x00010c017280(puVar2);
    _objc_release(puVar6);
    puVar10 = ppuVar1[7];
    _objc_retain(puVar10);
    puVar6 = ppuVar1[4];
    _objc_retain(puVar6);
    func_0x00010c142c20(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(puVar2);
  }
  _objc_release(ppuVar5);
  return;
}



/* Entry: 1069ebf98; end: 1069ec0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ebf98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b24c8;
    _objc_alloc(PTR_PTR_1126b24c8);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar3);
    func_0x00010c017280(puVar2,param_2,uVar3,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),lVar1,1,0,
                        &PTR__OBJC_CLASS___NSConstantArray_111180dd0,
                        *(undefined8 *)(lVar1 + _DAT_112755708),
                        *(undefined8 *)(lVar1 + _DAT_11275570c),
                        *(undefined8 *)(lVar1 + _DAT_112755710),
                        *(undefined8 *)(lVar1 + _DAT_112755714),
                        *(undefined8 *)(lVar1 + _DAT_112755718),
                        *(undefined8 *)(lVar1 + _DAT_11275571c),
                        *(undefined8 *)(lVar1 + _DAT_112755720),
                        *(undefined8 *)(lVar1 + _DAT_112755744));
    _objc_release(uVar3);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1069ec0f0;
    puStack_50 = &UNK_110952ad0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = lVar1;
    uStack_38 = uVar4;
    _objc_retain(uVar3);
    uStack_40 = uVar3;
    func_0x00010c142c20(puVar2,param_2,0,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1069ec0f0; end: 1069ec2d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ec0f0(long param_1,int param_2,undefined *param_3,undefined *param_4,undefined *param_5
                  ,undefined8 param_6,undefined *param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_100;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_3;
  puVar14 = param_4;
  puVar15 = param_5;
  uVar16 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_2 == 0) {
    if (param_8 == (undefined *)0x0) {
      puVar13 = *(undefined **)(param_1 + 0x28);
      uVar16 = *(undefined8 *)(param_1 + 0x30);
      puVar14 = param_3;
      puVar15 = param_7;
      func_0x00010bdebee0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      puVar2 = param_8;
      func_0x00010bf3ec40();
      if (puVar2 == (undefined *)0xda) {
        puVar13 = *(undefined **)(param_1 + 0x20);
        func_0x00010c23ab00(PTR_PTR_1126b2518);
      }
      else {
        func_0x000108df7438(*(undefined8 *)(param_1 + 0x20));
      }
      lVar19 = *(long *)(param_1 + 0x30);
      if (lVar19 != 0) {
        puVar13 = param_8;
        (**(code **)(lVar19 + 0x10))(lVar19,0);
      }
    }
  }
  else {
    lVar19 = *(long *)(param_1 + 0x30);
    if (lVar19 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = (undefined *)0xffffffffffffffff;
      puVar15 = puVar1;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar2;
      (**(code **)(lVar19 + 0x10))(lVar19,0);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  _objc_retain(puVar15);
  _objc_retain(uVar16);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_1069ec7e8;
  uStack_190 = 0x1069ec7f8;
  uStack_188 = 0;
  puVar1 = puVar2;
  _dispatch_group_create();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(puVar13);
  puVar3 = puVar13;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar17 = *plStack_1e0;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar17) {
          _objc_enumerationMutation(puVar13);
        }
        puVar5 = PTR_PTR_1126bc7b8;
        uVar20 = *(undefined8 *)(lStack_1e8 + (long)puVar18 * 8);
        uVar4 = *(undefined8 *)(param_3 + _DAT_1127556e0);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126cfab8;
        _objc_alloc();
        func_0x00010c022560();
        puVar7 = PTR_PTR_1126cfac0;
        _objc_alloc();
        uVar4 = uVar20;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar15;
        func_0x00010c0e00e0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar20;
        func_0x00010c241220(uVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar14;
        func_0x00010c0e00e0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = 0x15;
        func_0x0001000819a8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_3 + _DAT_112755730;
        _objc_loadWeakRetained();
        func_0x00010c017180();
        _objc_release(puVar12);
        _objc_release(uVar11);
        _objc_release(puVar10);
        _objc_release(uVar9);
        _objc_release(puVar8);
        _objc_release(uVar4);
        func_0x00010befa120(puVar2);
        _dispatch_group_enter(puVar1);
        func_0x00010c241220(uVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar15;
        func_0x00010c0e00e0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_220 = 0xc2000000;
        pcStack_218 = FUN_1069ec800;
        puStack_210 = &UNK_110952b00;
        puStack_1f8 = &uStack_1b0;
        _objc_retain(puVar7);
        puStack_208 = puVar7;
        puStack_200 = puVar1;
        func_0x00010bddcee0(param_3);
        _objc_release(puVar12);
        _objc_release(uVar20);
        _objc_release(puStack_208);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar18 = puVar18 + 1;
      } while (puVar3 != puVar18);
      puVar3 = puVar13;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar13);
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_1069ec87c;
  puStack_248 = &UNK_110883360;
  puStack_230 = &uStack_1b0;
  puStack_240 = puVar2;
  uStack_238 = uVar16;
  _objc_retain();
  _objc_retain(uVar16);
  func_0x000100bc0718(puVar1,PTR___dispatch_main_q_11034be20,&puStack_260);
  _objc_release(puStack_240);
  _objc_release(uStack_238);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  _objc_release(puVar2);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = 8;
  __Block_object_dispose(&uStack_1b0);
  __Unwind_Resume();
  *(undefined8 *)(puVar13 + 0x28) = *(undefined8 *)(lVar17 + 0x28);
  *(undefined8 *)(lVar17 + 0x28) = 0;
  return;
}



/* Entry: 1069ec2d8; end: 1069ec7e7; -[SCChatInputMediaAccessory _createChatMediaDrawerSnaps:cloudFiles:snapDocs:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ec2d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_1069ec7e8;
  uStack_110 = 0x1069ec7f8;
  uStack_108 = 0;
  puVar2 = puVar1;
  _dispatch_group_create();
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar13 = *plStack_160;
    do {
      lVar14 = 0;
      do {
        if (*plStack_160 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR_PTR_1126bc7b8;
        uVar15 = *(undefined8 *)(lStack_168 + lVar14 * 8);
        uVar3 = *(undefined8 *)(param_1 + _DAT_1127556e0);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar5 = PTR_PTR_1126cfab8;
        _objc_alloc();
        func_0x00010c022560();
        puVar6 = PTR_PTR_1126cfac0;
        _objc_alloc();
        uVar3 = uVar15;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar15;
        func_0x00010c241220(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = 0x15;
        func_0x0001000819a8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = param_1 + _DAT_112755730;
        _objc_loadWeakRetained();
        func_0x00010c017180();
        _objc_release(lVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar3);
        func_0x00010befa120(puVar1);
        _dispatch_group_enter(puVar2);
        func_0x00010c241220(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a0 = 0xc2000000;
        pcStack_198 = FUN_1069ec800;
        puStack_190 = &UNK_110952b00;
        puStack_178 = &uStack_130;
        _objc_retain(puVar6);
        puStack_188 = puVar6;
        puStack_180 = puVar2;
        func_0x00010bddcee0(param_1);
        _objc_release(uVar3);
        _objc_release(uVar15);
        _objc_release(puStack_188);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
      lVar12 = param_3;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(param_3);
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_1069ec87c;
  puStack_1c8 = &UNK_110883360;
  puStack_1b0 = &uStack_130;
  puStack_1c0 = puVar1;
  uStack_1b8 = param_6;
  _objc_retain();
  _objc_retain(param_6);
  func_0x000100bc0718(puVar2,PTR___dispatch_main_q_11034be20,&puStack_1e0);
  _objc_release(puStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  return;
}



/* Entry: 1069ec7e8; end: 1069ec7ff;  */

void FUN_1069ec7e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069ec800; end: 1069ec87b;  */

void FUN_1069ec800(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  func_0x00010c204e80(*(undefined8 *)(param_1 + 0x20));
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069ec87c; end: 1069ec8a7;  */

void FUN_1069ec87c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069ec898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001069ec8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1069ec8a8; end: 1069ece67; -[SCChatInputMediaAccessory _chatMediaSnapMetadataFromGallerySnap:snapDetail:snapDoc:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ec8a8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c4918;
  _objc_opt_new();
  puVar2 = param_4;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar3 == (undefined *)0x0) {
    uVar10 = param_5;
    func_0x00010c08fb40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ea0();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar10);
  }
  else {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar10 = param_5;
  func_0x000107e63ed0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010bf51e00();
  _objc_release(uVar10);
  puVar4 = PTR_PTR_1126b2390;
  uVar10 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010c0e0160(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010c0ef4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar10);
  puVar2 = puVar4;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x00010bf4bc60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = puVar4;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x00010bf4bc60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bbfa0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar3 = puVar4;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5c10;
  _objc_opt_class(PTR_PTR_1126b5c10);
  puVar8 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar8 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1069ece68;
  puStack_98 = &UNK_11084a9e8;
  _objc_retain(puVar2);
  puStack_90 = puVar2;
  _objc_retain(puVar1);
  puStack_88 = puVar1;
  _objc_retain(param_6);
  ppuVar9 = &puStack_b0;
  uStack_80 = param_6;
  _objc_retainBlock();
  puVar3 = puVar2;
  func_0x00010bfd95a0();
  if ((int)puVar3 != 0) {
    puVar3 = puVar2;
    func_0x00010c0d3a00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c277e80();
    _objc_release(puVar3);
    if (puVar8 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bfd5ba0();
      _objc_release(puVar3);
      if ((int)puVar8 == 0) {
        puVar3 = puVar2;
        func_0x00010c0d3a00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c277e80();
        _objc_release(puVar3);
        func_0x00010c1ca400(puVar2);
        _objc_initWeak(auStack_b8,param_1);
        uVar10 = *(undefined8 *)(param_1 + _DAT_11275577c);
        _objc_copyWeak(auStack_c8,auStack_b8);
        _objc_retain(param_3);
        _objc_retain(param_6);
        puStack_c0 = puVar8;
        _objc_retain(puVar2);
        func_0x00010c0f7fc0(uVar10);
        _objc_release(puVar2);
        _objc_release(param_6);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_c8);
        _objc_destroyWeak(auStack_b8);
      }
      else if (ppuVar9 != (undefined **)0x0) {
        (*(code *)ppuVar9[2])(ppuVar9);
      }
      goto LAB_1069ecce0;
    }
  }
  (*(code *)ppuVar9[2])(ppuVar9);
LAB_1069ecce0:
  _objc_release(ppuVar9);
  _objc_release(uStack_80);
  _objc_release(puStack_88);
  _objc_release(puStack_90);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069ece68; end: 1069ed043;  */

void FUN_1069ece68(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_alloc_init(PTR_PTR_1126b2378);
    func_0x00010c21b4e0();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aafe0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf21f60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar5,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1069ed044; end: 1069ed0ef;  */

void FUN_1069ed044(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3a00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218f80();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3a00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182620();
    _objc_release(uVar1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069ed0f0; end: 1069ed5f7; -[SCChatInputMediaAccessory _presentPreviewForImage:phAsset:metadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ed0f0(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126afee0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180();
  _objc_release(puVar2);
  func_0x00010c1c5440(puVar1);
  func_0x00010c1c4ca0(puVar1);
  func_0x00010c23d0a0(param_5);
  dVar10 = param_1;
  func_0x00010c14e120(param_5);
  func_0x00010b690ad8(param_1,param_2,dVar10);
  func_0x00010c1c5240(puVar1);
  func_0x00010c0c6700(puVar1);
  dVar10 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar10 = INFINITY;
    }
    else {
      dVar10 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar10,puVar1);
  func_0x00010c1a1640(puVar1);
  func_0x00010c2056c0(puVar1);
  func_0x00010c204fa0(puVar1);
  puVar2 = PTR_PTR_1126cbf60;
  puVar3 = PTR_PTR_1126cbf68;
  func_0x00010bf8b640(PTR_PTR_1126cbf68);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010be3c1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010be3c1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb4000(param_3);
  func_0x00010c252940();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ce0(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126b5fa8;
  _objc_alloc_init(PTR_PTR_1126b5fa8);
  func_0x00010c205d00(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2440e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a7a0();
  _objc_release(puVar2);
  lVar4 = param_7;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar2 = PTR_PTR_1126b0820;
    _objc_opt_new(PTR_PTR_1126b0820);
    lVar4 = param_7;
    func_0x00010c094540(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar3 = PTR_PTR_1126b13a0;
    _objc_opt_new(PTR_PTR_1126b13a0);
    puVar6 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2620(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c2b2680(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be380(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  uVar7 = *(undefined8 *)(param_3 + _DAT_11275574c);
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar2 = PTR_PTR_1126affc0;
  func_0x00010c27eee0(PTR_PTR_1126affc0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf8cb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_initWeak(&uStack_a0,param_3);
  param_3 = param_3 + _DAT_1127556e4;
  _objc_loadWeakRetained(param_3);
  puVar9 = &uStack_a0;
  _objc_copyWeak(auStack_a8,puVar9);
  _objc_retain(puVar1);
  _objc_retain(uVar8);
  func_0x00010c131e80(param_3);
  _objc_release(param_3);
  _objc_release(uVar8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(&uStack_a0);
  _objc_release(uVar8);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(&uStack_a0);
  __Unwind_Resume();
  _objc_retain(puVar9);
  param_5 = param_5 + 0x30;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    func_0x00010be47fe0(param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1069ed5f8; end: 1069ed653;  */

void FUN_1069ed5f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be47fe0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069ed654; end: 1069ed883; -[SCChatInputMediaAccessory _launchPreviewScopeForImage:previewConfiguration:snapDocEditor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ed654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c1eb2c0(param_3);
  func_0x00010c1eb140(param_4);
  lVar1 = param_1 + _DAT_1127556e4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c074920();
  func_0x00010c1a0f40(param_4);
  _objc_release(lVar1);
  func_0x00010c243400(param_4);
  func_0x00010c0c6c20(param_4);
  lVar1 = param_1;
  func_0x00010be1f160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(param_4);
  _objc_release(lVar1);
  func_0x00010c1f5e00(param_4);
  func_0x00010c1bacc0(param_4);
  func_0x00010bf42760(param_4);
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0311a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112755704);
  func_0x00010bf22c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0d120(param_1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069ed884; end: 1069ed8d3;  */

void FUN_1069ed884(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069ed8d4; end: 1069ed8d7;  */

void FUN_1069ed8d4(void)

{
  return;
}



/* Entry: 1069ed8d8; end: 1069edf33; -[SCChatInputMediaAccessory presentPreviewForVideo:phAsset:metadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ed8d8(double param_1,double param_2,long param_3,undefined1 *param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **unaff_x24;
  double dVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c29b240(PTR_PTR_1126b0010);
  if ((param_1 != 0.0) && (param_2 != 0.0)) {
    puVar1 = PTR_PTR_1126afee0;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004180();
    _objc_release(puVar2);
    func_0x00010c1c5440(puVar1);
    func_0x00010c1c4ca0(puVar1);
    func_0x00010c1c5240(puVar1);
    func_0x00010c0c6700(puVar1);
    dVar10 = 0.0;
    if (param_1 != 0.0) {
      if (param_2 == 0.0) {
        dVar10 = INFINITY;
      }
      else {
        dVar10 = param_1 / param_2;
      }
    }
    func_0x00010c1c40c0(dVar10,puVar1);
    puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + _DAT_1127556f4);
    func_0x00010c1104a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c29aec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c16c080(puVar1);
    func_0x00010c221ca0(puVar1);
    func_0x00010c2056c0(puVar1);
    func_0x00010c204fa0(puVar1);
    puVar2 = PTR_PTR_1126cbf60;
    puVar6 = PTR_PTR_1126cbf68;
    func_0x00010bf8b640(PTR_PTR_1126cbf68);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010be3c1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010be3c1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb4000(param_3);
    func_0x00010c252940();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178ce0(puVar1);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
    puVar2 = PTR_PTR_1126b5fa8;
    _objc_alloc_init(PTR_PTR_1126b5fa8);
    func_0x00010c205d00(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c2440e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a7a0();
    _objc_release(puVar2);
    lVar7 = param_7;
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0946a0();
    _objc_release(lVar7);
    if (lVar8 != 0) {
      puVar6 = PTR_PTR_1126b0820;
      _objc_opt_new(PTR_PTR_1126b0820);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar7 = param_7;
      func_0x00010c0664c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c094680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296de0();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(lVar8);
      _objc_release(lVar7);
      puVar2 = PTR_PTR_1126b13a0;
      _objc_opt_new(PTR_PTR_1126b13a0);
      puVar9 = puVar6;
      func_0x00010bf21f60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2620(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010c2b2680(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010bf21f60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be380(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar2);
      _objc_release(puVar6);
    }
    lVar7 = param_7;
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0d3a20();
    _objc_release(lVar7);
    puVar2 = PTR_PTR_1126b0008;
    if (lVar8 != 0) {
      lVar7 = param_7;
      func_0x00010c0664c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d3a20();
      func_0x00010c0d3780(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16f3c0(puVar1);
      _objc_release(puVar2);
      _objc_release(lVar7);
    }
    uVar4 = *(undefined8 *)(param_3 + _DAT_11275574c);
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126affc0;
    func_0x00010c29a0a0(PTR_PTR_1126affc0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf8cb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_initWeak(auStack_88,param_3);
    param_3 = param_3 + _DAT_1127556e4;
    _objc_loadWeakRetained(param_3);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1069edf34;
    puStack_a8 = &UNK_110952b90;
    unaff_x24 = &puStack_c0;
    param_4 = auStack_88;
    _objc_copyWeak(auStack_90,param_4);
    _objc_retain(puVar1);
    puStack_a0 = puVar1;
    _objc_retain(uVar5);
    uStack_98 = uVar5;
    func_0x00010c131e80(param_3);
    _objc_release(param_3);
    _objc_release(uStack_98);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 6);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(param_4);
  param_5 = param_5 + 0x30;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    func_0x00010be48000(param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069edf34; end: 1069edf8f;  */

void FUN_1069edf34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be48000(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069edf90; end: 1069ee1bf; -[SCChatInputMediaAccessory _launchPreviewScopeForVideo:previewConfiguration:snapDocEditor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069edf90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c1eb2c0(param_3);
  func_0x00010c1eb140(param_4);
  lVar1 = param_1 + _DAT_1127556e4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c074920();
  func_0x00010c1a0f40(param_4);
  _objc_release(lVar1);
  func_0x00010c243400(param_4);
  func_0x00010c0c6c20(param_4);
  lVar1 = param_1;
  func_0x00010be1f160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(param_4);
  _objc_release(lVar1);
  func_0x00010c1f5e00(param_4);
  func_0x00010c1bacc0(param_4);
  func_0x00010bf42760(param_4);
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0311a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112755704);
  func_0x00010bf22c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0d120(param_1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069ee1c0; end: 1069ee20f;  */

void FUN_1069ee1c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069ee210; end: 1069ee213;  */

void FUN_1069ee210(void)

{
  return;
}



/* Entry: 1069ee214; end: 1069ee26b; -[SCChatInputMediaAccessory _exposePreviewScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ee214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112755700;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069ee26c; end: 1069ee2f7; -[SCChatInputMediaAccessory _shouldHideCaptionForText:] */

bool FUN_1069ee26c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010c2a4be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c25d0a0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c08fa60(lVar2);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return lVar3 == 0;
}



/* Entry: 1069ee2f8; end: 1069ee62f; -[SCChatInputMediaAccessory presentPreviewForVideoMediaIfNeccessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ee2f8(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010be41d60();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf8b160(param_4);
    dVar11 = param_1;
    func_0x00010be07000(param_2);
    if (param_1 <= dVar11) {
      puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010c0fa940();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar2 != (undefined *)0x0) && (lVar3 != 0)) {
        puVar4 = PTR_PTR_1126c3290;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        lVar10 = (long)_DAT_1127557ac;
        uVar8 = *(undefined8 *)(param_2 + lVar10);
        *(undefined **)(param_2 + lVar10) = puVar4;
        _objc_release(uVar8);
        func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar10));
        uVar1 = param_2;
        func_0x00010c29bf00(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(uVar1);
        puVar4 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_1069ee630;
        puStack_88 = &UNK_1108471b0;
        uStack_80 = param_2;
        func_0x00010c0bbfc0(*(undefined8 *)(param_2 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126c3268;
        _objc_alloc(PTR_PTR_1126c3268);
        func_0x00010c01dbe0();
        uVar6 = *(undefined8 *)(param_2 + (long)_DAT_1127556f8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010bf165a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_a8,param_2);
        puStack_d0 = puVar4;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_1069ee6b8;
        puStack_b8 = &UNK_1108dd2b8;
        _objc_copyWeak(auStack_b0,auStack_a8);
        uStack_f8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
        uStack_100 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
        uStack_e8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
        uStack_f0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
        uStack_d8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
        uStack_e0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
        uVar7 = uVar6;
        func_0x00010bf9d3e0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = (long)_DAT_1127557b0;
        uVar9 = *(undefined8 *)(param_2 + lVar10);
        *(undefined8 *)(param_2 + lVar10) = uVar7;
        _objc_release(uVar9);
        uVar7 = *(undefined8 *)(param_2 + lVar10);
        func_0x00010bfbc3e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_108,auStack_a8);
        _objc_retain(lVar3);
        func_0x00010c297260(uVar7);
        _objc_release(uVar7);
        _objc_release(lVar3);
        _objc_destroyWeak(auStack_108);
        _objc_destroyWeak(auStack_b0);
        _objc_destroyWeak(auStack_a8);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(puVar5);
      }
      _objc_release(lVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1069ee630; end: 1069ee6b7;  */

void FUN_1069ee630(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069ee6b8; end: 1069ee757;  */

void FUN_1069ee6b8(undefined4 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1069ee758;
  puStack_48 = &UNK_11085ae18;
  _objc_copyWeak(auStack_40,param_2 + 0x20);
  uStack_38 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1069ee758; end: 1069ee79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ee758(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1e46a0(*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + _DAT_1127557ac),
                        param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069ee7a0; end: 1069ee8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ee7a0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = (long)_DAT_1127557b0;
    uVar2 = *(undefined8 *)(lVar1 + lVar4);
    func_0x00010bf8dc60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + lVar4);
    *(undefined8 *)(lVar1 + lVar4) = 0;
    _objc_release(uVar3);
    func_0x00010be8cf40(lVar1);
    if (param_2 != 0) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1069ee8bc;
      puStack_68 = &UNK_11084c4a0;
      lStack_60 = lVar1;
      _objc_retain(param_2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lStack_58 = param_2;
      _objc_retain(uVar3);
      uStack_50 = uVar3;
      _objc_retain(uVar2);
      uStack_48 = uVar2;
      func_0x000100162d98("APPSTORE",&puStack_80);
      _objc_release(uStack_48);
      _objc_release(uStack_50);
      _objc_release(lStack_58);
    }
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1069ee8bc; end: 1069ee8cb;  */

void FUN_1069ee8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentPreviewForVideo_phAsset_m_1126210f0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1069ee8cc; end: 1069ee8cf; -[SCChatInputMediaAccessory didCancelFromPreview:] */

void FUN_1069ee8cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be031b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreviewIfPresented_11255e608);
  return;
}



/* Entry: 1069ee8d0; end: 1069ee8d3; -[SCChatInputMediaAccessory didSendSnapsAndPostToStory:storyTypes:] */

void FUN_1069ee8d0(void)

{
  return;
}



/* Entry: 1069ee8d4; end: 1069ee94b; -[SCChatInputMediaAccessory didSendChatMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ee8d4(long param_1,undefined8 param_2)

{
  *(long *)(param_1 + _DAT_112755788) = *(long *)(param_1 + _DAT_112755788) + 1;
  func_0x00010be031a0();
  func_0x00010bedf9c0(param_1);
  func_0x00010bde0680(param_1);
  func_0x00010be941a0(param_1,param_2,2);
  func_0x00010bde0900(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069ee94c; end: 1069eea3f; -[SCChatInputMediaAccessory _dismissPreviewIfPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ee94c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb710;
  _objc_opt_class(PTR_PTR_1126cb710);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c10f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84280(PTR_PTR_1126cb718);
    lVar6 = (long)_DAT_112755700;
    lVar4 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      lVar6 = param_1 + lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1069eea40; end: 1069eea7b; -[SCChatInputMediaAccessory didPressAllow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eea40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755728);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e99c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069eea7c; end: 1069eed9b; -[SCChatInputMediaAccessory _selectDrawerItem:tabController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eea7c(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_4);
  lVar8 = (long)_DAT_1127556e8;
  uVar7 = *(undefined8 *)(param_2 + lVar8);
  _objc_retain(param_5);
  func_0x00010befa120(uVar7);
  lVar2 = param_2;
  func_0x00010be3ed80();
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if ((int)lVar2 == 0) {
    func_0x00010bf529e0(*(undefined8 *)(param_2 + lVar8));
    func_0x00010bfed020(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067120(*(undefined8 *)(param_2 + _DAT_112755798));
    _objc_release(puVar3);
  }
  else {
    func_0x00010bdc69c0(param_2);
    func_0x00010c1398e0(*(undefined8 *)(param_2 + _DAT_112755798));
  }
  func_0x00010bedf9c0(param_2);
  uVar7 = *(undefined8 *)(param_2 + _DAT_112755790);
  func_0x00010bf529e0(*(undefined8 *)(param_2 + lVar8));
  func_0x00010c289ac0(uVar7);
  lVar2 = param_2;
  func_0x00010be9dde0();
  if (lVar2 == 1) {
    lVar2 = param_2;
    func_0x00010c065880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27a900();
    _objc_release(lVar2);
    func_0x00010c1f7b20(*(undefined8 *)(param_2 + _DAT_112755794));
  }
  lVar2 = param_2;
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c084c40();
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126cfa58;
  if (lVar8 == 1) {
    func_0x00010bf030e0(*(undefined8 *)(param_2 + _DAT_112755778));
    if ((*(byte *)(param_2 + _DAT_1127557b4) & 1) == 0) {
      *(undefined1 *)(param_2 + _DAT_1127557b4) = 1;
    }
  }
  else if (lVar8 == 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar3);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    func_0x00010bf030e0(*(undefined8 *)(param_2 + _DAT_112755774));
    puVar3 = PTR_PTR_1126cf9e0;
    _objc_retain(uVar1);
    _objc_opt_class(puVar3);
    uVar5 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar4 = uVar1;
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    if (uVar4 != 0) {
      func_0x00010bf8b160(param_4);
      param_1 = param_1 + *(double *)(param_2 + _DAT_1127557a0);
      *(double *)(param_2 + _DAT_1127557a0) = param_1;
      func_0x00010bfad040(param_4);
      param_1 = param_1 + *(double *)(param_2 + _DAT_11275579c);
      *(double *)(param_2 + _DAT_11275579c) = param_1;
    }
    func_0x00010c0e63e0(param_2);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  lVar2 = param_2;
  func_0x00010c065880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar6 = uVar7;
  func_0x00010c0f36c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282100(lVar2);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(lVar2);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11275578c);
  func_0x00010bdd5560(param_2);
  func_0x00010c28ab80(0,param_1,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069eed9c; end: 1069ef073; -[SCChatInputMediaAccessory _deselectDrawerItem:tabController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eed9c(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_4);
  lVar9 = (long)_DAT_1127556e8;
  lVar1 = *(long *)(param_2 + lVar9);
  func_0x00010bfecde0();
  if (lVar1 != 0x7fffffffffffffff) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(ulong *)(param_2 + lVar9);
    func_0x00010bf529e0();
    if (lVar1 + 1U < uVar3) {
      uVar3 = *(ulong *)(param_2 + lVar9);
      func_0x00010bf529e0();
      if (lVar1 + 1U < uVar3) {
        do {
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_2 + lVar9);
          func_0x00010c0dfd40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar5;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar2);
          _objc_release(uVar8);
          _objc_release(uVar5);
          _objc_release(puVar4);
          uVar6 = *(ulong *)(param_2 + lVar9);
          func_0x00010bf529e0();
          uVar3 = lVar1 + 2;
          lVar1 = lVar1 + 1;
        } while (uVar3 < uVar6);
      }
    }
    func_0x00010c12d3c0(*(undefined8 *)(param_2 + lVar9));
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010be3ed80();
    if ((int)uVar3 == 0) {
      func_0x00010c12eae0(*(undefined8 *)(param_2 + (long)_DAT_112755798));
    }
    else {
      func_0x00010be8bea0(param_2);
      func_0x00010c1398e0(*(undefined8 *)(param_2 + (long)_DAT_112755798));
    }
    func_0x00010bedf9c0(param_2);
    uVar8 = *(undefined8 *)(param_2 + (long)_DAT_112755790);
    func_0x00010bf529e0(*(undefined8 *)(param_2 + lVar9));
    func_0x00010c289ac0(uVar8);
    uVar3 = param_2;
    func_0x00010bdf72c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010be439e0(param_2);
    func_0x00010bf02d80(uVar3);
    _objc_release(puVar7);
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126cf9e0;
    _objc_retain(param_4);
    _objc_opt_class(puVar7);
    uVar6 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar7);
    uVar3 = param_4;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_4);
    if (uVar3 != 0) {
      func_0x00010bf8b160(param_4);
      param_1 = *(double *)(param_2 + (long)_DAT_1127557a0) - param_1;
      *(double *)(param_2 + (long)_DAT_1127557a0) = param_1;
      func_0x00010bfad040(param_4);
      *(double *)(param_2 + (long)_DAT_11275579c) =
           *(double *)(param_2 + (long)_DAT_11275579c) - param_1;
    }
    uVar6 = param_2;
    func_0x00010be439e0();
    if ((uVar6 & 1) == 0) {
      func_0x00010be941a0(param_2);
    }
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069ef074; end: 1069ef07b; -[SCChatInputMediaAccessory drawerType] */

undefined8 FUN_1069ef074(void)

{
  return 0;
}



/* Entry: 1069ef07c; end: 1069ef08b; -[SCChatInputMediaAccessory sentItemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069ef07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112755788);
}



/* Entry: 1069ef08c; end: 1069ef093; -[SCChatInputMediaAccessory openedWithSearch] */

undefined8 FUN_1069ef08c(void)

{
  return 0;
}



/* Entry: 1069ef094; end: 1069ef09b; -[SCChatInputMediaAccessory suggestionSource] */

undefined8 FUN_1069ef094(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 1069ef09c; end: 1069ef153; -[SCChatInputMediaAccessory onSelectMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef09c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127556ec);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010c065880(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf89e20();
  uVar3 = param_3;
  func_0x00010c247720(param_3);
  _objc_release(param_3);
  func_0x00010c0ae9e0(uVar4,param_2,uVar1,lVar2,uVar3,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1069ef154; end: 1069ef20b; -[SCChatInputMediaAccessory onEditMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127556ec);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010c065880(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf89e20();
  uVar3 = param_3;
  func_0x00010c247720(param_3);
  _objc_release(param_3);
  func_0x00010c0ae9e0(uVar4,param_2,uVar1,lVar2,uVar3,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1069ef20c; end: 1069ef253; -[SCChatInputMediaAccessory progressOverlayViewDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef20c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127557b0);
  func_0x00010bf2f5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeProgressOverlayView_112580d70);
  return;
}



/* Entry: 1069ef254; end: 1069ef263; -[SCChatInputMediaAccessory _getFilterDataProviderWithSnapSource:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc58d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755724),
             PTR_s_getFilterDataProviderWithSnapSou_1125cefd8);
  return;
}



/* Entry: 1069ef264; end: 1069ef2f3; -[SCChatInputMediaAccessory _bottomOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1069ef264(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_112755798));
  _CGRectGetHeight();
  dVar1 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_112755790));
  _CGRectGetHeight();
  dVar3 = dVar1;
  if (dVar1 <= param_1) {
    dVar3 = param_1;
  }
  func_0x00010c0c3420(param_2);
  dVar2 = dVar1;
  func_0x00010c065880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89dc0();
  _objc_release(param_2);
  return dVar3 + (dVar1 - dVar2);
}



/* Entry: 1069ef2f4; end: 1069ef37f; -[SCChatInputMediaAccessory _currentTabController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef2f4(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar4 = param_1 * 0.5;
  _objc_release(puVar2);
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + _DAT_112755794));
  lVar1 = 0x9c;
  if (dVar4 <= param_1) {
    lVar1 = 0xa0;
  }
  uVar3 = *(undefined8 *)(param_2 + *(int *)(&DAT_1127556d8 + lVar1));
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1069ef380; end: 1069ef3a7; -[SCChatInputMediaAccessory _isSelecting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1069ef380(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127556e8);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1069ef3a8; end: 1069ef67f; -[SCChatInputMediaAccessory _updatedCameraRollSelectionWithDrawerItemList:] */

/* WARNING: Possible PIC construction at 0x0001069ef4f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069ef4fc) */
/* WARNING: Removing unreachable block (ram,0x0001069ef544) */
/* WARNING: Removing unreachable block (ram,0x0001069ef550) */
/* WARNING: Removing unreachable block (ram,0x0001069ef554) */
/* WARNING: Removing unreachable block (ram,0x0001069ef564) */
/* WARNING: Removing unreachable block (ram,0x0001069ef56c) */
/* WARNING: Removing unreachable block (ram,0x0001069ef5c8) */
/* WARNING: Removing unreachable block (ram,0x0001069ef590) */
/* WARNING: Removing unreachable block (ram,0x0001069ef5cc) */
/* WARNING: Removing unreachable block (ram,0x0001069ef5d8) */
/* WARNING: Removing unreachable block (ram,0x0001069ef5f8) */
/* WARNING: Removing unreachable block (ram,0x0001069ef614) */
/* WARNING: Removing unreachable block (ram,0x0001069ef67c) */
/* WARNING: Removing unreachable block (ram,0x0001069ef658) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef3a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar7 = *(long *)(lVar6 * 8);
      lVar4 = lVar7;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        func_0x00010c0844e0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(lVar7);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127556e8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1069ef680; end: 1069ef68f; -[SCChatInputMediaAccessory _selectedCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127556e8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1069ef690; end: 1069ef773; -[SCChatInputMediaAccessory _removeProgressOverlayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef690(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1069ec7e8;
  uStack_40 = 0x1069ec7f8;
  lVar3 = (long)_DAT_1127557ac;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puStack_58 = &uStack_60;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  uStack_38 = uVar2;
  _objc_release(uVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1069ef774;
  puStack_70 = &UNK_110847658;
  puStack_68 = &uStack_60;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 1069ef774; end: 1069ef7af;  */

void FUN_1069ef774(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c12c960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069ef7b0; end: 1069ef877; -[SCChatInputMediaAccessory _topMargin] */

double FUN_1069ef7b0(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double in_d3;
  double dVar7;
  
  lVar3 = param_1;
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  dVar7 = 0.0;
  if (lVar4 != 0) {
    lVar5 = param_1;
    func_0x00010c065880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar7 = in_d3;
      _objc_release(param_1);
      func_0x00010bfb68e0(lVar4);
      dVar6 = (double)NEON_fminnm(in_d3,dVar7);
      bVar1 = false;
      bVar2 = false;
      if (in_d3 < dVar7) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar6)) {
          bVar1 = dVar6 == 0.0;
          bVar2 = 0.0 <= dVar6;
        }
      }
      dVar7 = dVar7 - in_d3;
      if (!bVar2 || bVar1) {
        dVar7 = 0.0;
      }
    }
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  return dVar7;
}



/* Entry: 1069ef878; end: 1069ef8bf; -[SCChatInputMediaAccessory _inputText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef878(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127557b8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1069ef8c0; end: 1069ef8f3; -[SCChatInputMediaAccessory _clearInputText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ef8c0(long param_1)

{
  param_1 = param_1 + _DAT_1127557b8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3c380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


